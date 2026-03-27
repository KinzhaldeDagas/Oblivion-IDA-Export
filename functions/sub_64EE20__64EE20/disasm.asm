0x64EE20: push    esi
0x64EE21: push    edi
0x64EE22: mov     edi, [esp+8+arg_0]
0x64EE26: mov     esi, ecx
0x64EE28: mov     ecx, edi
0x64EE2A: call    sub_5E4400
0x64EE2F: test    eax, eax
0x64EE31: jz      short loc_64EE4F
0x64EE33: mov     edx, [eax]
0x64EE35: xor     ecx, ecx
0x64EE37: test    edx, edx
0x64EE39: jz      short loc_64EE3D
0x64EE3B: mov     ecx, [edx]
0x64EE3D: mov     eax, [eax+8]
0x64EE40: push    1
0x64EE42: push    ecx
0x64EE43: push    eax
0x64EE44: mov     ecx, edi
0x64EE46: call    Actor_EquipIngredient?
0x64EE4B: add     dword ptr [esi+4], 1
0x64EE4F: pop     edi
0x64EE50: xor     al, al
0x64EE52: pop     esi
0x64EE53: retn    4
