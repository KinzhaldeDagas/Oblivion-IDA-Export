struct hardware_msg_data
{
lparam_t info;
data_size_t size;
int __pad;
unsigned int hw_id;
unsigned int flags;
hw_msg_source source;
rawinput rawinput;
};
