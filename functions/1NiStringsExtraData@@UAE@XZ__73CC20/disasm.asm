0x73CC20: push    esi
0x73CC21: push    edi
0x73CC22: mov     esi, ecx
0x73CC24: xor     edi, edi
0x73CC26: cmp     [esi+0Ch], edi
0x73CC29: mov     dword ptr [esi], offset ??_7NiStringsExtraData@@6B@; const NiStringsExtraData::`vftable'
0x73CC2F: jbe     short loc_73CC48
0x73CC31: mov     eax, [esi+10h]
0x73CC34: mov     ecx, [eax+edi*4]
0x73CC37: push    ecx
0x73CC38: call    FormHeapFree
0x73CC3D: add     edi, 1
0x73CC40: add     esp, 4
0x73CC43: cmp     edi, [esi+0Ch]
0x73CC46: jb      short loc_73CC31
0x73CC48: mov     edx, [esi+10h]
0x73CC4B: push    edx
0x73CC4C: call    FormHeapFree
0x73CC51: add     esp, 4
0x73CC54: pop     edi
0x73CC55: mov     dword ptr [esi+10h], 0
0x73CC5C: mov     ecx, esi
0x73CC5E: pop     esi
0x73CC5F: jmp     NiExtraData_dtor
