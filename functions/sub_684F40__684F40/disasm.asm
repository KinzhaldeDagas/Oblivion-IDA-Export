0x684F40: push    0FFFFFFFFh
0x684F42: push    offset SEH_684F40
0x684F47: mov     eax, large fs:0
0x684F4D: push    eax
0x684F4E: sub     esp, 154h
0x684F54: mov     eax, ds:0B30AACh
0x684F59: xor     eax, esp
0x684F5B: mov     [esp+160h+var_10], eax
0x684F62: push    ebx
0x684F63: push    ebp
0x684F64: push    esi
0x684F65: push    edi
0x684F66: mov     eax, ds:0B30AACh
0x684F6B: xor     eax, esp
0x684F6D: push    eax
0x684F6E: lea     eax, [esp+174h+var_C]
0x684F75: mov     large fs:0, eax
0x684F7B: mov     edi, [esp+174h+actor]
0x684F82: mov     ebp, ecx
0x684F84: lea     eax, [esp+174h+var_160]
0x684F88: push    eax
0x684F89: lea     ecx, [esp+178h+var_15C]
0x684F8D: lea     esi, [ebp+14h]
0x684F90: push    ecx
0x684F91: mov     ecx, esi
0x684F93: call    sub_68BFB0
0x684F98: test    al, al
0x684F9A: jz      loc_685114
0x684FA0: cmp     [esp+174h+var_15C], 0
0x684FA5: mov     ecx, [esp+174h+var_160]
0x684FA9: jz      short loc_68501B
0x684FAB: call    NiDX92DBufferData__GetSurfaceData
0x684FB0: mov     ecx, [esp+174h+var_15C]
0x684FB4: push    eax
0x684FB5: call    sub_6A2FD0
0x684FBA: mov     ecx, [esp+174h+var_160]; this
0x684FBE: test    ecx, ecx
0x684FC0: mov     ebx, ecx
0x684FC2: jz      short loc_684FD2
0x684FC4: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x684FC9: push    ebx
0x684FCA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x684FCF: add     esp, 4
0x684FD2: mov     ecx, [esp+174h+var_15C]
0x684FD6: mov     [esp+174h+var_160], 0
0x684FDE: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x684FE3: mov     edx, [eax]
0x684FE5: mov     [esp+174h+start.x], edx
0x684FE9: mov     ecx, [eax+4]
0x684FEC: mov     [esp+174h+start.y], ecx
0x684FF0: mov     edx, [eax+8]
0x684FF3: mov     ecx, esi; this
0x684FF5: mov     [esp+174h+start.z], edx
0x684FF9: call    TESHealthForm_GetHealth; TESHealthForm scalar getter: returns the unsigned health value stored at TESHealthForm+0x4.
0x684FFE: mov     ecx, eax
0x685000: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x685005: mov     ecx, [eax]
0x685007: mov     [esp+174h+end.x], ecx
0x68500B: mov     edx, [eax+4]
0x68500E: mov     [esp+174h+end.y], edx
0x685012: mov     eax, [eax+8]
0x685015: mov     [esp+174h+end.z], eax
0x685019: jmp     short loc_685073
0x68501B: push    ecx
0x68501C: mov     ecx, esi
0x68501E: call    sub_68C170
0x685023: mov     edx, [edi]
0x685025: mov     eax, [edx+174h]
0x68502B: mov     ecx, edi
0x68502D: call    eax
0x68502F: mov     ecx, [eax]
0x685031: mov     [esp+174h+start.x], ecx
0x685035: mov     edx, [eax+4]
0x685038: push    0
0x68503A: lea     ecx, [esp+178h+start]
0x68503E: mov     [esp+178h+start.y], edx
0x685042: mov     eax, [eax+8]
0x685045: push    ecx
0x685046: mov     ecx, esi
0x685048: mov     [esp+17Ch+start.z], eax
0x68504C: call    sub_68C280
0x685051: mov     ecx, esi; this
0x685053: call    TESHealthForm_GetHealth; TESHealthForm scalar getter: returns the unsigned health value stored at TESHealthForm+0x4.
0x685058: mov     ecx, eax
0x68505A: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x68505F: mov     edx, [eax]
0x685061: mov     [esp+174h+end.x], edx
0x685065: mov     ecx, [eax+4]
0x685068: mov     [esp+174h+end.y], ecx
0x68506C: mov     edx, [eax+8]
0x68506F: mov     [esp+174h+end.z], edx
0x685073: cmp     ds:0B333B4h, edi
0x685079: jnz     short loc_6850BD
0x68507B: push    1
0x68507D: call    GetGlobalScriptStateObj??
0x685082: add     esp, 4
0x685085: cmp     byte ptr [eax+31h], 0
0x685089: jg      short loc_685094
0x68508B: cmp     byte ptr ds:0B3B908h, 0
0x685092: jz      short loc_6850BD
0x685094: mov     eax, [edi]
0x685096: mov     edx, [eax+0D4h]
0x68509C: mov     ecx, edi
0x68509E: call    edx
0x6850A0: push    eax
0x6850A1: lea     eax, [esp+178h+Format]
0x6850A5: push    offset aActorSExpandin; "Actor '%s' expanding high level path fo"...
0x6850AA: push    eax
0x6850AB: call    __sprintf
0x6850B0: lea     ecx, [esp+180h+Format]
0x6850B4: push    ecx; Format
0x6850B5: call    Interface_ConsolePrint
0x6850BA: add     esp, 10h
0x6850BD: lea     ecx, [esp+174h+segmentQuery]
0x6850C1: call    sub_67D760
0x6850C6: mov     dl, [ebp+10h]
0x6850C9: push    0; extraCost
0x6850CB: push    edi; actor
0x6850CC: lea     eax, [esp+17Ch+end]
0x6850D0: push    eax; end
0x6850D1: lea     ecx, [esp+180h+start]
0x6850D5: push    ecx; start
0x6850D6: lea     ecx, [esp+184h+segmentQuery]; segmentQuery
0x6850DA: mov     [esp+184h+var_4], 0
0x6850E5: mov     [esp+184h+var_128], dl
0x6850E9: call    ConnectedPointGraph_CanTraverseSegment; Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
0x6850EE: push    esi
0x6850EF: lea     ecx, [esp+178h+segmentQuery]
0x6850F3: call    sub_67E000
0x6850F8: push    edi
0x6850F9: mov     ecx, ebp
0x6850FB: call    sub_684000
0x685100: lea     ecx, [esp+174h+segmentQuery]; this
0x685104: mov     [esp+174h+var_4], 0FFFFFFFFh
0x68510F: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x685114: mov     ecx, [esp+174h+var_C]
0x68511B: mov     large fs:0, ecx
0x685122: pop     ecx
0x685123: pop     edi
0x685124: pop     esi
0x685125: pop     ebp
0x685126: pop     ebx
0x685127: mov     ecx, [esp+160h+var_10]
0x68512E: xor     ecx, esp
0x685130: call    @__security_check_cookie@4; __security_check_cookie(x)
0x685135: add     esp, 160h
0x68513B: retn    4
0x9C4E90: lea     ecx, [ebp-140h]; this
0x9C4E96: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C4E9B: mov     edx, [esp+arg_4]
0x9C4E9F: lea     eax, [edx-164h]
0x9C4EA5: mov     ecx, [edx-168h]
0x9C4EAB: xor     ecx, eax
0x9C4EAD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4EB2: add     eax, 10h
0x9C4EB5: mov     ecx, [edx-4]
0x9C4EB8: xor     ecx, eax
0x9C4EBA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4EBF: mov     eax, offset stru_AED738
0x9C4EC4: jmp     ___CxxFrameHandler3
