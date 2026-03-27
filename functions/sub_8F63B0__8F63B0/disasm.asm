0x8F63B0: push    ebp
0x8F63B1: mov     ebp, esp
0x8F63B3: and     esp, 0FFFFFFF0h
0x8F63B6: sub     esp, 1Ch
0x8F63B9: mov     eax, [ebp+arg_4]
0x8F63BC: xorps   xmm0, xmm0
0x8F63BF: movaps  xmmword ptr [ecx+10h], xmm0
0x8F63C3: movaps  xmmword ptr [ecx+20h], xmm0
0x8F63C7: mov     edx, [eax]
0x8F63C9: mov     edx, [edx+0Ch]
0x8F63CC: mov     [esp+1Ch+var_14], eax
0x8F63D0: mov     eax, [ebp+arg_8]
0x8F63D3: push    esi
0x8F63D4: mov     esi, [ebp+arg_0]
0x8F63D7: mov     [esp+20h+var_10], edx
0x8F63DB: mov     [esp+20h+var_C], eax
0x8F63DF: mov     eax, [ecx+8]
0x8F63E2: lea     edx, [esp+20h+var_18]
0x8F63E6: push    edx
0x8F63E7: add     ecx, 30h ; '0'
0x8F63EA: push    ecx
0x8F63EB: mov     [esp+28h+var_18], esi
0x8F63EF: mov     [esp+28h+var_8], eax
0x8F63F3: call    sub_934DA0
0x8F63F8: add     esp, 8
0x8F63FB: pop     esi
0x8F63FC: mov     esp, ebp
0x8F63FE: pop     ebp
0x8F63FF: retn    0Ch
