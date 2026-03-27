0x89BE60: sub     esp, 1Ch
0x89BE63: push    ebx
0x89BE64: mov     ebx, [esp+20h+arg_0]
0x89BE68: push    ebp
0x89BE69: push    esi
0x89BE6A: push    edi
0x89BE6B: mov     edi, [esp+2Ch+arg_4]
0x89BE6F: mov     ecx, [edi+0BCh]
0x89BE75: xor     esi, esi
0x89BE77: xor     eax, eax
0x89BE79: cmp     ecx, esi
0x89BE7B: jle     short loc_89BE8F
0x89BE7D: mov     edx, [edi+0B8h]
0x89BE83: cmp     [edx], ebx
0x89BE85: jz      short loc_89BE92
0x89BE87: inc     eax
0x89BE88: add     edx, 4
0x89BE8B: cmp     eax, ecx
0x89BE8D: jl      short loc_89BE83
0x89BE8F: or      eax, 0FFFFFFFFh
0x89BE92: mov     ecx, [edi+0B8h]
0x89BE98: mov     [ecx+eax*4], esi
0x89BE9B: mov     edx, [edi+54h]
0x89BE9E: mov     byte ptr [edx+26h], 1
0x89BEA2: mov     edx, [ebx]
0x89BEA4: lea     eax, [esp+2Ch+var_10]
0x89BEA8: mov     [esp+2Ch+var_1C], eax
0x89BEAC: lea     eax, [esp+2Ch+var_1C]
0x89BEB0: push    eax
0x89BEB1: mov     ecx, ebx
0x89BEB3: mov     [esp+30h+var_18], esi
0x89BEB7: mov     [esp+30h+var_14], 80000004h
0x89BEBF: call    dword ptr [edx+0Ch]
0x89BEC2: mov     edx, [esp+2Ch+var_18]
0x89BEC6: mov     ebp, [esp+2Ch+var_1C]
0x89BECA: xor     ecx, ecx
0x89BECC: cmp     edx, esi
0x89BECE: jle     short loc_89BEE8
0x89BED0: mov     eax, [ebp+ecx*4+0]
0x89BED4: cmp     eax, edi
0x89BED6: jz      short loc_89BEE3
0x89BED8: mov     esi, [eax+54h]
0x89BEDB: cmp     word ptr [esi+20h], 0FFFFh
0x89BEE1: jnz     short loc_89BEE8
0x89BEE3: inc     ecx
0x89BEE4: cmp     ecx, edx
0x89BEE6: jl      short loc_89BED0
0x89BEE8: mov     ecx, [ebx+0Ch]
0x89BEEB: cmp     esi, ecx
0x89BEED: jz      short loc_89BF01
0x89BEEF: push    ebx
0x89BEF0: call    sub_8DDC90
0x89BEF5: push    ebx
0x89BEF6: mov     ecx, esi
0x89BEF8: call    sub_8DE080
0x89BEFD: mov     ebp, [esp+2Ch+var_1C]
0x89BF01: mov     eax, [esp+2Ch+var_14]
0x89BF05: test    eax, eax
0x89BF07: js      short loc_89BF3A
0x89BF09: mov     ecx, ds:0BA9DE4h
0x89BF0F: mov     edx, large fs:2Ch
0x89BF16: mov     ecx, [edx+ecx*4]
0x89BF19: mov     ecx, [ecx+19Ch]
0x89BF1F: test    ecx, ecx
0x89BF21: jnz     short loc_89BF29
0x89BF23: mov     ecx, ds:0BA7D9Ch
0x89BF29: and     eax, 3FFFFFFFh
0x89BF2E: push    14h
0x89BF30: shl     eax, 2
0x89BF33: push    eax
0x89BF34: push    ebp
0x89BF35: call    sub_8A75D0
0x89BF3A: pop     edi
0x89BF3B: pop     esi
0x89BF3C: pop     ebp
0x89BF3D: pop     ebx
0x89BF3E: add     esp, 1Ch
0x89BF41: retn    8
