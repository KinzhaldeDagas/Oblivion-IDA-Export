0x693D10: push    esi
0x693D11: mov     esi, ecx
0x693D13: call    ValueModifierEffect_Remove
0x693D18: cmp     byte ptr [esi+3Ch], 0
0x693D1C: jnz     loc_693DC1
0x693D22: mov     ecx, [esi+20h]; this
0x693D25: test    ecx, ecx
0x693D27: jz      loc_693DC1
0x693D2D: push    edi
0x693D2E: call    MagicTarget_GetParentActor
0x693D33: mov     edi, eax
0x693D35: test    edi, edi
0x693D37: jz      loc_693DC0
0x693D3D: mov     eax, [edi]
0x693D3F: mov     edx, [eax+334h]
0x693D45: push    1
0x693D47: mov     ecx, edi
0x693D49: call    edx
0x693D4B: test    al, al
0x693D4D: jz      short loc_693DC0
0x693D4F: mov     eax, [edi]
0x693D51: mov     edx, [eax+340h]
0x693D57: push    ebx
0x693D58: push    0
0x693D5A: mov     ecx, edi
0x693D5C: call    edx
0x693D5E: push    0; a2
0x693D60: mov     ecx, offset ActorProcessManager_ptr; this
0x693D65: call    sub_673A50
0x693D6A: mov     ecx, eax; this
0x693D6C: call    sub_7616D0
0x693D71: mov     ebx, eax
0x693D73: test    ebx, ebx
0x693D75: jz      short loc_693DBF
0x693D77: mov     esi, [ebx]
0x693D79: cmp     esi, edi
0x693D7B: mov     ebx, [ebx+4]
0x693D7E: jz      short loc_693DBB
0x693D80: test    esi, esi
0x693D82: jz      short loc_693DBB
0x693D84: mov     eax, [esi]
0x693D86: mov     edx, [eax+190h]
0x693D8C: mov     ecx, esi
0x693D8E: call    edx
0x693D90: test    al, al
0x693D92: jz      short loc_693DBB
0x693D94: push    edi; int
0x693D95: mov     ecx, esi; int
0x693D97: call    sub_5EFF30
0x693D9C: mov     eax, [esi]
0x693D9E: mov     edx, [eax+334h]
0x693DA4: push    1
0x693DA6: mov     ecx, esi
0x693DA8: call    edx
0x693DAA: test    al, al
0x693DAC: jz      short loc_693DBB
0x693DAE: mov     eax, [esi]
0x693DB0: mov     edx, [eax+340h]
0x693DB6: push    edi
0x693DB7: mov     ecx, esi
0x693DB9: call    edx
0x693DBB: test    ebx, ebx
0x693DBD: jnz     short loc_693D77
0x693DBF: pop     ebx
0x693DC0: pop     edi
0x693DC1: pop     esi
0x693DC2: retn
