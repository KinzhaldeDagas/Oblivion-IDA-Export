0x92F1D0: push    esi
0x92F1D1: mov     esi, ecx
0x92F1D3: mov     ecx, [esi+8]
0x92F1D6: push    edi
0x92F1D7: mov     edi, [esp+8+arg_0]
0x92F1DB: mov     edx, [edi+4]
0x92F1DE: mov     eax, ecx
0x92F1E0: and     eax, 3FFFFFFFh
0x92F1E5: cmp     eax, edx
0x92F1E7: jge     short loc_92F240
0x92F1E9: test    ecx, ecx
0x92F1EB: push    ebx
0x92F1EC: mov     ebx, ds:0BA9DE4h
0x92F1F2: push    ebp
0x92F1F3: mov     ebp, large fs:2Ch
0x92F1FA: js      short loc_92F214
0x92F1FC: mov     ecx, [esi]
0x92F1FE: mov     edx, [ebp+ebx*4+0]
0x92F202: push    14h
0x92F204: shl     eax, 3
0x92F207: push    eax
0x92F208: push    ecx
0x92F209: mov     ecx, [edx+19Ch]
0x92F20F: call    sub_8A75D0
0x92F214: mov     edx, [edi+4]
0x92F217: mov     eax, [ebp+ebx*4+0]
0x92F21B: mov     ecx, [eax+19Ch]
0x92F221: push    14h
0x92F223: shl     edx, 3
0x92F226: push    edx
0x92F227: call    sub_8A7560
0x92F22C: mov     [esi], eax
0x92F22E: mov     eax, [esi+8]
0x92F231: mov     ecx, [edi+4]
0x92F234: and     eax, 40000000h
0x92F239: or      eax, ecx
0x92F23B: pop     ebp
0x92F23C: mov     [esi+8], eax
0x92F23F: pop     ebx
0x92F240: mov     edx, [edi+4]
0x92F243: test    edx, edx
0x92F245: mov     eax, [esi]
0x92F247: mov     [esi+4], edx
0x92F24A: mov     ecx, [edi]
0x92F24C: jle     short loc_92F262
0x92F24E: sub     ecx, eax
0x92F250: mov     edi, [ecx+eax]
0x92F253: mov     [eax], edi
0x92F255: mov     edi, [ecx+eax+4]
0x92F259: mov     [eax+4], edi
0x92F25C: add     eax, 8
0x92F25F: dec     edx
0x92F260: jnz     short loc_92F250
0x92F262: pop     edi
0x92F263: mov     eax, esi
0x92F265: pop     esi
0x92F266: retn    4
