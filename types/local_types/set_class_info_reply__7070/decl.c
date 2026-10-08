struct set_class_info_reply
{
reply_header __header;
atom_t old_atom;
atom_t base_atom;
mod_handle_t old_instance;
lparam_t old_extra_value;
unsigned int old_style;
int old_extra;
int old_win_extra;
char __pad_44[4];
};
