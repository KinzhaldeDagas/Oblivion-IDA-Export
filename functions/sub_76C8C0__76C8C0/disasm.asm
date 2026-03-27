0x76C8C0: push    ebx
0x76C8C1: push    ebp
0x76C8C2: push    esi
0x76C8C3: mov     esi, ecx
0x76C8C5: xor     ebp, ebp
0x76C8C7: xor     ebx, ebx
0x76C8C9: cmp     [esi+0Ah], bp
0x76C8CD: jbe     short loc_76C8F6
0x76C8CF: push    edi
0x76C8D0: mov     ecx, [esi+4]
0x76C8D3: movzx   eax, bx
0x76C8D6: lea     edi, [ecx+eax*4]
0x76C8D9: mov     ecx, [edi]
0x76C8DB: cmp     ecx, ebp
0x76C8DD: jz      short loc_76C8EC
0x76C8DF: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76C8E3: jnz     short loc_76C8EA
0x76C8E5: call    sub_7604D0
0x76C8EA: mov     [edi], ebp
0x76C8EC: add     ebx, 1
0x76C8EF: cmp     bx, [esi+0Ah]
0x76C8F3: jb      short loc_76C8D0
0x76C8F5: pop     edi
0x76C8F6: mov     [esi+0Ch], bp
0x76C8FA: mov     [esi+0Ah], bp
0x76C8FE: pop     esi
0x76C8FF: pop     ebp
0x76C900: pop     ebx
0x76C901: retn
