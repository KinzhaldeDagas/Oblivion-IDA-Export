0x6CFE70: push    ebx
0x6CFE71: push    edi
0x6CFE72: mov     edi, [esp+8+arg_0]
0x6CFE76: push    edi
0x6CFE77: mov     ebx, ecx
0x6CFE79: call    sub_6D0540
0x6CFE7E: test    al, al
0x6CFE80: jnz     short loc_6CFE89
0x6CFE82: pop     edi
0x6CFE83: xor     al, al
0x6CFE85: pop     ebx
0x6CFE86: retn    4
0x6CFE89: movzx   eax, word ptr [ebx+44h]
0x6CFE8D: cmp     [edi+44h], ax
0x6CFE91: jnz     short loc_6CFE82
0x6CFE93: push    ebp
0x6CFE94: push    esi
0x6CFE95: xor     esi, esi
0x6CFE97: test    ax, ax
0x6CFE9A: jbe     short loc_6CFEEC
0x6CFE9C: lea     esp, [esp+0]
0x6CFEA0: mov     ecx, [ebx+40h]
0x6CFEA3: movzx   eax, si
0x6CFEA6: add     eax, eax
0x6CFEA8: add     eax, eax
0x6CFEAA: lea     edx, [ecx+eax]
0x6CFEAD: mov     ecx, [edx]
0x6CFEAF: test    ecx, ecx
0x6CFEB1: jz      short loc_6CFEC0
0x6CFEB3: mov     ebp, [edi+40h]
0x6CFEB6: cmp     dword ptr [eax+ebp], 0
0x6CFEBA: jz      short loc_6CFEF5
0x6CFEBC: test    ecx, ecx
0x6CFEBE: jnz     short loc_6CFECD
0x6CFEC0: mov     ebp, [edi+40h]
0x6CFEC3: cmp     dword ptr [eax+ebp], 0
0x6CFEC7: jnz     short loc_6CFEF5
0x6CFEC9: test    ecx, ecx
0x6CFECB: jz      short loc_6CFEE3
0x6CFECD: mov     ecx, [edi+40h]
0x6CFED0: mov     eax, [eax+ecx]
0x6CFED3: mov     ebp, [eax]
0x6CFED5: mov     edx, [edx]
0x6CFED7: mov     ecx, eax
0x6CFED9: mov     eax, [ebp+2Ch]
0x6CFEDC: push    edx
0x6CFEDD: call    eax
0x6CFEDF: test    al, al
0x6CFEE1: jz      short loc_6CFEF5
0x6CFEE3: add     esi, 1
0x6CFEE6: cmp     si, [ebx+44h]
0x6CFEEA: jb      short loc_6CFEA0
0x6CFEEC: pop     esi
0x6CFEED: pop     ebp
0x6CFEEE: pop     edi
0x6CFEEF: mov     al, 1
0x6CFEF1: pop     ebx
0x6CFEF2: retn    4
0x6CFEF5: pop     esi
0x6CFEF6: pop     ebp
0x6CFEF7: pop     edi
0x6CFEF8: xor     al, al
0x6CFEFA: pop     ebx
0x6CFEFB: retn    4
