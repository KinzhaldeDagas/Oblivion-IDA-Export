0x5334F0: push    ebp
0x5334F1: mov     ebp, esp
0x5334F3: and     esp, 0FFFFFFF0h
0x5334F6: push    0FFFFFFFFh
0x5334F8: push    offset SEH_5334F0
0x5334FD: mov     eax, large fs:0
0x533503: push    eax
0x533504: sub     esp, 158h
0x53350A: mov     eax, ds:0B30AACh
0x53350F: xor     eax, esp
0x533511: mov     [esp+164h+var_14], eax
0x533518: push    ebx
0x533519: push    esi
0x53351A: push    edi
0x53351B: mov     eax, ds:0B30AACh
0x533520: xor     eax, esp
0x533522: push    eax
0x533523: lea     eax, [esp+174h+var_C]
0x53352A: mov     large fs:0, eax
0x533530: mov     esi, [ebp+arg_0]
0x533533: xor     ebx, ebx
0x533535: xor     al, al
0x533537: cmp     [ecx+14h], bx
0x53353B: mov     [esp+174h+var_14C], ecx
0x53353F: mov     [esp+174h+var_148], esi
0x533543: jnz     loc_5337AB
0x533549: cmp     esi, ebx
0x53354B: jz      loc_5337A9
0x533551: lea     ecx, [esp+174h+var_100]
0x533555: call    sub_8A5790
0x53355A: fldz
0x53355C: mov     eax, 10011h
0x533561: fst     [esp+174h+var_50]
0x533568: fld     dword ptr ds:0B114A4h
0x53356E: mov     [esp+174h+var_100], eax
0x533572: mov     [esp+174h+var_E0], eax
0x533579: fstp    [esp+174h+var_44]
0x533580: xor     eax, eax
0x533582: cmp     [ebp+arg_4], ebx
0x533585: mov     [esp+174h+var_4], ebx
0x53358C: mov     [esp+174h+var_30], 7
0x533594: mov     [esp+174h+var_150], eax
0x533598: jbe     loc_533756
0x53359E: fld     dword ptr ds:0A5611Ch
0x5335A4: jmp     short loc_5335BE
0x5335A6: jmp     short loc_5335B0
0x5335A8: align 10h
0x5335B0: fld     dword ptr ds:0A5611Ch
0x5335B6: mov     esi, [esp+174h+var_148]
0x5335BA: fldz
0x5335BC: fxch    st(1)
0x5335BE: mov     eax, [esi+eax*4]
0x5335C1: cmp     eax, ebx
0x5335C3: jz      loc_53373C
0x5335C9: mov     eax, [eax+0B4h]
0x5335CF: fxch    st(1)
0x5335D1: fst     [esp+174h+var_118]
0x5335D5: mov     ecx, 11h
0x5335DA: fld     dword ptr ds:0A30634h
0x5335E0: mov     [esp+174h+var_110], ebx
0x5335E4: fstp    [esp+174h+var_114]
0x5335E8: mov     [esp+174h+var_11C], ecx
0x5335EC: fxch    st(1)
0x5335EE: mov     [esp+174h+var_120], ecx
0x5335F2: fst     [esp+174h+var_130]
0x5335F6: mov     [esp+174h+var_140], ebx
0x5335FA: fld     dword ptr ds:0A56118h
0x533600: mov     [esp+174h+var_13C], ebx
0x533604: fstp    [esp+174h+var_12C]
0x533608: lea     ecx, [esp+174h+var_130]
0x53360C: fstp    [esp+174h+var_128]
0x533610: fstp    [esp+174h+var_124]
0x533614: mov     eax, [eax+1Ch]
0x533617: mov     [esp+174h+var_110], eax
0x53361B: call    sub_8B0C60
0x533620: push    14h; Size
0x533622: call    FormHeapAlloc
0x533627: add     esp, 4
0x53362A: mov     [esp+174h+var_154], eax
0x53362E: cmp     eax, ebx
0x533630: mov     byte ptr [esp+174h+var_4], 1
0x533638: jz      short loc_53364E
0x53363A: lea     ecx, [esp+174h+var_140]
0x53363E: push    ecx
0x53363F: mov     ecx, eax
0x533641: call    sub_532CD0
0x533646: mov     esi, eax
0x533648: mov     [esp+174h+var_158], esi
0x53364C: jmp     short loc_533654
0x53364E: mov     [esp+174h+var_158], ebx
0x533652: mov     esi, ebx
0x533654: cmp     esi, ebx
0x533656: mov     [esp+174h+var_144], esi
0x53365A: jz      short loc_533666
0x53365C: lea     edx, [esi+4]
0x53365F: push    edx; lpAddend
0x533660: call    dword ptr ds:0A28078h
0x533666: mov     eax, [esi+8]
0x533669: push    1Ch; Size
0x53366B: mov     byte ptr [esp+178h+var_4], 2
0x533673: mov     [esp+178h+var_FC], eax
0x533677: mov     [esp+178h+var_DC], eax
0x53367E: call    FormHeapAlloc
0x533683: add     esp, 4
0x533686: mov     [esp+174h+var_154], eax
0x53368A: cmp     eax, ebx
0x53368C: mov     byte ptr [esp+174h+var_4], 3
0x533694: jz      short loc_5336A6
0x533696: lea     ecx, [esp+174h+var_100]
0x53369A: push    ecx
0x53369B: mov     ecx, eax
0x53369D: call    sub_533290
0x5336A2: mov     edi, eax
0x5336A4: jmp     short loc_5336A8
0x5336A6: xor     edi, edi
0x5336A8: cmp     edi, ebx
0x5336AA: mov     [esp+174h+var_154], edi
0x5336AE: jz      short loc_5336BA
0x5336B0: lea     edx, [edi+4]
0x5336B3: push    edx; lpAddend
0x5336B4: call    dword ptr ds:0A28078h
0x5336BA: mov     esi, [esp+174h+var_14C]
0x5336BE: movzx   ebx, word ptr [esi+12h]
0x5336C2: movzx   eax, word ptr [esi+10h]
0x5336C6: add     esi, 8
0x5336C9: cmp     ebx, eax
0x5336CB: mov     byte ptr [esp+174h+var_4], 4
0x5336D3: jb      short loc_5336E3
0x5336D5: movzx   ecx, word ptr [esi+0Eh]
0x5336D9: add     ecx, ebx
0x5336DB: push    ecx
0x5336DC: mov     ecx, esi
0x5336DE: call    sub_523B10
0x5336E3: lea     edx, [esp+174h+var_154]
0x5336E7: push    edx
0x5336E8: push    ebx
0x5336E9: mov     ecx, esi
0x5336EB: call    sub_5331C0
0x5336F0: test    edi, edi
0x5336F2: mov     byte ptr [esp+174h+var_4], 2
0x5336FA: jz      short loc_533714
0x5336FC: lea     eax, [edi+4]
0x5336FF: push    eax; lpAddend
0x533700: call    dword ptr ds:0A2807Ch
0x533706: test    eax, eax
0x533708: jnz     short loc_533714
0x53370A: mov     edx, [edi]
0x53370C: mov     eax, [edx]
0x53370E: push    1
0x533710: mov     ecx, edi
0x533712: call    eax
0x533714: mov     esi, [esp+174h+var_158]
0x533718: lea     ecx, [esi+4]
0x53371B: push    ecx; lpAddend
0x53371C: mov     byte ptr [esp+178h+var_4], 0
0x533724: call    dword ptr ds:0A2807Ch
0x53372A: test    eax, eax
0x53372C: jnz     short loc_533738
0x53372E: mov     edx, [esi]
0x533730: mov     eax, [edx]
0x533732: push    1
0x533734: mov     ecx, esi
0x533736: call    eax
0x533738: xor     ebx, ebx
0x53373A: jmp     short loc_533740
0x53373C: fstp    st(1)
0x53373E: fstp    st
0x533740: mov     eax, [esp+174h+var_150]
0x533744: add     eax, 1
0x533747: cmp     eax, [ebp+arg_4]
0x53374A: mov     [esp+174h+var_150], eax
0x53374E: jb      loc_5335B0
0x533754: jmp     short loc_533758
0x533756: fstp    st
0x533758: mov     eax, [esp+174h+var_EC]
0x53375F: test    eax, eax
0x533761: mov     [esp+174h+var_4], 0FFFFFFFFh
0x53376C: js      short loc_5337A9
0x53376E: mov     ecx, ds:0BA9DE4h
0x533774: mov     edx, large fs:2Ch
0x53377B: mov     ecx, [edx+ecx*4]
0x53377E: mov     ecx, [ecx+19Ch]
0x533784: cmp     ecx, ebx
0x533786: jnz     short loc_53378E
0x533788: mov     ecx, ds:0BA7D9Ch
0x53378E: mov     edx, [esp+174h+var_F4]
0x533795: and     eax, 3FFFFFFFh
0x53379A: add     eax, eax
0x53379C: add     eax, eax
0x53379E: push    14h
0x5337A0: add     eax, eax
0x5337A2: push    eax
0x5337A3: push    edx
0x5337A4: call    sub_8A75D0
0x5337A9: mov     al, 1
0x5337AB: mov     ecx, [esp+174h+var_C]
0x5337B2: mov     large fs:0, ecx
0x5337B9: pop     ecx
0x5337BA: pop     edi
0x5337BB: pop     esi
0x5337BC: pop     ebx
0x5337BD: mov     ecx, [esp+164h+var_14]
0x5337C4: xor     ecx, esp
0x5337C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5337CB: mov     esp, ebp
0x5337CD: pop     ebp
0x5337CE: retn    8
