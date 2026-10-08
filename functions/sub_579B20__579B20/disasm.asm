0x579B20: push    1; arg1
0x579B22: push    0; canCreate
0x579B24: call    InterfaceManager_GetSingleton
0x579B29: add     esp, 8
0x579B2C: test    eax, eax
0x579B2E: jz      short locret_579B55
0x579B30: push    1; arg1
0x579B32: push    0; canCreate
0x579B34: call    InterfaceManager_GetSingleton
0x579B39: add     esp, 8
0x579B3C: cmp     dword ptr [eax+1Ch], 0
0x579B40: jz      short locret_579B55
0x579B42: push    1; arg1
0x579B44: push    0; canCreate
0x579B46: call    InterfaceManager_GetSingleton
0x579B4B: add     esp, 8
0x579B4E: mov     ecx, eax
0x579B50: jmp     loc_57DA60
0x579B55: retn
0x57DA60: push    esi
0x57DA61: push    3
0x57DA63: mov     esi, ecx
0x57DA65: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x57DA6A: mov     ecx, [esi+68h]
0x57DA6D: mov     eax, [ecx]
0x57DA6F: mov     edx, [eax+18h]
0x57DA72: add     esp, 4
0x57DA75: call    edx
0x57DA77: push    2
0x57DA79: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x57DA7E: mov     ecx, ds:0B333A0h; this
0x57DA84: add     esp, 4
0x57DA87: push    1; a2
0x57DA89: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x57DA8E: pop     esi
0x57DA8F: retn
