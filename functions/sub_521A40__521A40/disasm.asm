0x521A40: push    0FFFFFFFFh
0x521A42: push    offset SEH_787830
0x521A47: mov     eax, large fs:0
0x521A4D: push    eax
0x521A4E: push    ebx
0x521A4F: push    esi
0x521A50: push    edi
0x521A51: mov     eax, ds:0B30AACh
0x521A56: xor     eax, esp
0x521A58: push    eax
0x521A59: lea     eax, [esp+1Ch+var_C]
0x521A5D: mov     large fs:0, eax
0x521A63: mov     esi, ecx
0x521A65: mov     edi, [esp+1Ch+reference]
0x521A69: xor     eax, eax
0x521A6B: test    edi, edi
0x521A6D: jz      loc_521B0F
0x521A73: mov     eax, [edi]
0x521A75: mov     edx, [eax+168h]
0x521A7B: mov     ecx, edi
0x521A7D: call    edx
0x521A7F: push    0; arg1
0x521A81: push    edi; reference
0x521A82: mov     ecx, esi; this
0x521A84: mov     ebx, eax
0x521A86: call    TESBoundObject_Create3DImpl; Generic bound-object 3D implementation used by many form classes. Obtains/caches the model, clones its NiNode tree for the reference, applies scale, and resets the clone's local transform.
0x521A8B: mov     esi, eax
0x521A8D: push    offset aBip01; "Bip01"
0x521A92: push    esi; a1
0x521A93: call    NiObjectNET_LookupObjectByName
0x521A98: add     esp, 8
0x521A9B: test    ebx, ebx
0x521A9D: jz      short loc_521AAD
0x521A9F: test    eax, eax
0x521AA1: jz      short loc_521B0D
0x521AA3: push    esi; rootNode
0x521AA4: mov     ecx, ebx; this
0x521AA6: call    ActorSkinInfo_CacheNamedNodes; Caches ActorSkinInfo nodes by exact name. +0 is Bip01. Node indices 0..8 are Bip01 Head, Bip01 R Finger1, Bip01 L Finger1, Weapon, BackWeapon, SideWeapon, Quiver, Bip01 L ForearmTwist, Torch. Each indexed entry uses an 8-byte {flags,node} layout; node is at +8+index*8.
0x521AAB: jmp     short loc_521AF0
0x521AAD: test    eax, eax
0x521AAF: jz      short loc_521B0D
0x521AB1: push    154h; Size
0x521AB6: call    FormHeapAlloc
0x521ABB: add     esp, 4
0x521ABE: mov     [esp+1Ch+reference], eax
0x521AC2: test    eax, eax
0x521AC4: mov     [esp+1Ch+var_4], 0
0x521ACC: jz      short loc_521AD9
0x521ACE: push    esi; rootNode
0x521ACF: push    edi; owner
0x521AD0: mov     ecx, eax; this
0x521AD2: call    ActorSkinInfo_ctor; Constructs a 0x154-byte ActorSkinInfo: clears exactly 0x154 bytes, stores the owning Actor at byte offset +0x150, and optionally caches exact-name model nodes from rootNode.
0x521AD7: jmp     short loc_521ADB
0x521AD9: xor     eax, eax
0x521ADB: mov     edx, [edi]
0x521ADD: push    eax
0x521ADE: mov     eax, [edx+16Ch]
0x521AE4: mov     ecx, edi
0x521AE6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x521AEE: call    eax
0x521AF0: mov     ecx, esi; this
0x521AF2: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x521AF7: mov     ecx, esi
0x521AF9: call    NiNode_UpdateDynamicEffectState
0x521AFE: fldz
0x521B00: push    0; a3
0x521B02: push    ecx
0x521B03: mov     ecx, esi; this
0x521B05: fstp    [esp+24h+a2]; a2
0x521B08: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x521B0D: mov     eax, esi
0x521B0F: mov     ecx, dword ptr [esp+1Ch+var_C]
0x521B13: mov     large fs:0, ecx
0x521B1A: pop     ecx
0x521B1B: pop     edi
0x521B1C: pop     esi
0x521B1D: pop     ebx
0x521B1E: add     esp, 0Ch
0x521B21: retn    4
0x9C8290: mov     eax, [ebp+4]
0x9C8293: push    eax
0x9C8294: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C8299: pop     ecx
0x9C829A: retn
0x9C829B: mov     edx, [esp+arg_4]
0x9C829F: lea     eax, [edx-0Ch]
0x9C82A2: mov     ecx, [edx-10h]
0x9C82A5: xor     ecx, eax
0x9C82A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C82AC: mov     eax, offset stru_AF0554
0x9C82B1: jmp     ___CxxFrameHandler3
