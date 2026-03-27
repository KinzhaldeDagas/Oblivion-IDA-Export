0x7945B0: push    esi
0x7945B1: movzx   esi, [esp+4+arg_0]
0x7945B6: push    edi
0x7945B7: mov     edi, ecx
0x7945B9: mov     ecx, [edi+4Ch]
0x7945BC: test    ecx, ecx
0x7945BE: jz      short loc_7945CC
0x7945C0: mov     eax, [edi+50h]
0x7945C3: sub     eax, ecx
0x7945C5: sar     eax, 4
0x7945C8: cmp     esi, eax
0x7945CA: jb      short loc_7945D1
0x7945CC: call    __invalid_parameter_noinfo
0x7945D1: mov     eax, esi
0x7945D3: shl     eax, 4
0x7945D6: add     eax, [edi+4Ch]
0x7945D9: mov     ecx, [eax+4]
0x7945DC: test    ecx, ecx
0x7945DE: jz      short loc_794626
0x7945E0: mov     eax, [eax+8]
0x7945E3: sub     eax, ecx
0x7945E5: sar     eax, 2
0x7945E8: jz      short loc_794626
0x7945EA: mov     ecx, [edi+4Ch]
0x7945ED: test    ecx, ecx
0x7945EF: jz      short loc_7945FD
0x7945F1: mov     eax, [edi+50h]
0x7945F4: sub     eax, ecx
0x7945F6: sar     eax, 4
0x7945F9: cmp     esi, eax
0x7945FB: jb      short loc_794602
0x7945FD: call    __invalid_parameter_noinfo
0x794602: shl     esi, 4
0x794605: add     esi, [edi+4Ch]
0x794608: mov     eax, [esi+4]
0x79460B: test    eax, eax
0x79460D: jz      short loc_794619
0x79460F: mov     ecx, [esi+8]
0x794612: sub     ecx, eax
0x794614: sar     ecx, 2
0x794617: jnz     short loc_79461E
0x794619: call    __invalid_parameter_noinfo
0x79461E: mov     eax, [esi+4]
0x794621: pop     edi
0x794622: pop     esi
0x794623: retn    4
0x794626: pop     edi
0x794627: xor     eax, eax
0x794629: pop     esi
0x79462A: retn    4
