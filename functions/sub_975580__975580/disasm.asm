0x975580: sub     esp, 0Ch
0x975583: push    ebx
0x975584: mov     ebx, [esp+10h+arg_0]
0x975588: fld     dword ptr [ebx]
0x97558A: push    esi
0x97558B: fsub    dword ptr [ecx+30h]
0x97558E: push    edi
0x97558F: mov     edi, [esp+18h+arg_4]
0x975593: mov     esi, eax
0x975595: fstp    [esp+18h+var_C]
0x975599: push    edx
0x97559A: fld     dword ptr [ebx+4]
0x97559D: push    esi
0x97559E: fsub    dword ptr [ecx+34h]
0x9755A1: fstp    [esp+20h+var_8]
0x9755A5: fld     dword ptr [ebx+8]
0x9755A8: fsub    dword ptr [ecx+38h]
0x9755AB: fstp    [esp+20h+var_4]
0x9755AF: fld     dword ptr [edi+4]
0x9755B2: fld     [esp+20h+var_C]
0x9755B6: fld     st
0x9755B8: fmulp   st(2), st
0x9755BA: fxch    st(1)
0x9755BC: fstp    [esp+20h+arg_4]
0x9755C0: fld     [esp+20h+arg_4]
0x9755C4: fld     dword ptr [edi]
0x9755C6: fld     [esp+20h+var_8]
0x9755CA: fld     st
0x9755CC: fmulp   st(2), st
0x9755CE: fxch    st(1)
0x9755D0: fstp    [esp+20h+arg_4]
0x9755D4: fld     [esp+20h+arg_4]
0x9755D8: fcomp   st(2)
0x9755DA: fnstsw  ax
0x9755DC: fstp    st(1)
0x9755DE: test    ah, 41h
0x9755E1: jp      short loc_975628
0x9755E3: fstp    st
0x9755E5: fmul    dword ptr [edi+8]
0x9755E8: fstp    [esp+20h+arg_4]
0x9755EC: fld     [esp+20h+arg_4]
0x9755F0: fld     dword ptr [edi]
0x9755F2: fmul    [esp+20h+var_4]
0x9755F6: fstp    [esp+20h+arg_4]
0x9755FA: fld     [esp+20h+arg_4]
0x9755FE: fcompp
0x975600: fnstsw  ax
0x975602: test    ah, 41h
0x975605: jp      short loc_97566B
0x975607: lea     eax, [esp+20h+var_C]
0x97560B: push    eax
0x97560C: push    0
0x97560E: mov     esi, 2
0x975613: mov     edx, 1
0x975618: push    ecx
0x975619: call    sub_974E40
0x97561E: add     esp, 14h
0x975621: pop     edi
0x975622: pop     esi
0x975623: pop     ebx
0x975624: add     esp, 0Ch
0x975627: retn
0x975628: fstp    st(1)
0x97562A: fmul    dword ptr [edi+8]
0x97562D: fstp    [esp+20h+arg_4]
0x975631: fld     [esp+20h+arg_4]
0x975635: fld     dword ptr [edi+4]
0x975638: fmul    [esp+20h+var_4]
0x97563C: fstp    [esp+20h+arg_4]
0x975640: fld     [esp+20h+arg_4]
0x975644: fcompp
0x975646: fnstsw  ax
0x975648: test    ah, 41h
0x97564B: jp      short loc_97566B
0x97564D: lea     eax, [esp+20h+var_C]
0x975651: push    eax
0x975652: push    1
0x975654: xor     esi, esi
0x975656: mov     edx, 2
0x97565B: push    ecx
0x97565C: call    sub_974E40
0x975661: add     esp, 14h
0x975664: pop     edi
0x975665: pop     esi
0x975666: pop     ebx
0x975667: add     esp, 0Ch
0x97566A: retn
0x97566B: lea     edx, [esp+20h+var_C]
0x97566F: push    edx
0x975670: push    2
0x975672: xor     edx, edx
0x975674: mov     esi, 1
0x975679: push    ecx
0x97567A: call    sub_974E40
0x97567F: add     esp, 14h
0x975682: pop     edi
0x975683: pop     esi
0x975684: pop     ebx
0x975685: add     esp, 0Ch
0x975688: retn
