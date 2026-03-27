0x69D9A0: fld     [esp+arg_0]
0x69D9A4: push    esi
0x69D9A5: mov     esi, ecx
0x69D9A7: fadd    dword ptr [esi+20h]
0x69D9AA: mov     ecx, [esi+1Ch]
0x69D9AD: test    ecx, ecx
0x69D9AF: fstp    dword ptr [esi+20h]
0x69D9B2: jz      short loc_69D9E9
0x69D9B4: mov     eax, [ecx]
0x69D9B6: mov     edx, [eax+154h]
0x69D9BC: call    edx
0x69D9BE: test    eax, eax
0x69D9C0: jz      short loc_69D9E9
0x69D9C2: mov     eax, [esi+1Ch]
0x69D9C5: mov     ecx, [eax+8]
0x69D9C8: shr     ecx, 5
0x69D9CB: test    cl, 1
0x69D9CE: jnz     short loc_69D9E9
0x69D9D0: fld     dword ptr [esi+20h]
0x69D9D3: fld     dword ptr [esi+8]
0x69D9D6: fcompp
0x69D9D8: fnstsw  ax
0x69D9DA: test    ah, 5
0x69D9DD: jp      short loc_69D9E3
0x69D9DF: mov     byte ptr [esi+24h], 1
0x69D9E3: mov     al, 1
0x69D9E5: pop     esi
0x69D9E6: retn    4
0x69D9E9: xor     al, al
0x69D9EB: pop     esi
0x69D9EC: retn    4
