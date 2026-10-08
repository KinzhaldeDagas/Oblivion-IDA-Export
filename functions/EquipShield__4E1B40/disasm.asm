0x4E1B40: push    0FFFFFFFFh
0x4E1B42: push    offset SEH_5ACE20
0x4E1B47: mov     eax, large fs:0
0x4E1B4D: push    eax
0x4E1B4E: sub     esp, 8
0x4E1B51: push    ebx
0x4E1B52: push    ebp
0x4E1B53: push    esi
0x4E1B54: push    edi
0x4E1B55: mov     eax, ds:0B30AACh
0x4E1B5A: xor     eax, esp
0x4E1B5C: push    eax
0x4E1B5D: lea     eax, [esp+28h+var_C]
0x4E1B61: mov     large fs:0, eax
0x4E1B67: mov     esi, ecx
0x4E1B69: mov     eax, [esi+3Ch]
0x4E1B6C: xor     ebp, ebp
0x4E1B6E: cmp     eax, ebp
0x4E1B70: jz      loc_4E1C4E
0x4E1B76: mov     eax, [esi]
0x4E1B78: mov     edx, [eax+168h]
0x4E1B7E: call    edx
0x4E1B80: mov     ecx, ds:0B333C4h
0x4E1B86: cmp     esi, ecx
0x4E1B88: mov     ebx, dword ptr [esp+28h+firstPerson]
0x4E1B8C: jnz     short loc_4E1BB4
0x4E1B8E: cmp     eax, ebp
0x4E1B90: jz      short loc_4E1BA0
0x4E1B92: push    ebx; int
0x4E1B93: mov     ecx, eax; int
0x4E1B95: call    sub_479F80
0x4E1B9A: mov     ecx, ds:0B333C4h; this
0x4E1BA0: mov     al, [ecx+588h]
0x4E1BA6: mov     [esp+28h+firstPerson], al
0x4E1BAA: mov     edx, dword ptr [esp+28h+firstPerson]
0x4E1BAE: push    edx; firstPerson
0x4E1BAF: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4E1BB4: cmp     eax, ebp
0x4E1BB6: jz      short loc_4E1BC2
0x4E1BB8: push    ebx; int
0x4E1BB9: mov     ecx, eax; int
0x4E1BBB: call    sub_479F80
0x4E1BC0: jmp     short loc_4E1C2A
0x4E1BC2: cmp     ebx, ebp
0x4E1BC4: jz      short loc_4E1C2A
0x4E1BC6: lea     ecx, [ebx+64h]
0x4E1BC9: cmp     ecx, ebp
0x4E1BCB: jz      short loc_4E1C2A
0x4E1BCD: push    ebp; skeletonRoot
0x4E1BCE: push    esi; actorRef
0x4E1BCF: push    0Dh; slot
0x4E1BD1: push    ebp
0x4E1BD2: call    TESBipedModelForm_GetModelPath
0x4E1BD7: push    eax; modelPath
0x4E1BD8: call    Actor_LoadCloneAndAttachModel3D; Loads and clones a model for an actor equipment/add-on slot, binds actor-specific resources, applies the stock attachment transform, attaches through Prn metadata, and initializes render property/dynamic-effect state.
0x4E1BDD: mov     edi, eax
0x4E1BDF: mov     [esp+38h+Src], ebp
0x4E1BE3: mov     [esp+38h+var_10], bp
0x4E1BE8: mov     [esp+38h+var_E], bp
0x4E1BED: mov     eax, [ebx+0Ch]
0x4E1BF0: push    eax
0x4E1BF1: mov     eax, ds:0B065BCh
0x4E1BF6: push    eax; ArgList
0x4E1BF7: lea     ecx, [esp+40h+Src]
0x4E1BFB: push    offset aS08x; "%s (%08X)"
0x4E1C00: push    ecx; int
0x4E1C01: mov     [esp+48h+var_4], ebp
0x4E1C05: call    BSStringT_Static_Format
0x4E1C0A: mov     ebx, [esp+48h+Src]
0x4E1C0E: add     esp, 20h
0x4E1C11: push    ebx; Src
0x4E1C12: mov     ecx, edi
0x4E1C14: call    NiObjectNET_SetName
0x4E1C19: push    ebx
0x4E1C1A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4E1C22: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4E1C27: add     esp, 4
0x4E1C2A: mov     edx, [esi]
0x4E1C2C: mov     eax, [edx+190h]
0x4E1C32: mov     ecx, esi
0x4E1C34: call    eax
0x4E1C36: test    al, al
0x4E1C38: jz      short loc_4E1C47
0x4E1C3A: mov     ecx, [esi+3Ch]
0x4E1C3D: push    ecx
0x4E1C3E: mov     ecx, esi
0x4E1C40: mov     ebp, esi
0x4E1C42: call    sub_5EA1A0
0x4E1C47: mov     ecx, ebp; a1
0x4E1C49: call    sub_5EE1B0
0x4E1C4E: mov     ecx, [esp+28h+var_C]
0x4E1C52: mov     large fs:0, ecx
0x4E1C59: pop     ecx
0x4E1C5A: pop     edi
0x4E1C5B: pop     esi
0x4E1C5C: pop     ebp
0x4E1C5D: pop     ebx
0x4E1C5E: add     esp, 14h
0x4E1C61: retn    4
0x9B5BD0: lea     ecx, [ebp-14h]; void *
0x9B5BD3: jmp     BSStringT_Clear
0x9B5BD8: mov     edx, [esp+arg_4]
0x9B5BDC: lea     eax, [edx-18h]
0x9B5BDF: mov     ecx, [edx-1Ch]
0x9B5BE2: xor     ecx, eax
0x9B5BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5BE9: mov     eax, offset stru_AE0BB4
0x9B5BEE: jmp     ___CxxFrameHandler3
