0x612240: push    0FFFFFFFFh
0x612242: push    offset SEH_612240
0x612247: mov     eax, large fs:0
0x61224D: push    eax
0x61224E: sub     esp, 0Ch
0x612251: push    ebx
0x612252: push    ebp
0x612253: push    esi
0x612254: push    edi
0x612255: mov     eax, ds:0B30AACh
0x61225A: xor     eax, esp
0x61225C: push    eax
0x61225D: lea     eax, [esp+2Ch+var_C]
0x612261: mov     large fs:0, eax
0x612267: mov     esi, ecx
0x612269: xor     ebx, ebx
0x61226B: push    ebx; casterFilterOrNull
0x61226C: lea     edi, [esi+68h]
0x61226F: push    58415742h; effectCode
0x612274: mov     ecx, edi; this
0x612276: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x61227B: push    ebx; casterFilterOrNull
0x61227C: push    4F425742h; effectCode
0x612281: mov     ecx, edi; this
0x612283: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x612288: push    ebx; casterFilterOrNull
0x612289: push    41445742h; effectCode
0x61228E: mov     ecx, edi; this
0x612290: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x612295: push    ebx; casterFilterOrNull
0x612296: push    414D5742h; effectCode
0x61229B: mov     ecx, edi; this
0x61229D: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x6122A2: push    ebx; casterFilterOrNull
0x6122A3: push    57535742h; effectCode
0x6122A8: mov     ecx, edi; this
0x6122AA: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x6122AF: mov     eax, [esi]
0x6122B1: mov     ebp, [esp+2Ch+arg_0]
0x6122B5: mov     edx, [eax+384h]
0x6122BB: push    ebp
0x6122BC: mov     ecx, esi
0x6122BE: call    edx
0x6122C0: cmp     [esi+58h], ebx
0x6122C3: jz      short loc_6122DF
0x6122C5: mov     ecx, [esi+58h]
0x6122C8: mov     eax, [ecx]
0x6122CA: mov     edx, [eax+2D0h]
0x6122D0: call    edx
0x6122D2: cmp     eax, 6
0x6122D5: jnz     short loc_6122DF
0x6122D7: push    ebx; shouldBlock
0x6122D8: mov     ecx, esi; this
0x6122DA: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x6122DF: push    ebx
0x6122E0: mov     ecx, esi
0x6122E2: call    sub_5E6D70
0x6122E7: mov     eax, [ebp+0]
0x6122EA: mov     edx, [eax+38Ch]
0x6122F0: push    esi
0x6122F1: mov     ecx, ebp
0x6122F3: call    edx
0x6122F5: push    3Ch ; '<'; Size
0x6122F7: call    FormHeapAlloc
0x6122FC: add     esp, 4
0x6122FF: mov     [esp+2Ch+arg_0], eax
0x612303: cmp     eax, ebx
0x612305: mov     [esp+2Ch+var_4], ebx
0x612309: jz      short loc_612316
0x61230B: mov     ecx, eax; this
0x61230D: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x612312: mov     edi, eax
0x612314: jmp     short loc_612318
0x612316: xor     edi, edi
0x612318: push    16h
0x61231A: mov     ecx, edi
0x61231C: mov     [esp+30h+var_4], 0FFFFFFFFh
0x612324: call    TESPackage_SetType?
0x612329: mov     eax, [edi+1Ch]
0x61232C: and     eax, 0FFFFFFFDh
0x61232F: or      eax, 4
0x612332: push    0Ch; Size
0x612334: mov     [edi+1Ch], eax
0x612337: call    FormHeapAlloc
0x61233C: add     esp, 4
0x61233F: mov     [esp+2Ch+arg_0], eax
0x612343: cmp     eax, ebx
0x612345: mov     [esp+2Ch+var_4], 1
0x61234D: jz      short loc_612358
0x61234F: mov     ecx, eax
0x612351: call    TESPackage_LocationData_constr
0x612356: mov     ebx, eax
0x612358: push    0
0x61235A: mov     ecx, ebx
0x61235C: mov     [esp+30h+var_4], 0FFFFFFFFh
0x612364: call    TESPackage_LocationData_SetType
0x612369: push    ebp
0x61236A: mov     ecx, ebx
0x61236C: call    TESPackage_LocationData_SetReference
0x612371: push    ebx
0x612372: mov     ecx, edi
0x612374: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x612379: test    ebx, ebx
0x61237B: jz      short loc_61238D
0x61237D: mov     ecx, ebx
0x61237F: call    TESPackage_LocationData_destr
0x612384: push    ebx
0x612385: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x61238A: add     esp, 4
0x61238D: push    0Ch; Size
0x61238F: call    FormHeapAlloc
0x612394: add     esp, 4
0x612397: mov     [esp+2Ch+arg_0], eax
0x61239B: test    eax, eax
0x61239D: mov     [esp+2Ch+var_4], 2
0x6123A5: jz      short loc_6123B2
0x6123A7: mov     ecx, eax
0x6123A9: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x6123AE: mov     ebx, eax
0x6123B0: jmp     short loc_6123B4
0x6123B2: xor     ebx, ebx
0x6123B4: push    ebx
0x6123B5: mov     ecx, edi
0x6123B7: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6123BF: call    TESPackage_SetTarget; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x6123C4: test    ebx, ebx
0x6123C6: jz      short loc_6123D8
0x6123C8: mov     ecx, ebx; this
0x6123CA: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6123CF: push    ebx
0x6123D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6123D5: add     esp, 4
0x6123D8: mov     ecx, edi
0x6123DA: call    sub_5672A0; 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
0x6123DF: mov     ecx, [edi+28h]
0x6123E2: push    0
0x6123E4: call    TESPackage_TargetData_SetType; 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
0x6123E9: mov     ecx, [edi+28h]
0x6123EC: push    ebp
0x6123ED: call    TeSPackage_TargetData_SetTargetREFR; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x6123F2: mov     ecx, [esi+58h]
0x6123F5: mov     edx, [ecx]
0x6123F7: mov     eax, [edx+8]
0x6123FA: call    eax
0x6123FC: cmp     eax, 2
0x6123FF: push    1; a4
0x612401: mov     ecx, esi; this
0x612403: jge     short loc_612409
0x612405: push    1
0x612407: jmp     short loc_61240B
0x612409: push    0; a3
0x61240B: push    edi; a2
0x61240C: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x612411: mov     ecx, [esi+58h]
0x612414: mov     edx, [ecx]
0x612416: mov     eax, [edx+380h]
0x61241C: call    eax
0x61241E: mov     edi, eax
0x612420: test    edi, edi
0x612422: jz      short loc_612440
0x612424: lea     ecx, [esp+2Ch+var_18]
0x612428: push    ecx
0x612429: mov     ecx, ebp
0x61242B: call    sub_625290
0x612430: mov     edx, [eax]
0x612432: mov     [edi], edx
0x612434: mov     ecx, [eax+4]
0x612437: mov     [edi+4], ecx
0x61243A: mov     edx, [eax+8]
0x61243D: mov     [edi+8], edx
0x612440: mov     eax, [esi]
0x612442: mov     edx, [eax+0ECh]
0x612448: mov     ecx, esi
0x61244A: call    edx
0x61244C: push    ecx
0x61244D: mov     ecx, ebp
0x61244F: fstp    [esp+30h+var_30]; float
0x612452: call    sub_4DB520
0x612457: push    1; useFactionOwnership
0x612459: push    esi; actorReference
0x61245A: mov     ecx, ebp; reference
0x61245C: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x612461: test    al, al
0x612463: jnz     short loc_61247D
0x612465: mov     ecx, ebp; reference
0x612467: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x61246C: test    eax, eax
0x61246E: jz      short loc_61247D
0x612470: mov     eax, [esi]
0x612472: mov     edx, [eax+24Ch]
0x612478: push    ebp
0x612479: mov     ecx, esi
0x61247B: call    edx
0x61247D: cmp     esi, ds:0B333C4h
0x612483: jz      short loc_6124ED
0x612485: mov     eax, [esi]
0x612487: mov     edx, [eax+18Ch]
0x61248D: mov     ecx, esi
0x61248F: call    edx
0x612491: cmp     eax, 3
0x612494: jnz     short loc_6124ED
0x612496: mov     ecx, ebp
0x612498: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x61249D: cmp     eax, 0Bh
0x6124A0: jnz     short loc_6124DD
0x6124A2: lea     eax, [esp+2Ch+arg_0]
0x6124A6: push    eax
0x6124A7: mov     ecx, ebp
0x6124A9: call    MobileObject_GetCollisionFilterInfo; Returns actor/proxy collision filter identity by calling 0x57E270 on MobileObject_GetCharProxy(this). Callers keep high 16 bits and OR in the chosen collision layer.
0x6124AE: mov     edx, [esi]
0x6124B0: movzx   edi, word ptr [eax+2]
0x6124B4: mov     eax, [edx+154h]
0x6124BA: mov     ecx, esi
0x6124BC: call    eax
0x6124BE: mov     ecx, esi; this
0x6124C0: mov     ebx, eax
0x6124C2: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x6124C7: push    edi
0x6124C8: mov     ecx, eax
0x6124CA: call    sub_5EA350
0x6124CF: push    0
0x6124D1: push    1
0x6124D3: push    edi
0x6124D4: push    ebx
0x6124D5: call    sub_88D0E0
0x6124DA: add     esp, 10h
0x6124DD: mov     ecx, [esi+58h]
0x6124E0: mov     edx, [ecx]
0x6124E2: mov     eax, [edx+188h]
0x6124E8: push    1
0x6124EA: push    esi
0x6124EB: call    eax
0x6124ED: mov     ecx, [esp+2Ch+var_C]
0x6124F1: mov     large fs:0, ecx
0x6124F8: pop     ecx
0x6124F9: pop     edi
0x6124FA: pop     esi
0x6124FB: pop     ebp
0x6124FC: pop     ebx
0x6124FD: add     esp, 18h
0x612500: retn    4
0x9C32D0: mov     eax, [ebp+4]
0x9C32D3: push    eax
0x9C32D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C32D9: pop     ecx
0x9C32DA: retn
0x9C32DB: mov     eax, [ebp+4]
0x9C32DE: push    eax
0x9C32DF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C32E4: pop     ecx
0x9C32E5: retn
0x9C32E6: mov     eax, [ebp+4]
0x9C32E9: push    eax
0x9C32EA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C32EF: pop     ecx
0x9C32F0: retn
0x9C32F1: mov     edx, [esp+arg_4]
0x9C32F5: lea     eax, [edx-1Ch]
0x9C32F8: mov     ecx, [edx-20h]
0x9C32FB: xor     ecx, eax
0x9C32FD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3302: mov     eax, offset stru_AEBF14
0x9C3307: jmp     ___CxxFrameHandler3
