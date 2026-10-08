0x443300: push    esi
0x443301: mov     esi, ecx
0x443303: call    sub_440F20
0x443308: fldz
0x44330A: mov     eax, 7FFFFFFFh
0x44330F: mov     [esi+48h], eax
0x443312: mov     [esi+4Ch], eax
0x443315: fstp    dword ptr ds:0B33A30h
0x44331B: push    3
0x44331D: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x443322: add     esp, 4
0x443325: cmp     dword ptr [esi+7Ch], 0
0x443329: jz      short loc_443347
0x44332B: push    edi
0x44332C: lea     esp, [esp+0]
0x443330: mov     eax, [esi+7Ch]
0x443333: mov     edi, [eax+4]
0x443336: push    eax
0x443337: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x44333C: add     esp, 4
0x44333F: test    edi, edi
0x443341: mov     [esi+7Ch], edi
0x443344: jnz     short loc_443330
0x443346: pop     edi
0x443347: mov     dword ptr [esi+78h], 0
0x44334E: cmp     dword ptr [esi+34h], 0
0x443352: jz      short loc_44335B
0x443354: mov     ecx, esi; this
0x443356: call    sub_4425D0
0x44335B: mov     eax, ds:0B33398h
0x443360: mov     ecx, [eax+24h]
0x443363: test    ecx, ecx
0x443365: jz      short loc_44336C
0x443367: call    sub_6AC210
0x44336C: push    0
0x44336E: push    1
0x443370: mov     ecx, esi
0x443372: call    sub_43FFF0
0x443377: push    1
0x443379: mov     ecx, esi
0x44337B: call    sub_43FE30
0x443380: push    0; a2
0x443382: mov     ecx, esi; this
0x443384: mov     byte ptr [esi+0A8h], 1
0x44338B: call    sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
0x443390: push    2
0x443392: call    Cmd_AddAchievement_PC_ReturnTrueNoOp; Verified shared return-true stub. In the BSPackedAdditionalGeometryData vtable at 0xA45F1C it occupies virtual +0x4C; this class-specific use is part of the Probable packed-geometry discriminator in BSTempEffectGeometryDecal_Initialize. Other xrefs use the same return-true stub for unrelated purposes.
0x443397: add     esp, 4
0x44339A: pop     esi
0x44339B: retn
