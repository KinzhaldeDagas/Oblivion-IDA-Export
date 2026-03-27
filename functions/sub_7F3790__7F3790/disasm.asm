0x7F3790: mov     eax, ds:0B468F8h
0x7F3795: sub     esp, 8
0x7F3798: test    eax, eax
0x7F379A: jnz     loc_7F3865
0x7F37A0: push    esi
0x7F37A1: mov     esi, ds:0B468FCh
0x7F37A7: test    esi, esi
0x7F37A9: jnz     short loc_7F37C8
0x7F37AB: cmp     dword ptr ds:0B42F48h, 2
0x7F37B2: setl    al
0x7F37B5: sub     eax, 1
0x7F37B8: and     eax, 0A0h
0x7F37BD: add     eax, 4Bh ; 'K'
0x7F37C0: mov     esi, eax
0x7F37C2: mov     ds:0B468FCh, esi
0x7F37C8: imul    esi, ds:0B2DC90h
0x7F37CF: xor     ecx, ecx
0x7F37D1: lea     eax, ds:0[esi*4]
0x7F37D8: mov     edx, 4
0x7F37DD: mul     edx
0x7F37DF: seto    cl
0x7F37E2: neg     ecx
0x7F37E4: or      ecx, eax
0x7F37E6: push    ecx; Size
0x7F37E7: call    FormHeapAlloc
0x7F37EC: add     esp, 4
0x7F37EF: xor     ecx, ecx
0x7F37F1: test    esi, esi
0x7F37F3: mov     ds:0B468F8h, eax
0x7F37F8: jbe     short loc_7F3864
0x7F37FA: fld1
0x7F37FC: add     eax, 8
0x7F37FF: mov     edx, ecx
0x7F3801: test    edx, edx
0x7F3803: mov     [esp+0Ch+var_4], edx
0x7F3807: fild    [esp+0Ch+var_4]
0x7F380B: jge     short loc_7F3813
0x7F380D: fadd    dword ptr ds:0A2FC78h
0x7F3813: fstp    [esp+0Ch+var_8]
0x7F3817: add     ecx, 1
0x7F381A: fild    dword ptr ds:0B2DC90h
0x7F3820: add     eax, 10h
0x7F3823: cmp     ecx, esi
0x7F3825: fstp    [esp+0Ch+var_4]
0x7F3829: fld     [esp+0Ch+var_8]
0x7F382D: fld     st
0x7F382F: fld     [esp+0Ch+var_4]
0x7F3833: fld     st
0x7F3835: fdivp   st(2), st
0x7F3837: fxch    st(1)
0x7F3839: fstp    [esp+0Ch+var_4]
0x7F383D: fxch    st(1)
0x7F383F: fadd    st, st(2)
0x7F3841: fdivrp  st(1), st
0x7F3843: fstp    [esp+0Ch+var_8]
0x7F3847: fld     [esp+0Ch+var_4]
0x7F384B: fst     dword ptr [eax-18h]
0x7F384E: fstp    dword ptr [eax-14h]
0x7F3851: fld     [esp+0Ch+var_8]
0x7F3855: fst     dword ptr [eax-10h]
0x7F3858: fstp    dword ptr [eax-0Ch]
0x7F385B: jb      short loc_7F37FF
0x7F385D: mov     eax, ds:0B468F8h
0x7F3862: fstp    st
0x7F3864: pop     esi
0x7F3865: add     esp, 8
0x7F3868: retn
