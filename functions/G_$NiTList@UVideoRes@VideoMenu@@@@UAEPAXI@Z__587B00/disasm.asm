0x587B00: push    esi
0x587B01: mov     esi, ecx
0x587B03: call    ??1?$NiTList@UVideoRes@VideoMenu@@@@UAE@XZ; NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>(void)
0x587B08: test    [esp+4+arg_0], 1
0x587B0D: jz      short loc_587B18
0x587B0F: push    esi
0x587B10: call    FormHeapFree
0x587B15: add     esp, 4
0x587B18: mov     eax, esi
0x587B1A: pop     esi
0x587B1B: retn    4
