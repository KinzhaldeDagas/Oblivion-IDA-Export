0x759120: sub     esp, 0ECh
0x759126: push    ebx
0x759127: push    esi
0x759128: mov     ebx, ecx
0x75912A: mov     esi, [ebx+18h]
0x75912D: push    edi
0x75912E: add     esi, 64h ; 'd'
0x759131: mov     ecx, 0Dh
0x759136: lea     edi, [esp+0F8h+var_9C]
0x75913A: rep movsd
0x75913C: mov     esi, [ebx+10h]
0x75913F: add     esi, 64h ; 'd'
0x759142: mov     ecx, 0Dh
0x759147: lea     edi, [esp+0F8h+var_68]
0x75914E: lea     eax, [esp+0F8h+var_34]
0x759155: rep movsd
0x759157: push    eax
0x759158: lea     ecx, [esp+0FCh+var_68]
0x75915F: call    sub_718A80
0x759164: lea     ecx, [esp+0F8h+var_9C]
0x759168: push    ecx
0x759169: lea     edx, [esp+0FCh+var_D0]
0x75916D: push    edx
0x75916E: lea     ecx, [esp+100h+var_34]
0x759175: call    sub_53D7A0
0x75917A: mov     esi, [esp+0F8h+arg_4]
0x759181: xor     edi, edi
0x759183: cmp     [esi+48h], di
0x759187: jbe     loc_75929B
0x75918D: fld     [esp+0F8h+var_A4]
0x759191: fld     [esp+0F8h+var_A8]
0x759195: fld     [esp+0F8h+var_AC]
0x759199: mov     edx, [esi+5Ch]
0x75919C: fld     [esp+0F8h+arg_0]
0x7591A3: movzx   ecx, di
0x7591A6: lea     eax, ds:0[ecx*8]
0x7591AD: sub     eax, ecx
0x7591AF: lea     edx, [edx+eax*4]
0x7591B2: fsub    dword ptr [edx+14h]
0x7591B5: fmul    dword ptr [ebx+1Ch]
0x7591B8: fstp    [esp+0F8h+var_EC]
0x7591BC: fldz
0x7591BE: fld     [esp+0F8h+var_EC]
0x7591C2: fucom   st(1)
0x7591C4: fnstsw  ax
0x7591C6: fstp    st(1)
0x7591C8: test    ah, 44h
0x7591CB: jnp     loc_759286
0x7591D1: mov     eax, [esi+1Ch]
0x7591D4: lea     ecx, [ecx+ecx*2]
0x7591D7: lea     eax, [eax+ecx*4]
0x7591DA: mov     ecx, [eax]
0x7591DC: mov     [esp+0F8h+var_E8], ecx
0x7591E0: fld     [esp+0F8h+var_E8]
0x7591E4: mov     ecx, [eax+4]
0x7591E7: fsub    st, st(2)
0x7591E9: mov     eax, [eax+8]
0x7591EC: mov     [esp+0F8h+var_E4], ecx
0x7591F0: fstp    [esp+0F8h+var_DC]
0x7591F4: mov     [esp+0F8h+var_E0], eax
0x7591F8: fld     [esp+0F8h+var_E4]
0x7591FC: fsub    st, st(3)
0x7591FE: fstp    [esp+0F8h+var_D8]
0x759202: fld     [esp+0F8h+var_E0]
0x759206: fsub    st, st(4)
0x759208: fstp    [esp+0F8h+var_D4]
0x75920C: fld     [esp+0F8h+var_D8]
0x759210: fld     [esp+0F8h+var_DC]
0x759214: fld     [esp+0F8h+var_D4]
0x759218: fld     st(1)
0x75921A: fmulp   st(2), st
0x75921C: fld     st(2)
0x75921E: fmulp   st(3), st
0x759220: fxch    st(1)
0x759222: faddp   st(2), st
0x759224: fmul    st, st
0x759226: faddp   st(1), st
0x759228: fstp    [esp+0F8h+var_EC]
0x75922C: fld     [esp+0F8h+var_EC]
0x759230: fld     dword ptr [ebx+2Ch]
0x759233: fcompp
0x759235: fnstsw  ax
0x759237: test    ah, 1
0x75923A: jnz     short loc_759286
0x75923C: fld1
0x75923E: fcomp   st(1)
0x759240: fnstsw  ax
0x759242: test    ah, 41h
0x759245: jnz     short loc_75926D
0x759247: fld1
0x759249: fsubrp  st(1), st
0x75924B: fstp    [esp+0F8h+var_EC]
0x75924F: fld     dword ptr [edx]
0x759251: fld     [esp+0F8h+var_EC]
0x759255: fld     st
0x759257: fmulp   st(2), st
0x759259: fxch    st(1)
0x75925B: fstp    dword ptr [edx]
0x75925D: fld     dword ptr [edx+4]
0x759260: fmul    st, st(1)
0x759262: fstp    dword ptr [edx+4]
0x759265: fmul    dword ptr [edx+8]
0x759268: fstp    dword ptr [edx+8]
0x75926B: jmp     short loc_759288
0x75926D: mov     ecx, ds:0B3F9A8h
0x759273: mov     [edx], ecx
0x759275: mov     eax, ds:0B3F9ACh
0x75927A: mov     [edx+4], eax
0x75927D: mov     ecx, ds:0B3F9B0h
0x759283: mov     [edx+8], ecx
0x759286: fstp    st
0x759288: add     edi, 1
0x75928B: cmp     di, [esi+48h]
0x75928F: jb      loc_759199
0x759295: fstp    st(2)
0x759297: fstp    st
0x759299: fstp    st
0x75929B: pop     edi
0x75929C: pop     esi
0x75929D: pop     ebx
0x75929E: add     esp, 0ECh
0x7592A4: retn    8
