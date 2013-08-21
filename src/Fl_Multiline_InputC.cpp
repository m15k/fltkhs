#include "Fl_Multiline_InputC.h"

#ifdef __cplusplus
EXPORT {
#endif
  /* Inherited from Fl_Widget */
  FL_EXPORT_C(int,Fl_Multiline_Input_handle)(fl_Multiline_Input self, int event){
    return (static_cast<Fl_Multiline_Input*>(self))->handle(event);
  }
  FL_EXPORT_C(fl_Group,Fl_Multiline_Input_parent)(fl_Multiline_Input multiline_input){
    return (fl_Group) (static_cast<Fl_Multiline_Input*>(multiline_input))->parent();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_parent)(fl_Multiline_Input multiline_input,fl_Group grp){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->parent((static_cast<Fl_Group*>(grp)));
  }
  FL_EXPORT_C(uchar,Fl_Multiline_Input_type)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->type();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_type)(fl_Multiline_Input multiline_input,uchar t){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->type(t);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_x)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->x();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_y)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->y();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_w)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->w();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_h)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->h();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_align)(fl_Multiline_Input multiline_input, Fl_Align alignment){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->align(alignment);
  }
  FL_EXPORT_C(Fl_Align,Fl_Multiline_Input_align)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->align();
  }
  FL_EXPORT_C(Fl_Boxtype,Fl_Multiline_Input_box)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->box();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_box)(fl_Multiline_Input multiline_input,Fl_Boxtype new_box){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->box((static_cast<Fl_Boxtype>(new_box)));
  }
  FL_EXPORT_C(Fl_Color,Fl_Multiline_Input_color)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->color();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_color)(fl_Multiline_Input multiline_input,Fl_Color bg){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->color(bg);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_color_with_bg_sel)(fl_Multiline_Input multiline_input,Fl_Color bg,Fl_Color a){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->color(bg,a);
  }
  FL_EXPORT_C(Fl_Color,Fl_Multiline_Input_selection_color)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->selection_color();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_selection_color)(fl_Multiline_Input multiline_input,Fl_Color a){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->selection_color(a);
  }
  FL_EXPORT_C(const char*,Fl_Multiline_Input_label)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->label();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_copy_label)(fl_Multiline_Input multiline_input,const char* new_label){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->copy_label(new_label);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_label)(fl_Multiline_Input multiline_input,const char* text){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->label(text);
  }
  FL_EXPORT_C(Fl_Labeltype,Fl_Multiline_Input_labeltype)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->labeltype();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_labeltype)(fl_Multiline_Input multiline_input,Fl_Labeltype a){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->labeltype(a);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_labelcolor)(fl_Multiline_Input multiline_input,Fl_Color c){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->labelcolor(c);
  }
  FL_EXPORT_C(Fl_Font,Fl_Multiline_Input_labelfont)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->labelfont();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_labelfont)(fl_Multiline_Input multiline_input,Fl_Font c){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->labelfont((static_cast<Fl_Font>(c)));
  }
  FL_EXPORT_C(Fl_Fontsize,Fl_Multiline_Input_labelsize)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->labelsize();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_labelsize)(fl_Multiline_Input multiline_input,Fl_Fontsize pix){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->labelsize((static_cast<Fl_Fontsize>(pix)));
  }
  FL_EXPORT_C(fl_Image,Fl_Multiline_Input_image)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->image();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_image)(fl_Multiline_Input multiline_input,fl_Image pix){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->image((static_cast<Fl_Image*>(pix)));
  }
  FL_EXPORT_C(fl_Image,Fl_Multiline_Input_deimage)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->deimage();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_deimage)(fl_Multiline_Input multiline_input,fl_Image pix){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->deimage((static_cast<Fl_Image*>(pix)));
  }
  FL_EXPORT_C(const char*,Fl_Multiline_Input_tooltip)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->tooltip();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_copy_tooltip)(fl_Multiline_Input multiline_input,const char* text){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->copy_tooltip(text);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_tooltip)(fl_Multiline_Input multiline_input,const char* text){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->tooltip(text);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_callback_with_user_data)(fl_Multiline_Input multiline_input,fl_Callback* cb,void* p){
    Fl_Multiline_Input* castedInput_dow = (static_cast<Fl_Multiline_Input*>(multiline_input));
    new C_to_Fl_Callback(castedInput_dow, cb, p);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_callback)(fl_Multiline_Input multiline_input,fl_Callback* cb){
    Fl_Multiline_Input* castedInput_dow = (static_cast<Fl_Multiline_Input*>(multiline_input));
    new C_to_Fl_Callback(castedInput_dow, cb);
  }
  FL_EXPORT_C(void*,Fl_Multiline_Input_user_data)(fl_Multiline_Input multiline_input){
    C_to_Fl_Callback* stored_cb = (static_cast<C_to_Fl_Callback*>((static_cast<Fl_Multiline_Input*>(multiline_input))->user_data()));
    if(stored_cb){
      return stored_cb->get_user_data();
    }
    else {
      return (static_cast<Fl_Multiline_Input*>(multiline_input))->user_data();
    }
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_user_data)(fl_Multiline_Input multiline_input,void* v){
    C_to_Fl_Callback* stored_cb = (static_cast<C_to_Fl_Callback*>((static_cast<Fl_Multiline_Input*>(multiline_input))->user_data()));
    if (stored_cb) {
      stored_cb->set_user_data(v);
      (static_cast<Fl_Multiline_Input*>(multiline_input))->user_data(stored_cb);
    }
    else {
      (static_cast<Fl_Multiline_Input*>(multiline_input))->user_data(v);
    }
  }
  FL_EXPORT_C(long,Fl_Multiline_Input_argument)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->argument();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_argument)(fl_Multiline_Input multiline_input,long v){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->argument(v);
  }
  FL_EXPORT_C(Fl_When,Fl_Multiline_Input_when)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->when();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_when)(fl_Multiline_Input multiline_input,uchar i){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->when(i);
  }
  FL_EXPORT_C(unsigned int,Fl_Multiline_Input_visible)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->visible();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_visible_r)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->visible_r();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_visible)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->visible();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_visible)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_visible();
  }
  FL_EXPORT_C(unsigned int,Fl_Multiline_Input_active)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->active();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_active_r)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->active_r();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_activate)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->activate();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_deactivate)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->deactivate();
  }
  FL_EXPORT_C(unsigned int,Fl_Multiline_Input_output)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->output();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_output)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->output();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_output)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_output();
  }
  FL_EXPORT_C(unsigned int,Fl_Multiline_Input_takesevents)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->takesevents();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_changed)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->changed();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_changed)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_changed();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_take_focus)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->take_focus();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_visible_focus)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->visible_focus();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_visible_focus)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_visible_focus();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_modify_visible_focus)(fl_Multiline_Input multiline_input,int v){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->visible_focus(v);
  }
  FL_EXPORT_C(unsigned int,Fl_Multiline_Input_visible_focus)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->visible_focus();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_do_callback)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->do_callback();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_do_callback_with_widget_and_user_data)(fl_Multiline_Input multiline_input,fl_Widget w,long arg){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->do_callback((static_cast<Fl_Widget*>(w)),arg);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_do_callback_with_widget_and_default_user_data)(fl_Multiline_Input multiline_input,fl_Widget w){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->do_callback((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_contains)(fl_Multiline_Input multiline_input,fl_Widget w){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->contains((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_inside)(fl_Multiline_Input multiline_input,fl_Widget w){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->inside((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_redraw)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->redraw();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_redraw_label)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->redraw_label();
  }
  FL_EXPORT_C(uchar,Fl_Multiline_Input_damage)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->damage();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_damage_with_bitmask)(fl_Multiline_Input multiline_input,uchar c){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_damage(c);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_clear_damage)(fl_Multiline_Input multiline_input){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->clear_damage();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_damage_with_text)(fl_Multiline_Input multiline_input,uchar c){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->damage(c);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_damage_inside_widget)(fl_Multiline_Input multiline_input,uchar c,int x,int y,int w,int h){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->damage(c,x,y,w,h);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_draw_label)(fl_Multiline_Input multiline_input,int x,int y,int w,int h,Fl_Align alignment){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->draw_label(x,y,w,h,alignment);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_measure_label)(fl_Multiline_Input multiline_input,int* ww,int* hh){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->measure_label(*ww,*hh);
  }

  FL_EXPORT_C(fl_Window,    Fl_Multiline_Input_window)(fl_Multiline_Input multiline_input){
    return (fl_Window) (static_cast<Fl_Multiline_Input*>(multiline_input))->window();
  }
  FL_EXPORT_C(fl_Window,    Fl_Multiline_Input_top_window)(fl_Multiline_Input multiline_input){
    return (fl_Window) (static_cast<Fl_Multiline_Input*>(multiline_input))->top_window();
  }
  FL_EXPORT_C(fl_Window ,   Fl_Multiline_Input_top_window_offset)(fl_Multiline_Input multiline_input, int* xoff, int* yoff){
    return (fl_Window) (static_cast<Fl_Multiline_Input*>(multiline_input))->top_window_offset(*xoff,*yoff);
  }
  FL_EXPORT_C(fl_Group,Fl_Multiline_Input_as_group)(fl_Multiline_Input multiline_input){
    return (fl_Group) (static_cast<Fl_Multiline_Input*>(multiline_input))->as_group();
  }
  FL_EXPORT_C(fl_Gl_Window,Fl_Multiline_Input_as_gl_window)(fl_Multiline_Input multiline_input){
    return (fl_Gl_Window) (static_cast<Fl_Multiline_Input*>(multiline_input))->as_gl_window();
  }
  /* Fl_Multiline_Input specific functions */
  FL_EXPORT_C(fl_Multiline_Input, Fl_Multiline_Input_New_WithLabel)(int x, int y, int w, int h, const char* label) {
    Fl_Multiline_Input* multiline_input = new Fl_Multiline_Input(x,y,w,h,label);
    return (static_cast<fl_Multiline_Input>(multiline_input));
  }
  FL_EXPORT_C(fl_Multiline_Input, Fl_Multiline_Input_New)(int x, int y, int w, int h) {
    Fl_Multiline_Input* multiline_input = new Fl_Multiline_Input(x,y,w,h,0);
    return (static_cast<fl_Multiline_Input>(multiline_input));
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_Destroy)(fl_Multiline_Input multiline_input){
    delete (static_cast<Fl_Multiline_Input*>(multiline_input));
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_resize)(fl_Multiline_Input multiline_input,int X,int Y,int W,int H){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->resize(X,Y,W,H);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_value)(fl_Multiline_Input multiline_input,const char* text){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->value(text);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_value_with_length)(fl_Multiline_Input multiline_input,const char* text,int length){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->value(text,length);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_static_value)(fl_Multiline_Input multiline_input,const char* text){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->static_value(text);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_static_value_with_length)(fl_Multiline_Input multiline_input,const char* text,int length){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->static_value(text,length);
  }
  FL_EXPORT_C(const char*,Fl_Multiline_Input_value)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->value();
  }
  FL_EXPORT_C(Fl_Char,Fl_Multiline_Input_index)(fl_Multiline_Input multiline_input,int i){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->index(i);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_size)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->size();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_size)(fl_Multiline_Input multiline_input,int W,int H){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->size(W,H);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_maximum_size)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->maximum_size();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_maximum_size)(fl_Multiline_Input multiline_input,int m){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->maximum_size(m);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_position)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->position();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_mark)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->mark();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_position_with_cursor_mark)(fl_Multiline_Input multiline_input,int p,int m){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->position(p,m);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_position_n_n)(fl_Multiline_Input multiline_input,int p){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->position(p);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_mark)(fl_Multiline_Input multiline_input,int m){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->mark(m);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_replace)(fl_Multiline_Input multiline_input,int b,int e,const char* text){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->replace(b,e,text);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_replace_with_ilen)(fl_Multiline_Input multiline_input,int b,int e,const char* text,int ilen){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->replace(b,e,text,ilen);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_cut)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->cut();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_cut_bytes)(fl_Multiline_Input multiline_input,int n){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->cut(n);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_cut_range)(fl_Multiline_Input multiline_input,int a,int b){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->cut(a,b);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_insert)(fl_Multiline_Input multiline_input,const char* t){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->insert(t);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_insert_with_length)(fl_Multiline_Input multiline_input,const char* t,int l){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->insert(t,l);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_copy)(fl_Multiline_Input multiline_input,int clipboard){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->copy(clipboard);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_undo)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->undo();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_copy_cuts)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->copy_cuts();
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_shortcut)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->shortcut();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_shortcut)(fl_Multiline_Input multiline_input,int s){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->shortcut(s);
  }
  FL_EXPORT_C(Fl_Font,Fl_Multiline_Input_textfont)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->textfont();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_textfont)(fl_Multiline_Input multiline_input,Fl_Font s){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->textfont(s);
  }
  FL_EXPORT_C(Fl_Fontsize,Fl_Multiline_Input_textsize)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->textsize();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_textsize)(fl_Multiline_Input multiline_input,Fl_Fontsize s){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->textsize(s);
  }
  FL_EXPORT_C(Fl_Color,Fl_Multiline_Input_textcolor)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->textcolor();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_textcolor)(fl_Multiline_Input multiline_input,Fl_Color n){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->textcolor(n);
  }
  FL_EXPORT_C(Fl_Color,Fl_Multiline_Input_cursor_color)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->cursor_color();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_cursor_color)(fl_Multiline_Input multiline_input,Fl_Color n){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->cursor_color(n);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_input_type)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->input_type();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_input_type)(fl_Multiline_Input multiline_input,int t){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->input_type(t);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_readonly)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->readonly();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_readonly)(fl_Multiline_Input multiline_input,int b){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->readonly(b);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_wrap)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->wrap();
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_set_wrap)(fl_Multiline_Input multiline_input,int b){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->wrap(b);
  }
  FL_EXPORT_C(void,Fl_Multiline_Input_tab_nav)(fl_Multiline_Input multiline_input,int val){
    (static_cast<Fl_Multiline_Input*>(multiline_input))->tab_nav(val);
  }
  FL_EXPORT_C(int,Fl_Multiline_Input_set_tab_nav)(fl_Multiline_Input multiline_input){
    return (static_cast<Fl_Multiline_Input*>(multiline_input))->tab_nav();
  }
#ifdef __cplusplus
}
#endif
