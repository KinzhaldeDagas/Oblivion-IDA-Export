0x699E11: mov     edx, [esi]
0x699E13: mov     eax, [edx+30h]
0x699E16: mov     ecx, esi
0x699E18: call    eax
0x699E1A: test    eax, eax
0x699E1C: jz      loc_699EAC
0x699E22: mov     edi, [esi]
0x699E24: mov     edx, [edi+30h]
0x699E27: push    0
0x699E29: mov     ecx, esi
0x699E2B: mov     dword ptr [esi+8], 7
0x699E32: call    edx
0x699E34: push    eax
0x699E35: mov     eax, [edi+18h]
0x699E38: mov     ecx, esi
0x699E3A: call    eax
0x699E3C: test    bl, bl
0x699E3E: jz      short loc_699E96
0x699E40: mov     edx, [esi]
0x699E42: mov     eax, [edx+30h]
0x699E45: push    0
0x699E47: mov     ecx, esi
0x699E49: call    eax
0x699E4B: mov     ecx, eax
0x699E4D: call    MagicItem_GetFXEffect
0x699E52: test    eax, eax
0x699E54: jz      short loc_699E96
0x699E56: movzx   ecx, word ptr [eax+20h]
0x699E5A: cmp     cx, 0FFFFh
0x699E5F: jnz     short loc_699E74
0x699E61: mov     ecx, [eax+1Ch]
0x699E64: lea     edi, [ecx+1]
0x699E67: mov     dl, [ecx]
0x699E69: add     ecx, 1
0x699E6C: test    dl, dl
0x699E6E: jnz     short loc_699E67
0x699E70: sub     ecx, edi
0x699E72: jmp     short loc_699E77
0x699E74: movzx   ecx, cx
0x699E77: test    ecx, ecx
0x699E79: jbe     short loc_699E96
0x699E7B: mov     edx, [eax+18h]
0x699E7E: lea     ecx, [eax+18h]
0x699E81: mov     eax, [edx+14h]
0x699E84: push    1
0x699E86: push    0
0x699E88: call    eax
0x699E8A: mov     ecx, ds:0B33A1Ch
0x699E90: push    eax
0x699E91: call    QueuedModelLoader_RemoveModel
0x699E96: mov     edx, [esi]
0x699E98: mov     eax, [edx+34h]
0x699E9B: push    0
0x699E9D: mov     ecx, esi
0x699E9F: call    eax
0x699EA1: mov     edx, [esi]
0x699EA3: mov     eax, [edx+3Ch]
0x699EA6: push    0
0x699EA8: mov     ecx, esi
0x699EAA: call    eax
0x699EAC: pop     edi
0x699EAD: pop     esi
0x699EAE: pop     ebx
0x699EAF: retn
