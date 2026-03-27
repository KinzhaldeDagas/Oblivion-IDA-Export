0x72FD80: push    esi
0x72FD81: push    edi
0x72FD82: mov     edi, [esp+8+arg_0]
0x72FD86: mov     esi, ecx
0x72FD88: fld     dword ptr [esi+8]
0x72FD8B: fld     dword ptr [edi+8]
0x72FD8E: fucompp
0x72FD90: fnstsw  ax
0x72FD92: test    ah, 44h
0x72FD95: jp      short loc_72FDE2
0x72FD97: fld     dword ptr [esi]
0x72FD99: fld     dword ptr [edi]
0x72FD9B: fucompp
0x72FD9D: fnstsw  ax
0x72FD9F: test    ah, 44h
0x72FDA2: jp      short loc_72FDE2
0x72FDA4: fld     dword ptr [esi+4]
0x72FDA7: fld     dword ptr [edi+4]
0x72FDAA: fucompp
0x72FDAC: fnstsw  ax
0x72FDAE: test    ah, 44h
0x72FDB1: jp      short loc_72FDE2
0x72FDB3: lea     eax, [edi+0Ch]
0x72FDB6: push    eax
0x72FDB7: lea     ecx, [esi+0Ch]
0x72FDBA: call    sub_4B9D10
0x72FDBF: test    al, al
0x72FDC1: jnz     short loc_72FDE2
0x72FDC3: mov     ecx, [esi+44h]
0x72FDC6: cmp     ecx, [edi+44h]
0x72FDC9: jnz     short loc_72FDE2
0x72FDCB: add     edi, 14h
0x72FDCE: push    edi
0x72FDCF: lea     ecx, [esi+14h]
0x72FDD2: call    sub_4B9D10
0x72FDD7: test    al, al
0x72FDD9: jnz     short loc_72FDE2
0x72FDDB: pop     edi
0x72FDDC: xor     eax, eax
0x72FDDE: pop     esi
0x72FDDF: retn    4
0x72FDE2: pop     edi
0x72FDE3: mov     eax, 1
0x72FDE8: pop     esi
0x72FDE9: retn    4
