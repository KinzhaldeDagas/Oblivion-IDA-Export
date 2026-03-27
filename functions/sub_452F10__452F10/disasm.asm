0x452F10: push    ebx
0x452F11: mov     ebx, [esp+4+a2]
0x452F15: push    esi
0x452F16: push    edi
0x452F17: lea     eax, [esp+0Ch+a2]
0x452F1B: push    eax
0x452F1C: push    ebx
0x452F1D: mov     edi, ecx
0x452F1F: call    NiTMap_GetAt
0x452F24: test    al, al
0x452F26: jnz     short loc_452F5F
0x452F28: push    8; Size
0x452F2A: call    FormHeapAlloc
0x452F2F: add     esp, 4
0x452F32: test    eax, eax
0x452F34: jz      short loc_452F50
0x452F36: push    eax; a3
0x452F37: push    ebx; a2
0x452F38: mov     ecx, edi; this
0x452F3A: mov     dword ptr [eax], 0
0x452F40: mov     dword ptr [eax+4], 0
0x452F47: mov     esi, eax
0x452F49: call    NiTMap_SetAt
0x452F4E: jmp     short loc_452F63
0x452F50: xor     eax, eax
0x452F52: push    eax; a3
0x452F53: push    ebx; a2
0x452F54: mov     ecx, edi; this
0x452F56: mov     esi, eax
0x452F58: call    NiTMap_SetAt
0x452F5D: jmp     short loc_452F63
0x452F5F: mov     esi, [esp+0Ch+a2]
0x452F63: push    0Ch; Size
0x452F65: call    FormHeapAlloc
0x452F6A: mov     ecx, [esp+10h+arg_4]
0x452F6E: mov     edi, eax
0x452F70: add     esp, 4
0x452F73: mov     [edi], ecx
0x452F75: fld     [esp+0Ch+arg_8]
0x452F79: fistp   [esp+0Ch+a2]
0x452F7D: mov     edx, [esp+0Ch+a2]
0x452F81: sar     edx, 0Ch
0x452F84: mov     [edi+4], edx
0x452F87: fld     [esp+0Ch+arg_C]
0x452F8B: fistp   [esp+0Ch+a2]
0x452F8F: mov     eax, [esp+0Ch+a2]
0x452F93: sar     eax, 0Ch
0x452F96: mov     [edi+8], eax
0x452F99: cmp     dword ptr [esi], 0
0x452F9C: jz      short loc_452FD3
0x452F9E: push    8; Size
0x452FA0: call    FormHeapAlloc
0x452FA5: add     esp, 4
0x452FA8: test    eax, eax
0x452FAA: jz      short loc_452FC8
0x452FAC: mov     ecx, [esi]
0x452FAE: mov     [eax], ecx
0x452FB0: mov     dword ptr [eax+4], 0
0x452FB7: mov     edx, [esi+4]
0x452FBA: mov     [eax+4], edx
0x452FBD: mov     [esi], edi
0x452FBF: pop     edi
0x452FC0: mov     [esi+4], eax
0x452FC3: pop     esi
0x452FC4: pop     ebx
0x452FC5: retn    14h
0x452FC8: mov     edx, [esi+4]
0x452FCB: xor     eax, eax
0x452FCD: mov     [eax+4], edx
0x452FD0: mov     [esi+4], eax
0x452FD3: mov     [esi], edi
0x452FD5: pop     edi
0x452FD6: pop     esi
0x452FD7: pop     ebx
0x452FD8: retn    14h
