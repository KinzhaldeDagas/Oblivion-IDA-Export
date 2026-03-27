0x78FC20: push    ebx
0x78FC21: mov     ebx, [esp+4+arg_0]
0x78FC25: push    ebp
0x78FC26: mov     ebp, [esp+8+arg_8]
0x78FC2A: push    esi
0x78FC2B: mov     esi, [esp+0Ch+arg_4]
0x78FC2F: sub     esi, ebx
0x78FC31: mov     ecx, ebp
0x78FC33: sub     ecx, ebx
0x78FC35: sar     esi, 2
0x78FC38: sar     ecx, 2
0x78FC3B: test    esi, esi
0x78FC3D: push    edi
0x78FC3E: mov     eax, ecx
0x78FC40: mov     edi, esi
0x78FC42: jz      short loc_78FC4F
0x78FC44: cdq
0x78FC45: idiv    edi
0x78FC47: mov     eax, edi
0x78FC49: test    edx, edx
0x78FC4B: mov     edi, edx
0x78FC4D: jnz     short loc_78FC44
0x78FC4F: cmp     eax, ecx
0x78FC51: jge     short loc_78FCB2
0x78FC53: test    eax, eax
0x78FC55: jle     short loc_78FCB2
0x78FC57: lea     ebx, [ebx+eax*4]
0x78FC5A: lea     ebx, [ebx+0]
0x78FC60: mov     ecx, [ebx]
0x78FC62: lea     edx, [ebx+esi*4]
0x78FC65: cmp     edx, ebp
0x78FC67: mov     edi, ebx
0x78FC69: mov     [esp+10h+arg_4], ecx
0x78FC6D: jnz     short loc_78FC73
0x78FC6F: mov     edx, [esp+10h+arg_0]
0x78FC73: cmp     edx, ebx
0x78FC75: jz      short loc_78FCA2
0x78FC77: mov     ecx, [edx]
0x78FC79: mov     [edi], ecx
0x78FC7B: mov     ecx, ebp
0x78FC7D: sub     ecx, edx
0x78FC7F: sar     ecx, 2
0x78FC82: cmp     esi, ecx
0x78FC84: mov     edi, edx
0x78FC86: jge     short loc_78FC93
0x78FC88: lea     ecx, ds:0[esi*4]
0x78FC8F: add     edx, ecx
0x78FC91: jmp     short loc_78FC9E
0x78FC93: mov     edx, esi
0x78FC95: sub     edx, ecx
0x78FC97: mov     ecx, [esp+10h+arg_0]
0x78FC9B: lea     edx, [ecx+edx*4]
0x78FC9E: cmp     edx, ebx
0x78FCA0: jnz     short loc_78FC77
0x78FCA2: mov     edx, [esp+10h+arg_4]
0x78FCA6: sub     eax, 1
0x78FCA9: sub     ebx, 4
0x78FCAC: test    eax, eax
0x78FCAE: mov     [edi], edx
0x78FCB0: jg      short loc_78FC60
0x78FCB2: pop     edi
0x78FCB3: pop     esi
0x78FCB4: pop     ebp
0x78FCB5: pop     ebx
0x78FCB6: retn
