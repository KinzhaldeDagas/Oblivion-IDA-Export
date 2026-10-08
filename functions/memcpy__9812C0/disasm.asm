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
0x981324: mov     eax, edi
0x981326: mov     edx, 3
0x98132B: sub     ecx, 4
0x98132E: jb      short ByteCopyUp
0x981330: and     eax, 3
0x981333: add     ecx, eax
0x981335: jmp     dword ptr ds:981348h[eax*4]
0x98133C: jmp     dword ptr ds:981444h[ecx*4]
0x981344: jmp     ds:jpt_981344[ecx*4]; switch jump
0x9813E8: mov     eax, [esi+ecx*4-1Ch]; jumptable 00981344 case 7
0x9813EC: mov     [edi+ecx*4-1Ch], eax
0x9813F0: mov     eax, [esi+ecx*4-18h]; jumptable 00981344 case 6
0x9813F4: mov     [edi+ecx*4-18h], eax
0x9813F8: mov     eax, [esi+ecx*4-14h]; jumptable 00981344 case 5
0x9813FC: mov     [edi+ecx*4-14h], eax
0x981400: mov     eax, [esi+ecx*4-10h]; jumptable 00981344 case 4
0x981404: mov     [edi+ecx*4-10h], eax
0x981408: mov     eax, [esi+ecx*4-0Ch]; jumptable 00981344 case 3
0x98140C: mov     [edi+ecx*4-0Ch], eax
0x981410: mov     eax, [esi+ecx*4-8]; jumptable 00981344 case 2
0x981414: mov     [edi+ecx*4-8], eax
0x981418: mov     eax, [esi+ecx*4-4]; jumptable 00981344 case 1
0x98141C: mov     [edi+ecx*4-4], eax
0x981420: lea     eax, ds:0[ecx*4]
0x981427: add     esi, eax
0x981429: add     edi, eax
0x98142B: jmp     ds:jpt_98131C[edx*4]; jumptable 00981344 case 0
0x981444: mov     eax, [ebp+Dst]; jumptable 0098131C case 0
0x981447: pop     esi
0x981448: pop     edi
0x981449: leave
0x98144A: retn
0x98144C: mov     al, [esi]; jumptable 0098131C case 1
0x98144E: mov     [edi], al
0x981450: mov     eax, [ebp+Dst]
0x981453: pop     esi
0x981454: pop     edi
0x981455: leave
0x981456: retn
0x981458: mov     al, [esi]; jumptable 0098131C case 2
0x98145A: mov     [edi], al
0x98145C: mov     al, [esi+1]
0x98145F: mov     [edi+1], al
0x981462: mov     eax, [ebp+Dst]
0x981465: pop     esi
0x981466: pop     edi
0x981467: leave
0x981468: retn
0x98146C: mov     al, [esi]; jumptable 0098131C case 3
0x98146E: mov     [edi], al
0x981470: mov     al, [esi+1]
0x981473: mov     [edi+1], al
0x981476: mov     al, [esi+2]
0x981479: mov     [edi+2], al
0x98147C: mov     eax, [ebp+Dst]
0x98147F: pop     esi
0x981480: pop     edi
0x981481: leave
0x981482: retn
0x981484: lea     esi, [ecx+esi-4]
0x981488: lea     edi, [ecx+edi-4]
0x98148C: test    edi, 3
0x981492: jnz     short CopyLeadDown
0x981494: shr     ecx, 2
0x981497: and     edx, 3
0x98149A: cmp     ecx, 8
0x98149D: jb      short CopyUnwindDown
0x98149F: std
0x9814A0: rep movsd
0x9814A2: cld
0x9814A3: jmp     ds:jpt_9814D0[edx*4]; switch 4 cases
0x9814AC: neg     ecx
0x9814AE: jmp     ds:jpt_9814AE[ecx*4]; switch 1 cases
0x9814B8: mov     eax, edi
0x9814BA: mov     edx, 3
0x9814BF: cmp     ecx, 4; switch 4 cases
0x9814C2: jb      short ByteCopyDown
0x9814C4: and     eax, 3; jumptable 009814D0 default case
0x9814C7: sub     ecx, eax
0x9814C9: jmp     dword ptr ds:9814D4h[eax*4]
0x9814D0: jmp     ds:jpt_9814D0[ecx*4]; switch jump
0x9815C7: jmp     ds:jpt_9814D0[edx*4]; jumptable 009814AE case 0
0x9815E0: mov     eax, [ebp+Dst]; jumptable 009814A3 case 0
0x9815E3: pop     esi
0x9815E4: pop     edi
0x9815E5: leave
0x9815E6: retn
0x9815E8: mov     al, [esi+3]; jumptable 009814A3 case 1
0x9815EB: mov     [edi+3], al
0x9815EE: mov     eax, [ebp+Dst]
0x9815F1: pop     esi
0x9815F2: pop     edi
0x9815F3: leave
0x9815F4: retn
0x9815F8: mov     al, [esi+3]; jumptable 009814A3 case 2
0x9815FB: mov     [edi+3], al
0x9815FE: mov     al, [esi+2]
0x981601: mov     [edi+2], al
0x981604: mov     eax, [ebp+Dst]
0x981607: pop     esi
0x981608: pop     edi
0x981609: leave
0x98160A: retn
0x98160C: mov     al, [esi+3]; jumptable 009814A3 case 3
0x98160F: mov     [edi+3], al
0x981612: mov     al, [esi+2]
0x981615: mov     [edi+2], al
0x981618: mov     al, [esi+1]
0x98161B: mov     [edi+1], al
0x98161E: mov     eax, [ebp+Dst]
0x981621: pop     esi
0x981622: pop     edi
0x981623: leave
0x981624: retn
