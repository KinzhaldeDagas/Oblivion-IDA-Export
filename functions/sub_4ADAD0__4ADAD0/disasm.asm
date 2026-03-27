0x4ADAD0: push    ebp
0x4ADAD1: push    esi
0x4ADAD2: mov     esi, [esp+8+arg_0]
0x4ADAD6: test    esi, esi
0x4ADAD8: mov     ebp, ecx
0x4ADADA: jz      loc_4ADB8D
0x4ADAE0: mov     eax, [esi]
0x4ADAE2: mov     edx, [eax+0Ch]
0x4ADAE5: mov     ecx, esi
0x4ADAE7: call    edx
0x4ADAE9: test    eax, eax
0x4ADAEB: mov     ecx, esi
0x4ADAED: jz      short loc_4ADB43
0x4ADAEF: push    4
0x4ADAF1: call    NiNode_GetNiPropertyByID
0x4ADAF6: mov     esi, eax
0x4ADAF8: test    esi, esi
0x4ADAFA: jz      short loc_4ADB1F
0x4ADAFC: mov     eax, [esi]
0x4ADAFE: mov     edx, [eax+54h]
0x4ADB01: mov     ecx, esi
0x4ADB03: call    edx
0x4ADB05: cmp     eax, 5
0x4ADB08: jl      short loc_4ADB1F
0x4ADB0A: mov     eax, [esi]
0x4ADB0C: mov     edx, [eax+54h]
0x4ADB0F: mov     ecx, esi
0x4ADB11: call    edx
0x4ADB13: cmp     eax, 0Ah
0x4ADB16: jg      short loc_4ADB1F
0x4ADB18: mov     eax, 1
0x4ADB1D: jmp     short loc_4ADB21
0x4ADB1F: xor     eax, eax
0x4ADB21: neg     eax
0x4ADB23: sbb     eax, eax
0x4ADB25: and     eax, esi
0x4ADB27: jz      short loc_4ADB8D
0x4ADB29: mov     ecx, [eax+0E0h]
0x4ADB2F: cmp     ecx, [esp+8+arg_4]
0x4ADB33: jnz     short loc_4ADB8D
0x4ADB35: push    0
0x4ADB37: mov     ecx, eax
0x4ADB39: call    sub_7D7A70
0x4ADB3E: pop     esi
0x4ADB3F: pop     ebp
0x4ADB40: retn    8
0x4ADB43: mov     edx, [esi]
0x4ADB45: mov     eax, [edx+8]
0x4ADB48: push    edi
0x4ADB49: call    eax
0x4ADB4B: mov     edi, eax
0x4ADB4D: test    edi, edi
0x4ADB4F: jz      short loc_4ADB8C
0x4ADB51: movzx   eax, word ptr [edi+0B6h]
0x4ADB58: xor     esi, esi
0x4ADB5A: test    eax, eax
0x4ADB5C: jbe     short loc_4ADB8C
0x4ADB5E: cmp     eax, esi
0x4ADB60: push    ebx
0x4ADB61: mov     ebx, [esp+10h+arg_4]
0x4ADB65: ja      short loc_4ADB6B
0x4ADB67: xor     eax, eax
0x4ADB69: jmp     short loc_4ADB74
0x4ADB6B: mov     ecx, [edi+0B0h]
0x4ADB71: mov     eax, [ecx+esi*4]
0x4ADB74: push    ebx
0x4ADB75: push    eax
0x4ADB76: mov     ecx, ebp
0x4ADB78: call    sub_4ADAD0
0x4ADB7D: movzx   eax, word ptr [edi+0B6h]
0x4ADB84: add     esi, 1
0x4ADB87: cmp     eax, esi
0x4ADB89: ja      short loc_4ADB6B
0x4ADB8B: pop     ebx
0x4ADB8C: pop     edi
0x4ADB8D: pop     esi
0x4ADB8E: pop     ebp
0x4ADB8F: retn    8
