0x88ECD0: mov     eax, [esp+arg_0]
0x88ECD4: push    esi
0x88ECD5: push    eax
0x88ECD6: mov     esi, ecx
0x88ECD8: call    sub_89EF90
0x88ECDD: mov     eax, [esi+10h]
0x88ECE0: or      word ptr [esi+0Ch], 8
0x88ECE5: test    eax, eax
0x88ECE7: jz      short loc_88ECFA
0x88ECE9: mov     eax, [eax+8]
0x88ECEC: test    eax, eax
0x88ECEE: jz      short loc_88ECFA
0x88ECF0: add     eax, 14h
0x88ECF3: jz      short loc_88ECFA
0x88ECF5: mov     eax, [eax+1Ch]
0x88ECF8: jmp     short loc_88ECFC
0x88ECFA: xor     eax, eax
0x88ECFC: shr     eax, 8
0x88ECFF: and     eax, 1Fh
0x88ED02: fld     dword ptr ds:0B2E660h[eax*8]
0x88ED09: fstp    dword ptr [esi+14h]
0x88ED0C: fld     dword ptr ds:0B2E664h[eax*8]
0x88ED13: fstp    dword ptr [esi+18h]
0x88ED16: pop     esi
0x88ED17: retn    4
