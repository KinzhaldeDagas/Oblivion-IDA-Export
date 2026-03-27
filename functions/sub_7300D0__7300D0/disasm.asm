0x7300D0: mov     eax, [esp+arg_4]
0x7300D4: push    esi
0x7300D5: push    edi
0x7300D6: mov     edi, [esp+8+arg_0]
0x7300DA: push    eax
0x7300DB: push    edi
0x7300DC: mov     esi, ecx
0x7300DE: call    sub_7214A0
0x7300E3: cmp     dword ptr [esi+10h], 0
0x7300E7: jz      short loc_730139
0x7300E9: cmp     dword ptr [esi+0Ch], 0
0x7300ED: jbe     short loc_730139
0x7300EF: mov     ecx, [esi+0Ch]
0x7300F2: mov     [edi+0Ch], ecx
0x7300F5: mov     eax, [esi+0Ch]
0x7300F8: xor     ecx, ecx
0x7300FA: mov     edx, 4
0x7300FF: mul     edx
0x730101: seto    cl
0x730104: neg     ecx
0x730106: or      ecx, eax
0x730108: push    ecx; Size
0x730109: call    FormHeapAlloc
0x73010E: mov     [edi+10h], eax
0x730111: xor     eax, eax
0x730113: add     esp, 4
0x730116: cmp     [esi+0Ch], eax
0x730119: jbe     short loc_730147
0x73011B: jmp     short loc_730120
0x73011D: align 10h
0x730120: mov     ecx, [esi+10h]
0x730123: fld     dword ptr [ecx+eax*4]
0x730126: mov     edx, [edi+10h]
0x730129: fstp    dword ptr [edx+eax*4]
0x73012C: add     eax, 1
0x73012F: cmp     eax, [esi+0Ch]
0x730132: jb      short loc_730120
0x730134: pop     edi
0x730135: pop     esi
0x730136: retn    8
0x730139: mov     dword ptr [edi+10h], 0
0x730140: mov     dword ptr [edi+0Ch], 0
0x730147: pop     edi
0x730148: pop     esi
0x730149: retn    8
