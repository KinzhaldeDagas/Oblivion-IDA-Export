0x990BA7: cmp     byte ptr [edx+0Eh], 5
0x990BAB: jnz     short cwdefault
0x990BAD: mov     bx, [ebp-0A4h]
0x990BB4: or      bh, 2
0x990BB7: and     bh, 0FEh
0x990BBA: mov     bl, 3Fh ; '?'
0x990BBC: jmp     short setcw
0x990BBE: mov     bx, 133Fh
0x990BC2: mov     [ebp-0A2h], bx
0x990BC9: fldcw   word ptr [ebp-0A2h]
0x990BCF: mov     ebx, offset unk_B319CC
0x990BD4: fxam
0x990BD6: mov     [ebp-94h], edx
0x990BDC: fstsw   word ptr [ebp-0A0h]
0x990BE3: mov     byte ptr [ebp-90h], 0
0x990BEA: fxch    st(1)
0x990BEC: mov     cl, [ebp-9Fh]
0x990BF2: fxam
0x990BF4: fstsw   word ptr [ebp-0A0h]
0x990BFB: fxch    st(1)
0x990BFD: mov     ch, [ebp-9Fh]
0x990C03: shl     ch, 1
0x990C05: sar     ch, 1
0x990C07: rol     ch, 1
0x990C09: mov     al, ch
0x990C0B: and     al, 0Fh
0x990C0D: xlat
0x990C0E: mov     ah, al
0x990C10: shl     cl, 1
0x990C12: sar     cl, 1
0x990C14: rol     cl, 1
0x990C16: mov     al, cl
0x990C18: and     al, 0Fh
0x990C1A: xlat
0x990C1B: shl     ah, 1
0x990C1D: shl     ah, 1
0x990C1F: or      al, ah
0x990C21: movsx   eax, al
0x990C24: and     ecx, 404h
0x990C2A: mov     ebx, edx
0x990C2C: add     ebx, eax
0x990C2E: add     ebx, 10h
0x990C31: jmp     dword ptr [ebx]
