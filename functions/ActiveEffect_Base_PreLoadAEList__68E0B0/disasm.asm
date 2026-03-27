0x68E0B0: push    esi
0x68E0B1: mov     esi, [esp+4+arg_0]
0x68E0B5: test    esi, esi
0x68E0B7: jz      short loc_68E0DD
0x68E0B9: push    edi
0x68E0BA: mov     edi, [esp+8+arg_4]
0x68E0BE: mov     edi, edi
0x68E0C0: cmp     dword ptr [esi+4], 0
0x68E0C4: jnz     short loc_68E0CB
0x68E0C6: cmp     dword ptr [esi], 0
0x68E0C9: jz      short loc_68E0DC
0x68E0CB: mov     ecx, [esi]
0x68E0CD: mov     eax, [ecx]
0x68E0CF: mov     edx, [eax+20h]
0x68E0D2: push    edi
0x68E0D3: call    edx
0x68E0D5: mov     esi, [esi+4]
0x68E0D8: test    esi, esi
0x68E0DA: jnz     short loc_68E0C0
0x68E0DC: pop     edi
0x68E0DD: pop     esi
0x68E0DE: retn
