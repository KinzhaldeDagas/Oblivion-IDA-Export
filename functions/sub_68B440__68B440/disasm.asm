0x68B440: push    0FFFFFFFFh
0x68B442: push    offset SEH_68B440
0x68B447: mov     eax, large fs:0
0x68B44D: push    eax
0x68B44E: sub     esp, 2Ch
0x68B451: push    esi
0x68B452: push    edi
0x68B453: mov     eax, ds:0B30AACh
0x68B458: xor     eax, esp
0x68B45A: push    eax
0x68B45B: lea     eax, [esp+44h+var_C]
0x68B45F: mov     large fs:0, eax
0x68B465: lea     edi, [ecx+14h]
0x68B468: mov     ecx, edi
0x68B46A: call    sub_68C6E0
0x68B46F: mov     esi, [esp+44h+arg_0]
0x68B473: mov     ecx, esi; this
0x68B475: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x68B47A: test    eax, eax
0x68B47C: jz      short loc_68B4CE
0x68B47E: lea     ecx, [esp+44h+segmentQuery]
0x68B482: call    sub_67D760
0x68B487: mov     eax, [esp+44h+end]
0x68B48B: mov     edx, [esi]
0x68B48D: push    0; extraCost
0x68B48F: push    esi; actor
0x68B490: push    eax; end
0x68B491: mov     eax, [edx+174h]
0x68B497: mov     ecx, esi
0x68B499: mov     [esp+50h+var_4], 0
0x68B4A1: mov     [esp+50h+var_20], 1
0x68B4A6: call    eax
0x68B4A8: push    eax; start
0x68B4A9: lea     ecx, [esp+54h+segmentQuery]; segmentQuery
0x68B4AD: call    ConnectedPointGraph_CanTraverseSegment; Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
0x68B4B2: push    esi
0x68B4B3: push    edi
0x68B4B4: lea     ecx, [esp+4Ch+segmentQuery]
0x68B4B8: call    sub_67E3D0; Verified route-surface consumer follows the graph-node predecessor pointer at +0x0C, emits TeleportData at each connected point's +0x14 position, and transfers water/SubSpace flags to route-node metadata.
0x68B4BD: lea     ecx, [esp+44h+segmentQuery]; this
0x68B4C1: mov     [esp+44h+var_4], 0FFFFFFFFh
0x68B4C9: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x68B4CE: mov     ecx, [esp+44h+var_C]
0x68B4D2: mov     large fs:0, ecx
0x68B4D9: pop     ecx
0x68B4DA: pop     edi
0x68B4DB: pop     esi
0x68B4DC: add     esp, 38h
0x68B4DF: retn    0Ch
0x9C5350: lea     ecx, [ebp-38h]; this
0x9C5353: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C5358: mov     edx, [esp+end]
0x9C535C: lea     eax, [edx-34h]
0x9C535F: mov     ecx, [edx-38h]
0x9C5362: xor     ecx, eax
0x9C5364: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5369: mov     eax, offset stru_AEDB48
0x9C536E: jmp     ___CxxFrameHandler3
