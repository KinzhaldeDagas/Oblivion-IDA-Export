0x5577C0: push    ebx
0x5577C1: mov     ebx, [esp+4+arg_0]
0x5577C5: push    esi
0x5577C6: mov     esi, [esp+8+arg_4]
0x5577CA: cmp     ebx, esi
0x5577CC: jz      short loc_5577F4
0x5577CE: push    edi
0x5577CF: mov     edi, [esp+0Ch+arg_8]
0x5577D3: fld     dword ptr [esi-14h]
0x5577D6: sub     esi, 14h
0x5577D9: sub     edi, 14h
0x5577DC: lea     eax, [esi+4]
0x5577DF: fstp    dword ptr [edi]
0x5577E1: push    eax
0x5577E2: lea     ecx, [edi+4]
0x5577E5: call    sub_557470
0x5577EA: cmp     esi, ebx
0x5577EC: jnz     short loc_5577D3
0x5577EE: mov     eax, edi
0x5577F0: pop     edi
0x5577F1: pop     esi
0x5577F2: pop     ebx
0x5577F3: retn
0x5577F4: mov     eax, [esp+8+arg_8]
0x5577F8: pop     esi
0x5577F9: pop     ebx
0x5577FA: retn
