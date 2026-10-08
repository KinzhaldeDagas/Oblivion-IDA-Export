struct create_class_request
{
request_header __header;
int local;
atom_t atom;
unsigned int style;
mod_handle_t instance;
int extra;
int win_extra;
client_ptr_t client_ptr;
data_size_t name_offset;
char __pad_52[4];
};
