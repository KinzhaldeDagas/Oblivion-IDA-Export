0x8D3600: mov     eax, [ecx+1Ch]
0x8D3603: push    esi
0x8D3604: lea     esi, [ecx+14h]
0x8D3607: mov     ecx, [esi+4]
0x8D360A: and     eax, 3FFFFFFFh
0x8D360F: cmp     ecx, eax
0x8D3611: push    edi
0x8D3612: jnz     short loc_8D361F
0x8D3614: push    40h ; '@'
0x8D3616: push    esi
0x8D3617: call    sub_8A6EE0
0x8D361C: add     esp, 8
0x8D361F: mov     ecx, [esi+4]
0x8D3622: mov     edx, [esi]
0x8D3624: mov     eax, ecx
0x8D3626: shl     eax, 6
0x8D3629: add     eax, edx
0x8D362B: inc     ecx
0x8D362C: mov     [esi+4], ecx
0x8D362F: mov     ecx, [esp+8+arg_0]
0x8D3633: mov     edx, [ecx+3034h]
0x8D3639: mov     [eax], edx
0x8D363B: mov     edx, [ecx+3030h]
0x8D3641: mov     [eax+0Ch], edx
0x8D3644: movaps  xmm0, xmmword ptr [ecx+10h]
0x8D3648: mov     edx, [esp+8+arg_4]
0x8D364C: movaps  xmmword ptr [eax+20h], xmm0
0x8D3650: movaps  xmm0, xmmword ptr [ecx+20h]
0x8D3654: movaps  xmmword ptr [eax+30h], xmm0
0x8D3658: mov     esi, [edx+14h]
0x8D365B: mov     edi, [esi+10h]
0x8D365E: add     edi, esi
0x8D3660: mov     [eax+4], edi
0x8D3663: mov     esi, [edx+18h]
0x8D3666: mov     edi, [esi+10h]
0x8D3669: add     edi, esi
0x8D366B: mov     [eax+8], edi
0x8D366E: mov     esi, [ecx+3038h]
0x8D3674: mov     [eax+10h], esi
0x8D3677: mov     ecx, [ecx+303Ch]
0x8D367D: mov     [eax+14h], ecx
0x8D3680: mov     edx, [edx+10h]
0x8D3683: pop     edi
0x8D3684: mov     [eax+18h], edx
0x8D3687: pop     esi
0x8D3688: retn    8
