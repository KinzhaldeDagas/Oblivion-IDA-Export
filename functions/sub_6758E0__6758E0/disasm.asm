0x6758E0: sub     esp, 0Ch
0x6758E3: push    ebx
0x6758E4: push    ebp
0x6758E5: push    esi
0x6758E6: push    edi
0x6758E7: xor     ebx, ebx
0x6758E9: xor     ebp, ebp
0x6758EB: mov     esi, ecx
0x6758ED: xor     edi, edi
0x6758EF: mov     [esp+1Ch+var_4], esi
0x6758F3: mov     [esp+1Ch+var_8], edi
0x6758F7: cmp     edi, ebx
0x6758F9: jnz     short loc_6758FE
0x6758FB: push    ebx
0x6758FC: jmp     short loc_675918
0x6758FE: cmp     edi, 1
0x675901: jnz     short loc_675906
0x675903: push    edi
0x675904: jmp     short loc_675918
0x675906: cmp     edi, 2
0x675909: jnz     short loc_67590E
0x67590B: push    edi
0x67590C: jmp     short loc_675918
0x67590E: cmp     edi, 3
0x675911: jnz     loc_675B0F
0x675917: push    edi; a2
0x675918: mov     ecx, esi; this
0x67591A: call    sub_673A50
0x67591F: mov     ecx, eax; this
0x675921: call    sub_7616D0
0x675926: cmp     eax, ebx
0x675928: mov     [esp+1Ch+var_C], eax
0x67592C: jz      loc_675B0F
0x675932: mov     eax, [esp+1Ch+var_C]
0x675936: mov     esi, [eax]
0x675938: cmp     esi, ebx
0x67593A: jz      loc_675B0B
0x675940: cmp     [esp+1Ch+arg_8], bl
0x675944: jz      short loc_67594E
0x675946: cmp     edi, ebx
0x675948: jnz     loc_675B0B
0x67594E: mov     edx, [esi]
0x675950: mov     eax, [edx+190h]
0x675956: mov     ecx, esi
0x675958: call    eax
0x67595A: test    al, al
0x67595C: jz      loc_675AF8
0x675962: mov     edx, [esi]
0x675964: mov     eax, [edx+334h]
0x67596A: push    1
0x67596C: mov     ecx, esi
0x67596E: call    eax
0x675970: test    al, al
0x675972: jz      loc_675A70
0x675978: cmp     dword ptr [esp+1Ch+arg_4], 0Ch
0x67597D: jnz     loc_675A70
0x675983: mov     ecx, esi
0x675985: call    sub_5E03A0
0x67598A: xor     ecx, ecx
0x67598C: cmp     byte ptr [eax+20h], 0Ch
0x675990: jnz     short loc_675994
0x675992: mov     ecx, eax
0x675994: cmp     [esp+1Ch+arg_8], bl
0x675998: jz      short loc_6759FF
0x67599A: cmp     ecx, ebx
0x67599C: jz      loc_675AF8
0x6759A2: call    sub_6135F0
0x6759A7: cmp     eax, [esp+1Ch+arg_0]
0x6759AB: jnz     loc_675AF8
0x6759B1: cmp     ebp, ebx
0x6759B3: jnz     short loc_6759CE
0x6759B5: push    8; Size
0x6759B7: call    FormHeapAlloc
0x6759BC: add     esp, 4
0x6759BF: cmp     eax, ebx
0x6759C1: jz      short loc_6759CA
0x6759C3: mov     [eax], ebx
0x6759C5: mov     [eax+4], ebx
0x6759C8: jmp     short loc_6759CC
0x6759CA: xor     eax, eax
0x6759CC: mov     ebp, eax
0x6759CE: cmp     edi, 2
0x6759D1: jnz     loc_675A63
0x6759D7: mov     ecx, esi; this
0x6759D9: call    Actor_IsCreature
0x6759DE: test    al, al
0x6759E0: jnz     short loc_6759ED
0x6759E2: mov     ecx, esi; this
0x6759E4: call    TESObjectREFR_IsPersistent?
0x6759E9: test    al, al
0x6759EB: jnz     short loc_675A63
0x6759ED: mov     edx, [esi]
0x6759EF: mov     eax, [edx+340h]
0x6759F5: push    ebx
0x6759F6: mov     ecx, esi
0x6759F8: call    eax
0x6759FA: jmp     loc_675AF8
0x6759FF: cmp     ecx, ebx
0x675A01: jz      loc_675AF8
0x675A07: mov     edx, [esp+1Ch+arg_0]
0x675A0B: push    edx
0x675A0C: call    sub_613670
0x675A11: test    al, al
0x675A13: jz      loc_675AF8
0x675A19: cmp     ebp, ebx
0x675A1B: jnz     short loc_675A36
0x675A1D: push    8; Size
0x675A1F: call    FormHeapAlloc
0x675A24: add     esp, 4
0x675A27: cmp     eax, ebx
0x675A29: jz      short loc_675A32
0x675A2B: mov     [eax], ebx
0x675A2D: mov     [eax+4], ebx
0x675A30: jmp     short loc_675A34
0x675A32: xor     eax, eax
0x675A34: mov     ebp, eax
0x675A36: cmp     edi, 2
0x675A39: jnz     short loc_675A63
0x675A3B: mov     ecx, esi; this
0x675A3D: call    Actor_IsCreature
0x675A42: test    al, al
0x675A44: jnz     short loc_675A51
0x675A46: mov     ecx, esi; this
0x675A48: call    TESObjectREFR_IsPersistent?
0x675A4D: test    al, al
0x675A4F: jnz     short loc_675A63
0x675A51: mov     eax, [esi]
0x675A53: mov     edx, [eax+340h]
0x675A59: push    ebx
0x675A5A: mov     ecx, esi
0x675A5C: call    edx
0x675A5E: jmp     loc_675AF8
0x675A63: push    esi
0x675A64: mov     ecx, ebp
0x675A66: call    BSSimpleList_PushFront
0x675A6B: jmp     loc_675AF8
0x675A70: mov     ecx, esi
0x675A72: call    sub_5E0380
0x675A77: mov     edi, eax
0x675A79: cmp     edi, ebx
0x675A7B: jz      short loc_675AF4
0x675A7D: mov     ecx, esi; this
0x675A7F: call    sub_5E6C60
0x675A84: test    al, al
0x675A86: jnz     short loc_675A8F
0x675A88: cmp     dword ptr [esp+1Ch+arg_4], 0Fh
0x675A8D: jz      short loc_675AF4
0x675A8F: mov     ecx, [esi+58h]
0x675A92: mov     eax, [ecx]
0x675A94: mov     edx, [eax+0CCh]
0x675A9A: call    edx
0x675A9C: cmp     eax, [esp+1Ch+arg_0]
0x675AA0: jnz     short loc_675AF4
0x675AA2: movsx   eax, byte ptr [edi+20h]
0x675AA6: cmp     eax, dword ptr [esp+1Ch+arg_4]
0x675AAA: jnz     short loc_675AF4
0x675AAC: cmp     ebp, ebx
0x675AAE: jnz     short loc_675AC9
0x675AB0: push    8; Size
0x675AB2: call    FormHeapAlloc
0x675AB7: add     esp, 4
0x675ABA: cmp     eax, ebx
0x675ABC: jz      short loc_675AC5
0x675ABE: mov     [eax], ebx
0x675AC0: mov     [eax+4], ebx
0x675AC3: jmp     short loc_675AC7
0x675AC5: xor     eax, eax
0x675AC7: mov     ebp, eax
0x675AC9: cmp     [ebp+0], ebx
0x675ACC: jz      short loc_675AF1
0x675ACE: push    8; Size
0x675AD0: call    FormHeapAlloc
0x675AD5: add     esp, 4
0x675AD8: cmp     eax, ebx
0x675ADA: jz      short loc_675AE6
0x675ADC: mov     ecx, [ebp+0]
0x675ADF: mov     [eax], ecx
0x675AE1: mov     [eax+4], ebx
0x675AE4: jmp     short loc_675AE8
0x675AE6: xor     eax, eax
0x675AE8: mov     edx, [ebp+4]
0x675AEB: mov     [eax+4], edx
0x675AEE: mov     [ebp+4], eax
0x675AF1: mov     [ebp+0], esi
0x675AF4: mov     edi, [esp+1Ch+var_8]
0x675AF8: mov     eax, [esp+1Ch+var_C]
0x675AFC: mov     eax, [eax+4]
0x675AFF: cmp     eax, ebx
0x675B01: mov     [esp+1Ch+var_C], eax
0x675B05: jnz     loc_675932
0x675B0B: mov     esi, [esp+1Ch+var_4]
0x675B0F: add     edi, 1
0x675B12: cmp     edi, 4
0x675B15: mov     [esp+1Ch+var_8], edi
0x675B19: jl      loc_6758F7
0x675B1F: pop     edi
0x675B20: pop     esi
0x675B21: mov     eax, ebp
0x675B23: pop     ebp
0x675B24: pop     ebx
0x675B25: add     esp, 0Ch
0x675B28: retn    0Ch
