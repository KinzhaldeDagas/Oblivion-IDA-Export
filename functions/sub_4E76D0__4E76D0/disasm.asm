0x4E76D0: push    0FFFFFFFFh; Verified debug-render root setter. Updates g_PathGridDebugRenderingEnabled. Enabling creates a shared NiNode, attaches DebugRender_GetOrCreateVertexColorProperty, and adds the root to TES/ObjectLODRoot; disabling removes the root, clears its child objects, releases it, and nulls g_PathGridDebugRenderRoot. Called by TESPathGrid_ToggleDebugRendering before per-cell render rebuild/clear.
0x4E76D2: push    offset ExtraDataList_SetReferencePointer_SEH
0x4E76D7: mov     eax, large fs:0
0x4E76DD: push    eax
0x4E76DE: push    esi
0x4E76DF: push    edi
0x4E76E0: mov     eax, ds:0B30AACh
0x4E76E5: xor     eax, esp
0x4E76E7: push    eax
0x4E76E8: lea     eax, [esp+18h+var_C]
0x4E76EC: mov     large fs:0, eax
0x4E76F2: mov     al, [esp+18h+enabled]
0x4E76F6: cmp     ds:0B35F84h, al
0x4E76FC: jz      loc_4E7809
0x4E7702: test    al, al
0x4E7704: mov     ds:0B35F84h, al
0x4E7709: jz      short loc_4E7787
0x4E770B: push    0DCh ; 'Ü'; Size
0x4E7710: call    FormHeapAlloc
0x4E7715: add     esp, 4
0x4E7718: mov     dword ptr [esp+18h+enabled], eax
0x4E771C: test    eax, eax
0x4E771E: mov     [esp+18h+var_4], 0
0x4E7726: jz      short loc_4E7733
0x4E7728: push    0
0x4E772A: mov     ecx, eax; this
0x4E772C: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4E7731: jmp     short loc_4E7735
0x4E7733: xor     eax, eax
0x4E7735: push    eax; a2
0x4E7736: mov     ecx, offset g_PathGridDebugRenderRoot; this
0x4E773B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4E7743: call    NiSmartPointer_Set??
0x4E7748: mov     esi, ds:0B35F88h
0x4E774E: call    DebugRender_GetOrCreateVertexColorProperty; Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
0x4E7753: push    eax; a2
0x4E7754: mov     ecx, esi; this
0x4E7756: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x4E775B: mov     eax, ds:0B333A0h
0x4E7760: mov     ecx, [eax+0Ch]
0x4E7763: mov     edx, [ecx]
0x4E7765: mov     eax, ds:0B35F88h
0x4E776A: mov     edx, [edx+84h]
0x4E7770: push    1
0x4E7772: push    eax
0x4E7773: call    edx
0x4E7775: mov     ecx, dword ptr [esp+18h+var_C]
0x4E7779: mov     large fs:0, ecx
0x4E7780: pop     ecx
0x4E7781: pop     edi
0x4E7782: pop     esi
0x4E7783: add     esp, 0Ch
0x4E7786: retn
0x4E7787: mov     eax, ds:0B333A0h
0x4E778C: mov     ecx, [eax+0Ch]
0x4E778F: mov     eax, ds:0B35F88h
0x4E7794: mov     edx, [ecx]
0x4E7796: mov     edx, [edx+88h]
0x4E779C: push    eax
0x4E779D: lea     eax, [esp+1Ch+enabled]
0x4E77A1: push    eax
0x4E77A2: call    edx
0x4E77A4: mov     eax, dword ptr [esp+18h+enabled]
0x4E77A8: test    eax, eax
0x4E77AA: mov     edi, ds:0A2807Ch
0x4E77B0: jz      short loc_4E77CC
0x4E77B2: mov     esi, eax
0x4E77B4: add     eax, 4
0x4E77B7: push    eax; lpAddend
0x4E77B8: call    edi ; InterlockedDecrement
0x4E77BA: test    eax, eax
0x4E77BC: jnz     short loc_4E77CC
0x4E77BE: test    esi, esi
0x4E77C0: jz      short loc_4E77CC
0x4E77C2: mov     eax, [esi]
0x4E77C4: mov     edx, [eax]
0x4E77C6: push    1
0x4E77C8: mov     ecx, esi
0x4E77CA: call    edx
0x4E77CC: mov     ecx, ds:0B35F88h
0x4E77D2: add     ecx, 0ACh ; '¬'; this
0x4E77D8: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x4E77DD: mov     esi, ds:0B35F88h
0x4E77E3: test    esi, esi
0x4E77E5: jz      short loc_4E7809
0x4E77E7: lea     eax, [esi+4]
0x4E77EA: push    eax; lpAddend
0x4E77EB: call    edi ; InterlockedDecrement
0x4E77ED: test    eax, eax
0x4E77EF: jnz     short loc_4E77FF
0x4E77F1: test    esi, esi
0x4E77F3: jz      short loc_4E77FF
0x4E77F5: mov     edx, [esi]
0x4E77F7: mov     eax, [edx]
0x4E77F9: push    1
0x4E77FB: mov     ecx, esi
0x4E77FD: call    eax
0x4E77FF: mov     dword ptr ds:0B35F88h, 0
0x4E7809: mov     ecx, dword ptr [esp+18h+var_C]
0x4E780D: mov     large fs:0, ecx
0x4E7814: pop     ecx
0x4E7815: pop     edi
0x4E7816: pop     esi
0x4E7817: add     esp, 0Ch
0x4E781A: retn
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
