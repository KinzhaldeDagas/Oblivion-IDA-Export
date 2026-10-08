0x5F0260: cmp     ecx, ds:0B333C4h
0x5F0266: jz      short locret_5F026D
0x5F0268: jmp     loc_5EA790
0x5F026D: retn
0x5EA790: push    esi
0x5EA791: mov     esi, ecx
0x5EA793: mov     eax, [esi+2Ch]
0x5EA796: mov     ecx, [esi+30h]
0x5EA799: mov     edx, [esi+34h]
0x5EA79C: mov     [esi+0E8h], eax
0x5EA7A2: mov     eax, [esi]
0x5EA7A4: mov     [esi+0ECh], ecx
0x5EA7AA: mov     [esi+0F0h], edx
0x5EA7B0: mov     edx, [eax+1E0h]
0x5EA7B6: mov     ecx, esi
0x5EA7B8: call    edx
0x5EA7BA: fstp    dword ptr [esi+0F4h]
0x5EA7C0: mov     ecx, esi; this
0x5EA7C2: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5EA7C7: test    eax, eax
0x5EA7C9: jz      short loc_5EA7EC
0x5EA7CB: mov     ecx, esi; this
0x5EA7CD: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5EA7D2: mov     ecx, eax; this
0x5EA7D4: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x5EA7D9: test    al, al
0x5EA7DB: jz      short loc_5EA7EC
0x5EA7DD: mov     ecx, esi; this
0x5EA7DF: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5EA7E4: mov     [esi+0F8h], eax
0x5EA7EA: pop     esi
0x5EA7EB: retn
0x5EA7EC: mov     ecx, esi; this
0x5EA7EE: call    TESObjectREFR_GetWorldSpace
0x5EA7F3: mov     [esi+0F8h], eax
0x5EA7F9: pop     esi
0x5EA7FA: retn
