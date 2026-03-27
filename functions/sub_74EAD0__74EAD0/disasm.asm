0x74EAD0: push    ebp
0x74EAD1: push    esi
0x74EAD2: push    edi
0x74EAD3: mov     edi, [esp+0Ch+arg_0]
0x74EAD7: push    edi
0x74EAD8: mov     esi, ecx
0x74EADA: call    sub_722FC0
0x74EADF: mov     eax, [esi+0B4h]
0x74EAE5: test    eax, eax
0x74EAE7: jz      short loc_74EAFD
0x74EAE9: mov     eax, [eax+68h]
0x74EAEC: test    eax, eax
0x74EAEE: jz      short loc_74EAFD
0x74EAF0: mov     edx, [eax]
0x74EAF2: mov     ecx, eax
0x74EAF4: mov     eax, [edx+80h]
0x74EAFA: push    edi
0x74EAFB: call    eax
0x74EAFD: mov     ebp, [esi+0C8h]
0x74EB03: test    ebp, ebp
0x74EB05: jz      loc_74EBD5
0x74EB0B: push    ebx
0x74EB0C: lea     esp, [esp+0]
0x74EB10: mov     esi, [ebp+8]
0x74EB13: test    esi, esi
0x74EB15: lea     eax, [ebp+8]
0x74EB18: mov     ebp, [ebp+0]
0x74EB1B: jz      loc_74EBCC
0x74EB21: mov     edx, [esi]
0x74EB23: mov     eax, [edx+4]
0x74EB26: mov     ecx, esi
0x74EB28: call    eax
0x74EB2A: test    eax, eax
0x74EB2C: jz      short loc_74EB3E
0x74EB2E: mov     edi, edi
0x74EB30: cmp     eax, offset dword_B408C8
0x74EB35: jz      short loc_74EB60
0x74EB37: mov     eax, [eax+4]
0x74EB3A: test    eax, eax
0x74EB3C: jnz     short loc_74EB30
0x74EB3E: mov     edx, [esi]
0x74EB40: mov     eax, [edx+4]
0x74EB43: mov     ecx, esi
0x74EB45: call    eax
0x74EB47: test    eax, eax
0x74EB49: jz      loc_74EBCC
0x74EB4F: nop
0x74EB50: cmp     eax, offset dword_B40A28
0x74EB55: jz      short loc_74EB9A
0x74EB57: mov     eax, [eax+4]
0x74EB5A: test    eax, eax
0x74EB5C: jnz     short loc_74EB50
0x74EB5E: jmp     short loc_74EBCC
0x74EB60: movzx   ebx, word ptr [esi+5Ch]
0x74EB64: xor     edi, edi
0x74EB66: test    ebx, ebx
0x74EB68: jbe     short loc_74EBCC
0x74EB6A: lea     ebx, [ebx+0]
0x74EB70: movzx   ecx, word ptr [esi+5Ch]
0x74EB74: cmp     edi, ecx
0x74EB76: jnb     short loc_74EB91
0x74EB78: mov     edx, [esi+54h]
0x74EB7B: mov     ecx, [edx+edi*4]
0x74EB7E: test    ecx, ecx
0x74EB80: jz      short loc_74EB91
0x74EB82: mov     eax, [ecx]
0x74EB84: mov     edx, [esp+10h+arg_0]
0x74EB88: mov     eax, [eax+80h]
0x74EB8E: push    edx
0x74EB8F: call    eax
0x74EB91: add     edi, 1
0x74EB94: cmp     edi, ebx
0x74EB96: jb      short loc_74EB70
0x74EB98: jmp     short loc_74EBCC
0x74EB9A: movzx   ebx, word ptr [esi+22h]
0x74EB9E: xor     edi, edi
0x74EBA0: test    ebx, ebx
0x74EBA2: jbe     short loc_74EBCC
0x74EBA4: movzx   ecx, word ptr [esi+22h]
0x74EBA8: cmp     edi, ecx
0x74EBAA: jnb     short loc_74EBC5
0x74EBAC: mov     edx, [esi+1Ch]
0x74EBAF: mov     ecx, [edx+edi*4]
0x74EBB2: test    ecx, ecx
0x74EBB4: jz      short loc_74EBC5
0x74EBB6: mov     eax, [ecx]
0x74EBB8: mov     edx, [esp+10h+arg_0]
0x74EBBC: mov     eax, [eax+80h]
0x74EBC2: push    edx
0x74EBC3: call    eax
0x74EBC5: add     edi, 1
0x74EBC8: cmp     edi, ebx
0x74EBCA: jb      short loc_74EBA4
0x74EBCC: test    ebp, ebp
0x74EBCE: jnz     loc_74EB10
0x74EBD4: pop     ebx
0x74EBD5: pop     edi
0x74EBD6: pop     esi
0x74EBD7: pop     ebp
0x74EBD8: retn    4
