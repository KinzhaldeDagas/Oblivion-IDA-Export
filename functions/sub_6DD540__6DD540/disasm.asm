0x6DD540: push    ebp
0x6DD541: mov     ebp, esp
0x6DD543: and     esp, 0FFFFFFF8h
0x6DD546: sub     esp, 1Ch
0x6DD549: push    ebx
0x6DD54A: mov     ebx, ecx
0x6DD54C: mov     eax, [ebx+48h]
0x6DD54F: test    eax, eax
0x6DD551: push    esi
0x6DD552: push    edi
0x6DD553: jz      short loc_6DD55E
0x6DD555: mov     esi, [eax+8]
0x6DD558: mov     dword ptr [esp+28h+var_18], esi
0x6DD55C: jmp     short loc_6DD56A
0x6DD55E: mov     dword ptr [esp+28h+var_18], 0
0x6DD566: mov     esi, dword ptr [esp+28h+var_18]
0x6DD56A: fldz
0x6DD56C: fld     st
0x6DD56E: fld     [ebp+arg_0]
0x6DD571: fucom   st(1)
0x6DD573: fnstsw  ax
0x6DD575: fstp    st(1)
0x6DD577: test    ah, 44h
0x6DD57A: jp      short loc_6DD59E
0x6DD57C: mov     eax, [ebp+arg_4]
0x6DD57F: fstp    st
0x6DD581: mov     ecx, [ebp+arg_8]
0x6DD584: mov     edx, [ebp+arg_C]
0x6DD587: mov     dword ptr [eax], 0
0x6DD58D: mov     dword ptr [ecx], 1
0x6DD593: fstp    dword ptr [edx]
0x6DD595: pop     edi
0x6DD596: pop     esi
0x6DD597: pop     ebx
0x6DD598: mov     esp, ebp
0x6DD59A: pop     ebp
0x6DD59B: retn    10h
0x6DD59E: fcom    st(1)
0x6DD5A0: fnstsw  ax
0x6DD5A2: fstp    st(1)
0x6DD5A4: test    ah, 5
0x6DD5A7: fld1
0x6DD5A9: jp      short loc_6DD5C6
0x6DD5AB: call    unknown_libname_14
0x6DD5B0: fstp    [esp+28h+var_C]
0x6DD5B4: fld     [esp+28h+var_C]
0x6DD5B8: fld1
0x6DD5BA: fadd    st(1), st
0x6DD5BC: fxch    st(1)
0x6DD5BE: fstp    [ebp+arg_0]
0x6DD5C1: fld     [ebp+arg_0]
0x6DD5C4: fxch    st(1)
0x6DD5C6: fld1
0x6DD5C8: fld     st
0x6DD5CA: fucomp  st(3)
0x6DD5CC: fnstsw  ax
0x6DD5CE: test    ah, 44h
0x6DD5D1: jp      short loc_6DD5F5
0x6DD5D3: mov     ecx, [ebp+arg_4]
0x6DD5D6: fstp    st(2)
0x6DD5D8: mov     edx, [ebp+arg_8]
0x6DD5DB: fstp    st
0x6DD5DD: lea     eax, [esi-2]
0x6DD5E0: mov     [ecx], eax
0x6DD5E2: mov     eax, [ebp+arg_C]
0x6DD5E5: add     esi, 0FFFFFFFFh
0x6DD5E8: mov     [edx], esi
0x6DD5EA: fstp    dword ptr [eax]
0x6DD5EC: pop     edi
0x6DD5ED: pop     esi
0x6DD5EE: pop     ebx
0x6DD5EF: mov     esp, ebp
0x6DD5F1: pop     ebp
0x6DD5F2: retn    10h
0x6DD5F5: fcomp   st(2)
0x6DD5F7: fnstsw  ax
0x6DD5F9: test    ah, 5
0x6DD5FC: jp      short loc_6DD613
0x6DD5FE: call    unknown_libname_14
0x6DD603: fstp    [esp+28h+var_C]
0x6DD607: fld     [esp+28h+var_C]
0x6DD60B: fstp    [ebp+arg_0]
0x6DD60E: fld     [ebp+arg_0]
0x6DD611: jmp     short loc_6DD615
0x6DD613: fstp    st
0x6DD615: fmul    dword ptr [ebx+54h]
0x6DD618: mov     ecx, dword ptr [esp+28h+var_18]
0x6DD61C: xor     esi, esi
0x6DD61E: add     ecx, 0FFFFFFFFh
0x6DD621: fstp    [esp+28h+var_C]
0x6DD625: mov     edi, 1
0x6DD62A: jz      short loc_6DD66C
0x6DD62C: mov     edx, [ebx+50h]
0x6DD62F: fld     [esp+28h+var_C]
0x6DD633: add     edx, 4
0x6DD636: fld     dword ptr [edx]
0x6DD638: fcomp   st(1)
0x6DD63A: fnstsw  ax
0x6DD63C: test    ah, 1
0x6DD63F: jz      short loc_6DD652
0x6DD641: add     esi, 1
0x6DD644: add     edi, 1
0x6DD647: add     edx, 4
0x6DD64A: cmp     esi, ecx
0x6DD64C: jb      short loc_6DD636
0x6DD64E: fstp    st
0x6DD650: jmp     short loc_6DD66C
0x6DD652: mov     eax, [ebx+50h]
0x6DD655: fsub    dword ptr [eax+esi*4]
0x6DD658: fstp    [esp+28h+var_10]
0x6DD65C: fld     [esp+28h+var_10]
0x6DD660: fld     dword ptr [eax+edi*4]
0x6DD663: fsub    dword ptr [eax+esi*4]
0x6DD666: fdivp   st(1), st
0x6DD668: fstp    dword ptr [esp+28h+var_18]
0x6DD66C: mov     [esp+28h+var_C], 0
0x6DD674: fld     dword ptr [esp+28h+var_18]
0x6DD678: push    ecx
0x6DD679: fstp    [esp+2Ch+var_2C]; float
0x6DD67C: push    edi; int
0x6DD67D: push    esi; int
0x6DD67E: mov     ecx, ebx
0x6DD680: call    sub_6DD180
0x6DD685: fsub    [esp+28h+var_10]
0x6DD689: fstp    dword ptr [esp+28h+var_8]
0x6DD68D: fld     dword ptr [esp+28h+var_8]
0x6DD691: fld     st
0x6DD693: fabs
0x6DD695: fstp    dword ptr [esp+28h+var_8]
0x6DD699: fld     dword ptr [esp+28h+var_8]
0x6DD69D: fcomp   qword ptr ds:0A68FE0h
0x6DD6A3: fnstsw  ax
0x6DD6A5: test    ah, 41h
0x6DD6A8: jnp     short loc_6DD6E3
0x6DD6AA: fld     dword ptr [esp+28h+var_18]
0x6DD6AE: push    ecx
0x6DD6AF: fst     [esp+2Ch+var_18]
0x6DD6B3: mov     ecx, ebx
0x6DD6B5: fxch    st(1)
0x6DD6B7: fstp    [esp+2Ch+var_8]
0x6DD6BB: fstp    [esp+2Ch+var_2C]; float
0x6DD6BE: push    edi; int
0x6DD6BF: push    esi; int
0x6DD6C0: call    sub_6DD0F0
0x6DD6C5: fdivr   [esp+28h+var_8]
0x6DD6C9: mov     eax, [esp+28h+var_C]
0x6DD6CD: add     eax, 1
0x6DD6D0: cmp     eax, 20h ; ' '
0x6DD6D3: mov     [esp+28h+var_C], eax
0x6DD6D7: fsubr   [esp+28h+var_18]
0x6DD6DB: fstp    dword ptr [esp+28h+var_18]
0x6DD6DF: jl      short loc_6DD674
0x6DD6E1: jmp     short loc_6DD6E5
0x6DD6E3: fstp    st
0x6DD6E5: mov     ecx, [ebp+arg_4]
0x6DD6E8: fld     dword ptr [esp+28h+var_18]
0x6DD6EC: mov     edx, [ebp+arg_8]
0x6DD6EF: mov     eax, [ebp+arg_C]
0x6DD6F2: mov     [ecx], esi
0x6DD6F4: mov     [edx], edi
0x6DD6F6: fstp    dword ptr [eax]
0x6DD6F8: pop     edi
0x6DD6F9: pop     esi
0x6DD6FA: pop     ebx
0x6DD6FB: mov     esp, ebp
0x6DD6FD: pop     ebp
0x6DD6FE: retn    10h
