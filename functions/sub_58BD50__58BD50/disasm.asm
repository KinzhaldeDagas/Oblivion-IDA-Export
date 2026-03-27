0x58BD50: push    ebx
0x58BD51: push    ebp
0x58BD52: push    esi
0x58BD53: push    edi
0x58BD54: mov     ebp, offset unk_B3B0BC
0x58BD59: xor     ebx, ebx
0x58BD5B: jmp     short loc_58BD60
0x58BD5D: align 10h
0x58BD60: cmp     [ebp+0], ebx
0x58BD63: jz      short loc_58BDB3
0x58BD65: lea     esi, [ebp-0Ch]
0x58BD68: mov     eax, [esi+4]
0x58BD6B: mov     ecx, [eax]
0x58BD6D: cmp     ecx, ebx
0x58BD6F: mov     [esi+4], ecx
0x58BD72: jz      short loc_58BD79
0x58BD74: mov     [ecx+4], ebx
0x58BD77: jmp     short loc_58BD7C
0x58BD79: mov     [esi+8], ebx
0x58BD7C: mov     edx, [esi]
0x58BD7E: mov     edi, [eax+8]
0x58BD81: push    eax
0x58BD82: mov     eax, [edx+8]
0x58BD85: mov     ecx, esi
0x58BD87: call    eax
0x58BD89: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x58BD8D: cmp     edi, ebx
0x58BD8F: jz      short loc_58BDAE
0x58BD91: mov     ecx, [edi+8]
0x58BD94: push    ecx
0x58BD95: call    FormHeapFree
0x58BD9A: push    edi
0x58BD9B: mov     [edi+8], ebx
0x58BD9E: mov     [edi+0Eh], bx
0x58BDA2: mov     [edi+0Ch], bx
0x58BDA6: call    FormHeapFree
0x58BDAB: add     esp, 8
0x58BDAE: cmp     [ebp+0], ebx
0x58BDB1: jnz     short loc_58BD68
0x58BDB3: add     ebp, 10h
0x58BDB6: cmp     ebp, offset dword_B3B27C
0x58BDBC: jl      short loc_58BD60
0x58BDBE: pop     edi
0x58BDBF: pop     esi
0x58BDC0: pop     ebp
0x58BDC1: pop     ebx
0x58BDC2: retn
