0x691B90: push    esi
0x691B91: mov     esi, ecx
0x691B93: call    ValueModifierEffect_Apply
0x691B98: mov     ecx, [esi+20h]; this
0x691B9B: test    ecx, ecx
0x691B9D: jz      short loc_691BCE
0x691B9F: call    MagicTarget_GetParentActor
0x691BA4: mov     esi, eax
0x691BA6: test    esi, esi
0x691BA8: jz      short loc_691BCE
0x691BAA: mov     eax, [esi]
0x691BAC: mov     edx, [eax+330h]
0x691BB2: mov     ecx, esi
0x691BB4: call    edx
0x691BB6: test    eax, eax
0x691BB8: jz      short loc_691BCE
0x691BBA: mov     eax, [esi]
0x691BBC: mov     edx, [eax+330h]
0x691BC2: mov     ecx, esi
0x691BC4: call    edx
0x691BC6: mov     ecx, eax
0x691BC8: pop     esi
0x691BC9: jmp     loc_6193D0
0x691BCE: pop     esi
0x691BCF: retn
0x6193D0: push    esi
0x6193D1: mov     esi, ecx
0x6193D3: cmp     dword ptr [esi+70h], 0Bh
0x6193D7: jz      short loc_619409
0x6193D9: cmp     byte ptr ds:0B3B908h, 0
0x6193E0: jz      short loc_6193FD
0x6193E2: mov     ecx, [esi+3Ch]; this
0x6193E5: push    offset a___justKindaSt; "...just kinda stand around"
0x6193EA: call    TESObjectREFR_GetName
0x6193EF: push    eax
0x6193F0: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x6193F5: call    Interface_ConsolePrint
0x6193FA: add     esp, 0Ch
0x6193FD: fld     dword ptr ds:0A30634h
0x619403: fstp    dword ptr [esi+188h]
0x619409: mov     ecx, esi
0x61940B: mov     dword ptr [esi+70h], 0Bh
0x619412: call    sub_6160B0
0x619417: mov     ecx, esi
0x619419: pop     esi
0x61941A: jmp     sub_6191B0
