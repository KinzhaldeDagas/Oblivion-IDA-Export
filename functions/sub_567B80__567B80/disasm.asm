0x567B80: mov     edx, [esp+arg_0]
0x567B84: push    ebx
0x567B85: push    esi
0x567B86: mov     esi, ecx
0x567B88: mov     bl, [esi+2Ch]
0x567B8B: or      eax, 0FFFFFFFFh
0x567B8E: cmp     bl, al
0x567B90: jnz     short loc_567B96
0x567B92: cmp     [edx], al
0x567B94: jz      short loc_567B9C
0x567B96: mov     cl, [edx]
0x567B98: cmp     bl, cl
0x567B9A: jnz     short loc_567BE8
0x567B9C: mov     bl, [esi+2Eh]
0x567B9F: test    bl, bl
0x567BA1: jnz     short loc_567BA8
0x567BA3: cmp     [edx+2], al
0x567BA6: jz      short loc_567BAF
0x567BA8: mov     cl, [edx+2]
0x567BAB: cmp     bl, cl
0x567BAD: jnz     short loc_567BE8
0x567BAF: mov     bl, [esi+2Dh]
0x567BB2: cmp     bl, al
0x567BB4: jnz     short loc_567BBB
0x567BB6: cmp     [edx+1], al
0x567BB9: jz      short loc_567BC2
0x567BBB: mov     cl, [edx+1]
0x567BBE: cmp     bl, cl
0x567BC0: jnz     short loc_567BE8
0x567BC2: mov     cl, [esi+2Fh]
0x567BC5: cmp     cl, al
0x567BC7: jnz     short loc_567BCE
0x567BC9: cmp     [edx+3], al
0x567BCC: jz      short loc_567BD5
0x567BCE: mov     dl, [edx+3]
0x567BD1: cmp     cl, dl
0x567BD3: jnz     short loc_567BDC
0x567BD5: pop     esi
0x567BD6: xor     eax, eax
0x567BD8: pop     ebx
0x567BD9: retn    4
0x567BDC: cmp     cl, al
0x567BDE: jz      short loc_567BF4
0x567BE0: cmp     dl, al
0x567BE2: jz      short loc_567BF9
0x567BE4: cmp     cl, dl
0x567BE6: jmp     short loc_567BF2
0x567BE8: cmp     bl, al
0x567BEA: jz      short loc_567BF4
0x567BEC: cmp     cl, al
0x567BEE: jz      short loc_567BF9
0x567BF0: cmp     bl, cl
0x567BF2: jl      short loc_567BF9
0x567BF4: mov     eax, 1
0x567BF9: pop     esi
0x567BFA: pop     ebx
0x567BFB: retn    4
