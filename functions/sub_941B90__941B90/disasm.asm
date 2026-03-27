0x941B90: mov     eax, [edi+4]
0x941B93: push    ebx
0x941B94: push    esi
0x941B95: lea     esi, [ecx+eax+1]
0x941B99: mov     ebx, eax
0x941B9B: cmp     esi, ebx
0x941B9D: jle     short loc_941BD0
0x941B9F: mov     eax, [edi+8]
0x941BA2: and     eax, 3FFFFFFFh
0x941BA7: cmp     eax, esi
0x941BA9: jge     short loc_941BBF
0x941BAB: add     eax, eax
0x941BAD: cmp     esi, eax
0x941BAF: jl      short loc_941BB3
0x941BB1: mov     eax, esi
0x941BB3: push    1
0x941BB5: push    eax
0x941BB6: push    edi
0x941BB7: call    sub_8A6E40
0x941BBC: add     esp, 0Ch
0x941BBF: cmp     ebx, esi
0x941BC1: mov     eax, ebx
0x941BC3: jge     short loc_941BD0
0x941BC5: mov     edx, [edi]
0x941BC7: mov     byte ptr [eax+edx], 9
0x941BCB: inc     eax
0x941BCC: cmp     eax, esi
0x941BCE: jl      short loc_941BC5
0x941BD0: mov     eax, [edi]
0x941BD2: mov     [edi+4], esi
0x941BD5: mov     byte ptr [eax+esi-1], 0
0x941BDA: mov     eax, [edi+4]
0x941BDD: dec     eax
0x941BDE: pop     esi
0x941BDF: mov     [edi+4], eax
0x941BE2: pop     ebx
0x941BE3: retn
