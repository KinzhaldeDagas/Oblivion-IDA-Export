0x7541D0: fld     [esp+arg_0]
0x7541D4: sub     esp, 0FCh
0x7541DA: push    ebp
0x7541DB: mov     ebp, ecx
0x7541DD: fld     dword ptr [ebp+38h]
0x7541E0: fcomp   st(1)
0x7541E2: fnstsw  ax
0x7541E4: test    ah, 41h
0x7541E7: jp      short loc_7541FC
0x7541E9: fld     dword ptr [ebp+34h]
0x7541EC: fadd    dword ptr [ebp+38h]
0x7541EF: fcomp   st(1)
0x7541F1: fnstsw  ax
0x7541F3: test    ah, 41h
0x7541F6: jz      loc_754437
0x7541FC: fst     dword ptr [ebp+38h]
0x7541FF: fldz
0x754201: fcom    dword ptr [ebp+1Ch]
0x754204: fnstsw  ax
0x754206: test    ah, 44h
0x754209: jnp     loc_754435
0x75420F: push    ebx
0x754210: mov     ebx, [esp+104h+arg_4]
0x754217: cmp     word ptr [ebx+48h], 0
0x75421C: jz      loc_754426
0x754222: mov     ecx, [ebp+18h]
0x754225: test    ecx, ecx
0x754227: jz      loc_754426
0x75422D: fcomp   dword ptr [ebp+20h]
0x754230: fnstsw  ax
0x754232: test    ah, 44h
0x754235: jp      short loc_754264
0x754237: cmp     byte ptr [ebp+24h], 0
0x75423B: push    ebx
0x75423C: push    ecx
0x75423D: fstp    [esp+10Ch+var_10C]
0x754240: mov     ecx, ebp
0x754242: jz      short loc_754254
0x754244: call    sub_753F80
0x754249: pop     ebx
0x75424A: pop     ebp
0x75424B: add     esp, 0FCh
0x754251: retn    8
0x754254: call    sub_753E20
0x754259: pop     ebx
0x75425A: pop     ebp
0x75425B: add     esp, 0FCh
0x754261: retn    8
0x754264: push    esi
0x754265: fstp    st
0x754267: push    edi
0x754268: lea     esi, [ecx+64h]
0x75426B: mov     ecx, 0Dh
0x754270: lea     edi, [esp+10Ch+var_68]
0x754277: rep movsd
0x754279: mov     esi, [ebp+10h]
0x75427C: add     esi, 64h ; 'd'
0x75427F: mov     ecx, 0Dh
0x754284: lea     edi, [esp+10Ch+var_9C]
0x754288: lea     eax, [esp+10Ch+var_34]
0x75428F: rep movsd
0x754291: push    eax
0x754292: lea     ecx, [esp+110h+var_9C]
0x754296: call    sub_718A80
0x75429B: lea     ecx, [esp+10Ch+var_68]
0x7542A2: push    ecx
0x7542A3: lea     edx, [esp+110h+var_D0]
0x7542A7: push    edx
0x7542A8: lea     ecx, [esp+114h+var_34]
0x7542AF: call    sub_53D7A0
0x7542B4: xor     edi, edi
0x7542B6: cmp     [ebx+48h], di
0x7542BA: jbe     loc_754419
0x7542C0: mov     edx, [ebx+5Ch]
0x7542C3: movzx   eax, di
0x7542C6: lea     ecx, ds:0[eax*8]
0x7542CD: sub     ecx, eax
0x7542CF: lea     esi, [edx+ecx*4]
0x7542D2: mov     ecx, [ebx+1Ch]
0x7542D5: lea     eax, [eax+eax*2]
0x7542D8: mov     edx, [ecx+eax*4+4]
0x7542DC: lea     eax, [ecx+eax*4]
0x7542DF: mov     ecx, [eax]
0x7542E1: mov     eax, [eax+8]
0x7542E4: mov     [esp+10Ch+var_DC], ecx
0x7542E8: mov     [esp+10Ch+var_D8], edx
0x7542EC: fld     [esp+10Ch+var_DC]
0x7542F0: mov     [esp+10Ch+var_D4], eax
0x7542F4: fsub    [esp+10Ch+var_AC]
0x7542F8: fstp    [esp+10Ch+var_E8]
0x7542FC: fld     [esp+10Ch+var_D8]
0x754300: fsub    [esp+10Ch+var_A8]
0x754304: fstp    [esp+10Ch+var_E4]
0x754308: fld     [esp+10Ch+var_D4]
0x75430C: fsub    [esp+10Ch+var_A4]
0x754310: fstp    [esp+10Ch+var_E0]
0x754314: fld     [esp+10Ch+var_E4]
0x754318: fld     [esp+10Ch+var_E8]
0x75431C: fld     [esp+10Ch+var_E0]
0x754320: fld     st(1)
0x754322: fmulp   st(2), st
0x754324: fld     st(2)
0x754326: fmulp   st(3), st
0x754328: fxch    st(1)
0x75432A: faddp   st(2), st
0x75432C: fmul    st, st
0x75432E: faddp   st(1), st
0x754330: fstp    [esp+10Ch+var_F8]
0x754334: fld     [esp+10Ch+var_F8]
0x754338: call    __CIsqrt
0x75433D: fstp    [esp+10Ch+var_F8]
0x754341: cmp     byte ptr [ebp+24h], 0
0x754345: fld     [esp+10Ch+var_F8]
0x754349: fstp    [esp+10Ch+var_F8]
0x75434D: jz      short loc_754363
0x75434F: fld     [esp+10Ch+var_F8]
0x754353: fld     dword ptr [ebp+28h]
0x754356: fcompp
0x754358: fnstsw  ax
0x75435A: test    ah, 1
0x75435D: jnz     loc_75440C
0x754363: call    _rand
0x754368: mov     [esp+10Ch+var_FC], eax
0x75436C: fild    [esp+10Ch+var_FC]
0x754370: fadd    st, st
0x754372: fdiv    qword ptr ds:0A3D5A8h
0x754378: fsub    qword ptr ds:0A2F928h
0x75437E: fstp    [esp+10Ch+var_F4]
0x754382: call    _rand
0x754387: mov     [esp+10Ch+var_FC], eax
0x75438B: fild    [esp+10Ch+var_FC]
0x75438F: fadd    st, st
0x754391: fdiv    qword ptr ds:0A3D5A8h
0x754397: fsub    qword ptr ds:0A2F928h
0x75439D: fstp    [esp+10Ch+var_F0]
0x7543A1: call    _rand
0x7543A6: mov     [esp+10Ch+var_FC], eax
0x7543AA: fild    [esp+10Ch+var_FC]
0x7543AE: fadd    st, st
0x7543B0: fdiv    qword ptr ds:0A3D5A8h
0x7543B6: fld1
0x7543B8: fsub    st(1), st
0x7543BA: fxch    st(1)
0x7543BC: fstp    [esp+10Ch+var_EC]
0x7543C0: fld     dword ptr [ebp+20h]
0x7543C3: fmul    [esp+10Ch+var_F8]
0x7543C7: faddp   st(1), st
0x7543C9: fdivr   dword ptr [ebp+1Ch]
0x7543CC: fstp    [esp+10Ch+var_FC]
0x7543D0: fld     [esp+10Ch+var_FC]
0x7543D4: fld     st
0x7543D6: fmul    [esp+10Ch+var_F4]
0x7543DA: fstp    [esp+10Ch+var_F4]
0x7543DE: fld     st
0x7543E0: fmul    [esp+10Ch+var_F0]
0x7543E4: fstp    [esp+10Ch+var_F0]
0x7543E8: fmul    [esp+10Ch+var_EC]
0x7543EC: fstp    [esp+10Ch+var_EC]
0x7543F0: fld     dword ptr [esi]
0x7543F2: fadd    [esp+10Ch+var_F4]
0x7543F6: fstp    dword ptr [esi]
0x7543F8: fld     dword ptr [esi+4]
0x7543FB: fadd    [esp+10Ch+var_F0]
0x7543FF: fstp    dword ptr [esi+4]
0x754402: fld     [esp+10Ch+var_EC]
0x754406: fadd    dword ptr [esi+8]
0x754409: fstp    dword ptr [esi+8]
0x75440C: add     edi, 1
0x75440F: cmp     di, [ebx+48h]
0x754413: jb      loc_7542C0
0x754419: pop     edi
0x75441A: pop     esi
0x75441B: pop     ebx
0x75441C: pop     ebp
0x75441D: add     esp, 0FCh
0x754423: retn    8
0x754426: fstp    st(1)
0x754428: pop     ebx
0x754429: fstp    st
0x75442B: pop     ebp
0x75442C: add     esp, 0FCh
0x754432: retn    8
0x754435: fstp    st(1)
0x754437: fstp    st
0x754439: pop     ebp
0x75443A: add     esp, 0FCh
0x754440: retn    8
