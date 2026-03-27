0x4BFE00: push    ecx
0x4BFE01: push    esi
0x4BFE02: mov     esi, ecx
0x4BFE04: mov     eax, [esi+24h]
0x4BFE07: test    eax, eax
0x4BFE09: push    edi
0x4BFE0A: jz      short loc_4BFE14
0x4BFE0C: mov     eax, [eax+98h]
0x4BFE12: jmp     short loc_4BFE24
0x4BFE14: mov     ecx, [esi+20h]; this
0x4BFE17: test    ecx, ecx
0x4BFE19: jz      short loc_4BFE22
0x4BFE1B: call    TESObjectCELL_GetXCoordinate
0x4BFE20: jmp     short loc_4BFE24
0x4BFE22: xor     eax, eax
0x4BFE24: mov     edi, [esp+0Ch+arg_0]
0x4BFE28: shl     eax, 0Ch
0x4BFE2B: mov     [esp+0Ch+var_4], eax
0x4BFE2F: fild    [esp+0Ch+var_4]
0x4BFE33: mov     eax, [esi+24h]
0x4BFE36: test    eax, eax
0x4BFE38: fadd    qword ptr ds:0A30F70h
0x4BFE3E: fstp    dword ptr [edi]
0x4BFE40: jz      short loc_4BFE4A
0x4BFE42: mov     eax, [eax+9Ch]
0x4BFE48: jmp     short loc_4BFE5A
0x4BFE4A: mov     ecx, [esi+20h]; this
0x4BFE4D: test    ecx, ecx
0x4BFE4F: jz      short loc_4BFE58
0x4BFE51: call    TESObjectCELL_GetYCoordinate
0x4BFE56: jmp     short loc_4BFE5A
0x4BFE58: xor     eax, eax
0x4BFE5A: shl     eax, 0Ch
0x4BFE5D: mov     [esp+0Ch+arg_0], eax
0x4BFE61: fild    [esp+0Ch+arg_0]
0x4BFE65: mov     eax, edi
0x4BFE67: fadd    qword ptr ds:0A30F70h
0x4BFE6D: fstp    dword ptr [edi+4]
0x4BFE70: fldz
0x4BFE72: fstp    dword ptr [edi+8]
0x4BFE75: pop     edi
0x4BFE76: pop     esi
0x4BFE77: pop     ecx
0x4BFE78: retn    8
