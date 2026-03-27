0x706D20: push    0FFFFFFFFh
0x706D22: push    offset SEH_8C8970
0x706D27: mov     eax, large fs:0
0x706D2D: push    eax
0x706D2E: push    ecx
0x706D2F: push    esi
0x706D30: push    edi
0x706D31: mov     eax, ds:0B30AACh
0x706D36: xor     eax, esp
0x706D38: push    eax
0x706D39: lea     eax, [esp+1Ch+var_C]
0x706D3D: mov     large fs:0, eax
0x706D43: push    1Ch; Size
0x706D45: call    FormHeapAlloc
0x706D4A: mov     esi, eax
0x706D4C: add     esp, 4
0x706D4F: mov     [esp+1Ch+var_10], esi
0x706D53: test    esi, esi
0x706D55: mov     [esp+1Ch+var_4], 0
0x706D5D: jz      short loc_706D74
0x706D5F: mov     ecx, esi; this
0x706D61: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706D66: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x706D6C: mov     word ptr [esi+18h], 0Fh
0x706D72: jmp     short loc_706D76
0x706D74: xor     esi, esi
0x706D76: mov     eax, ds:0B3F998h
0x706D7B: cmp     eax, esi
0x706D7D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x706D85: jz      short loc_706DBD
0x706D87: test    eax, eax
0x706D89: jz      short loc_706DA9
0x706D8B: mov     edi, eax
0x706D8D: add     eax, 4
0x706D90: push    eax; lpAddend
0x706D91: call    dword ptr ds:0A2807Ch
0x706D97: test    eax, eax
0x706D99: jnz     short loc_706DA9
0x706D9B: test    edi, edi
0x706D9D: jz      short loc_706DA9
0x706D9F: mov     eax, [edi]
0x706DA1: mov     edx, [eax]
0x706DA3: push    1
0x706DA5: mov     ecx, edi
0x706DA7: call    edx
0x706DA9: test    esi, esi
0x706DAB: mov     ds:0B3F998h, esi
0x706DB1: jz      short loc_706DBD
0x706DB3: add     esi, 4
0x706DB6: push    esi; lpAddend
0x706DB7: call    dword ptr ds:0A28078h
0x706DBD: mov     ecx, dword ptr [esp+1Ch+var_C]
0x706DC1: mov     large fs:0, ecx
0x706DC8: pop     ecx
0x706DC9: pop     edi
0x706DCA: pop     esi
0x706DCB: add     esp, 10h
0x706DCE: retn
