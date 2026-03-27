0x8D32C0: push    esi
0x8D32C1: push    edi
0x8D32C2: mov     edi, [esp+8+arg_4]
0x8D32C6: mov     eax, [edi+4]
0x8D32C9: xor     esi, esi
0x8D32CB: test    eax, eax
0x8D32CD: jle     short loc_8D331F
0x8D32CF: push    ebx
0x8D32D0: mov     ebx, [esp+0Ch+arg_0]
0x8D32D4: mov     eax, [edi]
0x8D32D6: mov     eax, [eax+esi*4]
0x8D32D9: mov     ecx, [eax+50h]
0x8D32DC: mov     edx, [ebx+0Ch]
0x8D32DF: mov     eax, [ecx+8]
0x8D32E2: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x8D32E9: add     eax, edx
0x8D32EB: mov     dl, [eax+0Ch]
0x8D32EE: test    dl, dl
0x8D32F0: movaps  xmmword ptr [eax+10h], xmm0
0x8D32F4: jz      short loc_8D3303
0x8D32F6: movaps  xmm0, xmmword ptr [ecx+0E0h]
0x8D32FD: movaps  xmmword ptr [eax+20h], xmm0
0x8D3301: jmp     short loc_8D3316
0x8D3303: add     ecx, 0E0h ; 'à'
0x8D3309: push    ecx
0x8D330A: lea     ecx, [eax+50h]
0x8D330D: push    ecx
0x8D330E: lea     ecx, [eax+20h]
0x8D3311: call    sub_88FE00
0x8D3316: mov     eax, [edi+4]
0x8D3319: inc     esi
0x8D331A: cmp     esi, eax
0x8D331C: jl      short loc_8D32D4
0x8D331E: pop     ebx
0x8D331F: pop     edi
0x8D3320: pop     esi
0x8D3321: retn
