0x4AD9E0: push    ebp
0x4AD9E1: push    edi
0x4AD9E2: mov     edi, [esp+8+arg_0]
0x4AD9E6: test    edi, edi
0x4AD9E8: mov     ebp, ecx
0x4AD9EA: jz      loc_4ADABE
0x4AD9F0: mov     eax, [edi]
0x4AD9F2: mov     edx, [eax+0Ch]
0x4AD9F5: push    ebx
0x4AD9F6: push    esi
0x4AD9F7: mov     ecx, edi
0x4AD9F9: call    edx
0x4AD9FB: test    eax, eax
0x4AD9FD: mov     ecx, edi
0x4AD9FF: jz      short loc_4ADA76
0x4ADA01: push    4
0x4ADA03: call    NiNode_GetNiPropertyByID
0x4ADA08: mov     esi, eax
0x4ADA0A: test    esi, esi
0x4ADA0C: jz      short loc_4ADA31
0x4ADA0E: mov     eax, [esi]
0x4ADA10: mov     edx, [eax+54h]
0x4ADA13: mov     ecx, esi
0x4ADA15: call    edx
0x4ADA17: cmp     eax, 5
0x4ADA1A: jl      short loc_4ADA31
0x4ADA1C: mov     eax, [esi]
0x4ADA1E: mov     edx, [eax+54h]
0x4ADA21: mov     ecx, esi
0x4ADA23: call    edx
0x4ADA25: cmp     eax, 0Ah
0x4ADA28: jg      short loc_4ADA31
0x4ADA2A: mov     eax, 1
0x4ADA2F: jmp     short loc_4ADA33
0x4ADA31: xor     eax, eax
0x4ADA33: neg     eax
0x4ADA35: sbb     eax, eax
0x4ADA37: and     eax, esi
0x4ADA39: mov     ebx, eax
0x4ADA3B: jz      short loc_4ADABC
0x4ADA3D: test    byte ptr [ebp+18h], 20h
0x4ADA41: jz      short loc_4ADA63
0x4ADA43: push    2
0x4ADA45: mov     ecx, edi
0x4ADA47: call    NiNode_GetNiPropertyByID
0x4ADA4C: mov     esi, [eax+8]
0x4ADA4F: test    esi, esi
0x4ADA51: jz      short loc_4ADA63
0x4ADA53: mov     edi, offset aSkin; "skin"
0x4ADA58: mov     ecx, 5
0x4ADA5D: xor     eax, eax
0x4ADA5F: repe cmpsb
0x4ADA61: jnz     short loc_4ADABC
0x4ADA63: mov     ecx, [esp+10h+arg_4]
0x4ADA67: push    ecx
0x4ADA68: mov     ecx, ebx
0x4ADA6A: call    sub_7D7A70
0x4ADA6F: pop     esi
0x4ADA70: pop     ebx
0x4ADA71: pop     edi
0x4ADA72: pop     ebp
0x4ADA73: retn    8
0x4ADA76: mov     edx, [edi]
0x4ADA78: mov     eax, [edx+8]
0x4ADA7B: call    eax
0x4ADA7D: mov     edi, eax
0x4ADA7F: test    edi, edi
0x4ADA81: jz      short loc_4ADABC
0x4ADA83: movzx   eax, word ptr [edi+0B6h]
0x4ADA8A: xor     esi, esi
0x4ADA8C: test    eax, eax
0x4ADA8E: jbe     short loc_4ADABC
0x4ADA90: cmp     eax, esi
0x4ADA92: mov     ebx, [esp+10h+arg_4]
0x4ADA96: ja      short loc_4ADA9C
0x4ADA98: xor     eax, eax
0x4ADA9A: jmp     short loc_4ADAA5
0x4ADA9C: mov     ecx, [edi+0B0h]
0x4ADAA2: mov     eax, [ecx+esi*4]
0x4ADAA5: push    ebx
0x4ADAA6: push    eax
0x4ADAA7: mov     ecx, ebp
0x4ADAA9: call    sub_4AD9E0
0x4ADAAE: movzx   eax, word ptr [edi+0B6h]
0x4ADAB5: add     esi, 1
0x4ADAB8: cmp     eax, esi
0x4ADABA: ja      short loc_4ADA9C
0x4ADABC: pop     esi
0x4ADABD: pop     ebx
0x4ADABE: pop     edi
0x4ADABF: pop     ebp
0x4ADAC0: retn    8
