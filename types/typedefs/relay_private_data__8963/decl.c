struct relay_private_data
{
HMODULE module;
unsigned int base;
char dllname[40];
relay_entry_point entry_points[1];
};
