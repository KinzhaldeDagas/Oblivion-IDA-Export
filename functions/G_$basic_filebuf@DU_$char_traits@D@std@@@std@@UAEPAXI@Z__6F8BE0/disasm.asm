0x6F8BE0: push    esi
0x6F8BE1: mov     esi, ecx
0x6F8BE3: call    ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UAE@XZ; std::filebuf::~filebuf<char,std::char_traits<char>>(void)
0x6F8BE8: test    [esp+4+arg_0], 1
0x6F8BED: jz      short loc_6F8BF8
0x6F8BEF: push    esi
0x6F8BF0: call    FormHeapFree
0x6F8BF5: add     esp, 4
0x6F8BF8: mov     eax, esi
0x6F8BFA: pop     esi
0x6F8BFB: retn    4
