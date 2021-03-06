#include <gtk/gtk.h>

/* Login prompt text */
static const char *user_text = "Username";
/* Password prompt text */
static const char *pass_text = "Password";
/* Session name */
static const char *session = "xfce";
/* GTK UI CSS */
static const gchar *style =
"window {"
    "background-color: #08090a;"
    "background-position: center;"
    "background-size: cover;"
"}"
"window * {"
    "font: 16px \"iA Writer Mono S\";"
"}"
"#prompt_box {"
    "background-color: #08090a;"
    "padding: 30px 30px 30px 30px;"
    "margin: 50px 650px 50px 650px;"
    "box-shadow:  6px 6px 5px #050506, -6px -6px 5px #0b0d0e;"
    "border-bottom: 0;"
    "border-radius: 0 0 0 0;"
"}"
"label {"
    "color: #ebdbb2;"
    "font-size: 16px;"
"}"
"entry {"
    "color: #ebdbb2;"
    "background-color: #08090a;"
    "box-shadow: inset 6px 6px 5px #050506, inset -6px -6px 5px #0b0d0e;"
    "padding: 15px;"
    "caret-color: #d79921;"
"}"
"#message_label {"
    "color: #000000;"
    "font-weight: bold;"
"}";
/* GTK UI XML*/
static const gchar *ui =
"<?xml version='1.0' encoding='UTF-8'?>"
"<interface>"
  "<requires lib='gtk+' version='3.20'/>"
  "<object class='GtkWindow' id='login_window'>"
    "<property name='name'>login_window</property>"
    "<property name='can_focus'>False</property>"
    "<property name='resizable'>False</property>"
    "<property name='accept_focus'>False</property>"
    "<property name='decorated'>False</property>"
    "<child>"
      "<placeholder/>"
    "</child>"
    "<child>"
      "<object class='GtkBox' id='login_box'>"
        "<property name='name'>login_box</property>"
        "<property name='visible'>True</property>"
        "<property name='can_focus'>False</property>"
        "<property name='valign'>center</property>"
        "<property name='vexpand'>True</property>"
        "<property name='orientation'>vertical</property>"
        "<child>"
          "<object class='GtkBox' id='prompt_box'>"
            "<property name='name'>prompt_box</property>"
            "<property name='visible'>True</property>"
            "<property name='can_focus'>False</property>"
            "<property name='spacing'>5</property>"
            "<property name='homogeneous'>True</property>"
            "<property name='orientation'>vertical</property>"
            "<child>"
              "<object class='GtkLabel' id='prompt_label'>"
                "<property name='name'>prompt_label</property>"
                "<property name='visible'>True</property>"
                "<property name='can_focus'>False</property>"
                "<property name='halign'>start</property>"
              "</object>"
              "<packing>"
                "<property name='expand'>False</property>"
                "<property name='fill'>True</property>"
                "<property name='position'>0</property>"
              "</packing>"
            "</child>"
            "<child>"
              "<object class='GtkEntry' id='prompt_entry'>"
                "<property name='name'>prompt_entry</property>"
                "<property name='visible'>True</property>"
                "<property name='can_focus'>True</property>"
                "<property name='halign'>start</property>"
                "<property name='xalign'>0</property>"
                "<property name='has_frame'>False</property>"
                "<property name='max_width_chars'>15</property>"
                "<property name='primary_icon_activatable'>False</property>"
                "<property name='secondary_icon_activatable'>False</property>"
                "<signal name='activate' handler='login_cb' swapped='no'/>"
              "</object>"
              "<packing>"
                "<property name='expand'>False</property>"
                "<property name='fill'>True</property>"
                "<property name='position'>1</property>"
              "</packing>"
            "</child>"
          "</object>"
          "<packing>"
            "<property name='expand'>False</property>"
            "<property name='fill'>True</property>"
            "<property name='position'>0</property>"
          "</packing>"
        "</child>"
        "<child>"
          "<object class='GtkLabel' id='message_label'>"
            "<property name='name'>message_label</property>"
            "<property name='visible'>True</property>"
            "<property name='can_focus'>False</property>"
            "<property name='halign'>center</property>"
            "<property name='width_chars'>25</property>"
            "<property name='max_width_chars'>50</property>"
          "</object>"
          "<packing>"
            "<property name='expand'>False</property>"
            "<property name='fill'>True</property>"
            "<property name='position'>1</property>"
          "</packing>"
        "</child>"
      "</object>"
    "</child>"
  "</object>"
"</interface>";
