0x8A6900: push    ebx
0x8A6901: push    esi
0x8A6902: mov     esi, ecx
0x8A6904: push    edi
0x8A6905: push    esi
0x8A6906: mov     dword ptr [esi], offset off_A975A8
0x8A690C: call    sub_8DBF50
0x8A6911: mov     ecx, [esi+64h]
0x8A6914: add     esp, 4
0x8A6917: test    ecx, ecx
0x8A6919: jz      short loc_8A6933
0x8A691B: cmp     word ptr [ecx+4], 0
0x8A6920: jz      short loc_8A6933
0x8A6922: dec     word ptr [ecx+6]
0x8A6926: cmp     word ptr [ecx+6], 0
0x8A692B: jnz     short loc_8A6933
0x8A692D: mov     eax, [ecx]
0x8A692F: push    1
0x8A6931: call    dword ptr [eax]
0x8A6933: mov     eax, [esi+0C0h]
0x8A6939: test    eax, eax
0x8A693B: mov     edi, ds:0BA9DE4h
0x8A6941: mov     ebx, large fs:2Ch
0x8A6948: js      short loc_8A6974
0x8A694A: mov     ecx, [ebx+edi*4]
0x8A694D: mov     ecx, [ecx+19Ch]
0x8A6953: test    ecx, ecx
0x8A6955: jnz     short loc_8A695D
0x8A6957: mov     ecx, ds:0BA7D9Ch
0x8A695D: mov     edx, [esi+0B8h]
0x8A6963: and     eax, 3FFFFFFFh
0x8A6968: push    14h
0x8A696A: shl     eax, 2
0x8A696D: push    eax
0x8A696E: push    edx
0x8A696F: call    sub_8A75D0
0x8A6974: mov     eax, [esi+0B4h]
0x8A697A: test    eax, eax
0x8A697C: js      short loc_8A69A8
0x8A697E: mov     ecx, [ebx+edi*4]
0x8A6981: mov     ecx, [ecx+19Ch]
0x8A6987: test    ecx, ecx
0x8A6989: jnz     short loc_8A6991
0x8A698B: mov     ecx, ds:0BA7D9Ch
0x8A6991: mov     edx, [esi+0ACh]
0x8A6997: and     eax, 3FFFFFFFh
0x8A699C: push    14h
0x8A699E: shl     eax, 2
0x8A69A1: push    eax
0x8A69A2: push    edx
0x8A69A3: call    sub_8A75D0
0x8A69A8: mov     eax, [esi+0A8h]
0x8A69AE: test    eax, eax
0x8A69B0: js      short loc_8A69DC
0x8A69B2: mov     ecx, [ebx+edi*4]
0x8A69B5: mov     ecx, [ecx+19Ch]
0x8A69BB: test    ecx, ecx
0x8A69BD: jnz     short loc_8A69C5
0x8A69BF: mov     ecx, ds:0BA7D9Ch
0x8A69C5: mov     edx, [esi+0A0h]
0x8A69CB: and     eax, 3FFFFFFFh
0x8A69D0: push    14h
0x8A69D2: shl     eax, 2
0x8A69D5: push    eax
0x8A69D6: push    edx
0x8A69D7: call    sub_8A75D0
0x8A69DC: mov     eax, [esi+9Ch]
0x8A69E2: test    eax, eax
0x8A69E4: js      short loc_8A6A10
0x8A69E6: mov     ecx, [ebx+edi*4]
0x8A69E9: mov     ecx, [ecx+19Ch]
0x8A69EF: test    ecx, ecx
0x8A69F1: jnz     short loc_8A69F9
0x8A69F3: mov     ecx, ds:0BA7D9Ch
0x8A69F9: mov     edx, [esi+94h]
0x8A69FF: and     eax, 3FFFFFFFh
0x8A6A04: push    14h
0x8A6A06: shl     eax, 2
0x8A6A09: push    eax
0x8A6A0A: push    edx
0x8A6A0B: call    sub_8A75D0
0x8A6A10: mov     eax, [esi+88h]
0x8A6A16: test    eax, eax
0x8A6A18: js      short loc_8A6A41
0x8A6A1A: mov     ecx, [ebx+edi*4]
0x8A6A1D: mov     ecx, [ecx+19Ch]
0x8A6A23: test    ecx, ecx
0x8A6A25: jnz     short loc_8A6A2D
0x8A6A27: mov     ecx, ds:0BA7D9Ch
0x8A6A2D: mov     edx, [esi+80h]
0x8A6A33: push    14h
0x8A6A35: and     eax, 3FFFFFFFh
0x8A6A3A: push    eax
0x8A6A3B: push    edx
0x8A6A3C: call    sub_8A75D0
0x8A6A41: mov     eax, [esi+7Ch]
0x8A6A44: test    eax, eax
0x8A6A46: js      short loc_8A6A6F
0x8A6A48: mov     ecx, [ebx+edi*4]
0x8A6A4B: mov     ecx, [ecx+19Ch]
0x8A6A51: test    ecx, ecx
0x8A6A53: jnz     short loc_8A6A5B
0x8A6A55: mov     ecx, ds:0BA7D9Ch
0x8A6A5B: mov     edx, [esi+74h]
0x8A6A5E: and     eax, 3FFFFFFFh
0x8A6A63: push    14h
0x8A6A65: shl     eax, 2
0x8A6A68: push    eax
0x8A6A69: push    edx
0x8A6A6A: call    sub_8A75D0
0x8A6A6F: mov     eax, [esi+70h]
0x8A6A72: test    eax, eax
0x8A6A74: js      short loc_8A6A9D
0x8A6A76: mov     ecx, [ebx+edi*4]
0x8A6A79: mov     ecx, [ecx+19Ch]
0x8A6A7F: test    ecx, ecx
0x8A6A81: jnz     short loc_8A6A89
0x8A6A83: mov     ecx, ds:0BA7D9Ch
0x8A6A89: mov     edx, [esi+68h]
0x8A6A8C: and     eax, 3FFFFFFFh
0x8A6A91: imul    eax, 1Ch
0x8A6A94: push    14h
0x8A6A96: push    eax
0x8A6A97: push    edx
0x8A6A98: call    sub_8A75D0
0x8A6A9D: pop     edi
0x8A6A9E: mov     ecx, esi
0x8A6AA0: pop     esi
0x8A6AA1: pop     ebx
0x8A6AA2: jmp     sub_8A66A0
