0x510C70: push    0FFFFFFFFh
0x510C72: push    offset SEH_510C70
0x510C77: mov     eax, large fs:0
0x510C7D: push    eax
0x510C7E: sub     esp, 3Ch
0x510C81: push    esi
0x510C82: mov     eax, ds:0B30AACh
0x510C87: xor     eax, esp
0x510C89: push    eax
0x510C8A: lea     eax, [esp+50h+var_C]
0x510C8E: mov     large fs:0, eax
0x510C94: mov     esi, [esp+50h+arg_8]
0x510C98: test    esi, esi
0x510C9A: jz      loc_510E4B
0x510CA0: cmp     dword ptr ds:0B333C4h, 0
0x510CA7: jz      loc_510E4B
0x510CAD: lea     ecx, [esp+50h+segmentQuery]
0x510CB1: call    sub_67D760
0x510CB6: mov     eax, ds:0B333C4h
0x510CBB: mov     edx, [esi]
0x510CBD: push    0; extraCost
0x510CBF: push    eax; actor
0x510CC0: mov     eax, [edx+174h]
0x510CC6: mov     ecx, esi
0x510CC8: mov     [esp+58h+var_4], 0
0x510CD0: call    eax
0x510CD2: mov     ecx, ds:0B333C4h
0x510CD8: mov     edx, [ecx]
0x510CDA: push    eax; end
0x510CDB: mov     eax, [edx+174h]
0x510CE1: call    eax
0x510CE3: push    eax; start
0x510CE4: lea     ecx, [esp+60h+segmentQuery]; segmentQuery
0x510CE8: call    ConnectedPointGraph_CanTraverseSegment; Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
0x510CED: lea     ecx, [esp+50h+var_40]
0x510CF1: mov     byte ptr [esp+50h+arg_8], al
0x510CF5: call    sub_68C040
0x510CFA: mov     ecx, ds:0B333C4h
0x510D00: push    ecx
0x510D01: lea     edx, [esp+54h+var_40]
0x510D05: push    edx
0x510D06: lea     ecx, [esp+58h+segmentQuery]
0x510D0A: mov     byte ptr [esp+58h+var_4], 1
0x510D0F: call    sub_67E3D0; Verified route-surface consumer follows the graph-node predecessor pointer at +0x0C, emits TeleportData at each connected point's +0x14 position, and transfers water/SubSpace flags to route-node metadata.
0x510D14: mov     eax, ds:0B36200h
0x510D19: test    eax, eax
0x510D1B: jz      short loc_510D5A
0x510D1D: mov     ecx, ds:0B333A0h
0x510D23: mov     ecx, [ecx+0Ch]
0x510D26: mov     edx, [ecx]
0x510D28: mov     edx, [edx+88h]
0x510D2E: push    eax
0x510D2F: lea     eax, [esp+54h+var_48]
0x510D33: push    eax
0x510D34: call    edx
0x510D36: mov     esi, dword ptr [esp+50h+var_48]
0x510D3A: test    esi, esi
0x510D3C: jz      short loc_510D5A
0x510D3E: lea     eax, [esi+4]
0x510D41: push    eax; lpAddend
0x510D42: call    dword ptr ds:0A2807Ch
0x510D48: test    eax, eax
0x510D4A: jnz     short loc_510D5A
0x510D4C: test    esi, esi
0x510D4E: jz      short loc_510D5A
0x510D50: mov     edx, [esi]
0x510D52: mov     eax, [edx]
0x510D54: push    1
0x510D56: mov     ecx, esi
0x510D58: call    eax
0x510D5A: lea     ecx, [esp+50h+var_40]
0x510D5E: call    sub_68C740
0x510D63: test    eax, eax
0x510D65: mov     ds:0B36200h, eax
0x510D6A: jz      loc_510E04
0x510D70: push    1Ch; Size
0x510D72: call    FormHeapAlloc
0x510D77: mov     esi, eax
0x510D79: add     esp, 4
0x510D7C: mov     [esp+50h+var_44], esi
0x510D80: test    esi, esi
0x510D82: mov     byte ptr [esp+50h+var_4], 2
0x510D87: jz      short loc_510DA0
0x510D89: mov     ecx, esi; this
0x510D8B: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x510D90: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x510D96: mov     word ptr [esi+18h], 8
0x510D9C: mov     eax, esi
0x510D9E: jmp     short loc_510DA2
0x510DA0: xor     eax, eax
0x510DA2: mov     cx, [eax+18h]
0x510DA6: and     cx, 0FFD7h
0x510DAB: or      cx, 10h
0x510DAF: mov     [eax+18h], cx
0x510DB3: mov     ecx, ds:0B36200h; this
0x510DB9: push    eax; a2
0x510DBA: mov     byte ptr [esp+54h+var_4], 1
0x510DBF: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x510DC4: mov     edx, ds:0B333A0h
0x510DCA: mov     ecx, [edx+0Ch]
0x510DCD: mov     eax, [ecx]
0x510DCF: mov     edx, ds:0B36200h
0x510DD5: mov     eax, [eax+84h]
0x510DDB: push    0
0x510DDD: push    edx
0x510DDE: call    eax
0x510DE0: mov     ecx, ds:0B333A0h
0x510DE6: mov     ecx, [ecx+0Ch]; this
0x510DE9: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x510DEE: fldz
0x510DF0: mov     edx, ds:0B333A0h
0x510DF6: mov     ecx, [edx+0Ch]; this
0x510DF9: push    1; a3
0x510DFB: push    ecx
0x510DFC: fstp    [esp+58h+a2]; a2
0x510DFF: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x510E04: cmp     byte ptr ds:0B361ACh, 0
0x510E0B: jz      short loc_510E2C
0x510E0D: cmp     byte ptr [esp+50h+arg_8], 0
0x510E12: mov     eax, offset aSuccess_0; "SUCCESS"
0x510E17: jnz     short loc_510E1E
0x510E19: mov     eax, offset aFailure; "FAILURE"
0x510E1E: push    eax
0x510E1F: push    offset aHighPathBuildS; "High Path Build: %s"
0x510E24: call    Interface_ConsolePrint
0x510E29: add     esp, 8
0x510E2C: lea     ecx, [esp+50h+var_40]
0x510E30: mov     byte ptr [esp+50h+var_4], 0
0x510E35: call    sub_68C9B0
0x510E3A: lea     ecx, [esp+50h+segmentQuery]; this
0x510E3E: mov     [esp+50h+var_4], 0FFFFFFFFh
0x510E46: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x510E4B: mov     al, 1
0x510E4D: mov     ecx, dword ptr [esp+50h+var_C]
0x510E51: mov     large fs:0, ecx
0x510E58: pop     ecx
0x510E59: pop     esi
0x510E5A: add     esp, 48h
0x510E5D: retn
0x9B6F70: lea     ecx, [ebp-38h]; this
0x9B6F73: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9B6F78: lea     ecx, [ebp-40h]
0x9B6F7B: jmp     sub_68C9B0
0x9B6F80: mov     eax, [ebp-44h]
0x9B6F83: push    eax
0x9B6F84: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B6F89: pop     ecx
0x9B6F8A: retn
0x9B6F8B: mov     edx, [esp+arg_4]
0x9B6F8F: lea     eax, [edx-40h]
0x9B6F92: mov     ecx, [edx-44h]
0x9B6F95: xor     ecx, eax
0x9B6F97: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6F9C: mov     eax, offset stru_AE1C70
0x9B6FA1: jmp     ___CxxFrameHandler3
