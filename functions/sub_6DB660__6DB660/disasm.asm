0x6DB660: mov     eax, [ecx+18h]
0x6DB663: sub     esp, 0Ch
0x6DB666: push    ebx
0x6DB667: xor     edx, edx
0x6DB669: test    eax, eax
0x6DB66B: push    esi
0x6DB66C: jz      short loc_6DB679
0x6DB66E: mov     ecx, [eax+10h]
0x6DB671: mov     bl, [eax+14h]
0x6DB674: mov     edx, [eax+0Ch]
0x6DB677: jmp     short loc_6DB67D
0x6DB679: xor     ecx, ecx
0x6DB67B: xor     bl, bl
0x6DB67D: fld     [esp+14h+arg_8]
0x6DB681: movzx   eax, bl
0x6DB684: lea     esi, [esp+14h+var_C]
0x6DB688: push    esi
0x6DB689: mov     esi, eax
0x6DB68B: imul    eax, [esp+18h+arg_0]
0x6DB690: imul    esi, [esp+18h+arg_4]
0x6DB695: add     esi, edx
0x6DB697: add     eax, edx
0x6DB699: push    esi
0x6DB69A: push    eax
0x6DB69B: mov     eax, ds:0B3D250h[ecx*4]
0x6DB6A2: push    ecx
0x6DB6A3: fstp    [esp+24h+var_24]
0x6DB6A6: call    eax
0x6DB6A8: fld     [esp+24h+var_8]
0x6DB6AC: add     esp, 10h
0x6DB6AF: fld     [esp+14h+var_C]
0x6DB6B3: fld     [esp+14h+var_4]
0x6DB6B7: fld     st(1)
0x6DB6B9: fmulp   st(2), st
0x6DB6BB: fld     st(2)
0x6DB6BD: fmulp   st(3), st
0x6DB6BF: fxch    st(1)
0x6DB6C1: faddp   st(2), st
0x6DB6C3: fmul    st, st
0x6DB6C5: faddp   st(1), st
0x6DB6C7: fstp    [esp+14h+arg_4]
0x6DB6CB: fld     [esp+14h+arg_4]
0x6DB6CF: call    __CIsqrt
0x6DB6D4: fstp    [esp+14h+arg_4]
0x6DB6D8: fld     [esp+14h+arg_4]
0x6DB6DC: pop     esi
0x6DB6DD: pop     ebx
0x6DB6DE: add     esp, 0Ch
0x6DB6E1: retn    0Ch
