0x780A40: push    ebx
0x780A41: push    esi
0x780A42: push    edi
0x780A43: mov     edi, [esp+0Ch+arg_0]
0x780A47: push    edi
0x780A48: mov     esi, ecx
0x780A4A: call    ??0NiD3DShaderConstantManager@@QAE@XZ; NiD3DShaderConstantManager::NiD3DShaderConstantManager(void)
0x780A4F: mov     ecx, [esp+0Ch+arg_4]
0x780A53: mov     dword ptr [esi], offset ??_7NiDX9ShaderConstantManager@@6B@; const NiDX9ShaderConstantManager::`vftable'
0x780A59: mov     eax, [ecx+0C8h]
0x780A5F: mov     [esi+28h], eax
0x780A62: movzx   eax, byte ptr [ecx+0C5h]
0x780A69: xor     edx, edx
0x780A6B: cmp     eax, 1
0x780A6E: mov     ebx, 10h
0x780A73: jnz     short loc_780A7D
0x780A75: mov     [esi+78h], edx
0x780A78: mov     [esi+50h], edx
0x780A7B: jmp     short loc_780A9E
0x780A7D: cmp     eax, 2
0x780A80: jnz     short loc_780A93
0x780A82: mov     eax, [ecx+0FCh]
0x780A88: neg     eax
0x780A8A: sbb     eax, eax
0x780A8C: and     eax, ebx
0x780A8E: mov     [esi+7Ch], eax
0x780A91: jmp     short loc_780A9B
0x780A93: cmp     eax, 3
0x780A96: jnz     short loc_780A9E
0x780A98: mov     [esi+78h], ebx
0x780A9B: mov     [esi+50h], ebx
0x780A9E: cmp     [esi+28h], edx
0x780AA1: jnz     short loc_780ABB
0x780AA3: cmp     [edi+5C8h], dl
0x780AA9: jz      short loc_780ABB
0x780AAB: mov     byte ptr [esi+88h], 1
0x780AB2: mov     dword ptr [esi+28h], 2000h
0x780AB9: jmp     short loc_780AC1
0x780ABB: mov     [esi+88h], dl
0x780AC1: movzx   eax, byte ptr [ecx+0CDh]
0x780AC8: cmp     eax, 1
0x780ACB: jnz     short loc_780AE2
0x780ACD: pop     edi
0x780ACE: mov     dword ptr [esi+2Ch], 8
0x780AD5: mov     [esi+7Ch], edx
0x780AD8: mov     [esi+54h], edx
0x780ADB: mov     eax, esi
0x780ADD: pop     esi
0x780ADE: pop     ebx
0x780ADF: retn    8
0x780AE2: cmp     eax, 2
0x780AE5: jnz     short loc_780B08
0x780AE7: mov     dword ptr [esi+2Ch], 20h ; ' '
0x780AEE: mov     ecx, [ecx+10Ch]
0x780AF4: neg     ecx
0x780AF6: sbb     ecx, ecx
0x780AF8: and     ecx, ebx
0x780AFA: pop     edi
0x780AFB: mov     [esi+54h], ebx
0x780AFE: mov     [esi+7Ch], ecx
0x780B01: mov     eax, esi
0x780B03: pop     esi
0x780B04: pop     ebx
0x780B05: retn    8
0x780B08: cmp     eax, 3
0x780B0B: jnz     short loc_780B1A
0x780B0D: mov     dword ptr [esi+2Ch], 0E0h ; 'à'
0x780B14: mov     [esi+7Ch], ebx
0x780B17: mov     [esi+54h], ebx
0x780B1A: pop     edi
0x780B1B: mov     eax, esi
0x780B1D: pop     esi
0x780B1E: pop     ebx
0x780B1F: retn    8
