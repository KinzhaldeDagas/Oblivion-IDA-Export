0x5630A0: push    0FFFFFFFFh; Verified instance copy path: shares the base model at +0x10, copies/refcounts +0x14/+0x18 geometry data and +0x2C/+0x30 cached property slots, while deep-cloning per-LOD shader-property objects at +0x24/+0x28. The leaf cached-property source remains Unknown because no stock writer was found.
0x5630A2: push    offset SEH_5630A0
0x5630A7: mov     eax, large fs:0
0x5630AD: push    eax
0x5630AE: sub     esp, 20h
0x5630B1: push    ebx
0x5630B2: push    ebp
0x5630B3: push    esi
0x5630B4: push    edi
0x5630B5: mov     eax, ds:0B30AACh
0x5630BA: xor     eax, esp
0x5630BC: push    eax
0x5630BD: lea     eax, [esp+40h+var_C]
0x5630C1: mov     large fs:0, eax
0x5630C7: mov     esi, ecx
0x5630C9: push    offset unk_A2F830; lpCriticalSection
0x5630CE: mov     ecx, offset OB_BSTreeModel_MakeInstanceCriticalSection_010201A0
0x5630D3: call    NiEnterCriticalSection; Verified: dedicated BSTreeModel instance-construction critical section. The lock spans CSpeedTreeRT::MakeInstance plus render-resource array creation/copy and is released on both success and failure exits. No destructor use is implied.
0x5630D8: mov     ebp, [esp+40h+a2]
0x5630DC: test    ebp, ebp
0x5630DE: jz      loc_56353B
0x5630E4: mov     ecx, [ebp+0Ch]; this
0x5630E7: test    ecx, ecx
0x5630E9: jz      loc_56353B
0x5630EF: mov     edi, 2
0x5630F4: cmp     [ebp+8], edi
0x5630F7: jz      loc_56353B
0x5630FD: cmp     dword ptr [esi+8], 0
0x563101: jnz     loc_56353B
0x563107: call    CSpeedTreeRT__MakeInstance; Sole Oblivion code xref to CSpeedTreeRT::MakeInstance. Success returns only after the new object copied the shared +0x30 identity, joined the shared +0x38 list, and incremented the shared count.
0x56310C: test    eax, eax
0x56310E: mov     [esi+0Ch], eax
0x563111: jz      loc_56353B
0x563117: push    ebp; a2
0x563118: lea     ecx, [esi+10h]; this
0x56311B: call    NiSmartPointer_Set??; Verified: stores an owning NiPointer<BSTreeModel> reference to the base model. The instance destructor releases this reference after its own CSpeedTreeRT wrapper and render resources.
0x563120: lea     eax, [ebp+34h]
0x563123: push    eax; incoming
0x563124: lea     ecx, [esi+34h]; this
0x563127: mov     [esi+8], edi; Verified: model mode becomes 2 only after CSpeedTreeRT::MakeInstance succeeds; initialization guards reject a target already in mode 2.
0x56312A: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x56312F: lea     ecx, [ebp+38h]
0x563132: push    ecx; incoming
0x563133: lea     ecx, [esi+38h]; this
0x563136: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x56313B: lea     edx, [ebp+3Ch]
0x56313E: push    edx; incoming
0x56313F: lea     ecx, [esi+3Ch]; this
0x563142: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x563147: lea     eax, [ebp+20h]
0x56314A: push    eax; incoming
0x56314B: lea     ecx, [esi+20h]; this
0x56314E: call    OB_NiSmartPointer_Assign_010201A0; Verified: shares/refcounts the base OB_STLSPData leafShaderStreamData (+0x20); leaf LOD shader-property constructors consume this payload.
0x563153: fld     dword ptr [ebp+44h]
0x563156: fstp    dword ptr [esi+44h]
0x563159: mov     ecx, [ebp+48h]
0x56315C: mov     [esi+48h], ecx
0x56315F: fld     dword ptr [ebp+50h]
0x563162: fstp    dword ptr [esi+50h]
0x563165: fld     dword ptr [ebp+54h]
0x563168: fstp    dword ptr [esi+54h]
0x56316B: mov     eax, [ebp+40h]
0x56316E: test    eax, eax
0x563170: jz      short loc_5631B2
0x563172: fld1
0x563174: push    ecx
0x563175: lea     ecx, [esp+44h+var_28]
0x563179: fstp    [esp+44h+var_44]; float
0x56317C: call    sub_478C80
0x563181: mov     ecx, [ebp+40h]
0x563184: lea     edx, [esp+40h+var_28]
0x563188: push    edx
0x563189: mov     [esp+44h+var_4], 0
0x563191: call    sub_700610; Verified: when the base model has a collisionShape at +0x40, InitAsInstance deep-clones it with NiObject_CloneWithPointerMap and stores an owning reference in the instance.
0x563196: push    eax; a2
0x563197: lea     ecx, [esi+40h]; this
0x56319A: call    NiSmartPointer_Set??
0x56319F: lea     ecx, [esp+40h+var_28]
0x5631A3: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5631AB: call    sub_4781A0
0x5631B0: jmp     short loc_5631BC
0x5631B2: push    0; a2
0x5631B4: lea     ecx, [esi+40h]; this
0x5631B7: call    NiSmartPointer_Set??
0x5631BC: mov     ecx, esi; this
0x5631BE: call    BSTreeModel_GetNumBranchLODLevels; Verified: branch resource array lengths are derived from BSTreeModel_GetNumBranchLODLevels; each LOD slot is copied or cloned from the base model, guarded by source-array presence.
0x5631C3: movzx   eax, ax
0x5631C6: test    ax, ax
0x5631C9: mov     [esp+40h+a2], eax
0x5631CD: jbe     loc_563366
0x5631D3: cmp     dword ptr [ebp+14h], 0
0x5631D7: jz      loc_563366
0x5631DD: cmp     dword ptr [ebp+24h], 0
0x5631E1: jz      loc_563366
0x5631E7: cmp     dword ptr [ebp+2Ch], 0
0x5631EB: jz      loc_563366
0x5631F1: movzx   ebx, ax
0x5631F4: xor     ecx, ecx
0x5631F6: mov     eax, ebx
0x5631F8: mov     edx, 4
0x5631FD: mul     edx
0x5631FF: seto    cl
0x563202: neg     ecx
0x563204: or      ecx, eax
0x563206: xor     eax, eax
0x563208: add     ecx, 4
0x56320B: setb    al
0x56320E: neg     eax
0x563210: or      eax, ecx
0x563212: push    eax; Size
0x563213: call    FormHeapAlloc
0x563218: add     esp, 4
0x56321B: mov     dword ptr [esp+40h+var_2C], eax
0x56321F: test    eax, eax
0x563221: mov     [esp+40h+var_4], 1
0x563229: jz      short loc_56324C
0x56322B: push    offset NiPointerSlot_Release; a5
0x563230: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x563235: push    ebx; size
0x563236: lea     edi, [eax+4]
0x563239: push    4; a2
0x56323B: push    edi; a1
0x56323C: mov     [eax], ebx
0x56323E: call    ArrayConstructor
0x563243: mov     eax, edi
0x563245: mov     edi, 2
0x56324A: jmp     short loc_56324E
0x56324C: xor     eax, eax
0x56324E: mov     [esi+14h], eax
0x563251: xor     ecx, ecx
0x563253: mov     eax, ebx
0x563255: mov     edx, 4
0x56325A: mul     edx
0x56325C: seto    cl
0x56325F: mov     [esp+40h+var_4], 0FFFFFFFFh
0x563267: neg     ecx
0x563269: or      ecx, eax
0x56326B: xor     eax, eax
0x56326D: add     ecx, 4
0x563270: setb    al
0x563273: neg     eax
0x563275: or      eax, ecx
0x563277: push    eax; Size
0x563278: call    FormHeapAlloc
0x56327D: add     esp, 4
0x563280: mov     dword ptr [esp+40h+var_2C], eax
0x563284: test    eax, eax
0x563286: mov     [esp+40h+var_4], edi
0x56328A: jz      short loc_5632A6
0x56328C: push    offset NiPointerSlot_Release; a5
0x563291: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x563296: push    ebx; size
0x563297: lea     edi, [eax+4]
0x56329A: push    4; a2
0x56329C: push    edi; a1
0x56329D: mov     [eax], ebx
0x56329F: call    ArrayConstructor
0x5632A4: jmp     short loc_5632A8
0x5632A6: xor     edi, edi
0x5632A8: xor     ecx, ecx
0x5632AA: mov     eax, ebx
0x5632AC: mov     edx, 4
0x5632B1: mul     edx
0x5632B3: seto    cl
0x5632B6: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5632BE: mov     [esi+24h], edi
0x5632C1: neg     ecx
0x5632C3: or      ecx, eax
0x5632C5: xor     eax, eax
0x5632C7: add     ecx, 4
0x5632CA: setb    al
0x5632CD: neg     eax
0x5632CF: or      eax, ecx
0x5632D1: push    eax; Size
0x5632D2: call    FormHeapAlloc
0x5632D7: add     esp, 4
0x5632DA: mov     dword ptr [esp+40h+var_2C], eax
0x5632DE: test    eax, eax
0x5632E0: mov     [esp+40h+var_4], 3
0x5632E8: jz      short loc_563304
0x5632EA: push    offset NiPointerSlot_Release; a5
0x5632EF: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5632F4: push    ebx; size
0x5632F5: lea     edi, [eax+4]
0x5632F8: push    4; a2
0x5632FA: push    edi; a1
0x5632FB: mov     [eax], ebx
0x5632FD: call    ArrayConstructor
0x563302: jmp     short loc_563306
0x563304: xor     edi, edi
0x563306: cmp     word ptr [esp+40h+a2], 0
0x56330C: mov     [esp+40h+var_4], 0FFFFFFFFh
0x563314: mov     [esi+2Ch], edi
0x563317: jbe     short loc_563366
0x563319: xor     edi, edi
0x56331B: jmp     short loc_563320
0x563320: mov     ecx, [ebp+14h]
0x563323: add     ecx, edi
0x563325: push    ecx; incoming
0x563326: mov     ecx, [esi+14h]
0x563329: add     ecx, edi; this
0x56332B: call    OB_NiSmartPointer_Assign_010201A0; Verified: per branch LOD, InitAsInstance AddRefs/copies the base branchGeometryDataByLOD entry into the instance's corresponding slot.
0x563330: mov     edx, [ebp+24h]
0x563333: mov     ecx, [edi+edx]; Verified: per branch LOD, InitAsInstance clones the base branchShaderPropertiesByLOD NiObject with a pointer map rather than sharing it.
0x563336: test    ecx, ecx
0x563338: jz      short loc_563342
0x56333A: call    NiObject_CloneWithPointerMap; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x56333F: push    eax
0x563340: jmp     short loc_563344
0x563342: push    0; a2
0x563344: mov     ecx, [esi+24h]
0x563347: add     ecx, edi; this
0x563349: call    NiSmartPointer_Set??
0x56334E: mov     eax, [ebp+2Ch]
0x563351: mov     ecx, [esi+2Ch]
0x563354: add     eax, edi
0x563356: push    eax; incoming
0x563357: add     ecx, edi; this
0x563359: call    OB_NiSmartPointer_Assign_010201A0; Verified: per branch LOD, InitAsInstance AddRefs/copies the base branchCachedPropertiesByLOD entry into the corresponding slot.
0x56335E: add     edi, 4
0x563361: sub     ebx, 1
0x563364: jnz     short loc_563320
0x563366: mov     ecx, [esi+0Ch]; this
0x563369: test    ecx, ecx
0x56336B: jz      loc_563516
0x563371: call    CSpeedTreeRT__GetNumLeafLodLevels; Verified: leaf resource array lengths are derived from CSpeedTreeRT_GetNumLeafLodLevels; each LOD slot is copied or cloned from the base model, guarded by source-array presence.
0x563376: movzx   eax, ax
0x563379: test    ax, ax
0x56337C: mov     [esp+40h+a2], eax
0x563380: jbe     loc_563516
0x563386: cmp     dword ptr [ebp+18h], 0
0x56338A: jz      loc_563516
0x563390: cmp     dword ptr [ebp+28h], 0
0x563394: jz      loc_563516
0x56339A: cmp     dword ptr [ebp+30h], 0
0x56339E: jz      loc_563516
0x5633A4: movzx   ebx, ax
0x5633A7: xor     ecx, ecx
0x5633A9: mov     eax, ebx
0x5633AB: mov     edx, 4
0x5633B0: mul     edx
0x5633B2: seto    cl
0x5633B5: neg     ecx
0x5633B7: or      ecx, eax
0x5633B9: xor     eax, eax
0x5633BB: add     ecx, 4
0x5633BE: setb    al
0x5633C1: neg     eax
0x5633C3: or      eax, ecx
0x5633C5: push    eax; Size
0x5633C6: call    FormHeapAlloc
0x5633CB: add     esp, 4
0x5633CE: mov     dword ptr [esp+40h+var_2C], eax
0x5633D2: test    eax, eax
0x5633D4: mov     [esp+40h+var_4], 4
0x5633DC: jz      short loc_5633F8
0x5633DE: push    offset NiPointerSlot_Release; a5
0x5633E3: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5633E8: push    ebx; size
0x5633E9: lea     edi, [eax+4]
0x5633EC: push    4; a2
0x5633EE: push    edi; a1
0x5633EF: mov     [eax], ebx
0x5633F1: call    ArrayConstructor
0x5633F6: jmp     short loc_5633FA
0x5633F8: xor     edi, edi
0x5633FA: xor     ecx, ecx
0x5633FC: mov     eax, ebx
0x5633FE: mov     edx, 4
0x563403: mul     edx
0x563405: seto    cl
0x563408: mov     [esp+40h+var_4], 0FFFFFFFFh
0x563410: mov     [esi+18h], edi
0x563413: neg     ecx
0x563415: or      ecx, eax
0x563417: xor     eax, eax
0x563419: add     ecx, 4
0x56341C: setb    al
0x56341F: neg     eax
0x563421: or      eax, ecx
0x563423: push    eax; Size
0x563424: call    FormHeapAlloc
0x563429: add     esp, 4
0x56342C: mov     dword ptr [esp+40h+var_2C], eax
0x563430: test    eax, eax
0x563432: mov     [esp+40h+var_4], 5
0x56343A: jz      short loc_563456
0x56343C: push    offset NiPointerSlot_Release; a5
0x563441: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x563446: push    ebx; size
0x563447: lea     edi, [eax+4]
0x56344A: push    4; a2
0x56344C: push    edi; a1
0x56344D: mov     [eax], ebx
0x56344F: call    ArrayConstructor
0x563454: jmp     short loc_563458
0x563456: xor     edi, edi
0x563458: xor     ecx, ecx
0x56345A: mov     eax, ebx
0x56345C: mov     edx, 4
0x563461: mul     edx
0x563463: seto    cl
0x563466: mov     [esp+40h+var_4], 0FFFFFFFFh
0x56346E: mov     [esi+28h], edi
0x563471: neg     ecx
0x563473: or      ecx, eax
0x563475: xor     eax, eax
0x563477: add     ecx, 4
0x56347A: setb    al
0x56347D: neg     eax
0x56347F: or      eax, ecx
0x563481: push    eax; Size
0x563482: call    FormHeapAlloc
0x563487: add     esp, 4
0x56348A: mov     dword ptr [esp+40h+var_2C], eax
0x56348E: test    eax, eax
0x563490: mov     [esp+40h+var_4], 6
0x563498: jz      short loc_5634B4
0x56349A: push    offset NiPointerSlot_Release; a5
0x56349F: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5634A4: push    ebx; size
0x5634A5: lea     edi, [eax+4]
0x5634A8: push    4; a2
0x5634AA: push    edi; a1
0x5634AB: mov     [eax], ebx
0x5634AD: call    ArrayConstructor
0x5634B2: jmp     short loc_5634B6
0x5634B4: xor     edi, edi
0x5634B6: cmp     word ptr [esp+40h+a2], 0
0x5634BC: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5634C4: mov     [esi+30h], edi
0x5634C7: jbe     short loc_563516
0x5634C9: xor     edi, edi
0x5634CB: jmp     short loc_5634D0
0x5634D0: mov     ecx, [ebp+18h]
0x5634D3: add     ecx, edi
0x5634D5: push    ecx; incoming
0x5634D6: mov     ecx, [esi+18h]
0x5634D9: add     ecx, edi; this
0x5634DB: call    OB_NiSmartPointer_Assign_010201A0; Verified: per leaf LOD, InitAsInstance AddRefs/copies the base leafGeometryDataByLOD entry.
0x5634E0: mov     edx, [ebp+28h]
0x5634E3: mov     ecx, [edi+edx]; Verified: per leaf LOD, InitAsInstance clones the base leafShaderPropertiesByLOD NiObject with a pointer map.
0x5634E6: test    ecx, ecx
0x5634E8: jz      short loc_5634F2
0x5634EA: call    NiObject_CloneWithPointerMap; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x5634EF: push    eax
0x5634F0: jmp     short loc_5634F4
0x5634F2: push    0; a2
0x5634F4: mov     ecx, [esi+28h]
0x5634F7: add     ecx, edi; this
0x5634F9: call    NiSmartPointer_Set??
0x5634FE: mov     eax, [ebp+30h]
0x563501: mov     ecx, [esi+30h]
0x563504: add     eax, edi
0x563506: push    eax; incoming
0x563507: add     ecx, edi; this
0x563509: call    OB_NiSmartPointer_Assign_010201A0; Verified: per leaf LOD, InitAsInstance AddRefs/copies the base leafCachedPropertiesByLOD entry; CreateArt consumes non-null entries as BSShaderProperty values. No stock writer was established in this pass, so population remains Candidate.
0x56350E: add     edi, 4
0x563511: sub     ebx, 1
0x563514: jnz     short loc_5634D0
0x563516: mov     ebp, [ebp+1Ch]; Verified: InitAsInstance clones billboardShape_STBB (+0x1C) with NiObject_CloneWithPointerMap; its local producer is the NiTriShape named STBB.
0x563519: test    ebp, ebp
0x56351B: jz      short loc_56352D
0x56351D: mov     ecx, ebp; this
0x56351F: call    NiObject_CloneWithPointerMap; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x563524: push    eax; a2
0x563525: lea     ecx, [esi+1Ch]; this
0x563528: call    NiSmartPointer_Set??
0x56352D: mov     ecx, offset OB_BSTreeModel_MakeInstanceCriticalSection_010201A0; lpCriticalSection
0x563532: call    NiLeaveCriticalSection_0; Verified: releases the MakeInstance critical section after the instance's shared CSpeedTree state and available branch/leaf resources have been initialized.
0x563537: mov     al, 1
0x563539: jmp     short loc_563547
0x56353B: mov     ecx, offset OB_BSTreeModel_MakeInstanceCriticalSection_010201A0; lpCriticalSection
0x563540: call    NiLeaveCriticalSection_0
0x563545: xor     al, al
0x563547: mov     ecx, dword ptr [esp+40h+var_C]
0x56354B: mov     large fs:0, ecx
0x563552: pop     ecx
0x563553: pop     edi
0x563554: pop     esi
0x563555: pop     ebp
0x563556: pop     ebx
0x563557: add     esp, 2Ch
0x56355A: retn    4
0x9BD300: lea     ecx, [ebp-28h]
0x9BD303: jmp     sub_4781A0
0x9BD308: mov     eax, [ebp-2Ch]
0x9BD30B: push    eax
0x9BD30C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD311: pop     ecx
0x9BD312: retn
0x9BD313: mov     eax, [ebp-2Ch]
0x9BD316: push    eax
0x9BD317: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD31C: pop     ecx
0x9BD31D: retn
0x9BD31E: mov     eax, [ebp-2Ch]
0x9BD321: push    eax
0x9BD322: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD327: pop     ecx
0x9BD328: retn
0x9BD329: mov     eax, [ebp-2Ch]
0x9BD32C: push    eax
0x9BD32D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD332: pop     ecx
0x9BD333: retn
0x9BD334: mov     eax, [ebp-2Ch]
0x9BD337: push    eax
0x9BD338: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD33D: pop     ecx
0x9BD33E: retn
0x9BD33F: mov     eax, [ebp-2Ch]
0x9BD342: push    eax
0x9BD343: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BD348: pop     ecx
0x9BD349: retn
0x9BD34A: mov     edx, [esp+arg_4]
0x9BD34E: lea     eax, [edx-30h]
0x9BD351: mov     ecx, [edx-34h]
0x9BD354: xor     ecx, eax
0x9BD356: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD35B: mov     eax, offset stru_AE6D04
0x9BD360: jmp     ___CxxFrameHandler3
