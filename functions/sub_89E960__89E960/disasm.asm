0x89E960: push    0FFFFFFFFh
0x89E962: push    offset SEH_8C62B0
0x89E967: mov     eax, large fs:0
0x89E96D: push    eax
0x89E96E: push    ecx
0x89E96F: push    esi
0x89E970: mov     eax, ds:0B30AACh
0x89E975: xor     eax, esp
0x89E977: push    eax
0x89E978: lea     eax, [esp+18h+var_C]
0x89E97C: mov     large fs:0, eax
0x89E982: push    14h; Size
0x89E984: call    FormHeapAlloc
0x89E989: mov     esi, eax
0x89E98B: add     esp, 4
0x89E98E: mov     [esp+18h+var_10], esi
0x89E992: xor     eax, eax
0x89E994: cmp     esi, eax
0x89E996: mov     [esp+18h+var_4], eax
0x89E99A: jz      short loc_89E9AB
0x89E99C: mov     ecx, esi
0x89E99E: call    sub_897600
0x89E9A3: mov     dword ptr [esi], offset ??_7bhkCollisionObject@@6B@; const bhkCollisionObject::`vftable'
0x89E9A9: mov     eax, esi
0x89E9AB: mov     ecx, [esp+18h+var_C]
0x89E9AF: mov     large fs:0, ecx
0x89E9B6: pop     ecx
0x89E9B7: pop     esi
0x89E9B8: add     esp, 10h
0x89E9BB: retn
