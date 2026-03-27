0x6F7130: push    esi
0x6F7131: mov     esi, ecx
0x6F7133: call    ??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ; std::streambuf::~streambuf<char,std::char_traits<char>>(void)
0x6F7138: test    [esp+4+arg_0], 1
0x6F713D: jz      short loc_6F7148
0x6F713F: push    esi
0x6F7140: call    FormHeapFree
0x6F7145: add     esp, 4
0x6F7148: mov     eax, esi
0x6F714A: pop     esi
0x6F714B: retn    4
