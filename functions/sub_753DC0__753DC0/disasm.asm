0x753DC0: push    esi
0x753DC1: mov     esi, [esp+4+arg_0]
0x753DC5: push    edi
0x753DC6: push    esi
0x753DC7: call    NiTimeController_GetViewerStrings; Viewer output confirms flags: bit 0 anim type APP_TIME/APP_INIT, bits 1..2 cycle LOOP/REVERSE/CLAMP, bit 3 Active, bit 4 Play Backwards; also reports frequency, phase, key range, runtime start/last time, and target.
0x753DCC: mov     eax, ds:0B40DFCh
0x753DD1: push    eax; ArgList
0x753DD2: call    TESOutput_PrintString
0x753DD7: movzx   edi, word ptr [esi+0Ah]
0x753DDB: movzx   ecx, word ptr [esi+8]
0x753DDF: add     esp, 4
0x753DE2: cmp     edi, ecx
0x753DE4: mov     [esp+8+arg_0], eax
0x753DE8: jb      short loc_753DF8
0x753DEA: movzx   edx, word ptr [esi+0Eh]
0x753DEE: add     edx, edi
0x753DF0: push    edx
0x753DF1: mov     ecx, esi
0x753DF3: call    NiTArray_SetSize
0x753DF8: lea     eax, [esp+8+arg_0]
0x753DFC: push    eax
0x753DFD: push    edi
0x753DFE: mov     ecx, esi
0x753E00: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x753E05: pop     edi
0x753E06: pop     esi
0x753E07: retn    4
