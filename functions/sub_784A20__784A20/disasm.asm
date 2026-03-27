0x784A20: push    ebx
0x784A21: mov     ebx, ecx
0x784A23: push    esi
0x784A24: mov     esi, [ebx+4]
0x784A27: test    esi, esi
0x784A29: jz      short loc_784A4E
0x784A2B: push    edi
0x784A2C: mov     edi, [ebx+8]
0x784A2F: cmp     esi, edi
0x784A31: jz      short loc_784A41
0x784A33: mov     ecx, esi; void *
0x784A35: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x784A3A: add     esi, 18h
0x784A3D: cmp     esi, edi
0x784A3F: jnz     short loc_784A33
0x784A41: mov     eax, [ebx+4]
0x784A44: push    eax
0x784A45: call    FormHeapFree
0x784A4A: add     esp, 4
0x784A4D: pop     edi
0x784A4E: pop     esi
0x784A4F: mov     dword ptr [ebx+4], 0
0x784A56: mov     dword ptr [ebx+8], 0
0x784A5D: mov     dword ptr [ebx+0Ch], 0
0x784A64: pop     ebx
0x784A65: retn
