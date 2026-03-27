0x5E4A80: push    ebx
0x5E4A81: mov     ebx, ecx
0x5E4A83: cmp     ebx, ds:0B333C4h
0x5E4A89: jnz     short loc_5E4A98
0x5E4A8B: call    GetGodMode
0x5E4A90: test    al, al
0x5E4A92: jz      short loc_5E4A98
0x5E4A94: xor     eax, eax
0x5E4A96: pop     ebx
0x5E4A97: retn
0x5E4A98: mov     ecx, [ebx+58h]
0x5E4A9B: test    ecx, ecx
0x5E4A9D: push    esi
0x5E4A9E: push    edi
0x5E4A9F: jz      short loc_5E4AEC
0x5E4AA1: mov     eax, [ecx]
0x5E4AA3: mov     edx, [eax+0ECh]
0x5E4AA9: push    1
0x5E4AAB: call    edx
0x5E4AAD: mov     edi, eax
0x5E4AAF: test    edi, edi
0x5E4AB1: jz      short loc_5E4AEC
0x5E4AB3: mov     esi, [edi+8]
0x5E4AB6: test    esi, esi
0x5E4AB8: jz      short loc_5E4AEC
0x5E4ABA: cmp     byte ptr [esi+4], 21h ; '!'
0x5E4ABE: jnz     short loc_5E4AEC
0x5E4AC0: cmp     dword ptr [ebx+58h], 0
0x5E4AC4: jz      short loc_5E4AEC
0x5E4AC6: mov     ecx, [ebx+58h]
0x5E4AC9: mov     eax, [ecx]
0x5E4ACB: mov     edx, [eax+304h]
0x5E4AD1: call    edx
0x5E4AD3: test    al, al
0x5E4AD5: jz      short loc_5E4AEC
0x5E4AD7: mov     eax, [esi]
0x5E4AD9: mov     edx, [eax+78h]
0x5E4ADC: mov     ecx, esi
0x5E4ADE: call    edx
0x5E4AE0: neg     al
0x5E4AE2: sbb     eax, eax
0x5E4AE4: not     eax
0x5E4AE6: and     eax, edi
0x5E4AE8: pop     edi
0x5E4AE9: pop     esi
0x5E4AEA: pop     ebx
0x5E4AEB: retn
0x5E4AEC: pop     edi
0x5E4AED: pop     esi
0x5E4AEE: xor     eax, eax
0x5E4AF0: pop     ebx
0x5E4AF1: retn
