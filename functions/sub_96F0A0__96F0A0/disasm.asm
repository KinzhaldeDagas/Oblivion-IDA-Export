0x96F0A0: push    esi
0x96F0A1: push    edi
0x96F0A2: mov     edi, [esp+8+arg_0]
0x96F0A6: push    edi
0x96F0A7: mov     esi, ecx
0x96F0A9: call    sub_976AA0
0x96F0AE: test    al, al
0x96F0B0: jz      short loc_96F0CB
0x96F0B2: fld     dword ptr [esi+18h]
0x96F0B5: fld     dword ptr [edi+18h]
0x96F0B8: fucompp
0x96F0BA: fnstsw  ax
0x96F0BC: test    ah, 44h
0x96F0BF: jp      short loc_96F0CB
0x96F0C1: pop     edi
0x96F0C2: mov     eax, 1
0x96F0C7: pop     esi
0x96F0C8: retn    4
0x96F0CB: pop     edi
0x96F0CC: xor     eax, eax
0x96F0CE: pop     esi
0x96F0CF: retn    4
