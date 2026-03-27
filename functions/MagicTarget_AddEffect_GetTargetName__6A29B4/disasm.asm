0x6A29B4: cmp     byte ptr ds:0B3355Ch, 0
0x6A29BB: jz      MagicTarget_AddEffect___Return_0
0x6A29C1: mov     edx, [edi]
0x6A29C3: mov     eax, [edx+4]
0x6A29C6: mov     ecx, edi
0x6A29C8: call    eax
0x6A29CA: test    eax, eax
0x6A29CC: jz      short loc_6A29E2
0x6A29CE: mov     edx, [edi]
0x6A29D0: mov     eax, [edx+4]
0x6A29D3: mov     ecx, edi
0x6A29D5: call    eax
0x6A29D7: mov     ecx, eax; this
0x6A29D9: call    TESObjectREFR_GetName
0x6A29DE: mov     edi, eax
0x6A29E0: jmp     short MagicTarget_AddEffect___PrintEffectResisted_DebugMsg
0x6A29E2: mov     edi, offset aNull_1; "{NULL}"
