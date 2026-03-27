0x6B3240: push    ebx
0x6B3241: mov     ebx, [esp+4+arg_0]
0x6B3245: mov     edx, ecx
0x6B3247: mov     eax, [edx+10h]
0x6B324A: mov     ecx, [edx+8]
0x6B324D: push    ebp
0x6B324E: push    esi
0x6B324F: lea     esi, [ecx+eax]
0x6B3252: movzx   ax, byte ptr [esi]
0x6B3256: mov     ecx, [edx+14h]
0x6B3259: movzx   eax, ax
0x6B325C: lea     ebp, [ecx+ebx]
0x6B325F: shl     eax, 8
0x6B3262: cmp     ebp, 10h
0x6B3265: jle     short loc_6B329A
0x6B3267: push    edi
0x6B3268: movzx   di, byte ptr [esi+1]
0x6B326D: movzx   esi, byte ptr [esi+2]
0x6B3271: movzx   ebx, cx
0x6B3274: add     di, ax
0x6B3277: mov     cx, bx
0x6B327A: shl     di, cl
0x6B327D: movzx   edi, di
0x6B3280: shr     edi, cl
0x6B3282: mov     ecx, 18h
0x6B3287: sub     cl, [edx+14h]
0x6B328A: sub     cl, byte ptr [esp+10h+arg_0]
0x6B328E: shr     esi, cl
0x6B3290: lea     ecx, [ebp-10h]
0x6B3293: shl     edi, cl
0x6B3295: add     esi, edi
0x6B3297: pop     edi
0x6B3298: jmp     short loc_6B32B1
0x6B329A: movzx   si, byte ptr [esi+1]
0x6B329F: add     si, ax
0x6B32A2: shl     si, cl
0x6B32A5: mov     ecx, 10h
0x6B32AA: sub     cl, bl
0x6B32AC: movzx   esi, si
0x6B32AF: shr     esi, cl
0x6B32B1: cmp     ebp, 8
0x6B32B4: mov     [edx+14h], ebp
0x6B32B7: jl      short loc_6B32C2
0x6B32B9: mov     eax, [edx+10h]
0x6B32BC: add     eax, 1
0x6B32BF: mov     [edx+10h], eax
0x6B32C2: cmp     ebp, 10h
0x6B32C5: jl      short loc_6B32CB
0x6B32C7: add     dword ptr [edx+10h], 1
0x6B32CB: and     ebp, 80000007h
0x6B32D1: jns     short loc_6B32D8
0x6B32D3: dec     ebp
0x6B32D4: or      ebp, 0FFFFFFF8h
0x6B32D7: inc     ebp
0x6B32D8: mov     eax, esi
0x6B32DA: pop     esi
0x6B32DB: mov     [edx+14h], ebp
0x6B32DE: pop     ebp
0x6B32DF: pop     ebx
0x6B32E0: retn    4
