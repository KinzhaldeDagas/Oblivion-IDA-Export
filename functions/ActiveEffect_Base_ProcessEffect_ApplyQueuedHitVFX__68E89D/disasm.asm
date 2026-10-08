0x68E89D: test    ecx, ecx
0x68E89F: jz      short loc_68E8B9
0x68E8A1: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x68E8A6: mov     edx, [esi+34h]
0x68E8A9: push    edx
0x68E8AA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68E8AF: add     esp, 4
0x68E8B2: mov     dword ptr [esi+34h], 0
0x68E8B9: push    esi
0x68E8BA: call    MagicHitEffect_BuildHitVFXList; Verified (Oblivion): queued hit VFX are replayed through MagicHitEffect_BuildHitVFXList, reusing the same model-then-shader factory path.
0x68E8BF: add     esp, 4
0x68E8C2: and     dword ptr [esi+14h], 0FFFFFFBFh
0x68E8C6: mov     [esi+34h], eax
