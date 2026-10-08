0x4F0FB0: push    0FFFFFFFFh; Verified destruction order: clears persistent-reference index (+0x64), TESForm component references, SubSpace spatial index (+0x60), exterior cell map, cellMap, persistent cell, auxiliary resources, LOD-cell map, terrain LOD map, then base components.
0x4F0FB2: push    offset ??1TESWorldSpace@@UAE@XZ_SEH
0x4F0FB7: mov     eax, large fs:0
0x4F0FBD: push    eax
0x4F0FBE: sub     esp, 0Ch
0x4F0FC1: push    ebx
0x4F0FC2: push    esi
0x4F0FC3: push    edi
0x4F0FC4: mov     eax, ds:0B30AACh
0x4F0FC9: xor     eax, esp
0x4F0FCB: push    eax
0x4F0FCC: lea     eax, [esp+28h+var_C]
0x4F0FD0: mov     large fs:0, eax
0x4F0FD6: mov     esi, ecx
0x4F0FD8: mov     [esp+28h+var_10], esi
0x4F0FDC: lea     ebx, [esi+24h]
0x4F0FDF: mov     dword ptr [esi], offset ??_7TESWorldSpace@@6BTESWorldSpace@@@; const TESWorldSpace::`vftable'{for `TESWorldSpace'}
0x4F0FE5: mov     dword ptr [esi+18h], offset ??_7TESWorldSpace@@6BTESFullName@@@; const TESWorldSpace::`vftable'{for `TESFullName'}
0x4F0FEC: mov     dword ptr [ebx], offset ??_7TESWorldSpace@@6BTESTexture@@@; const TESWorldSpace::`vftable'{for `TESTexture'}
0x4F0FF2: xor     edi, edi
0x4F0FF4: cmp     ds:0B33ABCh, esi
0x4F0FFA: mov     [esp+28h+var_4], 6
0x4F1002: jnz     short loc_4F100A
0x4F1004: mov     ds:0B33ABCh, edi
0x4F100A: mov     ecx, esi; this
0x4F100C: call    TESWorldSpace_ClearReferenceIndex; Verified: under the shared critical section, frees fallbackReferences nodes and every per-coordinate BSSimpleList payload/head in referencesByCell, then clears the map.
0x4F1011: mov     ecx, esi
0x4F1013: call    j_TESForm_ClearComponentReferences
0x4F1018: mov     ecx, esi; this
0x4F101A: call    TESWorldSpace_ClearSubSpaceIndex; Verified: WorldSpace destructor clears the derived SubSpace index (+0x60), frees all per-coordinate linked-list nodes and destroys the 16-byte map. The separate persistent-reference index (+0x64) is cleared earlier by TESWorldSpace_ClearReferenceIndex.
0x4F101F: mov     ecx, esi; this
0x4F1021: call    TESWorldSpace_ClearExteriorCellMap; Verified: clears inline exterior cellMap at +0x30; iterates mapped TESObjectCELL values and destroys them unless the WorldSpace base flag 0x4000 is set, then empties the map.
0x4F1026: mov     ecx, [esi+30h]
0x4F1029: cmp     ecx, edi
0x4F102B: jz      short loc_4F1035
0x4F102D: mov     eax, [ecx]
0x4F102F: mov     edx, [eax]
0x4F1031: push    1
0x4F1033: call    edx
0x4F1035: mov     ecx, [esi+34h]
0x4F1038: cmp     ecx, edi
0x4F103A: mov     [esi+30h], edi
0x4F103D: jz      short loc_4F1048
0x4F103F: mov     eax, [ecx]
0x4F1041: mov     edx, [eax+10h]
0x4F1044: push    1
0x4F1046: call    edx
0x4F1048: mov     ecx, [esi+54h]; Verified: this is TESWorldSpace.road (+0x54), a TESRoad*; destructor releases the owned form through its virtual Destroy call, then clears the field.
0x4F104B: cmp     ecx, edi
0x4F104D: mov     [esi+34h], edi
0x4F1050: jz      short loc_4F105B
0x4F1052: mov     eax, [ecx]
0x4F1054: mov     edx, [eax+10h]
0x4F1057: push    1
0x4F1059: call    edx
0x4F105B: mov     eax, [esi+0A8h]
0x4F1061: push    eax
0x4F1062: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F1067: add     esp, 4
0x4F106A: lea     ecx, [esi+0C8h]
0x4F1070: mov     byte ptr [esp+28h+var_4], 5
0x4F1075: call    ??1?$NiTPointerMap@I_N@@UAE@XZ; NiTPointerMap<uint,bool>::~NiTPointerMap<uint,bool>(void)
0x4F107A: mov     eax, [esi+0C0h]
0x4F1080: push    eax
0x4F1081: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F1086: add     esp, 4
0x4F1089: lea     ecx, [esi+64h]
0x4F108C: mov     [esi+0C0h], edi
0x4F1092: mov     [esi+0C6h], di
0x4F1099: mov     [esi+0C4h], di
0x4F10A0: mov     byte ptr [esp+28h+var_4], 3
0x4F10A5: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>(void)
0x4F10AA: lea     ecx, [esi+38h]
0x4F10AD: mov     byte ptr [esp+28h+var_4], 2
0x4F10B2: call    sub_4EC590
0x4F10B7: mov     ecx, ebx; void *
0x4F10B9: mov     byte ptr [esp+28h+var_4], 1
0x4F10BE: call    TESTexture_destr
0x4F10C3: mov     eax, [esi+1Ch]
0x4F10C6: push    eax
0x4F10C7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F10CC: add     esp, 4
0x4F10CF: mov     ecx, esi; this
0x4F10D1: mov     [esi+1Ch], edi
0x4F10D4: mov     [esi+22h], di
0x4F10D8: mov     [esi+20h], di
0x4F10DC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4F10E4: call    TESForm_destr
0x4F10E9: mov     ecx, dword ptr [esp+28h+var_C]
0x4F10ED: mov     large fs:0, ecx
0x4F10F4: pop     ecx
0x4F10F5: pop     edi
0x4F10F6: pop     esi
0x4F10F7: pop     ebx
0x4F10F8: add     esp, 18h
0x4F10FB: retn
0x9B67A0: mov     ecx, [ebp-10h]; this
0x9B67A3: jmp     TESForm_destr
0x9B67A8: cmp     dword ptr [ebp-10h], 0
0x9B67AC: jz      loc_9B67C0
0x9B67B2: mov     eax, [ebp-10h]
0x9B67B5: add     eax, 18h
0x9B67B8: mov     [ebp-14h], eax
0x9B67BB: jmp     loc_9B67C7
0x9B67C0: mov     dword ptr [ebp-14h], 0
0x9B67C7: mov     ecx, [ebp-14h]
0x9B67CA: jmp     TESFullName_Initialize
0x9B67CF: cmp     dword ptr [ebp-10h], 0
0x9B67D3: jz      loc_9B67E7
0x9B67D9: mov     eax, [ebp-10h]
0x9B67DC: add     eax, 24h ; '$'
0x9B67DF: mov     [ebp-18h], eax
0x9B67E2: jmp     loc_9B67EE
0x9B67E7: mov     dword ptr [ebp-18h], 0
0x9B67EE: mov     ecx, [ebp-18h]; void *
0x9B67F1: jmp     TESTexture_destr
0x9B67F6: mov     ecx, [ebp-10h]
0x9B67F9: add     ecx, 38h ; '8'
0x9B67FC: jmp     sub_4EC590
0x9B6801: mov     ecx, [ebp-10h]
0x9B6804: add     ecx, 64h ; 'd'
0x9B6807: jmp     ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::~NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>(void)
0x9B680C: mov     ecx, [ebp-10h]
0x9B680F: add     ecx, 0C0h ; 'À'; void *
0x9B6815: jmp     BSStringT_Clear
0x9B681A: mov     ecx, [ebp-10h]
0x9B681D: add     ecx, 0C8h ; 'È'
0x9B6823: jmp     ??1?$NiTPointerMap@I_N@@UAE@XZ; NiTPointerMap<uint,bool>::~NiTPointerMap<uint,bool>(void)
0x9B6828: mov     edx, [esp+arg_4]
0x9B682C: lea     eax, [edx-18h]
0x9B682F: mov     ecx, [edx-1Ch]
0x9B6832: xor     ecx, eax
0x9B6834: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6839: mov     eax, offset stru_AE15F0
0x9B683E: jmp     ___CxxFrameHandler3
