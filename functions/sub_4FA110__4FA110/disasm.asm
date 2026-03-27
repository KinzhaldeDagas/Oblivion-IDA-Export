0x4FA110: push    esi
0x4FA111: xor     esi, esi
0x4FA113: cmp     ds:0B361BCh, ecx
0x4FA119: push    edi
0x4FA11A: mov     edi, dword ptr [esp+8+ArgList]
0x4FA11E: jnz     short loc_4FA132
0x4FA120: cmp     ds:0B09E20h, edi
0x4FA126: jnz     short loc_4FA132
0x4FA128: mov     esi, ds:0B361C0h
0x4FA12E: test    esi, esi
0x4FA130: jnz     short loc_4FA15B
0x4FA132: mov     eax, [ecx+0Ch]
0x4FA135: test    eax, eax
0x4FA137: jz      short loc_4FA15B
0x4FA139: lea     esp, [esp+0]
0x4FA140: mov     edx, [eax+4]
0x4FA143: test    edx, edx
0x4FA145: jnz     short loc_4FA14B
0x4FA147: cmp     [eax], edx
0x4FA149: jz      short loc_4FA15B
0x4FA14B: mov     eax, [eax]
0x4FA14D: cmp     [eax], edi
0x4FA14F: jz      short loc_4FA159
0x4FA151: mov     eax, edx
0x4FA153: test    eax, eax
0x4FA155: jnz     short loc_4FA140
0x4FA157: jmp     short loc_4FA15B
0x4FA159: mov     esi, eax
0x4FA15B: test    esi, esi
0x4FA15D: mov     ds:0B361BCh, ecx
0x4FA163: mov     ds:0B09E20h, edi
0x4FA169: mov     ds:0B361C0h, esi
0x4FA16F: jz      short loc_4FA179
0x4FA171: fld     qword ptr [esi+8]
0x4FA174: pop     edi
0x4FA175: pop     esi
0x4FA176: retn    8
0x4FA179: mov     ecx, [esp+8+a3]
0x4FA17D: test    ecx, ecx
0x4FA17F: jz      short loc_4FA18D
0x4FA181: mov     eax, [ecx]
0x4FA183: mov     edx, [eax+0D4h]
0x4FA189: call    edx
0x4FA18B: jmp     short loc_4FA192
0x4FA18D: mov     eax, offset aUnknown; "UNKNOWN"
0x4FA192: mov     ecx, ds:0B36204h
0x4FA198: push    ecx
0x4FA199: push    eax
0x4FA19A: push    edi; ArgList
0x4FA19B: push    offset aVariableId08xN; "Variable ID %08X not found. Try to reco"...
0x4FA1A0: call    PrintError
0x4FA1A5: fldz
0x4FA1A7: add     esp, 10h
0x4FA1AA: pop     edi
0x4FA1AB: pop     esi
0x4FA1AC: retn    8
