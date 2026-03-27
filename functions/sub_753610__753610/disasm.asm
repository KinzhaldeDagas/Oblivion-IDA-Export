0x753610: sub     esp, 104h
0x753616: push    ebx
0x753617: mov     ebx, ecx
0x753619: push    ebp
0x75361A: push    esi
0x75361B: mov     esi, [ebx+18h]
0x75361E: push    edi
0x75361F: add     esi, 64h ; 'd'
0x753622: mov     ecx, 0Dh
0x753627: lea     edi, [esp+114h+var_68]
0x75362E: rep movsd
0x753630: mov     esi, [ebx+10h]
0x753633: add     esi, 64h ; 'd'
0x753636: mov     ecx, 0Dh
0x75363B: lea     edi, [esp+114h+var_9C]
0x75363F: lea     eax, [esp+114h+var_34]
0x753646: rep movsd
0x753648: push    eax
0x753649: lea     ecx, [esp+118h+var_9C]
0x75364D: call    sub_718A80
0x753652: lea     ecx, [esp+114h+var_68]
0x753659: push    ecx
0x75365A: lea     edx, [esp+118h+var_D0]
0x75365E: push    edx
0x75365F: lea     ecx, [esp+11Ch+var_34]
0x753666: call    sub_53D7A0
0x75366B: mov     eax, [esp+114h+var_AC]
0x75366F: mov     ecx, [esp+114h+var_A8]
0x753673: mov     edx, [esp+114h+var_A4]
0x753677: mov     [esp+114h+var_E8], eax
0x75367B: mov     [esp+114h+var_E4], ecx
0x75367F: lea     eax, [ebx+30h]
0x753682: push    eax
0x753683: lea     ecx, [esp+118h+var_DC]
0x753687: push    ecx
0x753688: lea     ecx, [esp+11Ch+var_D0]
0x75368C: mov     [esp+11Ch+var_E0], edx
0x753690: call    sub_7101F0
0x753695: lea     ecx, [esp+114h+var_DC]
0x753699: call    sub_43F350
0x75369E: fstp    st
0x7536A0: mov     edi, [esp+114h+arg_4]
0x7536A7: xor     ebp, ebp
0x7536A9: cmp     [edi+48h], bp
0x7536AD: jbe     loc_753775
0x7536B3: mov     eax, [edi+5Ch]
0x7536B6: fld     [esp+114h+arg_0]
0x7536BD: movzx   ecx, bp
0x7536C0: lea     edx, ds:0[ecx*8]
0x7536C7: sub     edx, ecx
0x7536C9: lea     esi, [eax+edx*4]
0x7536CC: fsub    dword ptr [esi+14h]
0x7536CF: fstp    [esp+114h+var_104]
0x7536D3: fldz
0x7536D5: fcomp   [esp+114h+var_104]
0x7536D9: fnstsw  ax
0x7536DB: test    ah, 44h
0x7536DE: jnp     loc_753768
0x7536E4: mov     eax, [edi+1Ch]
0x7536E7: lea     ecx, [ecx+ecx*2]
0x7536EA: mov     edx, [eax+ecx*4]
0x7536ED: lea     eax, [eax+ecx*4]
0x7536F0: mov     ecx, [eax+4]
0x7536F3: mov     [esp+114h+var_F4], edx
0x7536F7: mov     edx, [eax+8]
0x7536FA: mov     [esp+114h+var_F0], ecx
0x7536FE: lea     eax, [esp+114h+var_F4]
0x753702: push    eax
0x753703: lea     ecx, [esp+118h+var_DC]
0x753707: push    ecx
0x753708: mov     [esp+11Ch+var_EC], edx
0x75370C: lea     edx, [esp+11Ch+var_E8]
0x753710: push    edx
0x753711: lea     eax, [esp+120h+var_100]
0x753715: push    eax
0x753716: mov     ecx, ebx
0x753718: call    sub_753280
0x75371D: fld     dword ptr [ebx+1Ch]
0x753720: fmul    [esp+114h+var_104]
0x753724: fstp    [esp+114h+var_104]
0x753728: fld     [esp+114h+var_100]
0x75372C: fld     [esp+114h+var_104]
0x753730: fld     st
0x753732: fmulp   st(2), st
0x753734: fxch    st(1)
0x753736: fstp    [esp+114h+var_100]
0x75373A: fld     [esp+114h+var_FC]
0x75373E: fmul    st, st(1)
0x753740: fstp    [esp+114h+var_FC]
0x753744: fmul    [esp+114h+var_F8]
0x753748: fstp    [esp+114h+var_F8]
0x75374C: fld     dword ptr [esi]
0x75374E: fadd    [esp+114h+var_100]
0x753752: fstp    dword ptr [esi]
0x753754: fld     dword ptr [esi+4]
0x753757: fadd    [esp+114h+var_FC]
0x75375B: fstp    dword ptr [esi+4]
0x75375E: fld     [esp+114h+var_F8]
0x753762: fadd    dword ptr [esi+8]
0x753765: fstp    dword ptr [esi+8]
0x753768: add     ebp, 1
0x75376B: cmp     bp, [edi+48h]
0x75376F: jb      loc_7536B3
0x753775: pop     edi
0x753776: pop     esi
0x753777: pop     ebp
0x753778: pop     ebx
0x753779: add     esp, 104h
0x75377F: retn    8
