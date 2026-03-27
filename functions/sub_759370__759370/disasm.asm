0x759370: fldz
0x759372: sub     esp, 124h
0x759378: push    ebx
0x759379: mov     ebx, ecx
0x75937B: fcom    dword ptr [ebx+1Ch]
0x75937E: fnstsw  ax
0x759380: test    ah, 44h
0x759383: jnp     loc_759674
0x759389: push    ebp
0x75938A: mov     ebp, [esp+12Ch+arg_4]
0x759391: cmp     word ptr [ebp+48h], 0
0x759396: jz      loc_759667
0x75939C: mov     ecx, [ebx+18h]
0x75939F: test    ecx, ecx
0x7593A1: jz      loc_759667
0x7593A7: cmp     byte ptr [ebx+30h], 0
0x7593AB: jnz     short loc_7593EB
0x7593AD: fcomp   dword ptr [ebx+20h]
0x7593B0: fnstsw  ax
0x7593B2: test    ah, 44h
0x7593B5: jp      short loc_7593ED
0x7593B7: cmp     byte ptr [ebx+24h], 0
0x7593BB: fld     [esp+12Ch+arg_0]
0x7593C2: push    ebp; int
0x7593C3: push    ecx
0x7593C4: fstp    [esp+134h+var_134]; float
0x7593C7: mov     ecx, ebx
0x7593C9: jz      short loc_7593DB
0x7593CB: call    sub_759120
0x7593D0: pop     ebp
0x7593D1: pop     ebx
0x7593D2: add     esp, 124h
0x7593D8: retn    8
0x7593DB: call    sub_759030
0x7593E0: pop     ebp
0x7593E1: pop     ebx
0x7593E2: add     esp, 124h
0x7593E8: retn    8
0x7593EB: fstp    st
0x7593ED: push    esi
0x7593EE: push    edi
0x7593EF: lea     esi, [ecx+64h]
0x7593F2: mov     ecx, 0Dh
0x7593F7: lea     edi, [esp+134h+var_9C]
0x7593FE: rep movsd
0x759400: mov     esi, [ebx+10h]
0x759403: add     esi, 64h ; 'd'
0x759406: mov     ecx, 0Dh
0x75940B: lea     edi, [esp+134h+var_68]
0x759412: lea     eax, [esp+134h+var_34]
0x759419: rep movsd
0x75941B: push    eax
0x75941C: lea     ecx, [esp+138h+var_68]
0x759423: call    sub_718A80
0x759428: lea     ecx, [esp+134h+var_9C]
0x75942F: push    ecx
0x759430: lea     edx, [esp+138h+var_D0]
0x759434: push    edx
0x759435: lea     ecx, [esp+13Ch+var_34]
0x75943C: call    sub_53D7A0
0x759441: cmp     byte ptr [ebx+30h], 0
0x759445: mov     eax, [esp+134h+var_AC]
0x75944C: mov     ecx, [esp+134h+var_A8]
0x759453: mov     edx, [esp+134h+var_A4]
0x75945A: mov     [esp+134h+var_F4], eax
0x75945E: mov     [esp+134h+var_F0], ecx
0x759462: mov     [esp+134h+var_EC], edx
0x759466: jz      short loc_7594A9
0x759468: lea     esi, [ebx+34h]
0x75946B: push    offset Vector3_InitValue?
0x759470: mov     ecx, esi
0x759472: call    sub_8AA390
0x759477: test    al, al
0x759479: jz      short loc_7594A9
0x75947B: push    esi
0x75947C: lea     eax, [esp+138h+var_100]
0x759480: push    eax
0x759481: lea     ecx, [esp+13Ch+var_D0]
0x759485: call    sub_7101F0
0x75948A: mov     ecx, [eax]
0x75948C: mov     edx, [eax+4]
0x75948F: mov     eax, [eax+8]
0x759492: mov     [esp+134h+var_10C], ecx
0x759496: lea     ecx, [esp+134h+var_10C]
0x75949A: mov     [esp+134h+var_108], edx
0x75949E: mov     [esp+134h+var_104], eax
0x7594A2: call    sub_43F350
0x7594A7: fstp    st
0x7594A9: xor     edi, edi
0x7594AB: cmp     [ebp+48h], di
0x7594AF: jbe     loc_75965A
0x7594B5: jmp     short loc_7594C0
0x7594B7: align 10h
0x7594C0: mov     eax, [ebp+5Ch]
0x7594C3: fld     [esp+134h+arg_0]
0x7594CA: movzx   ecx, di
0x7594CD: lea     edx, ds:0[ecx*8]
0x7594D4: sub     edx, ecx
0x7594D6: lea     esi, [eax+edx*4]
0x7594D9: fsub    dword ptr [esi+14h]
0x7594DC: fstp    [esp+134h+var_120]
0x7594E0: fldz
0x7594E2: fcomp   [esp+134h+var_120]
0x7594E6: fnstsw  ax
0x7594E8: test    ah, 44h
0x7594EB: jnp     loc_75964D
0x7594F1: mov     eax, [ebp+1Ch]
0x7594F4: lea     ecx, [ecx+ecx*2]
0x7594F7: mov     edx, [eax+ecx*4]
0x7594FA: lea     eax, [eax+ecx*4]
0x7594FD: mov     ecx, [eax+4]
0x759500: mov     [esp+134h+var_DC], edx
0x759504: fld     [esp+134h+var_DC]
0x759508: fsub    [esp+134h+var_F4]
0x75950C: mov     edx, [eax+8]
0x75950F: mov     [esp+134h+var_D8], ecx
0x759513: mov     [esp+134h+var_D4], edx
0x759517: fstp    [esp+134h+var_E8]
0x75951B: fld     [esp+134h+var_D8]
0x75951F: fsub    [esp+134h+var_F0]
0x759523: fstp    [esp+134h+var_E4]
0x759527: fld     [esp+134h+var_D4]
0x75952B: fsub    [esp+134h+var_EC]
0x75952F: fstp    [esp+134h+var_E0]
0x759533: fld     [esp+134h+var_E4]
0x759537: fld     [esp+134h+var_E8]
0x75953B: fld     [esp+134h+var_E0]
0x75953F: fld     st(1)
0x759541: fmulp   st(2), st
0x759543: fld     st(2)
0x759545: fmulp   st(3), st
0x759547: fxch    st(1)
0x759549: faddp   st(2), st
0x75954B: fmul    st, st
0x75954D: faddp   st(1), st
0x75954F: fstp    [esp+134h+var_124]
0x759553: fld     [esp+134h+var_124]
0x759557: call    __CIsqrt
0x75955C: fstp    [esp+134h+var_124]
0x759560: cmp     byte ptr [ebx+24h], 0
0x759564: fld     [esp+134h+var_124]
0x759568: fstp    [esp+134h+var_124]
0x75956C: jz      short loc_759582
0x75956E: fld     [esp+134h+var_124]
0x759572: fld     dword ptr [ebx+28h]
0x759575: fcompp
0x759577: fnstsw  ax
0x759579: test    ah, 1
0x75957C: jnz     loc_75964D
0x759582: cmp     byte ptr [ebx+30h], 0
0x759586: fld1
0x759588: fstp    [esp+134h+var_11C]
0x75958C: jz      short loc_7595CD
0x75958E: mov     ecx, [esi+4]
0x759591: mov     eax, [esi]
0x759593: mov     edx, [esi+8]
0x759596: mov     [esp+134h+var_114], ecx
0x75959A: lea     ecx, [esp+134h+var_118]
0x75959E: mov     [esp+134h+var_118], eax
0x7595A2: mov     [esp+134h+var_110], edx
0x7595A6: call    sub_43F350
0x7595AB: fstp    st
0x7595AD: fld     [esp+134h+var_114]
0x7595B1: fmul    [esp+134h+var_108]
0x7595B5: fld     [esp+134h+var_10C]
0x7595B9: fmul    [esp+134h+var_118]
0x7595BD: faddp   st(1), st
0x7595BF: fld     [esp+134h+var_110]
0x7595C3: fmul    [esp+134h+var_104]
0x7595C7: faddp   st(1), st
0x7595C9: fstp    [esp+134h+var_11C]
0x7595CD: fld     [esp+134h+var_120]
0x7595D1: fmul    dword ptr [ebx+1Ch]
0x7595D4: fmul    [esp+134h+var_11C]
0x7595D8: fld     dword ptr [ebx+20h]
0x7595DB: fmul    [esp+134h+var_124]
0x7595DF: fadd    qword ptr ds:0A2F928h
0x7595E5: fdivp   st(1), st
0x7595E7: fstp    [esp+134h+var_124]
0x7595EB: fld1
0x7595ED: fld     [esp+134h+var_124]
0x7595F1: fcom    st(1)
0x7595F3: fnstsw  ax
0x7595F5: fstp    st(1)
0x7595F7: test    ah, 5
0x7595FA: jp      short loc_759632
0x7595FC: fld     dword ptr [esi]
0x7595FE: fmul    st, st(1)
0x759600: fstp    [esp+134h+var_100]
0x759604: fld     dword ptr [esi+4]
0x759607: fmul    st, st(1)
0x759609: fstp    [esp+134h+var_FC]
0x75960D: fmul    dword ptr [esi+8]
0x759610: fstp    [esp+134h+var_F8]
0x759614: fld     dword ptr [esi]
0x759616: fsub    [esp+134h+var_100]
0x75961A: fstp    dword ptr [esi]
0x75961C: fld     dword ptr [esi+4]
0x75961F: fsub    [esp+134h+var_FC]
0x759623: fstp    dword ptr [esi+4]
0x759626: fld     dword ptr [esi+8]
0x759629: fsub    [esp+134h+var_F8]
0x75962D: fstp    dword ptr [esi+8]
0x759630: jmp     short loc_75964D
0x759632: mov     eax, ds:0B3F9A8h
0x759637: fstp    st
0x759639: mov     [esi], eax
0x75963B: mov     ecx, ds:0B3F9ACh
0x759641: mov     [esi+4], ecx
0x759644: mov     edx, ds:0B3F9B0h
0x75964A: mov     [esi+8], edx
0x75964D: add     edi, 1
0x759650: cmp     di, [ebp+48h]
0x759654: jb      loc_7594C0
0x75965A: pop     edi
0x75965B: pop     esi
0x75965C: pop     ebp
0x75965D: pop     ebx
0x75965E: add     esp, 124h
0x759664: retn    8
0x759667: pop     ebp
0x759668: fstp    st
0x75966A: pop     ebx
0x75966B: add     esp, 124h
0x759671: retn    8
0x759674: fstp    st
0x759676: pop     ebx
0x759677: add     esp, 124h
0x75967D: retn    8
