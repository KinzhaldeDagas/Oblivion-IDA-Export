struct graphics_driver
{
list entry;
HMODULE module;
const gdi_dc_funcs *funcs;
};
