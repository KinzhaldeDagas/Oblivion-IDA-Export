0x676B40: sub     esp, 134h
0x676B46: mov     eax, ds:0B30AACh
0x676B4B: xor     eax, esp
0x676B4D: mov     [esp+134h+var_4], eax
0x676B54: push    ebx
0x676B55: push    ebp
0x676B56: push    esi
0x676B57: mov     esi, ecx
0x676B59: push    edi
0x676B5A: mov     [esp+144h+var_134], esi
0x676B5E: xor     ebx, ebx
0x676B60: test    ebx, ebx
0x676B62: jnz     short loc_676B67
0x676B64: push    ebx
0x676B65: jmp     short loc_676B79
0x676B67: cmp     ebx, 1
0x676B6A: jnz     short loc_676B6F
0x676B6C: push    ebx
0x676B6D: jmp     short loc_676B79
0x676B6F: cmp     ebx, 2
0x676B72: jnz     short loc_676B77
0x676B74: push    ebx
0x676B75: jmp     short loc_676B79
0x676B77: push    3; a2
0x676B79: mov     ecx, esi; this
0x676B7B: call    sub_673A50
0x676B80: mov     ecx, eax; this
0x676B82: call    sub_7616D0
0x676B87: mov     ebp, eax
0x676B89: test    ebp, ebp
0x676B8B: jz      loc_676CFF
0x676B91: mov     ecx, [ebp+0]
0x676B94: test    ecx, ecx
0x676B96: jz      loc_676CFF
0x676B9C: mov     eax, [ecx]
0x676B9E: mov     edx, [eax+190h]
0x676BA4: xor     esi, esi
0x676BA6: call    edx
0x676BA8: test    al, al
0x676BAA: jz      short loc_676BAF
0x676BAC: mov     esi, [ebp+0]
0x676BAF: test    esi, esi
0x676BB1: mov     ebp, [ebp+4]
0x676BB4: jz      loc_676CF3
0x676BBA: cmp     [esp+144h+arg_0], 0
0x676BC2: jz      loc_676CD3
0x676BC8: mov     eax, [esi+58h]
0x676BCB: test    eax, eax
0x676BCD: jz      short loc_676C23
0x676BCF: mov     edi, [eax+8]
0x676BD2: mov     eax, [esi]
0x676BD4: mov     edx, [eax+334h]
0x676BDA: push    1
0x676BDC: mov     ecx, esi
0x676BDE: call    edx
0x676BE0: test    al, al
0x676BE2: mov     ecx, esi
0x676BE4: jz      loc_676C8E
0x676BEA: mov     eax, [esi]
0x676BEC: mov     edx, [eax+330h]
0x676BF2: call    edx
0x676BF4: test    eax, eax
0x676BF6: jz      short loc_676C19
0x676BF8: mov     eax, ds:0B333C4h
0x676BFD: mov     edx, [esi]
0x676BFF: push    eax
0x676C00: mov     eax, [edx+330h]
0x676C06: mov     ecx, esi
0x676C08: call    eax
0x676C0A: mov     ecx, eax
0x676C0C: call    sub_613670
0x676C11: test    al, al
0x676C13: jnz     loc_676CB0
0x676C19: test    edi, edi
0x676C1B: jz      short loc_676C23
0x676C1D: cmp     byte ptr [edi+20h], 0Dh
0x676C21: jz      short loc_676C97
0x676C23: mov     eax, ds:0B333C4h
0x676C28: push    eax
0x676C29: mov     ecx, esi
0x676C2B: call    sub_5E10A0
0x676C30: cmp     eax, 3
0x676C33: jl      loc_676CF3
0x676C39: mov     edx, [esi]
0x676C3B: mov     eax, [edx+198h]
0x676C41: push    0
0x676C43: mov     ecx, esi
0x676C45: call    eax
0x676C47: test    al, al
0x676C49: jnz     loc_676CF3
0x676C4F: mov     eax, [esi+8]
0x676C52: mov     ecx, eax
0x676C54: shr     ecx, 0Bh
0x676C57: test    cl, 1
0x676C5A: jnz     loc_676CF3
0x676C60: shr     eax, 5
0x676C63: test    al, 1
0x676C65: jnz     loc_676CF3
0x676C6B: mov     ecx, esi; this
0x676C6D: call    TESObjectREFR_GetName
0x676C72: push    eax
0x676C73: lea     edx, [esp+148h+Format]
0x676C77: push    offset aSDetectsThePla; "%s detects the player "
0x676C7C: push    edx
0x676C7D: call    __sprintf
0x676C82: lea     eax, [esp+150h+Format]
0x676C86: push    eax; Format
0x676C87: call    Interface_ConsolePrint
0x676C8C: jmp     short loc_676CF0
0x676C8E: call    sub_5E6BA0
0x676C93: test    al, al
0x676C95: jz      short loc_676C23
0x676C97: mov     ecx, [esi+58h]
0x676C9A: mov     edx, [ecx]
0x676C9C: mov     eax, [edx+0CCh]
0x676CA2: call    eax
0x676CA4: cmp     eax, ds:0B333C4h
0x676CAA: jnz     loc_676C23
0x676CB0: mov     ecx, esi; this
0x676CB2: call    TESObjectREFR_GetName
0x676CB7: push    eax
0x676CB8: lea     ecx, [esp+148h+Format]
0x676CBC: push    offset aSDetectsThePla; "%s detects the player "
0x676CC1: push    ecx
0x676CC2: call    __sprintf
0x676CC7: lea     edx, [esp+150h+Format]
0x676CCB: push    edx; Format
0x676CCC: call    Interface_ConsolePrint
0x676CD1: jmp     short loc_676CF0
0x676CD3: mov     edx, [esi]
0x676CD5: mov     eax, [edx+0D4h]
0x676CDB: push    ebx
0x676CDC: push    offset aIsInList; "is in List"
0x676CE1: mov     ecx, esi
0x676CE3: call    eax
0x676CE5: push    eax; ArgList
0x676CE6: push    offset aSSI; "%s %s% i"
0x676CEB: call    PrintToLog???
0x676CF0: add     esp, 10h
0x676CF3: test    ebp, ebp
0x676CF5: mov     esi, [esp+144h+var_134]
0x676CF9: jnz     loc_676B91
0x676CFF: add     ebx, 1
0x676D02: cmp     ebx, 4
0x676D05: jl      loc_676B60
0x676D0B: mov     ecx, [esp+144h+var_4]
0x676D12: pop     edi
0x676D13: pop     esi
0x676D14: pop     ebp
0x676D15: pop     ebx
0x676D16: xor     ecx, esp
0x676D18: call    @__security_check_cookie@4; __security_check_cookie(x)
0x676D1D: add     esp, 134h
0x676D23: retn    4
