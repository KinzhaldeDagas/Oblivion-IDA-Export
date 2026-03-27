0x4CEAD0: push    esi
0x4CEAD1: push    edi
0x4CEAD2: mov     edi, [esp+8+arg_0]
0x4CEAD6: test    edi, edi
0x4CEAD8: mov     esi, ecx
0x4CEADA: jz      loc_4CECCA
0x4CEAE0: cmp     dword ptr [edi+3Ch], 0
0x4CEAE4: jz      loc_4CECCA
0x4CEAEA: mov     eax, [edi]
0x4CEAEC: mov     edx, [eax+190h]
0x4CEAF2: push    ebx
0x4CEAF3: push    ebp
0x4CEAF4: mov     ecx, edi
0x4CEAF6: call    edx
0x4CEAF8: test    al, al
0x4CEAFA: jz      loc_4CEB82
0x4CEB00: mov     eax, [esi+54h]
0x4CEB03: test    eax, eax
0x4CEB05: jz      short loc_4CEB1B
0x4CEB07: cmp     word ptr [eax+0B6h], 0
0x4CEB0F: jbe     short loc_4CEB1B
0x4CEB11: mov     eax, [eax+0B0h]
0x4CEB17: mov     esi, [eax]
0x4CEB19: jmp     short loc_4CEB1D
0x4CEB1B: xor     esi, esi
0x4CEB1D: mov     edx, [edi]
0x4CEB1F: mov     eax, [edx+380h]
0x4CEB25: mov     ecx, edi
0x4CEB27: call    eax
0x4CEB29: test    eax, eax
0x4CEB2B: jz      short loc_4CEB41
0x4CEB2D: mov     edx, [edi]
0x4CEB2F: mov     eax, [edx+18Ch]
0x4CEB35: mov     ecx, edi
0x4CEB37: call    eax
0x4CEB39: test    eax, eax
0x4CEB3B: jnz     loc_4CECC8
0x4CEB41: mov     ebp, [edi+3Ch]
0x4CEB44: test    ebp, ebp
0x4CEB46: jz      loc_4CEC09
0x4CEB4C: lea     ebx, [ebp+54h]
0x4CEB4F: push    offset Vector3_InitValue?
0x4CEB54: mov     ecx, ebx
0x4CEB56: call    sub_8AA350
0x4CEB5B: test    al, al
0x4CEB5D: jz      loc_4CEC09
0x4CEB63: mov     ecx, [ebp+88h]
0x4CEB69: mov     edx, [ebp+8Ch]
0x4CEB6F: mov     eax, [ebp+90h]
0x4CEB75: mov     [ebx], ecx
0x4CEB77: mov     [ebx+4], edx
0x4CEB7A: mov     [ebx+8], eax
0x4CEB7D: jmp     loc_4CEC09
0x4CEB82: mov     ecx, [edi+1Ch]; TESObjectREFR *
0x4CEB85: test    ecx, ecx
0x4CEB87: jz      short loc_4CEBA2
0x4CEB89: mov     edx, [ecx]
0x4CEB8B: mov     eax, [edx+0F4h]
0x4CEB91: call    eax
0x4CEB93: test    al, al
0x4CEB95: jz      short loc_4CEBA2
0x4CEB97: push    1
0x4CEB99: mov     ecx, esi
0x4CEB9B: call    sub_4417D0
0x4CEBA0: jmp     short loc_4CEC07
0x4CEBA2: xor     ebx, ebx
0x4CEBA4: test    byte ptr [esi+24h], 1
0x4CEBA8: jnz     short loc_4CEBB5
0x4CEBAA: push    edi; TESObjectREFR *
0x4CEBAB: call    sub_4C9BE0
0x4CEBB0: add     esp, 4
0x4CEBB3: mov     ebx, eax
0x4CEBB5: mov     edx, [edi]
0x4CEBB7: mov     eax, [edx+154h]
0x4CEBBD: push    offset dword_A7D0EC
0x4CEBC2: mov     ecx, edi
0x4CEBC4: call    eax
0x4CEBC6: mov     ecx, eax
0x4CEBC8: call    NiObjectNET_GetExtraData
0x4CEBCD: test    eax, eax
0x4CEBCF: jz      short loc_4CEBD7
0x4CEBD1: test    byte ptr [eax+0Ch], 1
0x4CEBD5: jnz     short loc_4CEBF9
0x4CEBD7: mov     edx, [edi]
0x4CEBD9: mov     eax, [edx+170h]
0x4CEBDF: mov     ecx, edi
0x4CEBE1: call    eax
0x4CEBE3: test    eax, eax
0x4CEBE5: jz      short loc_4CEBFD
0x4CEBE7: mov     edx, [edi]
0x4CEBE9: mov     eax, [edx+170h]
0x4CEBEF: mov     ecx, edi
0x4CEBF1: call    eax
0x4CEBF3: cmp     byte ptr [eax+4], 1Eh
0x4CEBF7: jnz     short loc_4CEBFD
0x4CEBF9: push    3
0x4CEBFB: jmp     short loc_4CEBFF
0x4CEBFD: push    2
0x4CEBFF: push    ebx
0x4CEC00: mov     ecx, esi
0x4CEC02: call    sub_441800
0x4CEC07: mov     esi, eax
0x4CEC09: test    esi, esi
0x4CEC0B: jz      loc_4CECC8
0x4CEC11: mov     ecx, ds:0B333C4h
0x4CEC17: cmp     edi, ecx
0x4CEC19: push    1
0x4CEC1B: jnz     loc_4CECA8
0x4CEC21: mov     edi, [esi]
0x4CEC23: push    0
0x4CEC25: call    PlayerCharacter_GetPlayerNode
0x4CEC2A: mov     edx, [edi+84h]
0x4CEC30: push    eax
0x4CEC31: mov     ecx, esi
0x4CEC33: call    edx
0x4CEC35: mov     ecx, ds:0B333C4h
0x4CEC3B: push    0
0x4CEC3D: call    PlayerCharacter_GetPlayerNode
0x4CEC42: mov     ecx, eax; this
0x4CEC44: call    NiAVObject_InitializePropertyState
0x4CEC49: mov     ecx, ds:0B333C4h
0x4CEC4F: push    0
0x4CEC51: call    PlayerCharacter_GetPlayerNode
0x4CEC56: mov     ecx, eax
0x4CEC58: call    NiNode_UpdateDynamicEffectState
0x4CEC5D: mov     ecx, ds:0B333C4h
0x4CEC63: mov     edi, [esi]
0x4CEC65: push    1
0x4CEC67: push    1
0x4CEC69: call    PlayerCharacter_GetPlayerNode
0x4CEC6E: push    eax
0x4CEC6F: mov     eax, [edi+84h]
0x4CEC75: mov     ecx, esi
0x4CEC77: call    eax
0x4CEC79: mov     ecx, ds:0B333C4h
0x4CEC7F: push    1
0x4CEC81: call    PlayerCharacter_GetPlayerNode
0x4CEC86: mov     ecx, eax; this
0x4CEC88: call    NiAVObject_InitializePropertyState
0x4CEC8D: mov     ecx, ds:0B333C4h
0x4CEC93: push    1
0x4CEC95: call    PlayerCharacter_GetPlayerNode
0x4CEC9A: mov     ecx, eax
0x4CEC9C: call    NiNode_UpdateDynamicEffectState
0x4CECA1: pop     ebp
0x4CECA2: pop     ebx
0x4CECA3: pop     edi
0x4CECA4: pop     esi
0x4CECA5: retn    4
0x4CECA8: mov     edx, [esi]
0x4CECAA: mov     eax, [edi+3Ch]
0x4CECAD: mov     edx, [edx+84h]
0x4CECB3: push    eax
0x4CECB4: mov     ecx, esi
0x4CECB6: call    edx
0x4CECB8: mov     ecx, [edi+3Ch]; this
0x4CECBB: call    NiAVObject_InitializePropertyState
0x4CECC0: mov     ecx, [edi+3Ch]
0x4CECC3: call    NiNode_UpdateDynamicEffectState
0x4CECC8: pop     ebp
0x4CECC9: pop     ebx
0x4CECCA: pop     edi
0x4CECCB: pop     esi
0x4CECCC: retn    4
