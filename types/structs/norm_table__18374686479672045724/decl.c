struct norm_table
{
WCHAR_0 name[13];
USHORT checksum[3];
USHORT version[4];
USHORT form;
USHORT len_factor;
USHORT unknown1;
USHORT decomp_size;
USHORT comp_size;
USHORT unknown2;
USHORT classes;
USHORT props_level1;
USHORT props_level2;
USHORT decomp_hash;
USHORT decomp_map;
USHORT decomp_seq;
USHORT comp_hash;
USHORT comp_seq;
};
