0x4D4EB0: push    ebp
0x4D4EB1: mov     ebp, esp
0x4D4EB3: and     esp, 0FFFFFFF0h
0x4D4EB6: sub     esp, 5Ch
0x4D4EB9: mov     eax, ds:0B30AACh
0x4D4EBE: xor     eax, esp
0x4D4EC0: mov     [esp+5Ch+var_4], eax
0x4D4EC4: push    esi
0x4D4EC5: mov     esi, [ebp+arg_0]
0x4D4EC8: test    esi, esi
0x4D4ECA: jz      loc_4D4FE3
0x4D4ED0: test    byte ptr [ecx+24h], 1
0x4D4ED4: jz      short loc_4D4EE0
0x4D4ED6: add     ecx, 28h ; '('
0x4D4ED9: call    sub_424180
0x4D4EDE: jmp     short loc_4D4EE5
0x4D4EE0: mov     eax, ds:0B35C24h
0x4D4EE5: test    eax, eax
0x4D4EE7: jz      loc_4D4FE3
0x4D4EED: cmp     dword ptr [eax+14h], 0
0x4D4EF1: jz      loc_4D4FE3
0x4D4EF7: fld     dword ptr [esi+88h]
0x4D4EFD: push    offset aPlayer; "Player"
0x4D4F02: fld     qword ptr ds:0A39088h
0x4D4F08: sub     esp, 0Ch
0x4D4F0B: fmul    st(1), st
0x4D4F0D: lea     eax, [esp+70h+var_20]
0x4D4F11: fxch    st(1)
0x4D4F13: lea     ecx, [esp+70h+var_40]
0x4D4F17: lea     edx, [esp+70h+var_30]
0x4D4F1B: fstp    dword ptr [esp+70h+var_30]
0x4D4F1F: fld     dword ptr [esi+8Ch]
0x4D4F25: fmul    st, st(1)
0x4D4F27: fstp    dword ptr [esp+70h+var_30+4]
0x4D4F2B: fld     dword ptr [esi+90h]
0x4D4F31: fmul    st, st(1)
0x4D4F33: fstp    dword ptr [esp+70h+var_30+8]
0x4D4F37: movaps  xmm1, [esp+70h+var_30]
0x4D4F3C: fld     dword ptr [esi+68h]
0x4D4F3F: fstp    [esp+70h+var_4C]
0x4D4F43: fld     dword ptr [esi+74h]
0x4D4F46: fstp    [esp+70h+var_48]
0x4D4F4A: fld     dword ptr [esi+80h]
0x4D4F50: fstp    [esp+70h+var_44]
0x4D4F54: fld     [esp+70h+var_4C]
0x4D4F58: fstp    [esp+70h+var_20]
0x4D4F5C: fld     [esp+70h+var_48]
0x4D4F60: fstp    [esp+70h+var_1C]
0x4D4F64: fld     [esp+70h+var_44]
0x4D4F68: fstp    [esp+70h+var_18]
0x4D4F6C: fld     dword ptr [esi+64h]
0x4D4F6F: fstp    [esp+70h+var_4C]
0x4D4F73: fld     dword ptr [esi+70h]
0x4D4F76: fstp    [esp+70h+var_48]
0x4D4F7A: fld     dword ptr [esi+7Ch]
0x4D4F7D: fstp    [esp+70h+var_44]
0x4D4F81: fld     [esp+70h+var_4C]
0x4D4F85: fstp    dword ptr [esp+70h+var_40]
0x4D4F89: fld     [esp+70h+var_48]
0x4D4F8D: fstp    dword ptr [esp+70h+var_40+4]
0x4D4F91: fld     [esp+70h+var_44]
0x4D4F95: fstp    dword ptr [esp+70h+var_40+8]
0x4D4F99: movaps  xmm0, [esp+70h+var_40]
0x4D4F9E: fld     dword ptr ds:0A46B24h
0x4D4FA4: addps   xmm0, xmm1
0x4D4FA7: fstp    [esp+70h+var_68]
0x4D4FAB: movaps  [esp+70h+var_40], xmm0
0x4D4FB0: fld     dword ptr [esi+100h]
0x4D4FB6: fmul    st, st(1)
0x4D4FB8: fstp    [esp+70h+var_50]
0x4D4FBC: fld     [esp+70h+var_50]
0x4D4FC0: fstp    [esp+70h+var_6C]
0x4D4FC4: fmul    dword ptr [esi+0FCh]
0x4D4FCA: fstp    [esp+70h+var_50]
0x4D4FCE: fld     [esp+70h+var_50]
0x4D4FD2: fstp    [esp+70h+var_70]
0x4D4FD5: push    eax
0x4D4FD6: push    ecx
0x4D4FD7: mov     ecx, ds:0BA7DA0h
0x4D4FDD: push    edx
0x4D4FDE: call    sub_8A7880
0x4D4FE3: mov     ecx, [esp+60h+var_4]
0x4D4FE7: pop     esi
0x4D4FE8: xor     ecx, esp
0x4D4FEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D4FEF: mov     esp, ebp
0x4D4FF1: pop     ebp
0x4D4FF2: retn    4
