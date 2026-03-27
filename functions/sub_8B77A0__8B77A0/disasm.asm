0x8B77A0: push    ebp
0x8B77A1: mov     ebp, esp
0x8B77A3: and     esp, 0FFFFFFF0h
0x8B77A6: push    ecx
0x8B77A7: push    ebx
0x8B77A8: push    esi
0x8B77A9: mov     esi, [ebp+arg_0]
0x8B77AC: push    edi
0x8B77AD: push    esi
0x8B77AE: mov     ebx, ecx
0x8B77B0: call    sub_8A2690
0x8B77B5: test    ebx, ebx
0x8B77B7: jz      short loc_8B77C5
0x8B77B9: mov     eax, [ebx+8]
0x8B77BC: test    eax, eax
0x8B77BE: jz      short loc_8B77C5
0x8B77C0: mov     edi, [eax+0Ch]
0x8B77C3: jmp     short loc_8B77C7
0x8B77C5: xor     edi, edi
0x8B77C7: mov     dword ptr [esi+8], 0
0x8B77CE: mov     eax, [esi+0Ch]
0x8B77D1: add     esi, 4
0x8B77D4: and     eax, 3FFFFFFFh
0x8B77D9: cmp     eax, edi
0x8B77DB: jge     short loc_8B77F1
0x8B77DD: add     eax, eax
0x8B77DF: cmp     edi, eax
0x8B77E1: jl      short loc_8B77E5
0x8B77E3: mov     eax, edi
0x8B77E5: push    10h
0x8B77E7: push    eax
0x8B77E8: push    esi
0x8B77E9: call    sub_8A6E40
0x8B77EE: add     esp, 0Ch
0x8B77F1: test    ebx, ebx
0x8B77F3: mov     [esi+4], edi
0x8B77F6: jz      short loc_8B7804
0x8B77F8: mov     ebx, [ebx+8]
0x8B77FB: test    ebx, ebx
0x8B77FD: jz      short loc_8B7804
0x8B77FF: lea     ecx, [ebx+10h]
0x8B7802: jmp     short loc_8B7806
0x8B7804: xor     ecx, ecx
0x8B7806: test    edi, edi
0x8B7808: jle     short loc_8B7822
0x8B780A: xor     eax, eax
0x8B780C: lea     esp, [esp+0]
0x8B7810: mov     edx, [esi]
0x8B7812: movaps  xmm0, xmmword ptr [eax+ecx]
0x8B7816: movaps  xmmword ptr [edx+eax], xmm0
0x8B781A: add     eax, 10h
0x8B781D: sub     edi, 1
0x8B7820: jnz     short loc_8B7810
0x8B7822: pop     edi
0x8B7823: pop     esi
0x8B7824: pop     ebx
0x8B7825: mov     esp, ebp
0x8B7827: pop     ebp
0x8B7828: retn    4
