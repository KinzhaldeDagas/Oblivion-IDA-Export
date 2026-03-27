0x434C60: push    ebp
0x434C61: mov     ebp, [esp+4+arg_0]
0x434C65: push    edi
0x434C66: mov     edi, ecx
0x434C68: mov     eax, [edi+1Ch]
0x434C6B: test    eax, eax
0x434C6D: jz      short loc_434C9E
0x434C6F: push    ebx
0x434C70: movzx   ebx, word ptr [eax+0Ah]
0x434C74: push    esi
0x434C75: xor     esi, esi
0x434C77: test    ebx, ebx
0x434C79: jbe     short loc_434C9C
0x434C7B: jmp     short loc_434C80
0x434C7D: align 10h
0x434C80: mov     eax, [edi+1Ch]
0x434C83: mov     ecx, [eax+4]
0x434C86: mov     ecx, [ecx+esi*4]
0x434C89: test    ecx, ecx
0x434C8B: jz      short loc_434C95
0x434C8D: mov     edx, [ecx]
0x434C8F: mov     eax, [edx+1Ch]
0x434C92: push    ebp
0x434C93: call    eax
0x434C95: add     esi, 1
0x434C98: cmp     esi, ebx
0x434C9A: jb      short loc_434C80
0x434C9C: pop     esi
0x434C9D: pop     ebx
0x434C9E: mov     ecx, ioManager
0x434CA4: push    ebp
0x434CA5: push    edi
0x434CA6: call    sub_432820
0x434CAB: pop     edi
0x434CAC: pop     ebp
0x434CAD: retn    4
