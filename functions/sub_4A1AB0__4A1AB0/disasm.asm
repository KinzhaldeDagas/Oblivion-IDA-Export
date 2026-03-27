0x4A1AB0: push    ebx
0x4A1AB1: mov     ebx, [esp+4+arg_0]
0x4A1AB5: push    esi
0x4A1AB6: mov     esi, ecx
0x4A1AB8: mov     eax, [esi]
0x4A1ABA: mov     edx, [eax+4]
0x4A1ABD: push    edi
0x4A1ABE: push    ebx
0x4A1ABF: call    edx
0x4A1AC1: mov     ecx, [esi+8]
0x4A1AC4: mov     edi, [ecx+eax*4]
0x4A1AC7: test    edi, edi
0x4A1AC9: jz      short loc_4A1AE8
0x4A1ACB: jmp     short loc_4A1AD0
0x4A1ACD: align 10h
0x4A1AD0: mov     eax, [edi+4]
0x4A1AD3: mov     edx, [esi]
0x4A1AD5: mov     edx, [edx+8]
0x4A1AD8: push    eax
0x4A1AD9: push    ebx
0x4A1ADA: mov     ecx, esi
0x4A1ADC: call    edx
0x4A1ADE: test    al, al
0x4A1AE0: jnz     short loc_4A1AF0
0x4A1AE2: mov     edi, [edi]
0x4A1AE4: test    edi, edi
0x4A1AE6: jnz     short loc_4A1AD0
0x4A1AE8: pop     edi
0x4A1AE9: pop     esi
0x4A1AEA: xor     al, al
0x4A1AEC: pop     ebx
0x4A1AED: retn    8
0x4A1AF0: mov     ecx, [esp+0Ch+arg_4]
0x4A1AF4: add     edi, 8
0x4A1AF7: push    edi
0x4A1AF8: call    sub_55E2A0
0x4A1AFD: pop     edi
0x4A1AFE: pop     esi
0x4A1AFF: mov     al, 1
0x4A1B01: pop     ebx
0x4A1B02: retn    8
