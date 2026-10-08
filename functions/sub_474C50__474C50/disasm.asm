0x474C50: push    0FFFFFFFFh; Initializes the 0x2C-byte AnimIdle runtime holder and starts its KF load. Observed layout: +0x00 phase (0 pending/unavailable, 1 ready, 2 active, 3 terminal), +0x04 completion/action mode, +0x08 KFModel, +0x0C requested slot/type, +0x10 played sequence, +0x24 TESIdleForm, +0x28 actor ref. Builds Meshes\\<TESIdleForm model path>, loads now or queues asynchronously, binds two actor-specific resources, and marks phase 1 when a KFModel is immediately available.
0x474C52: push    offset SEH_474C50
0x474C57: mov     eax, large fs:0
0x474C5D: push    eax
0x474C5E: sub     esp, 10h
0x474C61: push    ebx
0x474C62: push    ebp
0x474C63: push    esi
0x474C64: push    edi
0x474C65: mov     eax, ds:0B30AACh
0x474C6A: xor     eax, esp
0x474C6C: push    eax
0x474C6D: lea     eax, [esp+30h+var_C]
0x474C71: mov     large fs:0, eax
0x474C77: mov     esi, ecx
0x474C79: mov     [esp+30h+var_1C], esi
0x474C7D: xor     ebx, ebx
0x474C7F: mov     [esi+10h], ebx
0x474C82: push    offset NiPointerSlot_Release; a5
0x474C87: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x474C8C: push    2; size
0x474C8E: lea     ebp, [esi+1Ch]
0x474C91: push    4; a2
0x474C93: push    ebp; a1
0x474C94: mov     [esp+44h+var_4], ebx
0x474C98: mov     [esp+44h+var_18], ebp
0x474C9C: call    ArrayConstructor
0x474CA1: mov     edi, [esi+10h]
0x474CA4: cmp     edi, ebx
0x474CA6: mov     byte ptr [esp+30h+var_4], 1
0x474CAB: jz      short loc_474CCC
0x474CAD: lea     eax, [edi+4]
0x474CB0: push    eax; lpAddend
0x474CB1: call    dword ptr ds:0A2807Ch
0x474CB7: test    eax, eax
0x474CB9: jnz     short loc_474CC9
0x474CBB: cmp     edi, ebx
0x474CBD: jz      short loc_474CC9
0x474CBF: mov     edx, [edi]
0x474CC1: mov     eax, [edx]
0x474CC3: push    1
0x474CC5: mov     ecx, edi
0x474CC7: call    eax
0x474CC9: mov     [esi+10h], ebx
0x474CCC: mov     ecx, [esp+30h+arg_4]
0x474CD0: mov     edx, [esp+30h+arg_8]
0x474CD4: mov     eax, [esp+30h+arg_0]
0x474CD8: mov     [esi+0Ch], ecx
0x474CDB: mov     [esi+4], edx
0x474CDE: mov     [esi+24h], eax
0x474CE1: mov     [esi], ebx
0x474CE3: mov     ecx, [esp+30h+arg_0]
0x474CE7: push    ebx
0x474CE8: push    ecx
0x474CE9: mov     ecx, ds:0B33A98h
0x474CEF: call    sub_449040; CustomAnimSupport evidence: queued idle loader resource resolution helper used before Meshes\<idle-model-path> KF load.
0x474CF4: mov     [ebp-8], eax
0x474CF7: mov     edi, [ebp+0]
0x474CFA: test    edi, edi
0x474CFC: jz      short loc_474D21
0x474CFE: lea     edx, [edi+4]
0x474D01: push    edx; lpAddend
0x474D02: call    dword ptr ds:0A2807Ch
0x474D08: test    eax, eax
0x474D0A: jnz     short loc_474D1A
0x474D0C: test    edi, edi
0x474D0E: jz      short loc_474D1A
0x474D10: mov     eax, [edi]
0x474D12: mov     edx, [eax]
0x474D14: push    1
0x474D16: mov     ecx, edi
0x474D18: call    edx
0x474D1A: mov     dword ptr [ebp+0], 0
0x474D21: add     ebx, 1
0x474D24: add     ebp, 4
0x474D27: cmp     ebx, 2
0x474D2A: jl      short loc_474CE3
0x474D2C: mov     ebx, [esp+30h+actorRef]
0x474D30: xor     edi, edi
0x474D32: mov     [esi+28h], ebx
0x474D35: mov     [esp+30h+var_14], edi
0x474D39: mov     [esp+30h+var_10], di
0x474D3E: mov     [esp+30h+var_E], di
0x474D43: mov     ecx, [esp+30h+arg_0]
0x474D47: mov     eax, [ecx+18h]
0x474D4A: mov     edx, [eax+14h]
0x474D4D: add     ecx, 18h
0x474D50: mov     byte ptr [esp+30h+var_4], 2
0x474D55: call    edx
0x474D57: push    eax
0x474D58: push    offset aMeshes_0; "Meshes"
0x474D5D: lea     eax, [esp+38h+var_14]
0x474D61: push    offset aSS_2; "%s\\%s"
0x474D66: push    eax; int
0x474D67: call    BSStringT_Static_Format
0x474D6C: add     esp, 10h
0x474D6F: cmp     [esp+30h+arg_10], 0
0x474D74: jnz     short loc_474D8B
0x474D76: mov     ecx, [esp+30h+var_14]
0x474D7A: push    ebx
0x474D7B: push    edi
0x474D7C: push    esi
0x474D7D: push    ecx
0x474D7E: mov     ecx, ds:0B33A1Ch
0x474D84: call    ModelLoader_QueueKFLoad; Queues asynchronous KF model load through the model loader. Queued idle and actor animation setup paths use this for deferred KF availability.
0x474D89: jmp     short loc_474D9B
0x474D8B: mov     edx, [esp+30h+var_14]
0x474D8F: mov     ecx, ds:0B33A1Ch
0x474D95: push    edx
0x474D96: call    ModelLoader_LoadKFModelNow; Synchronous KF model load path. Queued idle loader and menu/power-attack setup use this when an immediate KFModel is required.
0x474D9B: cmp     eax, edi
0x474D9D: mov     [esi+8], eax
0x474DA0: jz      loc_474E62
0x474DA6: mov     esi, [esp+30h+var_18]
0x474DAA: mov     [esp+30h+arg_0], 2
0x474DB2: cmp     dword ptr [esi-8], 0
0x474DB6: jz      short loc_474E30
0x474DB8: test    ebx, ebx
0x474DBA: jz      short loc_474E30
0x474DBC: mov     eax, [esi-8]
0x474DBF: lea     ecx, [eax+18h]
0x474DC2: mov     eax, [ecx]
0x474DC4: mov     edx, [eax+14h]
0x474DC7: push    0; skeletonRoot
0x474DC9: push    ebx; actorRef
0x474DCA: push    0FFFFFFFFh; slot
0x474DCC: call    edx
0x474DCE: push    eax; modelPath
0x474DCF: call    Actor_LoadCloneAndAttachModel3D; Loads and clones a model for an actor equipment/add-on slot, binds actor-specific resources, applies the stock attachment transform, attaches through Prn metadata, and initializes render property/dynamic-effect state.
0x474DD4: mov     edi, [esi]
0x474DD6: mov     ebp, eax
0x474DD8: add     esp, 10h
0x474DDB: cmp     edi, ebp
0x474DDD: jz      short loc_474E0F
0x474DDF: test    edi, edi
0x474DE1: jz      short loc_474DFF
0x474DE3: lea     eax, [edi+4]
0x474DE6: push    eax; lpAddend
0x474DE7: call    dword ptr ds:0A2807Ch
0x474DED: test    eax, eax
0x474DEF: jnz     short loc_474DFF
0x474DF1: test    edi, edi
0x474DF3: jz      short loc_474DFF
0x474DF5: mov     edx, [edi]
0x474DF7: mov     eax, [edx]
0x474DF9: push    1
0x474DFB: mov     ecx, edi
0x474DFD: call    eax
0x474DFF: test    ebp, ebp
0x474E01: mov     [esi], ebp
0x474E03: jz      short loc_474E0F
0x474E05: add     ebp, 4
0x474E08: push    ebp; lpAddend
0x474E09: call    dword ptr ds:0A28078h
0x474E0F: mov     edx, [ebx]
0x474E11: mov     eax, [edx+164h]
0x474E17: mov     ecx, ebx
0x474E19: call    eax
0x474E1B: mov     eax, [eax+98h]
0x474E21: mov     eax, [eax+7Ch]
0x474E24: mov     ecx, [esi]
0x474E26: push    eax
0x474E27: push    ecx
0x474E28: call    sub_7165B0; CustomAnimSupport evidence: queued idle loader controller-manager data attach/bind helper.
0x474E2D: add     esp, 8
0x474E30: add     esi, 4
0x474E33: sub     [esp+30h+arg_0], 1
0x474E38: jnz     loc_474DB2
0x474E3E: cmp     [esp+30h+arg_10], 0
0x474E43: jnz     short loc_474E56
0x474E45: mov     ecx, [esp+30h+var_1C]
0x474E49: mov     eax, [ecx+8]
0x474E4C: add     eax, 0Ch
0x474E4F: push    eax; lpAddend
0x474E50: call    dword ptr ds:0A28078h
0x474E56: mov     edx, [esp+30h+var_1C]
0x474E5A: mov     dword ptr [edx], 1
0x474E60: mov     esi, edx
0x474E62: mov     eax, [esp+30h+var_14]
0x474E66: push    eax
0x474E67: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x474E6C: add     esp, 4
0x474E6F: mov     eax, esi
0x474E71: mov     ecx, dword ptr [esp+30h+var_C]
0x474E75: mov     large fs:0, ecx
0x474E7C: pop     ecx
0x474E7D: pop     edi
0x474E7E: pop     esi
0x474E7F: pop     ebp
0x474E80: pop     ebx
0x474E81: add     esp, 1Ch
0x474E84: retn    14h
0x9AEE00: mov     ecx, [ebp-1Ch]
0x9AEE03: add     ecx, 10h; slot
0x9AEE06: jmp     NiPointerSlot_Release
0x9AEE0B: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9AEE10: push    2; int
0x9AEE12: push    4; unsigned int
0x9AEE14: mov     eax, [ebp-1Ch]
0x9AEE17: add     eax, 1Ch
0x9AEE1A: push    eax; void *
0x9AEE1B: call    $LN21
0x9AEE20: retn
0x9AEE21: lea     ecx, [ebp-14h]; void *
0x9AEE24: jmp     BSStringT_Clear
0x9AEE29: mov     edx, [esp+arg_4]
0x9AEE2D: lea     eax, [edx-20h]
0x9AEE30: mov     ecx, [edx-24h]
0x9AEE33: xor     ecx, eax
0x9AEE35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEE3A: mov     eax, offset stru_ADB4F0
0x9AEE3F: jmp     ___CxxFrameHandler3
