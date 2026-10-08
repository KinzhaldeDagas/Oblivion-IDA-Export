struct rsrc_tab
{
WORD align;
__unaligned __declspec(align(1)) ne_typeinfo fontdir_type;
__unaligned __declspec(align(1)) ne_nameinfo fontdir_name;
__unaligned __declspec(align(1)) ne_typeinfo scalable_type;
__unaligned __declspec(align(1)) ne_nameinfo scalable_name;
WORD end_of_rsrc;
BYTE fontdir_res_name[8];
};
