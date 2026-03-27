0x76E2A0: push    esi
0x76E2A1: mov     esi, ecx
0x76E2A3: cmp     dword ptr [esi+24h], 0
0x76E2A7: mov     dword ptr [esi], offset ??_7NiD3DShaderDeclaration@@6B@; const NiD3DShaderDeclaration::`vftable'
0x76E2AD: jz      short loc_76E2EC
0x76E2AF: push    edi
0x76E2B0: xor     edi, edi
0x76E2B2: cmp     [esi+20h], edi
0x76E2B5: jbe     short loc_76E2DF
0x76E2B7: push    ebx
0x76E2B8: xor     ebx, ebx
0x76E2BA: lea     ebx, [ebx+0]
0x76E2C0: mov     eax, [esi+24h]
0x76E2C3: add     eax, ebx
0x76E2C5: jz      short loc_76E2D3
0x76E2C7: mov     eax, [eax+8]
0x76E2CA: push    eax
0x76E2CB: call    FormHeapFree
0x76E2D0: add     esp, 4
0x76E2D3: add     edi, 1
0x76E2D6: add     ebx, 10h
0x76E2D9: cmp     edi, [esi+20h]
0x76E2DC: jb      short loc_76E2C0
0x76E2DE: pop     ebx
0x76E2DF: mov     ecx, [esi+24h]
0x76E2E2: push    ecx
0x76E2E3: call    FormHeapFree
0x76E2E8: add     esp, 4
0x76E2EB: pop     edi
0x76E2EC: mov     eax, [esi+10h]
0x76E2EF: mov     dword ptr [esi+24h], 0
0x76E2F6: mov     dword ptr [esi+8], 0
0x76E2FD: mov     edx, [eax]
0x76E2FF: push    eax
0x76E300: mov     eax, [edx+8]
0x76E303: call    eax
0x76E305: mov     dword ptr [esi+10h], 0
0x76E30C: mov     ecx, esi
0x76E30E: pop     esi
0x76E30F: jmp     NiRefObject_destr
