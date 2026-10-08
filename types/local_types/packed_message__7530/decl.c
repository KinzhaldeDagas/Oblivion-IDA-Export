struct packed_message
{
packed_structs ps;
int count;
const void *data[4] __offset(OFF64|AUTO);
size_t size[4];
};
