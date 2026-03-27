0x58BC20: push    ebx
0x58BC21: push    ebp
0x58BC22: mov     ebp, ecx
0x58BC24: xor     ebx, ebx
0x58BC26: cmp     [ebp+18h], ebx
0x58BC29: jz      short loc_58BC7D
0x58BC2B: push    esi
0x58BC2C: push    edi
0x58BC2D: lea     esi, [ebp+0Ch]
0x58BC30: mov     eax, [esi+4]
0x58BC33: mov     ecx, [eax]
0x58BC35: cmp     ecx, ebx
0x58BC37: mov     [esi+4], ecx
0x58BC3A: jz      short loc_58BC41
0x58BC3C: mov     [ecx+4], ebx
0x58BC3F: jmp     short loc_58BC44
0x58BC41: mov     [esi+8], ebx
0x58BC44: mov     edx, [esi]
0x58BC46: mov     edi, [eax+8]
0x58BC49: push    eax
0x58BC4A: mov     eax, [edx+8]
0x58BC4D: mov     ecx, esi
0x58BC4F: call    eax
0x58BC51: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x58BC55: cmp     edi, ebx
0x58BC57: jz      short loc_58BC76
0x58BC59: mov     ecx, [edi+8]
0x58BC5C: push    ecx
0x58BC5D: call    FormHeapFree
0x58BC62: push    edi
0x58BC63: mov     [edi+8], ebx
0x58BC66: mov     [edi+0Eh], bx
0x58BC6A: mov     [edi+0Ch], bx
0x58BC6E: call    FormHeapFree
0x58BC73: add     esp, 8
0x58BC76: cmp     [ebp+18h], ebx
0x58BC79: jnz     short loc_58BC30
0x58BC7B: pop     edi
0x58BC7C: pop     esi
0x58BC7D: pop     ebp
0x58BC7E: pop     ebx
0x58BC7F: retn
