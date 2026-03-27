0x803790: push    esi
0x803791: mov     esi, ecx
0x803793: mov     eax, [esi]
0x803795: mov     edx, [eax+4]
0x803798: call    edx
0x80379A: mov     ecx, [esp+4+arg_0]
0x80379E: mov     [eax+8], ecx
0x8037A1: mov     dword ptr [eax], 0
0x8037A7: mov     edx, [esi+8]
0x8037AA: mov     [eax+4], edx
0x8037AD: mov     ecx, [esi+8]
0x8037B0: test    ecx, ecx
0x8037B2: jz      short loc_8037C1
0x8037B4: mov     [ecx], eax
0x8037B6: add     dword ptr [esi+0Ch], 1
0x8037BA: mov     [esi+8], eax
0x8037BD: pop     esi
0x8037BE: retn    4
0x8037C1: add     dword ptr [esi+0Ch], 1
0x8037C5: mov     [esi+4], eax
0x8037C8: mov     [esi+8], eax
0x8037CB: pop     esi
0x8037CC: retn    4
