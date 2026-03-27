0x757950: push    esi
0x757951: push    edi
0x757952: push    48h ; 'H'; Size
0x757954: mov     edi, ecx
0x757956: call    FormHeapAlloc
0x75795B: mov     esi, eax
0x75795D: add     esp, 4
0x757960: test    esi, esi
0x757962: jz      short loc_757985
0x757964: mov     ecx, esi
0x757966: call    sub_75F510
0x75796B: mov     eax, [esp+8+arg_0]
0x75796F: push    eax
0x757970: push    esi
0x757971: mov     ecx, edi
0x757973: mov     dword ptr [esi], offset ??_7NiPSysFieldMaxDistanceCtlr@@6B@; const NiPSysFieldMaxDistanceCtlr::`vftable'
0x757979: call    sub_75F5A0
0x75797E: pop     edi
0x75797F: mov     eax, esi
0x757981: pop     esi
0x757982: retn    4
0x757985: mov     eax, [esp+8+arg_0]
0x757989: push    eax
0x75798A: xor     esi, esi
0x75798C: push    esi
0x75798D: mov     ecx, edi
0x75798F: call    sub_75F5A0
0x757994: pop     edi
0x757995: mov     eax, esi
0x757997: pop     esi
0x757998: retn    4
