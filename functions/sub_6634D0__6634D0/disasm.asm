0x6634D0: push    esi
0x6634D1: call    TESObjectREFR__GetNiNode
0x6634D6: push    offset off_A3FA90
0x6634DB: mov     ecx, eax
0x6634DD: call    NiObjectNET_GetExtraData
0x6634E2: mov     esi, eax
0x6634E4: test    esi, esi
0x6634E6: jz      short loc_663516
0x6634E8: mov     eax, [esi]
0x6634EA: mov     edx, [eax+4]
0x6634ED: mov     ecx, esi
0x6634EF: call    edx
0x6634F1: test    eax, eax
0x6634F3: jz      short loc_663503
0x6634F5: cmp     eax, offset dword_B35294
0x6634FA: jz      short loc_663512
0x6634FC: mov     eax, [eax+4]
0x6634FF: test    eax, eax
0x663501: jnz     short loc_6634F5
0x663503: xor     al, al
0x663505: neg     al
0x663507: sbb     eax, eax
0x663509: and     eax, esi
0x66350B: jz      short loc_663516
0x66350D: fld     dword ptr [eax+0Ch]
0x663510: pop     esi
0x663511: retn
0x663512: mov     al, 1
0x663514: jmp     short loc_663505
0x663516: fld1
0x663518: pop     esi
0x663519: retn
