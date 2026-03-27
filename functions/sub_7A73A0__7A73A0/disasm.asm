0x7A73A0: push    ebp
0x7A73A1: mov     ebp, esp
0x7A73A3: and     esp, 0FFFFFFF8h
0x7A73A6: sub     esp, 10h
0x7A73A9: push    esi
0x7A73AA: mov     esi, ecx
0x7A73AC: cmp     byte ptr [esi+10h], 0
0x7A73B0: push    edi
0x7A73B1: jz      short loc_7A73C0
0x7A73B3: push    0
0x7A73B5: call    sub_7A71D0
0x7A73BA: lea     ebx, [ebx+0]
0x7A73C0: mov     ecx, esi
0x7A73C2: call    sub_7A6FD0
0x7A73C7: fstp    [esp+18h+var_C]
0x7A73CB: fld     [esp+18h+var_C]
0x7A73CF: fmul    dword ptr [esi+4]
0x7A73D2: call    Double_To_SInt32
0x7A73D7: mov     edi, eax
0x7A73D9: mov     eax, [esi+8]
0x7A73DC: fld     dword ptr [eax+edi*4]
0x7A73DF: mov     ecx, esi
0x7A73E1: fstp    [esp+18h+var_C]
0x7A73E5: call    sub_7A6FD0
0x7A73EA: mov     ecx, [esi+8]
0x7A73ED: fld     dword ptr [ecx+edi*4+4]
0x7A73F1: mov     edx, [esi+0Ch]
0x7A73F4: fld     [esp+18h+var_C]
0x7A73F8: mov     ecx, esi
0x7A73FA: fld     st
0x7A73FC: lea     edi, [edx+edi*4]
0x7A73FF: fsubp   st(2), st
0x7A7401: fxch    st(2)
0x7A7403: fmulp   st(1), st
0x7A7405: faddp   st(1), st
0x7A7407: fstp    [esp+18h+var_C]
0x7A740B: call    sub_7A6FD0
0x7A7410: fmul    dword ptr [edi]
0x7A7412: fstp    [esp+18h+var_C+4]
0x7A7416: fld     [esp+18h+var_C+4]
0x7A741A: fld     dword ptr [edi+4]
0x7A741D: fcomp   st(1)
0x7A741F: fnstsw  ax
0x7A7421: test    ah, 41h
0x7A7424: jp      short loc_7A7454
0x7A7426: mov     eax, [esi]
0x7A7428: fstp    qword ptr [esp+18h+var_C+4]
0x7A742C: fld     [esp+18h+var_C]
0x7A7430: mov     edx, [eax+0Ch]
0x7A7433: push    ecx
0x7A7434: mov     ecx, esi
0x7A7436: fstp    [esp+1Ch+var_1C]
0x7A7439: call    edx
0x7A743B: fcomp   qword ptr [esp+18h+var_C+4]
0x7A743F: fnstsw  ax
0x7A7441: test    ah, 41h
0x7A7444: jnp     loc_7A73C0
0x7A744A: fld     [esp+18h+var_C]
0x7A744E: pop     edi
0x7A744F: pop     esi
0x7A7450: mov     esp, ebp
0x7A7452: pop     ebp
0x7A7453: retn
0x7A7454: pop     edi
0x7A7455: fstp    st
0x7A7457: fld     [esp+14h+var_C]
0x7A745B: pop     esi
0x7A745C: mov     esp, ebp
0x7A745E: pop     ebp
0x7A745F: retn
