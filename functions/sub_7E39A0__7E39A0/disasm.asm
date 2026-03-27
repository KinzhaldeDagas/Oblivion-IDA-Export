0x7E39A0: mov     ecx, [esp+arg_0]
0x7E39A4: test    ecx, ecx
0x7E39A6: jz      locret_7E3ABB
0x7E39AC: mov     eax, [ecx]
0x7E39AE: mov     edx, [eax+8]
0x7E39B1: push    ebx
0x7E39B2: call    edx
0x7E39B4: mov     ebx, eax
0x7E39B6: test    ebx, ebx
0x7E39B8: jz      loc_7E3ABA
0x7E39BE: cmp     [esp+4+arg_4], 0
0x7E39C3: jz      loc_7E3ABA
0x7E39C9: movzx   eax, word ptr [ebx+0B6h]
0x7E39D0: push    esi
0x7E39D1: push    edi
0x7E39D2: xor     edi, edi
0x7E39D4: test    eax, eax
0x7E39D6: jbe     loc_7E3A6D
0x7E39DC: cmp     eax, edi
0x7E39DE: jbe     short loc_7E39FC
0x7E39E0: mov     eax, [ebx+0B0h]
0x7E39E6: mov     ecx, [eax+edi*4]
0x7E39E9: test    ecx, ecx
0x7E39EB: jz      short loc_7E39FC
0x7E39ED: push    4
0x7E39EF: call    NiNode_GetNiPropertyByID
0x7E39F4: mov     esi, eax
0x7E39F6: test    esi, esi
0x7E39F8: jnz     short loc_7E3A02
0x7E39FA: jmp     short loc_7E3A15
0x7E39FC: xor     esi, esi
0x7E39FE: xor     eax, eax
0x7E3A00: jmp     short loc_7E3A15
0x7E3A02: mov     edx, [esi]
0x7E3A04: mov     eax, [edx+54h]
0x7E3A07: mov     ecx, esi
0x7E3A09: call    eax
0x7E3A0B: xor     ecx, ecx
0x7E3A0D: cmp     eax, 0Eh
0x7E3A10: setz    cl
0x7E3A13: mov     eax, ecx
0x7E3A15: neg     eax
0x7E3A17: sbb     eax, eax
0x7E3A19: and     eax, esi
0x7E3A1B: jz      short loc_7E3A5B
0x7E3A1D: cmp     eax, [esp+0Ch+arg_4]
0x7E3A21: jnz     short loc_7E3A5B
0x7E3A23: mov     edx, [ebx]
0x7E3A25: mov     edx, [edx+8Ch]
0x7E3A2B: push    edi
0x7E3A2C: lea     eax, [esp+10h+arg_0]
0x7E3A30: push    eax
0x7E3A31: mov     ecx, ebx
0x7E3A33: call    edx
0x7E3A35: mov     eax, [esp+0Ch+arg_0]
0x7E3A39: test    eax, eax
0x7E3A3B: jz      short loc_7E3A5B
0x7E3A3D: mov     esi, eax
0x7E3A3F: add     eax, 4
0x7E3A42: push    eax; lpAddend
0x7E3A43: call    dword ptr ds:0A2807Ch
0x7E3A49: test    eax, eax
0x7E3A4B: jnz     short loc_7E3A5B
0x7E3A4D: test    esi, esi
0x7E3A4F: jz      short loc_7E3A5B
0x7E3A51: mov     eax, [esi]
0x7E3A53: mov     edx, [eax]
0x7E3A55: push    1
0x7E3A57: mov     ecx, esi
0x7E3A59: call    edx
0x7E3A5B: movzx   eax, word ptr [ebx+0B6h]
0x7E3A62: add     edi, 1
0x7E3A65: cmp     eax, edi
0x7E3A67: ja      loc_7E39E0
0x7E3A6D: mov     eax, ds:0B46010h
0x7E3A72: sub     eax, 1
0x7E3A75: test    eax, eax
0x7E3A77: mov     ds:0B46010h, eax
0x7E3A7C: jg      short loc_7E3AB8
0x7E3A7E: mov     esi, ds:0B46014h
0x7E3A84: test    esi, esi
0x7E3A86: jz      short loc_7E3AAE
0x7E3A88: lea     eax, [esi+4]
0x7E3A8B: push    eax; lpAddend
0x7E3A8C: call    dword ptr ds:0A2807Ch
0x7E3A92: test    eax, eax
0x7E3A94: jnz     short loc_7E3AA4
0x7E3A96: test    esi, esi
0x7E3A98: jz      short loc_7E3AA4
0x7E3A9A: mov     edx, [esi]
0x7E3A9C: mov     eax, [edx]
0x7E3A9E: push    1
0x7E3AA0: mov     ecx, esi
0x7E3AA2: call    eax
0x7E3AA4: mov     dword ptr ds:0B46014h, 0
0x7E3AAE: mov     dword ptr ds:0B46010h, 0
0x7E3AB8: pop     edi
0x7E3AB9: pop     esi
0x7E3ABA: pop     ebx
0x7E3ABB: retn
