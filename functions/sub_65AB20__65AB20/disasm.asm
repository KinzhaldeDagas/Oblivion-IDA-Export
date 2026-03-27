0x65AB20: push    esi
0x65AB21: mov     esi, ecx
0x65AB23: call    MobileObject_destr
0x65AB28: test    [esp+4+arg_0], 1
0x65AB2D: jz      short loc_65AB38
0x65AB2F: push    esi
0x65AB30: call    FormHeapFree
0x65AB35: add     esp, 4
0x65AB38: mov     eax, esi
0x65AB3A: pop     esi
0x65AB3B: retn    4
