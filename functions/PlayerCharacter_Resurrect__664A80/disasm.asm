0x664A80: push    0FFFFFFFFh
0x664A82: push    offset SEH_664A80
0x664A87: mov     eax, large fs:0
0x664A8D: push    eax
0x664A8E: push    ecx
0x664A8F: push    esi
0x664A90: push    edi; int
0x664A91: mov     eax, ds:0B30AACh
0x664A96: xor     eax, esp
0x664A98: push    eax; int
0x664A99: lea     eax, [esp+1Ch+var_C]
0x664A9D: mov     large fs:0, eax
0x664AA3: mov     esi, ecx
0x664AA5: fldz
0x664AA7: push    0Ah; actorValue
0x664AA9: fst     dword ptr [esi+44Ch]
0x664AAF: fst     dword ptr [esi+444h]
0x664AB5: fstp    dword ptr [esi+448h]
0x664ABB: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x664AC0: push    8; actorValue
0x664AC2: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x664AC7: push    9; actorValue
0x664AC9: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x664ACE: mov     ecx, [esi+58h]
0x664AD1: add     esp, 0Ch
0x664AD4: test    ecx, ecx
0x664AD6: jz      short loc_664AE0
0x664AD8: mov     eax, [ecx]
0x664ADA: mov     edx, [eax]
0x664ADC: push    1
0x664ADE: call    edx
0x664AE0: push    90h; Size
0x664AE5: call    FormHeapAlloc
0x664AEA: add     esp, 4
0x664AED: mov     [esp+1Ch+var_10], eax
0x664AF1: test    eax, eax
0x664AF3: mov     [esp+1Ch+var_4], 0
0x664AFB: jz      short loc_664B06
0x664AFD: mov     ecx, eax; this
0x664AFF: call    ??0LowProcess@@QAE@XZ; LowProcess constructor: initializes editorPackage/editorPackProcedure and follow/pathing state, but no currentPackage field used by runtime package assignment.
0x664B04: jmp     short loc_664B08
0x664B06: xor     eax, eax
0x664B08: push    2ECh; Size
0x664B0D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x664B15: mov     [esi+58h], eax
0x664B18: call    FormHeapAlloc
0x664B1D: add     esp, 4
0x664B20: mov     [esp+1Ch+var_10], eax
0x664B24: test    eax, eax
0x664B26: mov     [esp+1Ch+var_4], 1
0x664B2E: jz      short loc_664B3B
0x664B30: mov     ecx, eax; this
0x664B32: call    ??0HighProcess@@QAE@XZ; HighProcess constructor: derives from MiddleHighProcess, then installs HighProcess vtable and initializes movementFlags at +0x1FC to 0. Confirms movement flag storage is HighProcess-only.
0x664B37: mov     edi, eax
0x664B39: jmp     short loc_664B3D
0x664B3B: xor     edi, edi
0x664B3D: mov     ecx, [esi+58h]
0x664B40: mov     eax, [edi]
0x664B42: mov     edx, [eax+4]
0x664B45: push    ecx
0x664B46: mov     ecx, edi
0x664B48: mov     [esp+20h+var_4], 0FFFFFFFFh
0x664B50: call    edx
0x664B52: mov     ecx, esi; this
0x664B54: call    Actor__GetProcessLevel; Return Actor/MobileObject process level through process vslot +0x08; if MobileObject+0x58 is null, return -1. ActorProcessManager_AddMobileObject calls this directly before insertion.
0x664B59: push    eax
0x664B5A: push    esi
0x664B5B: mov     ecx, (offset qword_B3BB2C+1D4h)
0x664B60: call    sub_674550
0x664B65: mov     ecx, [esi+58h]
0x664B68: test    ecx, ecx
0x664B6A: jz      short loc_664B74
0x664B6C: mov     eax, [ecx]
0x664B6E: mov     edx, [eax]
0x664B70: push    1
0x664B72: call    edx
0x664B74: mov     ecx, esi; this
0x664B76: mov     [esi+58h], edi
0x664B79: call    Actor__GetProcessLevel; Return Actor/MobileObject process level through process vslot +0x08; if MobileObject+0x58 is null, return -1. ActorProcessManager_AddMobileObject calls this directly before insertion.
0x664B7E: push    eax
0x664B7F: push    esi
0x664B80: mov     ecx, (offset qword_B3BB2C+1D4h)
0x664B85: call    sub_674550
0x664B8A: mov     eax, [esi]
0x664B8C: mov     edx, [eax+148h]
0x664B92: mov     ecx, esi
0x664B94: call    edx
0x664B96: mov     ecx, esi; this
0x664B98: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x664B9D: test    eax, eax
0x664B9F: jz      short loc_664C02
0x664BA1: lea     ecx, [esp+1Ch+var_10]
0x664BA5: push    ecx
0x664BA6: mov     ecx, eax
0x664BA8: call    bhkCharacterProxy_GetCollisionFilterInfo; Reads collision filter info from proxy metadata: proxy+0x364 -> +8 -> +0x14 -> +0x1C. Used to preserve actor identity in raycast filter high 16 bits.
0x664BAD: mov     edi, [esp+1Ch+var_10]
0x664BB1: push    8; Size
0x664BB3: shr     edi, 10h
0x664BB6: call    FormHeapAlloc
0x664BBB: add     esp, 4
0x664BBE: mov     [esp+1Ch+var_10], eax
0x664BC2: test    eax, eax
0x664BC4: mov     [esp+1Ch+var_4], 2
0x664BCC: jz      short loc_664BF0
0x664BCE: fld     dword ptr ds:0A58E1Ch
0x664BD4: push    edi; int
0x664BD5: push    ecx
0x664BD6: mov     ecx, eax
0x664BD8: fstp    [esp+24h+var_24]; float
0x664BDB: call    PlayerCameraCollisionPhantomPair_Init
0x664BE0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x664BE8: mov     [esi+1F0h], eax
0x664BEE: jmp     short loc_664C0C
0x664BF0: xor     eax, eax
0x664BF2: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x664BFA: mov     [esi+1F0h], eax
0x664C00: jmp     short loc_664C0C
0x664C02: mov     dword ptr [esi+1F0h], 0
0x664C0C: push    0; useAnimBoh
0x664C0E: push    0; a2
0x664C10: push    0; a1
0x664C12: mov     ecx, esi; this
0x664C14: call    Actor_Resurrect
0x664C19: mov     ecx, esi; int
0x664C1B: call    Actor_SetupAnimationData; CustomAnimSupport decode: actor animation setup creates ActorAnimData, loads default animation data, then for living NPC/CREA actors calls 0x476080 to load actor-base KFFZ entries from <model-dir>\SpecialAnims.
0x664C20: mov     ecx, dword ptr [esp+1Ch+var_C]
0x664C24: mov     large fs:0, ecx
0x664C2B: pop     ecx
0x664C2C: pop     edi
0x664C2D: pop     esi
0x664C2E: add     esp, 10h
0x664C31: retn    0Ch
0x9C3DE0: mov     eax, [ebp-10h]
0x9C3DE3: push    eax
0x9C3DE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3DE9: pop     ecx
0x9C3DEA: retn
0x9C3DEB: mov     eax, [ebp-10h]
0x9C3DEE: push    eax
0x9C3DEF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3DF4: pop     ecx
0x9C3DF5: retn
0x9C3DF6: mov     eax, [ebp-10h]
0x9C3DF9: push    eax
0x9C3DFA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3DFF: pop     ecx
0x9C3E00: retn
0x9C3E01: mov     edx, [esp+a9]
0x9C3E05: lea     eax, [edx-0Ch]
0x9C3E08: mov     ecx, [edx-10h]
0x9C3E0B: xor     ecx, eax
0x9C3E0D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3E12: mov     eax, offset stru_AEC900
0x9C3E17: jmp     ___CxxFrameHandler3
