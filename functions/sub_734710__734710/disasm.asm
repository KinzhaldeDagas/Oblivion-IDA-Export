0x734710: fld     qword ptr ds:0A492F0h
0x734716: sub     esp, 8
0x734719: fld     qword ptr ds:0A3DDD8h
0x73471F: xor     edx, edx
0x734721: push    esi
0x734722: mov     [ecx], edx
0x734724: mov     dword ptr [ecx+4], offset sub_733F90
0x73472B: mov     [ecx+8], edx
0x73472E: mov     [ecx+0Ch], edx
0x734731: lea     esi, [ecx+11h]
0x734734: mov     eax, edx
0x734736: and     eax, 0Fh
0x734739: test    eax, eax
0x73473B: mov     [esp+0Ch+var_4], eax
0x73473F: fild    [esp+0Ch+var_4]
0x734743: jge     short loc_73474B
0x734745: fadd    dword ptr ds:0A2FC78h
0x73474B: fdiv    st, st(2)
0x73474D: fnstcw  [esp+0Ch+var_6]
0x734751: fmul    st, st(1)
0x734753: movzx   eax, [esp+0Ch+var_6]
0x734758: or      eax, 0C00h
0x73475D: mov     [esp+0Ch+var_4], eax
0x734761: fldcw   word ptr [esp+0Ch+var_4]
0x734765: fistp   [esp+0Ch+var_4]
0x734769: movzx   eax, byte ptr [esp+0Ch+var_4]
0x73476E: mov     [esi-1], al
0x734771: mov     eax, edx
0x734773: fldcw   [esp+0Ch+var_6]
0x734777: shr     eax, 4
0x73477A: and     eax, 0Fh
0x73477D: test    eax, eax
0x73477F: mov     [esp+0Ch+var_4], eax
0x734783: fild    [esp+0Ch+var_4]
0x734787: jge     short loc_73478F
0x734789: fadd    dword ptr ds:0A2FC78h
0x73478F: fdiv    st, st(2)
0x734791: add     edx, 1
0x734794: add     esi, 2
0x734797: fnstcw  [esp+0Ch+var_6]
0x73479B: fmul    st, st(1)
0x73479D: movzx   eax, [esp+0Ch+var_6]
0x7347A2: or      eax, 0C00h
0x7347A7: cmp     edx, 100h
0x7347AD: mov     [esp+0Ch+var_4], eax
0x7347B1: fldcw   word ptr [esp+0Ch+var_4]
0x7347B5: fistp   [esp+0Ch+var_4]
0x7347B9: movzx   eax, byte ptr [esp+0Ch+var_4]
0x7347BE: mov     [esi-2], al
0x7347C1: fldcw   [esp+0Ch+var_6]
0x7347C5: jb      loc_734734
0x7347CB: fstp    st(1)
0x7347CD: mov     eax, ecx
0x7347CF: fstp    st
0x7347D1: pop     esi
0x7347D2: add     esp, 8
0x7347D5: retn
