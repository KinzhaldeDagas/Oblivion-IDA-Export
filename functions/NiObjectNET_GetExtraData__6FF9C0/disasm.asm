0x6FF9C0: cmp     [esp+arg_0], 0
0x6FF9C5: push    ebx
0x6FF9C6: mov     ebx, ecx
0x6FF9C8: jnz     short loc_6FF9D0
0x6FF9CA: xor     eax, eax
0x6FF9CC: pop     ebx
0x6FF9CD: retn    4
0x6FF9D0: push    ebp
0x6FF9D1: push    esi
0x6FF9D2: push    edi
0x6FF9D3: push    offset stru_B3F600; lpCriticalSection
0x6FF9D8: call    dword ptr ds:0A2806Ch
0x6FF9DE: call    dword ptr ds:0A2808Ch
0x6FF9E4: add     dword ptr ds:0B3F67Ch, 1
0x6FF9EB: mov     ds:0B3F678h, eax
0x6FF9F0: mov     ax, [ebx+14h]
0x6FF9F4: sub     ax, 1
0x6FF9F8: movzx   edi, ax
0x6FF9FB: xor     ebp, ebp
0x6FF9FD: test    di, di
0x6FFA00: jl      short loc_6FFA5F
0x6FFA02: movsx   edx, bp
0x6FFA05: movsx   ecx, di
0x6FFA08: add     ecx, edx
0x6FFA0A: sar     ecx, 1
0x6FFA0C: movzx   esi, cx
0x6FFA0F: mov     ecx, [ebx+10h]
0x6FFA12: movsx   eax, si
0x6FFA15: mov     ecx, [ecx+eax*4]
0x6FFA18: call    sub_452A60
0x6FFA1D: mov     ecx, [esp+10h+arg_0]
0x6FFA21: mov     dl, [ecx]
0x6FFA23: cmp     dl, [eax]
0x6FFA25: jnz     short loc_6FFA41
0x6FFA27: test    dl, dl
0x6FFA29: jz      short loc_6FFA3D
0x6FFA2B: mov     dl, [ecx+1]
0x6FFA2E: cmp     dl, [eax+1]
0x6FFA31: jnz     short loc_6FFA41
0x6FFA33: add     ecx, 2
0x6FFA36: add     eax, 2
0x6FFA39: test    dl, dl
0x6FFA3B: jnz     short loc_6FFA21
0x6FFA3D: xor     eax, eax
0x6FFA3F: jmp     short loc_6FFA46
0x6FFA41: sbb     eax, eax
0x6FFA43: sbb     eax, 0FFFFFFFFh
0x6FFA46: test    eax, eax
0x6FFA48: jz      short loc_6FFA86
0x6FFA4A: jle     short loc_6FFA54
0x6FFA4C: add     esi, 1
0x6FFA4F: movzx   ebp, si
0x6FFA52: jmp     short loc_6FFA5A
0x6FFA54: add     esi, 0FFFFFFFFh
0x6FFA57: movzx   edi, si
0x6FFA5A: cmp     bp, di
0x6FFA5D: jle     short loc_6FFA02
0x6FFA5F: sub     dword ptr ds:0B3F67Ch, 1
0x6FFA66: jnz     short loc_6FFA72
0x6FFA68: mov     dword ptr ds:0B3F678h, 0
0x6FFA72: push    offset stru_B3F600; lpCriticalSection
0x6FFA77: call    dword ptr ds:0A28074h
0x6FFA7D: pop     edi
0x6FFA7E: pop     esi
0x6FFA7F: pop     ebp
0x6FFA80: xor     eax, eax
0x6FFA82: pop     ebx
0x6FFA83: retn    4
0x6FFA86: sub     dword ptr ds:0B3F67Ch, 1
0x6FFA8D: jnz     short loc_6FFA99
0x6FFA8F: mov     dword ptr ds:0B3F678h, 0
0x6FFA99: push    offset stru_B3F600; lpCriticalSection
0x6FFA9E: call    dword ptr ds:0A28074h
0x6FFAA4: mov     eax, [ebx+10h]
0x6FFAA7: pop     edi
0x6FFAA8: movsx   edx, si
0x6FFAAB: mov     eax, [eax+edx*4]
0x6FFAAE: pop     esi
0x6FFAAF: pop     ebp
0x6FFAB0: pop     ebx
0x6FFAB1: retn    4
