0x9518B0: push    ebp
0x9518B1: mov     ebp, esp
0x9518B3: and     esp, 0FFFFFFF0h
0x9518B6: sub     esp, 54h
0x9518B9: push    ebx
0x9518BA: push    esi
0x9518BB: mov     esi, [ebp+arg_4]
0x9518BE: mov     eax, [esi+14h]
0x9518C1: movaps  xmm1, xmmword ptr [eax]
0x9518C4: mov     edx, [esi+34h]
0x9518C7: push    edi
0x9518C8: mov     edi, [ebp+arg_8]
0x9518CB: movaps  xmm0, xmmword ptr [edi]
0x9518CE: mov     ebx, ecx
0x9518D0: mov     ecx, [esi+24h]
0x9518D3: movaps  xmm2, xmm0
0x9518D6: subps   xmm2, xmm1
0x9518D9: movaps  [esp+60h+var_30], xmm2
0x9518DE: movaps  xmm1, xmmword ptr [ecx]
0x9518E1: movaps  xmm2, xmm0
0x9518E4: subps   xmm2, xmm1
0x9518E7: movaps  [esp+60h+var_20], xmm2
0x9518EC: movaps  xmm1, xmmword ptr [edx]
0x9518EF: push    esi
0x9518F0: lea     eax, [esp+64h+var_30]
0x9518F4: subps   xmm0, xmm1
0x9518F7: push    eax
0x9518F8: lea     ecx, [esp+68h+var_40]
0x9518FC: movaps  [esp+68h+var_10], xmm0
0x951901: call    sub_88FD90
0x951906: movaps  xmm0, xmmword ptr [ebx+40h]
0x95190A: movaps  xmm1, [esp+60h+var_40]
0x95190F: cmpltps xmm1, xmm0
0x951913: movmskps ecx, xmm1
0x951916: test    cl, 7
0x951919: jz      short loc_951932
0x95191B: mov     edx, [ebp+arg_C]
0x95191E: mov     dword ptr [edx], 0
0x951924: mov     eax, 1
0x951929: pop     edi
0x95192A: pop     esi
0x95192B: pop     ebx
0x95192C: mov     esp, ebp
0x95192E: pop     ebp
0x95192F: retn    10h
0x951932: lea     eax, [esp+60h+var_44]
0x951936: push    eax
0x951937: lea     ecx, [esp+64h+var_48]
0x95193B: push    ecx
0x95193C: push    edi
0x95193D: push    esi
0x95193E: mov     esi, [ebp+arg_0]
0x951941: mov     ecx, esi
0x951943: mov     [esp+70h+var_48], 0
0x95194B: call    sub_959410
0x951950: test    eax, eax
0x951952: jnz     short loc_951990
0x951954: mov     eax, [esi+10h]
0x951957: mov     ecx, [esi+0Ch]
0x95195A: sub     ecx, eax
0x95195C: mov     eax, [esp+60h+var_48]
0x951960: add     ecx, 37h ; '7'
0x951963: cmp     ecx, eax
0x951965: jge     short loc_95197E
0x951967: mov     edx, [ebp+arg_C]
0x95196A: mov     dword ptr [edx], 2
0x951970: mov     eax, 1
0x951975: pop     edi
0x951976: pop     esi
0x951977: pop     ebx
0x951978: mov     esp, ebp
0x95197A: pop     ebp
0x95197B: retn    10h
0x95197E: mov     ecx, [esp+60h+var_44]
0x951982: push    edi
0x951983: push    ecx
0x951984: push    eax
0x951985: mov     ecx, esi
0x951987: call    sub_9595A0
0x95198C: test    eax, eax
0x95198E: jz      short loc_9519A7
0x951990: mov     edx, [ebp+arg_C]
0x951993: mov     dword ptr [edx], 3
0x951999: mov     eax, 1
0x95199E: pop     edi
0x95199F: pop     esi
0x9519A0: pop     ebx
0x9519A1: mov     esp, ebp
0x9519A3: pop     ebp
0x9519A4: retn    10h
0x9519A7: pop     edi
0x9519A8: pop     esi
0x9519A9: xor     eax, eax
0x9519AB: pop     ebx
0x9519AC: mov     esp, ebp
0x9519AE: pop     ebp
0x9519AF: retn    10h
