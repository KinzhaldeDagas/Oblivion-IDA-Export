0x8DCFA0: push    ebx
0x8DCFA1: push    esi
0x8DCFA2: mov     esi, [esp+8+arg_0]
0x8DCFA6: push    edi
0x8DCFA7: mov     edi, [esi+140h]
0x8DCFAD: dec     edi
0x8DCFAE: js      short loc_8DCFD8
0x8DCFB0: mov     ebx, [esp+0Ch+arg_8]
0x8DCFB4: push    ebp
0x8DCFB5: mov     ebp, [esp+10h+arg_4]
0x8DCFB9: lea     esp, [esp+0]
0x8DCFC0: mov     eax, [esi+13Ch]
0x8DCFC6: mov     ecx, [eax+edi*4]
0x8DCFC9: test    ecx, ecx
0x8DCFCB: jz      short loc_8DCFD4
0x8DCFCD: mov     edx, [ecx]
0x8DCFCF: push    ebx
0x8DCFD0: push    ebp
0x8DCFD1: call    dword ptr [edx+4]
0x8DCFD4: dec     edi
0x8DCFD5: jns     short loc_8DCFC0
0x8DCFD7: pop     ebp
0x8DCFD8: mov     edx, [esi+140h]
0x8DCFDE: dec     edx
0x8DCFDF: js      short loc_8DD01F
0x8DCFE1: mov     eax, [esi+13Ch]
0x8DCFE7: cmp     dword ptr [eax+edx*4], 0
0x8DCFEB: jnz     short loc_8DD01C
0x8DCFED: mov     ebx, [esi+140h]
0x8DCFF3: dec     ebx
0x8DCFF4: mov     ecx, ebx
0x8DCFF6: cmp     edx, ecx
0x8DCFF8: mov     [esi+140h], ebx
0x8DCFFE: mov     eax, edx
0x8DD000: jge     short loc_8DD01C
0x8DD002: mov     ecx, [esi+13Ch]
0x8DD008: mov     edi, [ecx+eax*4+4]
0x8DD00C: lea     ecx, [ecx+eax*4]
0x8DD00F: mov     [ecx], edi
0x8DD011: mov     ecx, [esi+140h]
0x8DD017: inc     eax
0x8DD018: cmp     eax, ecx
0x8DD01A: jl      short loc_8DD002
0x8DD01C: dec     edx
0x8DD01D: jns     short loc_8DCFE1
0x8DD01F: pop     edi
0x8DD020: pop     esi
0x8DD021: pop     ebx
0x8DD022: retn
