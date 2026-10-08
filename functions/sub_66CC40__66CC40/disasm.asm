0x66CC40: push    0FFFFFFFFh
0x66CC42: push    offset SEH_5F9EB0
0x66CC47: mov     eax, large fs:0
0x66CC4D: push    eax
0x66CC4E: push    ecx
0x66CC4F: push    ebx
0x66CC50: push    ebp
0x66CC51: push    esi
0x66CC52: push    edi
0x66CC53: mov     eax, ds:0B30AACh
0x66CC58: xor     eax, esp
0x66CC5A: push    eax
0x66CC5B: lea     eax, [esp+24h+var_C]
0x66CC5F: mov     large fs:0, eax
0x66CC65: mov     esi, ecx
0x66CC67: mov     eax, [esi]
0x66CC69: mov     edx, [eax+1BCh]
0x66CC6F: add     dword ptr [esi+6B8h], 1
0x66CC76: xor     ebp, ebp
0x66CC78: push    ebp
0x66CC79: mov     byte ptr [esi+71Ch], 1
0x66CC80: call    edx
0x66CC82: mov     byte ptr [esi+589h], 1
0x66CC89: fld     dword ptr ds:0B3BB24h
0x66CC8F: fld     dword ptr ds:0B36B78h
0x66CC95: fcom    st(1)
0x66CC97: fnstsw  ax
0x66CC99: fstp    st(1)
0x66CC9B: test    ah, 41h
0x66CC9E: jnz     short loc_66CCA8
0x66CCA0: fstp    dword ptr ds:0B3BB24h
0x66CCA6: jmp     short loc_66CCAA
0x66CCA8: fstp    st
0x66CCAA: cmp     byte ptr [esi+588h], 0
0x66CCB1: jnz     short loc_66CCC2
0x66CCB3: push    ebp; a1
0x66CCB4: mov     ecx, esi; this
0x66CCB6: mov     byte ptr [esi+58Ah], 1
0x66CCBD: call    TogglePOV
0x66CCC2: mov     ecx, [esi+58h]
0x66CCC5: mov     eax, [ecx]
0x66CCC7: mov     edx, [eax+2D0h]
0x66CCCD: call    edx
0x66CCCF: cmp     eax, 6
0x66CCD2: jnz     short loc_66CCDC
0x66CCD4: push    ebp; shouldBlock
0x66CCD5: mov     ecx, esi; this
0x66CCD7: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x66CCDC: mov     ecx, [esi+58h]
0x66CCDF: mov     eax, [ecx]
0x66CCE1: mov     edx, [eax+178h]
0x66CCE7: push    ebp
0x66CCE8: call    edx
0x66CCEA: mov     ecx, [esi+58h]
0x66CCED: mov     eax, [ecx]
0x66CCEF: mov     edx, [eax+49Ch]
0x66CCF5: call    edx
0x66CCF7: mov     ecx, esi; this
0x66CCF9: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x66CCFE: test    eax, eax
0x66CD00: jz      short loc_66CD20
0x66CD02: mov     ecx, esi; this
0x66CD04: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x66CD09: mov     ecx, eax; this
0x66CD0B: call    TESPackage__IsTemporaryOverrideType; Classifies the temporary/internal override package types that callers treat as superseding an underlying scheduled package. True for Combat, CombatLow, Activate, Alarm, Flee, Trespass, Dialogue, Spectator, ReactToDead, Mount/Dismount Horse, Do Nothing, Vampire Feed, Surface, Clear Mount Position, and Movement Blocked. Ambient social scans reject actors whose current package is in this set.
0x66CD10: test    al, al
0x66CD12: jz      short loc_66CD20
0x66CD14: mov     eax, [esi]
0x66CD16: mov     edx, [eax+30Ch]
0x66CD1C: mov     ecx, esi
0x66CD1E: call    edx
0x66CD20: push    3Ch ; '<'; Size
0x66CD22: call    FormHeapAlloc
0x66CD27: add     esp, 4
0x66CD2A: mov     [esp+24h+var_10], eax
0x66CD2E: cmp     eax, ebp
0x66CD30: mov     [esp+24h+var_4], ebp
0x66CD34: jz      short loc_66CD41
0x66CD36: mov     ecx, eax; this
0x66CD38: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x66CD3D: mov     edi, eax
0x66CD3F: jmp     short loc_66CD43
0x66CD41: xor     edi, edi
0x66CD43: or      ebx, 0FFFFFFFFh
0x66CD46: push    1Bh
0x66CD48: mov     ecx, edi
0x66CD4A: mov     [esp+28h+var_4], ebx
0x66CD4E: call    TESPackage_SetType?
0x66CD53: or      dword ptr [edi+1Ch], 6
0x66CD57: push    0Ch; Size
0x66CD59: call    FormHeapAlloc
0x66CD5E: add     esp, 4
0x66CD61: mov     [esp+24h+var_10], eax
0x66CD65: cmp     eax, ebp
0x66CD67: mov     [esp+24h+var_4], 1
0x66CD6F: jz      short loc_66CD7A
0x66CD71: mov     ecx, eax
0x66CD73: call    TESPackage_LocationData_constr
0x66CD78: mov     ebp, eax
0x66CD7A: push    0
0x66CD7C: mov     ecx, ebp
0x66CD7E: mov     [esp+28h+var_4], ebx
0x66CD82: call    TESPackage_LocationData_SetType
0x66CD87: push    esi
0x66CD88: mov     ecx, ebp
0x66CD8A: call    TESPackage_LocationData_SetReference
0x66CD8F: push    ebp
0x66CD90: mov     ecx, edi
0x66CD92: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x66CD97: test    ebp, ebp
0x66CD99: jz      short loc_66CDAB
0x66CD9B: mov     ecx, ebp
0x66CD9D: call    TESPackage_LocationData_destr
0x66CDA2: push    ebp
0x66CDA3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x66CDA8: add     esp, 4
0x66CDAB: push    0Ch; Size
0x66CDAD: call    FormHeapAlloc
0x66CDB2: add     esp, 4
0x66CDB5: mov     [esp+24h+var_10], eax
0x66CDB9: test    eax, eax
0x66CDBB: mov     [esp+24h+var_4], 2
0x66CDC3: jz      short loc_66CDD0
0x66CDC5: mov     ecx, eax
0x66CDC7: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x66CDCC: mov     ebp, eax
0x66CDCE: jmp     short loc_66CDD2
0x66CDD0: xor     ebp, ebp
0x66CDD2: push    ebp
0x66CDD3: mov     ecx, edi
0x66CDD5: mov     [esp+28h+var_4], ebx
0x66CDD9: call    TESPackage_SetTarget; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x66CDDE: test    ebp, ebp
0x66CDE0: jz      short loc_66CDF2
0x66CDE2: mov     ecx, ebp; this
0x66CDE4: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x66CDE9: push    ebp
0x66CDEA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x66CDEF: add     esp, 4
0x66CDF2: mov     ecx, [edi+28h]
0x66CDF5: push    0
0x66CDF7: mov     dword ptr [edi+18h], 1Fh
0x66CDFE: call    TESPackage_TargetData_SetType; 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
0x66CE03: mov     ebx, [esp+24h+arg_0]
0x66CE07: mov     ecx, [edi+28h]
0x66CE0A: push    ebx
0x66CE0B: call    TeSPackage_TargetData_SetTargetREFR; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x66CE10: mov     ecx, [edi+28h]
0x66CE13: push    0
0x66CE15: call    TESAIForm_SetServiceFlags
0x66CE1A: mov     ecx, [esi+58h]
0x66CE1D: mov     eax, [ecx]
0x66CE1F: mov     edx, [eax+20h]
0x66CE22: call    edx
0x66CE24: mov     eax, [esi+58h]
0x66CE27: cmp     dword ptr [eax+8], 0
0x66CE2B: jz      short loc_66CE69
0x66CE2D: mov     ebp, eax
0x66CE2F: mov     edx, [ebp+0]
0x66CE32: mov     eax, [edx+390h]
0x66CE38: mov     ecx, ebp
0x66CE3A: call    eax
0x66CE3C: mov     edx, [ebp+0]
0x66CE3F: mov     ecx, ebp
0x66CE41: push    eax
0x66CE42: mov     eax, [edx+0C0h]
0x66CE48: call    eax
0x66CE4A: mov     edx, [ebp+0]
0x66CE4D: mov     ecx, ebp
0x66CE4F: push    eax
0x66CE50: mov     eax, [edx+0CCh]
0x66CE56: call    eax
0x66CE58: mov     ecx, [ebp+4]
0x66CE5B: mov     edx, [ebp+8]
0x66CE5E: push    eax
0x66CE5F: push    ecx
0x66CE60: push    edx
0x66CE61: lea     ecx, [esi+44h]
0x66CE64: call    sub_4268B0
0x66CE69: mov     edx, [esp+24h+arg_8]
0x66CE6D: mov     ecx, [esi+58h]
0x66CE70: mov     eax, [ecx]
0x66CE72: mov     eax, [eax+3E8h]
0x66CE78: push    edx
0x66CE79: mov     edx, [esp+28h+arg_C]
0x66CE7D: push    edx
0x66CE7E: mov     edx, [esp+2Ch+arg_4]
0x66CE82: push    edx
0x66CE83: call    eax
0x66CE85: push    1; a4
0x66CE87: push    0; a3
0x66CE89: push    edi; a2
0x66CE8A: mov     ecx, esi; this
0x66CE8C: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x66CE91: mov     ecx, ebx; this
0x66CE93: call    sub_5F8000
0x66CE98: mov     ecx, [esp+24h+var_C]
0x66CE9C: mov     large fs:0, ecx
0x66CEA3: pop     ecx
0x66CEA4: pop     edi
0x66CEA5: pop     esi
0x66CEA6: pop     ebp
0x66CEA7: pop     ebx
0x66CEA8: add     esp, 10h
0x66CEAB: retn    10h
0x9AD040: mov     eax, [ebp-10h]
0x9AD043: push    eax
0x9AD044: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD049: pop     ecx
0x9AD04A: retn
0x9AD04B: mov     eax, [ebp-10h]
0x9AD04E: push    eax
0x9AD04F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD054: pop     ecx
0x9AD055: retn
0x9AD056: mov     eax, [ebp-10h]
0x9AD059: push    eax
0x9AD05A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AD05F: pop     ecx
0x9AD060: retn
0x9AD061: mov     edx, [esp+arg_4]
0x9AD065: lea     eax, [edx-14h]
0x9AD068: mov     ecx, [edx-18h]
0x9AD06B: xor     ecx, eax
0x9AD06D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD072: mov     eax, offset stru_AD9C7C
0x9AD077: jmp     ___CxxFrameHandler3
