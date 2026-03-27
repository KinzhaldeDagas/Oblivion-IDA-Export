0x75B2C0: sub     esp, 148h
0x75B2C6: mov     eax, ds:0B3F9A8h
0x75B2CB: mov     edx, ds:0B3F9B0h
0x75B2D1: push    ebx
0x75B2D2: push    ebp
0x75B2D3: mov     ebx, ecx
0x75B2D5: mov     ecx, ds:0B3F9ACh
0x75B2DB: push    esi
0x75B2DC: lea     ebp, [ebx+1Ch]
0x75B2DF: push    edi
0x75B2E0: mov     edi, [esp+158h+arg_4]
0x75B2E7: cmp     word ptr [edi+48h], 0
0x75B2EC: mov     dword ptr [esp+158h+var_110], eax
0x75B2F0: mov     eax, [ebp+0]
0x75B2F3: mov     dword ptr [esp+158h+var_110+4], ecx
0x75B2F7: mov     ecx, [ebp+4]
0x75B2FA: mov     [esp+158h+var_108], edx
0x75B2FE: mov     edx, [ebp+8]
0x75B301: mov     [esp+158h+var_138], eax
0x75B305: mov     [esp+158h+var_134], ecx
0x75B309: mov     [esp+158h+var_130], edx
0x75B30D: jbe     loc_75B3CC
0x75B313: mov     eax, [ebx+18h]
0x75B316: test    eax, eax
0x75B318: jz      loc_75B3CC
0x75B31E: lea     esi, [eax+64h]
0x75B321: mov     ecx, 0Dh
0x75B326: lea     edi, [esp+158h+var_9C]
0x75B32D: rep movsd
0x75B32F: mov     esi, [ebx+10h]
0x75B332: add     esi, 64h ; 'd'
0x75B335: mov     ecx, 0Dh
0x75B33A: lea     edi, [esp+158h+var_68]
0x75B341: lea     eax, [esp+158h+var_34]
0x75B348: rep movsd
0x75B34A: push    eax
0x75B34B: lea     ecx, [esp+15Ch+var_68]
0x75B352: call    sub_718A80
0x75B357: lea     ecx, [esp+158h+var_9C]
0x75B35E: push    ecx
0x75B35F: lea     edx, [esp+15Ch+var_D0]
0x75B366: push    edx
0x75B367: lea     ecx, [esp+160h+var_34]
0x75B36E: call    sub_53D7A0
0x75B373: mov     eax, dword ptr [esp+158h+var_AC]
0x75B37A: mov     ecx, dword ptr [esp+158h+var_AC+4]
0x75B381: mov     edx, [esp+158h+var_A4]
0x75B388: mov     dword ptr [esp+158h+var_110], eax
0x75B38C: push    ebp
0x75B38D: lea     eax, [esp+15Ch+var_100]
0x75B391: mov     dword ptr [esp+15Ch+var_110+4], ecx
0x75B395: push    eax
0x75B396: lea     ecx, [esp+160h+var_D0]
0x75B39D: mov     [esp+160h+var_108], edx
0x75B3A1: call    sub_7101F0
0x75B3A6: mov     ecx, [eax]
0x75B3A8: mov     edx, [eax+4]
0x75B3AB: mov     eax, [eax+8]
0x75B3AE: mov     [esp+158h+var_138], ecx
0x75B3B2: lea     ecx, [esp+158h+var_138]
0x75B3B6: mov     [esp+158h+var_134], edx
0x75B3BA: mov     [esp+158h+var_130], eax
0x75B3BE: call    sub_43F350
0x75B3C3: fstp    st
0x75B3C5: mov     edi, [esp+158h+arg_4]
0x75B3CC: xor     eax, eax
0x75B3CE: cmp     [edi+48h], ax
0x75B3D2: mov     [esp+158h+var_104], eax
0x75B3D6: jbe     loc_75B729
0x75B3DC: lea     esp, [esp+0]
0x75B3E0: fld     [esp+158h+arg_0]
0x75B3E7: movzx   ecx, ax
0x75B3EA: mov     eax, [edi+5Ch]
0x75B3ED: lea     edx, ds:0[ecx*8]
0x75B3F4: sub     edx, ecx
0x75B3F6: lea     ebp, [eax+edx*4]
0x75B3F9: fld     dword ptr [ebp+14h]
0x75B3FC: fstp    [esp+158h+var_148]
0x75B400: fld     [esp+158h+var_148]
0x75B404: fcom    st(1)
0x75B406: fnstsw  ax
0x75B408: test    ah, 5
0x75B40B: jp      loc_75B710
0x75B411: mov     edx, [edi+1Ch]
0x75B414: fsubp   st(1), st
0x75B416: lea     ecx, [ecx+ecx*2]
0x75B419: lea     eax, [edx+ecx*4]
0x75B41C: fstp    [esp+158h+var_120]
0x75B420: fld     dword ptr [eax]
0x75B422: fsub    dword ptr [esp+158h+var_110]
0x75B426: fstp    [esp+158h+var_12C]
0x75B42A: fld     dword ptr [eax+4]
0x75B42D: fsub    dword ptr [esp+158h+var_110+4]
0x75B431: fstp    [esp+158h+var_128]
0x75B435: fld     dword ptr [eax+8]
0x75B438: fsub    [esp+158h+var_108]
0x75B43C: fstp    [esp+158h+var_124]
0x75B440: fld     [esp+158h+var_128]
0x75B444: fld     [esp+158h+var_12C]
0x75B448: fld     [esp+158h+var_124]
0x75B44C: fld     st(1)
0x75B44E: fmulp   st(2), st
0x75B450: fld     st(2)
0x75B452: fmulp   st(3), st
0x75B454: fxch    st(1)
0x75B456: faddp   st(2), st
0x75B458: fmul    st, st
0x75B45A: faddp   st(1), st
0x75B45C: fstp    [esp+158h+var_148]
0x75B460: fld     [esp+158h+var_148]
0x75B464: call    __CIsqrt
0x75B469: fstp    [esp+158h+var_148]
0x75B46D: fld     [esp+158h+var_148]
0x75B471: mov     esi, [ebx+30h]
0x75B474: test    esi, esi
0x75B476: fstp    [esp+158h+var_148]
0x75B47A: fld     [esp+158h+var_148]
0x75B47E: jz      short loc_75B490
0x75B480: fld     dword ptr [ebx+28h]
0x75B483: fcomp   st(1)
0x75B485: fnstsw  ax
0x75B487: test    ah, 1
0x75B48A: jnz     loc_75B712
0x75B490: mov     eax, [ebx+34h]
0x75B493: sub     eax, 0
0x75B496: jz      loc_75B641
0x75B49C: sub     eax, 1
0x75B49F: jz      loc_75B541
0x75B4A5: sub     eax, 1
0x75B4A8: jnz     loc_75B683
0x75B4AE: fstp    st
0x75B4B0: fld     [esp+158h+var_134]
0x75B4B4: fld     st
0x75B4B6: fmul    [esp+158h+var_128]
0x75B4BA: fld     [esp+158h+var_12C]
0x75B4BE: fld     [esp+158h+var_138]
0x75B4C2: fld     st
0x75B4C4: fmulp   st(2), st
0x75B4C6: fxch    st(2)
0x75B4C8: faddp   st(1), st
0x75B4CA: fld     [esp+158h+var_130]
0x75B4CE: fld     st
0x75B4D0: fmul    [esp+158h+var_124]
0x75B4D4: faddp   st(2), st
0x75B4D6: fxch    st(1)
0x75B4D8: fstp    [esp+158h+var_148]
0x75B4DC: fldz
0x75B4DE: fld     [esp+158h+var_148]
0x75B4E2: fcom    st(1)
0x75B4E4: fnstsw  ax
0x75B4E6: fstp    st(1)
0x75B4E8: test    ah, 5
0x75B4EB: jp      short loc_75B52A
0x75B4ED: fchs
0x75B4EF: fstp    [esp+158h+var_148]
0x75B4F3: fxch    st(1)
0x75B4F5: fchs
0x75B4F7: fstp    [esp+158h+var_DC]
0x75B4FB: mov     eax, [esp+158h+var_DC]
0x75B4FF: fxch    st(1)
0x75B501: fchs
0x75B503: fstp    [esp+158h+var_D8]
0x75B50A: mov     ecx, [esp+158h+var_D8]
0x75B511: fchs
0x75B513: fstp    [esp+158h+var_D4]
0x75B51A: mov     edx, [esp+158h+var_D4]
0x75B521: fld     [esp+158h+var_148]
0x75B525: jmp     loc_75B677
0x75B52A: mov     eax, [esp+158h+var_138]
0x75B52E: fstp    st(1)
0x75B530: mov     ecx, [esp+158h+var_134]
0x75B534: fstp    st(2)
0x75B536: mov     edx, [esp+158h+var_130]
0x75B53A: fstp    st
0x75B53C: jmp     loc_75B677
0x75B541: fstp    st
0x75B543: fld     [esp+158h+var_134]
0x75B547: fld     st
0x75B549: fld     [esp+158h+var_128]
0x75B54D: fld     st
0x75B54F: fmulp   st(2), st
0x75B551: fld     [esp+158h+var_12C]
0x75B555: fld     st
0x75B557: fmul    [esp+158h+var_138]
0x75B55B: faddp   st(3), st
0x75B55D: fld     [esp+158h+var_130]
0x75B561: fld     st
0x75B563: fld     [esp+158h+var_124]
0x75B567: fld     st
0x75B569: fmulp   st(2), st
0x75B56B: fxch    st(5)
0x75B56D: faddp   st(1), st
0x75B56F: fstp    [esp+158h+var_148]
0x75B573: fld     [esp+158h+var_138]
0x75B577: fld     [esp+158h+var_148]
0x75B57B: fld     st
0x75B57D: fmulp   st(2), st
0x75B57F: fxch    st(1)
0x75B581: fstp    [esp+158h+var_E8]
0x75B585: fld     st
0x75B587: fmulp   st(6), st
0x75B589: fxch    st(5)
0x75B58B: fstp    [esp+158h+var_E4]
0x75B58F: fmulp   st(4), st
0x75B591: fxch    st(3)
0x75B593: fstp    [esp+158h+var_E0]
0x75B597: fld     [esp+158h+var_E8]
0x75B59B: fsubp   st(3), st
0x75B59D: fxch    st(2)
0x75B59F: fstp    [esp+158h+var_11C]
0x75B5A3: mov     eax, [esp+158h+var_11C]
0x75B5A7: fld     [esp+158h+var_E4]
0x75B5AB: mov     [esp+158h+var_144], eax
0x75B5AF: fsubp   st(2), st
0x75B5B1: fxch    st(1)
0x75B5B3: fstp    [esp+158h+var_118]
0x75B5B7: mov     ecx, [esp+158h+var_118]
0x75B5BB: mov     [esp+158h+var_140], ecx
0x75B5BF: fsub    [esp+158h+var_E0]
0x75B5C3: fstp    [esp+158h+var_114]
0x75B5C7: mov     edx, [esp+158h+var_114]
0x75B5CB: fld     [esp+158h+var_118]
0x75B5CF: mov     [esp+158h+var_13C], edx
0x75B5D3: fld     [esp+158h+var_11C]
0x75B5D7: fld     [esp+158h+var_114]
0x75B5DB: fld     st(1)
0x75B5DD: fmulp   st(2), st
0x75B5DF: fld     st(2)
0x75B5E1: fmulp   st(3), st
0x75B5E3: fxch    st(1)
0x75B5E5: faddp   st(2), st
0x75B5E7: fmul    st, st
0x75B5E9: faddp   st(1), st
0x75B5EB: fstp    [esp+158h+var_148]
0x75B5EF: fld     [esp+158h+var_148]
0x75B5F3: call    __CIsqrt
0x75B5F8: fstp    [esp+158h+var_148]
0x75B5FC: fld     [esp+158h+var_148]
0x75B600: fstp    [esp+158h+var_148]
0x75B604: fldz
0x75B606: fld     [esp+158h+var_148]
0x75B60A: fucom   st(1)
0x75B60C: fnstsw  ax
0x75B60E: fstp    st(1)
0x75B610: test    ah, 44h
0x75B613: jnp     short loc_75B683
0x75B615: fld     st
0x75B617: fld1
0x75B619: fdivrp  st(1), st
0x75B61B: fstp    [esp+158h+var_148]
0x75B61F: fld     [esp+158h+var_148]
0x75B623: fld     st
0x75B625: fmul    [esp+158h+var_11C]
0x75B629: fstp    [esp+158h+var_144]
0x75B62D: fld     [esp+158h+var_140]
0x75B631: fmul    st, st(1)
0x75B633: fstp    [esp+158h+var_140]
0x75B637: fmul    [esp+158h+var_13C]
0x75B63B: fstp    [esp+158h+var_13C]
0x75B63F: jmp     short loc_75B683
0x75B641: fld     st
0x75B643: fld1
0x75B645: fdivrp  st(1), st
0x75B647: fstp    [esp+158h+var_148]
0x75B64B: fld     [esp+158h+var_148]
0x75B64F: fld     st
0x75B651: fmul    [esp+158h+var_12C]
0x75B655: fstp    [esp+158h+var_F4]
0x75B659: mov     eax, [esp+158h+var_F4]
0x75B65D: fld     [esp+158h+var_128]
0x75B661: fmul    st, st(1)
0x75B663: fstp    [esp+158h+var_F0]
0x75B667: mov     ecx, [esp+158h+var_F0]
0x75B66B: fmul    [esp+158h+var_124]
0x75B66F: fstp    [esp+158h+var_EC]
0x75B673: mov     edx, [esp+158h+var_EC]
0x75B677: mov     [esp+158h+var_144], eax
0x75B67B: mov     [esp+158h+var_140], ecx
0x75B67F: mov     [esp+158h+var_13C], edx
0x75B683: cmp     esi, 1
0x75B686: fld1
0x75B688: fstp    [esp+158h+var_148]
0x75B68C: jnz     short loc_75B69A
0x75B68E: fsubr   dword ptr [ebx+28h]
0x75B691: fdiv    dword ptr [ebx+28h]
0x75B694: fstp    [esp+158h+var_148]
0x75B698: jmp     short loc_75B6C1
0x75B69A: cmp     esi, 2
0x75B69D: jnz     short loc_75B6BF
0x75B69F: fchs
0x75B6A1: fdiv    dword ptr [ebx+28h]
0x75B6A4: fstp    [esp+158h+var_148]
0x75B6A8: fld     [esp+158h+var_148]
0x75B6AC: call    __CIexp
0x75B6B1: fstp    [esp+158h+var_148]
0x75B6B5: fld     [esp+158h+var_148]
0x75B6B9: fstp    [esp+158h+var_148]
0x75B6BD: jmp     short loc_75B6C1
0x75B6BF: fstp    st
0x75B6C1: fld     dword ptr [ebx+2Ch]
0x75B6C4: fmul    [esp+158h+var_148]
0x75B6C8: fmul    [esp+158h+var_120]
0x75B6CC: fstp    [esp+158h+var_120]
0x75B6D0: fld     [esp+158h+var_120]
0x75B6D4: fld     st
0x75B6D6: fmul    [esp+158h+var_144]
0x75B6DA: fstp    [esp+158h+var_100]
0x75B6DE: fld     [esp+158h+var_140]
0x75B6E2: fmul    st, st(1)
0x75B6E4: fstp    [esp+158h+var_FC]
0x75B6E8: fmul    [esp+158h+var_13C]
0x75B6EC: fstp    [esp+158h+var_F8]
0x75B6F0: fld     dword ptr [ebp+0]
0x75B6F3: fadd    [esp+158h+var_100]
0x75B6F7: fstp    dword ptr [ebp+0]
0x75B6FA: fld     dword ptr [ebp+4]
0x75B6FD: fadd    [esp+158h+var_FC]
0x75B701: fstp    dword ptr [ebp+4]
0x75B704: fld     dword ptr [ebp+8]
0x75B707: fadd    [esp+158h+var_F8]
0x75B70B: fstp    dword ptr [ebp+8]
0x75B70E: jmp     short loc_75B714
0x75B710: fstp    st
0x75B712: fstp    st
0x75B714: mov     eax, [esp+158h+var_104]
0x75B718: add     eax, 1
0x75B71B: cmp     ax, [edi+48h]
0x75B71F: mov     [esp+158h+var_104], eax
0x75B723: jb      loc_75B3E0
0x75B729: pop     edi
0x75B72A: pop     esi
0x75B72B: pop     ebp
0x75B72C: pop     ebx
0x75B72D: add     esp, 148h
0x75B733: retn    8
