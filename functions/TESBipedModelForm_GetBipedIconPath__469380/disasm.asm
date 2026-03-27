0x469380: mov     edx, [esp+arg_0]
0x469384: lea     eax, [edx+edx*2+1Bh]
0x469388: lea     eax, [ecx+eax*4]
0x46938B: push    esi
0x46938C: movzx   esi, word ptr [eax+4]
0x469390: cmp     si, 0FFFFh
0x469395: jnz     short loc_4693AE
0x469397: mov     eax, [eax]
0x469399: lea     esi, [eax+1]
0x46939C: push    ebx
0x46939D: lea     ecx, [ecx+0]
0x4693A0: mov     bl, [eax]
0x4693A2: add     eax, 1
0x4693A5: test    bl, bl
0x4693A7: jnz     short loc_4693A0
0x4693A9: sub     eax, esi
0x4693AB: pop     ebx
0x4693AC: jmp     short loc_4693B1
0x4693AE: movzx   eax, si
0x4693B1: test    eax, eax
0x4693B3: pop     esi
0x4693B4: jnz     short loc_4693BD
0x4693B6: cmp     edx, 1
0x4693B9: jnz     short loc_4693BD
0x4693BB: xor     edx, edx
0x4693BD: lea     edx, [edx+edx*2]
0x4693C0: lea     eax, [ecx+edx*4+68h]
0x4693C4: mov     eax, [eax+4]
0x4693C7: test    eax, eax
0x4693C9: jnz     short locret_4693D0
0x4693CB: mov     eax, offset EmptyString
0x4693D0: retn    4
