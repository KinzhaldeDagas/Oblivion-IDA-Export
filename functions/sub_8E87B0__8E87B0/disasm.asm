0x8E87B0: push    ebp
0x8E87B1: mov     ebp, esp
0x8E87B3: and     esp, 0FFFFFFF0h
0x8E87B6: sub     esp, 24h
0x8E87B9: push    ebx
0x8E87BA: push    esi
0x8E87BB: mov     esi, [ebp+arg_8]
0x8E87BE: push    edi
0x8E87BF: mov     edi, ecx
0x8E87C1: mov     eax, [edi+10h]
0x8E87C4: mov     ecx, [eax]
0x8E87C6: mov     eax, [ebp+arg_4]
0x8E87C9: mov     edx, [ecx]
0x8E87CB: push    esi
0x8E87CC: push    eax
0x8E87CD: mov     eax, [ebp+arg_0]
0x8E87D0: push    eax
0x8E87D1: call    dword ptr [edx+0Ch]
0x8E87D4: mov     eax, [edi+14h]
0x8E87D7: mov     ebx, 1
0x8E87DC: cmp     eax, ebx
0x8E87DE: jle     short loc_8E881E
0x8E87E0: mov     ecx, [edi+10h]
0x8E87E3: mov     ecx, [ecx+ebx*8]
0x8E87E6: mov     edx, [ecx]
0x8E87E8: lea     eax, [esp+30h+var_28+8]
0x8E87EC: push    eax
0x8E87ED: mov     eax, [ebp+arg_4]
0x8E87F0: push    eax
0x8E87F1: mov     eax, [ebp+arg_0]
0x8E87F4: push    eax
0x8E87F5: call    dword ptr [edx+0Ch]
0x8E87F8: movaps  xmm0, xmmword ptr [esp+30h+var_28+8]
0x8E87FD: movaps  xmm1, xmmword ptr [esi]
0x8E8800: minps   xmm1, xmm0
0x8E8803: movaps  xmm0, [esp+30h+var_10]
0x8E8808: movaps  xmmword ptr [esi], xmm1
0x8E880B: movaps  xmm1, xmmword ptr [esi+10h]
0x8E880F: maxps   xmm1, xmm0
0x8E8812: movaps  xmmword ptr [esi+10h], xmm1
0x8E8816: mov     eax, [edi+14h]
0x8E8819: inc     ebx
0x8E881A: cmp     ebx, eax
0x8E881C: jl      short loc_8E87E0
0x8E881E: pop     edi
0x8E881F: pop     esi
0x8E8820: pop     ebx
0x8E8821: mov     esp, ebp
0x8E8823: pop     ebp
0x8E8824: retn    0Ch
