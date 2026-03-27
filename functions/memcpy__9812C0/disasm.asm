0x9812C0: push    ebp
0x9812C1: mov     ebp, esp
0x9812C3: push    edi
0x9812C4: push    esi
0x9812C5: mov     esi, [ebp+Src]
0x9812C8: mov     ecx, [ebp+Size]
0x9812CB: mov     edi, [ebp+Dst]
0x9812CE: mov     eax, ecx
0x9812D0: mov     edx, ecx
0x9812D2: add     eax, esi
0x9812D4: cmp     edi, esi
0x9812D6: jbe     short CopyUp
0x9812D8: cmp     edi, eax
0x9812DA: jb      CopyDown
0x9812E0: cmp     ecx, 100h
0x9812E6: jb      short Dword_align
0x9812E8: cmp     dword ptr ds:0BAABE0h, 0
0x9812EF: jz      short Dword_align
0x9812F1: push    edi
0x9812F2: push    esi
0x9812F3: and     edi, 0Fh
0x9812F6: and     esi, 0Fh
0x9812F9: cmp     edi, esi
0x9812FB: pop     esi
0x9812FC: pop     edi
0x9812FD: jnz     short Dword_align
0x9812FF: pop     esi
0x981300: pop     edi
0x981301: pop     ebp
0x981302: jmp     __VEC_memcpy
0x981307: test    edi, 3
0x98130D: jnz     short CopyLeadUp
0x98130F: shr     ecx, 2
0x981312: and     edx, 3
0x981315: cmp     ecx, 8; switch 8 cases
0x981318: jb      short CopyUnwindUp
0x98131A: rep movsd; jumptable 00981344 default case
0x98131C: jmp     ds:jpt_98131C[edx*4]; switch 4 cases
