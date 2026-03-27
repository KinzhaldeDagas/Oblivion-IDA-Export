0x788660: push    ebx
0x788661: mov     ebx, [esp+4+arg_0]
0x788665: push    ebp
0x788666: push    esi
0x788667: mov     esi, [esp+0Ch+arg_4]
0x78866B: mov     ebp, [esp+0Ch+arg_8]
0x78866F: mov     ecx, esi
0x788671: sub     ecx, ebx
0x788673: mov     eax, 92492493h
0x788678: imul    ecx
0x78867A: add     edx, ecx
0x78867C: sar     edx, 4
0x78867F: mov     eax, edx
0x788681: shr     eax, 1Fh
0x788684: add     eax, edx
0x788686: lea     ecx, ds:0[eax*8]
0x78868D: sub     ecx, eax
0x78868F: add     ecx, ecx
0x788691: add     ecx, ecx
0x788693: mov     eax, ebp
0x788695: sub     eax, ecx
0x788697: cmp     ebx, esi
0x788699: mov     edx, esi
0x78869B: jz      short loc_7886B4
0x78869D: sub     ebp, esi
0x78869F: push    edi
0x7886A0: sub     edx, 1Ch
0x7886A3: cmp     edx, ebx
0x7886A5: lea     edi, [edx+ebp]
0x7886A8: mov     ecx, 7
0x7886AD: mov     esi, edx
0x7886AF: rep movsd
0x7886B1: jnz     short loc_7886A0
0x7886B3: pop     edi
0x7886B4: pop     esi
0x7886B5: pop     ebp
0x7886B6: pop     ebx
0x7886B7: retn
