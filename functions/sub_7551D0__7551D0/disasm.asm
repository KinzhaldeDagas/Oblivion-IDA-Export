0x7551D0: push    ebp
0x7551D1: mov     ebp, esp
0x7551D3: and     esp, 0FFFFFFF8h
0x7551D6: fldz
0x7551D8: sub     esp, 124h
0x7551DE: push    ebx
0x7551DF: mov     ebx, ecx
0x7551E1: fcom    dword ptr [ebx+1Ch]
0x7551E4: push    esi
0x7551E5: push    edi
0x7551E6: fnstsw  ax
0x7551E8: test    ah, 44h
0x7551EB: jnp     loc_7554BA
0x7551F1: mov     edx, [ebp+arg_4]
0x7551F4: cmp     word ptr [edx+48h], 0
0x7551F9: jz      loc_7554BA
0x7551FF: mov     ecx, [ebx+18h]
0x755202: test    ecx, ecx
0x755204: jz      loc_7554BA
0x75520A: cmp     byte ptr [ebx+24h], 0
0x75520E: jnz     short loc_755256
0x755210: fcom    dword ptr [ebx+20h]
0x755213: fnstsw  ax
0x755215: test    ah, 44h
0x755218: jnp     short loc_75523C
0x75521A: fcomp   dword ptr [ebx+30h]
0x75521D: fnstsw  ax
0x75521F: test    ah, 44h
0x755222: jp      short loc_755258
0x755224: fld     [ebp+arg_0]
0x755227: push    edx; int
0x755228: push    ecx
0x755229: mov     ecx, ebx
0x75522B: fstp    [esp+138h+var_138]; float
0x75522E: call    sub_755030
0x755233: pop     edi
0x755234: pop     esi
0x755235: pop     ebx
0x755236: mov     esp, ebp
0x755238: pop     ebp
0x755239: retn    8
0x75523C: push    edx; int
0x75523D: fstp    st
0x75523F: fld     [ebp+arg_0]
0x755242: push    ecx
0x755243: mov     ecx, ebx
0x755245: fstp    [esp+138h+var_138]; float
0x755248: call    sub_755030
0x75524D: pop     edi
0x75524E: pop     esi
0x75524F: pop     ebx
0x755250: mov     esp, ebp
0x755252: pop     ebp
0x755253: retn    8
0x755256: fstp    st
0x755258: lea     esi, [ecx+64h]
0x75525B: mov     ecx, 0Dh
0x755260: lea     edi, [esp+130h+var_9C]
0x755267: rep movsd
0x755269: mov     esi, [ebx+10h]
0x75526C: add     esi, 64h ; 'd'
0x75526F: mov     ecx, 0Dh
0x755274: lea     edi, [esp+130h+var_68]
0x75527B: lea     eax, [esp+130h+var_34]
0x755282: rep movsd
0x755284: push    eax
0x755285: lea     ecx, [esp+134h+var_68]
0x75528C: call    sub_718A80
0x755291: lea     ecx, [esp+130h+var_9C]
0x755298: push    ecx
0x755299: lea     edx, [esp+134h+var_D0]
0x75529D: push    edx
0x75529E: lea     ecx, [esp+138h+var_34]
0x7552A5: call    sub_53D7A0
0x7552AA: fld     dword ptr [ebx+20h]
0x7552AD: mov     esi, [ebp+arg_4]
0x7552B0: fmul    qword ptr ds:0A2FAA0h
0x7552B6: xor     edx, edx
0x7552B8: cmp     [esi+48h], dx
0x7552BC: mov     [esp+130h+var_110], edx
0x7552C0: fstp    [esp+130h+var_DC]
0x7552C4: jbe     loc_7554BC
0x7552CA: lea     ebx, [ebx+0]
0x7552D0: mov     edi, [esi+5Ch]
0x7552D3: fld     [ebp+arg_0]
0x7552D6: movzx   ecx, dx
0x7552D9: lea     eax, ds:0[ecx*8]
0x7552E0: sub     eax, ecx
0x7552E2: lea     edi, [edi+eax*4]
0x7552E5: fsub    dword ptr [edi+14h]
0x7552E8: fstp    [esp+130h+var_120]
0x7552EC: fldz
0x7552EE: fld     [esp+130h+var_120]
0x7552F2: fucom   st(1)
0x7552F4: fnstsw  ax
0x7552F6: fstp    st(1)
0x7552F8: test    ah, 44h
0x7552FB: jnp     loc_75549E
0x755301: cmp     byte ptr [ebx+24h], 0
0x755305: mov     eax, [esi+1Ch]
0x755308: lea     ecx, [ecx+ecx*2]
0x75530B: lea     eax, [eax+ecx*4]
0x75530E: mov     ecx, [eax]
0x755310: mov     [esp+130h+var_100], ecx
0x755314: fld     [esp+130h+var_100]
0x755318: fsub    [esp+130h+var_AC]
0x75531F: mov     ecx, [eax+4]
0x755322: mov     eax, [eax+8]
0x755325: mov     [esp+130h+var_FC], ecx
0x755329: fstp    [esp+130h+var_11C]
0x75532D: mov     [esp+130h+var_F8], eax
0x755331: fld     [esp+130h+var_FC]
0x755335: fsub    [esp+130h+var_A8]
0x75533C: fstp    [esp+130h+var_118]
0x755340: fld     [esp+130h+var_F8]
0x755344: fsub    [esp+130h+var_A4]
0x75534B: fstp    [esp+130h+var_114]
0x75534F: fld     [esp+130h+var_118]
0x755353: fld     st
0x755355: fld     [esp+130h+var_11C]
0x755359: fld     st
0x75535B: fld     [esp+130h+var_114]
0x75535F: fld     st
0x755361: fld     st(2)
0x755363: fmulp   st(3), st
0x755365: fld     st(4)
0x755367: fmulp   st(5), st
0x755369: fxch    st(2)
0x75536B: faddp   st(4), st
0x75536D: fld     st(1)
0x75536F: fmulp   st(2), st
0x755371: fxch    st(3)
0x755373: faddp   st(1), st
0x755375: fstp    [esp+130h+var_120]
0x755379: fld     [esp+130h+var_120]
0x75537D: jz      short loc_75538F
0x75537F: fld     dword ptr [ebx+2Ch]
0x755382: fcomp   st(1)
0x755384: fnstsw  ax
0x755386: test    ah, 1
0x755389: jnz     loc_755496
0x75538F: fldz
0x755391: fcom    dword ptr [ebx+20h]
0x755394: fnstsw  ax
0x755396: test    ah, 44h
0x755399: jnp     loc_755433
0x75539F: fucomp  st(1)
0x7553A1: fnstsw  ax
0x7553A3: test    ah, 44h
0x7553A6: jnp     loc_755435
0x7553AC: fstp    st(3)
0x7553AE: fstp    st
0x7553B0: fstp    st
0x7553B2: fld     dword ptr [ebx+1Ch]
0x7553B5: fmulp   st(2), st
0x7553B7: fxch    st(1)
0x7553B9: fstp    [esp+130h+var_D8]
0x7553BD: fld     [esp+130h+var_DC]
0x7553C1: call    __CIpow
0x7553C6: fstp    [esp+130h+var_120]
0x7553CA: fld     [esp+130h+var_120]
0x7553CE: sub     esp, 8
0x7553D1: fmul    dword ptr [ebx+30h]
0x7553D4: fstp    [esp+138h+var_120]
0x7553D8: fld     [esp+138h+var_120]
0x7553DC: fstp    [esp+138h+var_134]; float
0x7553E0: fld1
0x7553E2: fstp    [esp+138h+var_138]; float
0x7553E5: call    Min_Float
0x7553EA: fdivr   [esp+138h+var_D8]
0x7553EE: add     esp, 8
0x7553F1: fstp    [esp+130h+var_120]
0x7553F5: fld     [esp+130h+var_120]
0x7553F9: fld     st
0x7553FB: fmul    [esp+130h+var_11C]
0x7553FF: fstp    [esp+130h+var_E8]
0x755403: mov     ecx, [esp+130h+var_E8]
0x755407: fld     [esp+130h+var_118]
0x75540B: mov     [esp+130h+var_10C], ecx
0x75540F: fmul    st, st(1)
0x755411: fstp    [esp+130h+var_E4]
0x755415: mov     edx, [esp+130h+var_E4]
0x755419: mov     [esp+130h+var_108], edx
0x75541D: fmul    [esp+130h+var_114]
0x755421: mov     edx, [esp+130h+var_110]
0x755425: fstp    [esp+130h+var_E0]
0x755429: mov     eax, [esp+130h+var_E0]
0x75542D: mov     [esp+130h+var_104], eax
0x755431: jmp     short loc_755478
0x755433: fstp    st(1)
0x755435: fstp    st
0x755437: fld     dword ptr [ebx+1Ch]
0x75543A: fmulp   st(4), st
0x75543C: fxch    st(3)
0x75543E: fstp    [esp+130h+var_120]
0x755442: fld     [esp+130h+var_120]
0x755446: fld     st
0x755448: fmulp   st(4), st
0x75544A: fxch    st(3)
0x75544C: fstp    [esp+130h+var_F4]
0x755450: mov     ecx, [esp+130h+var_F4]
0x755454: fld     st(2)
0x755456: mov     [esp+130h+var_10C], ecx
0x75545A: fmulp   st(2), st
0x75545C: fxch    st(1)
0x75545E: fstp    [esp+130h+var_F0]
0x755462: mov     eax, [esp+130h+var_F0]
0x755466: mov     [esp+130h+var_108], eax
0x75546A: fmulp   st(1), st
0x75546C: fstp    [esp+130h+var_EC]
0x755470: mov     ecx, [esp+130h+var_EC]
0x755474: mov     [esp+130h+var_104], ecx
0x755478: fld     dword ptr [edi]
0x75547A: fadd    [esp+130h+var_10C]
0x75547E: fstp    dword ptr [edi]
0x755480: fld     dword ptr [edi+4]
0x755483: fadd    [esp+130h+var_108]
0x755487: fstp    dword ptr [edi+4]
0x75548A: fld     [esp+130h+var_104]
0x75548E: fadd    dword ptr [edi+8]
0x755491: fstp    dword ptr [edi+8]
0x755494: jmp     short loc_7554A0
0x755496: fstp    st
0x755498: fstp    st(2)
0x75549A: fstp    st(1)
0x75549C: fstp    st
0x75549E: fstp    st
0x7554A0: add     edx, 1
0x7554A3: cmp     dx, [esi+48h]
0x7554A7: mov     [esp+130h+var_110], edx
0x7554AB: jb      loc_7552D0
0x7554B1: pop     edi
0x7554B2: pop     esi
0x7554B3: pop     ebx
0x7554B4: mov     esp, ebp
0x7554B6: pop     ebp
0x7554B7: retn    8
0x7554BA: fstp    st
0x7554BC: pop     edi
0x7554BD: pop     esi
0x7554BE: pop     ebx
0x7554BF: mov     esp, ebp
0x7554C1: pop     ebp
0x7554C2: retn    8
