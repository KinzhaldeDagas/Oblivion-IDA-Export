0x985684: lea     esi, [ecx+esi-4]
0x985688: lea     edi, [ecx+edi-4]
0x98568C: test    edi, 3
0x985692: jnz     short unknown_libname_38___unknown_libname_39
0x985694: shr     ecx, 2
0x985697: and     edx, 3
0x98569A: cmp     ecx, 8
0x98569D: jb      short unknown_libname_38
0x98569F: std
0x9856A0: rep movsd
0x9856A2: cld
0x9856A3: jmp     ds:jpt_9856D0[edx*4]; switch 4 cases
0x9857E0: mov     eax, [ebp+8]; jumptable 009856A3 case 0
0x9857E3: pop     esi
0x9857E4: pop     edi
0x9857E5: leave
0x9857E6: retn
0x9857E8: mov     al, [esi+3]; jumptable 009856A3 case 1
0x9857EB: mov     [edi+3], al
0x9857EE: mov     eax, [ebp+8]
0x9857F1: pop     esi
0x9857F2: pop     edi
0x9857F3: leave
0x9857F4: retn
0x9857F8: mov     al, [esi+3]; jumptable 009856A3 case 2
0x9857FB: mov     [edi+3], al
0x9857FE: mov     al, [esi+2]
0x985801: mov     [edi+2], al
0x985804: mov     eax, [ebp+8]
0x985807: pop     esi
0x985808: pop     edi
0x985809: leave
0x98580A: retn
0x98580C: mov     al, [esi+3]; jumptable 009856A3 case 3
0x98580F: mov     [edi+3], al
0x985812: mov     al, [esi+2]
0x985815: mov     [edi+2], al
0x985818: mov     al, [esi+1]
0x98581B: mov     [edi+1], al
0x98581E: mov     eax, [ebp+8]
0x985821: pop     esi
0x985822: pop     edi
0x985823: leave
0x985824: retn
