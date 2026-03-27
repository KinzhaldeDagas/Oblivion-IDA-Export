0x6DD0F0: mov     eax, [ecx+48h]
0x6DD0F3: sub     esp, 0Ch
0x6DD0F6: test    eax, eax
0x6DD0F8: push    ebx
0x6DD0F9: push    esi
0x6DD0FA: jz      short loc_6DD107
0x6DD0FC: mov     edx, [eax+10h]
0x6DD0FF: mov     bl, [eax+14h]
0x6DD102: mov     ecx, [eax+0Ch]
0x6DD105: jmp     short loc_6DD10D
0x6DD107: xor     edx, edx
0x6DD109: xor     ecx, ecx
0x6DD10B: xor     bl, bl
0x6DD10D: fld     [esp+14h+arg_8]
0x6DD111: movzx   eax, bl
0x6DD114: lea     esi, [esp+14h+var_C]
0x6DD118: push    esi
0x6DD119: mov     esi, eax
0x6DD11B: imul    eax, [esp+18h+arg_0]
0x6DD120: imul    esi, [esp+18h+arg_4]
0x6DD125: add     esi, ecx
0x6DD127: add     eax, ecx
0x6DD129: push    esi
0x6DD12A: push    eax
0x6DD12B: mov     eax, ds:0B3D250h[edx*4]
0x6DD132: push    ecx
0x6DD133: fstp    [esp+24h+var_24]
0x6DD136: call    eax
0x6DD138: fld     [esp+24h+var_8]
0x6DD13C: add     esp, 10h
0x6DD13F: fld     [esp+14h+var_C]
0x6DD143: fld     [esp+14h+var_4]
0x6DD147: fld     st(1)
0x6DD149: fmulp   st(2), st
0x6DD14B: fld     st(2)
0x6DD14D: fmulp   st(3), st
0x6DD14F: fxch    st(1)
0x6DD151: faddp   st(2), st
0x6DD153: fmul    st, st
0x6DD155: faddp   st(1), st
0x6DD157: fstp    [esp+14h+arg_4]
0x6DD15B: fld     [esp+14h+arg_4]
0x6DD15F: call    __CIsqrt
0x6DD164: fstp    [esp+14h+arg_4]
0x6DD168: fld     [esp+14h+arg_4]
0x6DD16C: pop     esi
0x6DD16D: pop     ebx
0x6DD16E: add     esp, 0Ch
0x6DD171: retn    0Ch
