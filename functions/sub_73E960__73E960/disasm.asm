0x73E960: push    esi
0x73E961: mov     esi, ecx
0x73E963: mov     eax, [esi+2Ch]
0x73E966: push    eax
0x73E967: mov     dword ptr [esi], offset ??_7NiScreenLODData@@6B@; const NiScreenLODData::`vftable'
0x73E96D: call    FormHeapFree
0x73E972: add     esp, 4
0x73E975: mov     ecx, esi
0x73E977: call    sub_738790
0x73E97C: test    [esp+4+arg_0], 1
0x73E981: jz      short loc_73E98C
0x73E983: push    esi
0x73E984: call    FormHeapFree
0x73E989: add     esp, 4
0x73E98C: mov     eax, esi
0x73E98E: pop     esi
0x73E98F: retn    4
