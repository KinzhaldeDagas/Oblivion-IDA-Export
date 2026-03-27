0x75C2F0: fldz
0x75C2F2: sub     esp, 11Ch
0x75C2F8: push    ebx
0x75C2F9: mov     ebx, ecx
0x75C2FB: fcomp   dword ptr [ebx+1Ch]
0x75C2FE: fnstsw  ax
0x75C300: test    ah, 44h
0x75C303: jnp     loc_75C577
0x75C309: push    esi
0x75C30A: mov     esi, [ebx+18h]
0x75C30D: push    edi
0x75C30E: add     esi, 64h ; 'd'
0x75C311: mov     ecx, 0Dh
0x75C316: lea     edi, [esp+128h+var_9C]
0x75C31D: rep movsd
0x75C31F: mov     esi, [ebx+10h]
0x75C322: add     esi, 64h ; 'd'
0x75C325: mov     ecx, 0Dh
0x75C32A: lea     edi, [esp+128h+var_68]
0x75C331: lea     eax, [esp+128h+var_34]
0x75C338: rep movsd
0x75C33A: push    eax
0x75C33B: lea     ecx, [esp+12Ch+var_68]
0x75C342: call    sub_718A80
0x75C347: lea     ecx, [esp+128h+var_9C]
0x75C34E: push    ecx
0x75C34F: lea     edx, [esp+12Ch+var_D0]
0x75C353: push    edx
0x75C354: lea     ecx, [esp+130h+var_34]
0x75C35B: call    sub_53D7A0
0x75C360: cmp     byte ptr [ebx+60h], 0
0x75C364: fld     [esp+128h+arg_0]
0x75C36B: mov     eax, [esp+128h+var_AC]
0x75C36F: fstp    dword ptr [ebx+3Ch]
0x75C372: mov     ecx, [esp+128h+var_A8]
0x75C379: mov     edx, [esp+128h+var_A4]
0x75C380: mov     [ebx+30h], eax
0x75C383: mov     [ebx+34h], ecx
0x75C386: mov     [esp+128h+var_E8], eax
0x75C38A: mov     [esp+128h+var_E4], ecx
0x75C38E: mov     [esp+128h+var_E0], edx
0x75C392: mov     [ebx+38h], edx
0x75C395: jz      short loc_75C3B7
0x75C397: lea     eax, [ebx+4Ch]
0x75C39A: push    eax
0x75C39B: lea     ecx, [esp+12Ch+var_100]
0x75C39F: push    ecx
0x75C3A0: lea     ecx, [esp+130h+var_D0]
0x75C3A4: call    sub_7101F0
0x75C3A9: mov     edx, [eax]
0x75C3AB: mov     ecx, [eax+4]
0x75C3AE: mov     [esp+128h+var_118], edx
0x75C3B2: mov     edx, [eax+8]
0x75C3B5: jmp     short loc_75C3C4
0x75C3B7: mov     eax, [ebx+4Ch]
0x75C3BA: mov     ecx, [ebx+50h]
0x75C3BD: mov     edx, [ebx+54h]
0x75C3C0: mov     [esp+128h+var_118], eax
0x75C3C4: fld     dword ptr [ebx+1Ch]
0x75C3C7: mov     esi, [esp+128h+arg_4]
0x75C3CE: fstp    [esp+128h+var_11C]
0x75C3D2: mov     [esp+128h+var_114], ecx
0x75C3D6: fld     [esp+128h+var_118]
0x75C3DA: mov     [esp+128h+var_110], edx
0x75C3DE: fld     [esp+128h+var_11C]
0x75C3E2: xor     edi, edi
0x75C3E4: cmp     [esi+48h], di
0x75C3E8: fld     st
0x75C3EA: fmulp   st(2), st
0x75C3EC: fxch    st(1)
0x75C3EE: fstp    [esp+128h+var_10C]
0x75C3F2: fld     [esp+128h+var_114]
0x75C3F6: fmul    st, st(1)
0x75C3F8: fstp    [esp+128h+var_108]
0x75C3FC: fmul    [esp+128h+var_110]
0x75C400: fstp    [esp+128h+var_104]
0x75C404: jbe     loc_75C575
0x75C40A: fld     [esp+128h+var_104]
0x75C40E: fld     [esp+128h+var_108]
0x75C412: fld     [esp+128h+var_10C]
0x75C416: mov     edx, [esi+5Ch]
0x75C419: fld     [esp+128h+arg_0]
0x75C420: movzx   ecx, di
0x75C423: lea     eax, ds:0[ecx*8]
0x75C42A: sub     eax, ecx
0x75C42C: lea     edx, [edx+eax*4]
0x75C42F: fsub    dword ptr [edx+14h]
0x75C432: fstp    [esp+128h+var_11C]
0x75C436: fldz
0x75C438: fld     [esp+128h+var_11C]
0x75C43C: fucom   st(1)
0x75C43E: fnstsw  ax
0x75C440: fstp    st(1)
0x75C442: test    ah, 44h
0x75C445: jnp     loc_75C560
0x75C44B: mov     eax, [esi+1Ch]
0x75C44E: lea     ecx, [ecx+ecx*2]
0x75C451: lea     eax, [eax+ecx*4]
0x75C454: mov     ecx, [eax]
0x75C456: mov     [esp+128h+var_10C], ecx
0x75C45A: fld     [esp+128h+var_10C]
0x75C45E: fsub    [esp+128h+var_E8]
0x75C462: mov     ecx, [eax+4]
0x75C465: mov     eax, [eax+8]
0x75C468: mov     [esp+128h+var_108], ecx
0x75C46C: fstp    [esp+128h+var_118]
0x75C470: mov     [esp+128h+var_104], eax
0x75C474: fld     [esp+128h+var_108]
0x75C478: fsub    [esp+128h+var_E4]
0x75C47C: fstp    [esp+128h+var_114]
0x75C480: fld     [esp+128h+var_104]
0x75C484: fsub    [esp+128h+var_E0]
0x75C488: fstp    [esp+128h+var_110]
0x75C48C: fld     [esp+128h+var_114]
0x75C490: fld     [esp+128h+var_118]
0x75C494: fld     [esp+128h+var_110]
0x75C498: fld     st(1)
0x75C49A: fmulp   st(2), st
0x75C49C: fld     st(2)
0x75C49E: fmulp   st(3), st
0x75C4A0: fxch    st(1)
0x75C4A2: faddp   st(2), st
0x75C4A4: fmul    st, st
0x75C4A6: faddp   st(1), st
0x75C4A8: fstp    [esp+128h+var_11C]
0x75C4AC: fld     [esp+128h+var_11C]
0x75C4B0: fld     dword ptr [ebx+2Ch]
0x75C4B3: fcompp
0x75C4B5: fnstsw  ax
0x75C4B7: test    ah, 1
0x75C4BA: jnz     loc_75C560
0x75C4C0: fld     dword ptr [edx]
0x75C4C2: fsub    st, st(2)
0x75C4C4: fstp    [esp+128h+var_DC]
0x75C4C8: fld     dword ptr [edx+4]
0x75C4CB: fsub    st, st(3)
0x75C4CD: fstp    [esp+128h+var_D8]
0x75C4D1: fld     dword ptr [edx+8]
0x75C4D4: fsub    st, st(4)
0x75C4D6: fstp    [esp+128h+var_D4]
0x75C4DA: fld     [esp+128h+var_D8]
0x75C4DE: fmul    st, st(3)
0x75C4E0: fld     [esp+128h+var_DC]
0x75C4E4: fmul    st, st(3)
0x75C4E6: faddp   st(1), st
0x75C4E8: fld     [esp+128h+var_D4]
0x75C4EC: fmul    st, st(5)
0x75C4EE: faddp   st(1), st
0x75C4F0: fstp    [esp+128h+var_11C]
0x75C4F4: fld     [esp+128h+var_11C]
0x75C4F8: fcomp   dword ptr ds:0A2FAA8h
0x75C4FE: fnstsw  ax
0x75C500: test    ah, 5
0x75C503: jp      short loc_75C560
0x75C505: fld     dword ptr [ebx+58h]
0x75C508: fstp    [esp+128h+var_11C]
0x75C50C: fld     [esp+128h+var_11C]
0x75C510: fld     st
0x75C512: fmul    st, st(3)
0x75C514: fstp    [esp+128h+var_F4]
0x75C518: fld     st
0x75C51A: fmul    st, st(4)
0x75C51C: fstp    [esp+128h+var_F0]
0x75C520: fmul    st, st(4)
0x75C522: fstp    [esp+128h+var_EC]
0x75C526: fld     [esp+128h+var_F4]
0x75C52A: fmul    st, st(1)
0x75C52C: fstp    [esp+128h+var_100]
0x75C530: fld     [esp+128h+var_F0]
0x75C534: fmul    st, st(1)
0x75C536: fstp    [esp+128h+var_FC]
0x75C53A: fmul    [esp+128h+var_EC]
0x75C53E: fstp    [esp+128h+var_F8]
0x75C542: fld     dword ptr [edx]
0x75C544: fadd    [esp+128h+var_100]
0x75C548: fstp    dword ptr [edx]
0x75C54A: fld     dword ptr [edx+4]
0x75C54D: fadd    [esp+128h+var_FC]
0x75C551: fstp    dword ptr [edx+4]
0x75C554: fld     [esp+128h+var_F8]
0x75C558: fadd    dword ptr [edx+8]
0x75C55B: fstp    dword ptr [edx+8]
0x75C55E: jmp     short loc_75C562
0x75C560: fstp    st
0x75C562: add     edi, 1
0x75C565: cmp     di, [esi+48h]
0x75C569: jb      loc_75C416
0x75C56F: fstp    st(2)
0x75C571: fstp    st
0x75C573: fstp    st
0x75C575: pop     edi
0x75C576: pop     esi
0x75C577: pop     ebx
0x75C578: add     esp, 11Ch
0x75C57E: retn    8
