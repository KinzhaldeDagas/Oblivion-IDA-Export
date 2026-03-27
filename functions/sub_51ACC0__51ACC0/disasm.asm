0x51ACC0: mov     eax, [esp+arg_0]
0x51ACC4: cmp     ax, 0FFh
0x51ACC8: jnz     short loc_51ACCD
0x51ACCA: xor     al, al
0x51ACCC: retn
0x51ACCD: movzx   eax, al
0x51ACD0: lea     eax, [eax+eax*8]
0x51ACD3: xor     ecx, ecx
0x51ACD5: cmp     dword ptr ds:0B102ECh[eax*4], 5
0x51ACDD: setz    cl
0x51ACE0: mov     al, cl
0x51ACE2: retn
