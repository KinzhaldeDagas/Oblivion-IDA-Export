0x4A2E20: push    edi
0x4A2E21: mov     edi, ecx
0x4A2E23: mov     ecx, [edi+18h]
0x4A2E26: test    ecx, ecx
0x4A2E28: jz      short loc_4A2E2F
0x4A2E2A: call    sub_4A4400
0x4A2E2F: mov     eax, [edi+1Ch]
0x4A2E32: test    eax, eax
0x4A2E34: jz      short loc_4A2E80
0x4A2E36: push    esi
0x4A2E37: mov     esi, [eax]
0x4A2E39: test    esi, esi
0x4A2E3B: jz      short loc_4A2E7F
0x4A2E3D: lea     ecx, [ecx+0]
0x4A2E40: mov     ecx, [eax+4]
0x4A2E43: test    ecx, ecx
0x4A2E45: jz      short loc_4A2E5C
0x4A2E47: mov     edx, [ecx+4]
0x4A2E4A: mov     [eax+4], edx
0x4A2E4D: mov     edx, [ecx]
0x4A2E4F: push    ecx
0x4A2E50: mov     [eax], edx
0x4A2E52: call    FormHeapFree
0x4A2E57: add     esp, 4
0x4A2E5A: jmp     short loc_4A2E62
0x4A2E5C: mov     dword ptr [eax], 0
0x4A2E62: test    esi, esi
0x4A2E64: jz      short loc_4A2E76
0x4A2E66: mov     ecx, esi
0x4A2E68: call    sub_4A76F0
0x4A2E6D: push    esi
0x4A2E6E: call    FormHeapFree
0x4A2E73: add     esp, 4
0x4A2E76: mov     eax, [edi+1Ch]
0x4A2E79: mov     esi, [eax]
0x4A2E7B: test    esi, esi
0x4A2E7D: jnz     short loc_4A2E40
0x4A2E7F: pop     esi
0x4A2E80: pop     edi
0x4A2E81: retn
