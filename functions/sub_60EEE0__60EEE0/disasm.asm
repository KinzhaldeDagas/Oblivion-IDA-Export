0x60EEE0: push    0FFFFFFFFh; RadiantAI conversation-package boundary. Requires both actors at process level 0, builds the Oblivion Conversation first, then creates a shared dynamic DialoguePackage. Native callers must supply nonnull actors and successful allocations: the target null check occurs after dereference, and allocation failures are not safely handled.
0x60EEE2: push    offset SEH_60EEE0
0x60EEE7: mov     eax, large fs:0
0x60EEED: push    eax
0x60EEEE: sub     esp, 8
0x60EEF1: push    ebx
0x60EEF2: push    ebp
0x60EEF3: push    esi
0x60EEF4: push    edi
0x60EEF5: mov     eax, ds:0B30AACh
0x60EEFA: xor     eax, esp
0x60EEFC: push    eax
0x60EEFD: lea     eax, [esp+28h+var_C]
0x60EF01: mov     large fs:0, eax
0x60EF07: mov     esi, ecx
0x60EF09: call    Actor__GetProcessLevel; Return Actor/MobileObject process level through process vslot +0x08; if MobileObject+0x58 is null, return -1. ActorProcessManager_AddMobileObject calls this directly before insertion.
0x60EF0E: test    eax, eax
0x60EF10: jnz     loc_60F237
0x60EF16: mov     ebp, [esp+28h+target]
0x60EF1A: mov     ecx, ebp; this
0x60EF1C: call    Actor__GetProcessLevel; The target is dereferenced by Actor::GetProcessLevel before the later null check at 0x60EF3B. A null target is not safely rejected; scheduler callers always provide a candidate Actor.
0x60EF21: test    eax, eax
0x60EF23: jnz     loc_60F237
0x60EF29: mov     eax, [esi+58h]
0x60EF2C: mov     ebx, [eax+8]
0x60EF2F: xor     edi, edi
0x60EF31: cmp     ebp, edi
0x60EF33: mov     [esp+28h+var_10], ebx
0x60EF37: mov     [esp+28h+target], edi
0x60EF3B: jz      loc_60F237; Late null-target test. It cannot protect the preceding GetProcessLevel(target) dereference and documents only the native nonnull invariant.
0x60EF41: mov     eax, [ebp+0]
0x60EF44: mov     edx, [eax+18Ch]
0x60EF4A: mov     ecx, ebp
0x60EF4C: call    edx
0x60EF4E: test    eax, eax
0x60EF50: jz      short loc_60EF7A
0x60EF52: mov     eax, [ebp+0]
0x60EF55: mov     edx, [eax+18Ch]
0x60EF5B: mov     ecx, ebp
0x60EF5D: call    edx
0x60EF5F: cmp     eax, 4
0x60EF62: jz      short loc_60EF7A
0x60EF64: mov     eax, [ebp+0]
0x60EF67: mov     edx, [eax+18Ch]
0x60EF6D: mov     ecx, ebp
0x60EF6F: call    edx
0x60EF71: cmp     eax, 9
0x60EF74: jnz     loc_60F237; StartConversationPackage itself accepts target SitSleep states None (0), Sitting (4), or Sleeping (9), rejecting transitional SittingIn/Out and SleepingIn/Out states. The ambient schedulers prefilter Sleeping, so random NPC conversations only reach this call with None/Sitting targets.
0x60EF7A: cmp     ebp, ds:0B333C4h
0x60EF80: jz      short loc_60EFB7; When target is the player, no NPC Conversation chain is allocated and the FirstItem gate is skipped. Both ambient random-conversation scans reject the player earlier, so this branch belongs to direct/scripted dialogue initiation.
0x60EF82: push    10h; Size
0x60EF84: call    FormHeapAlloc; Allocate the 0x10-byte Conversation container for non-player dialogue. Allocation failure leaves targeta null; the later Conversation::FirstItem call dereferences it, so this is an unchecked OOM invariant rather than a clean false return.
0x60EF89: add     esp, 4
0x60EF8C: mov     [esp+28h+target], eax
0x60EF90: cmp     eax, edi
0x60EF92: mov     [esp+28h+var_4], edi
0x60EF96: jz      short loc_60EFA9
0x60EF98: mov     ecx, [esp+28h+startingTopic]
0x60EF9C: push    edi; unused
0x60EF9D: push    ecx; startingTopic
0x60EF9E: push    ebp; target
0x60EF9F: push    esi; speaker
0x60EFA0: mov     ecx, eax; this
0x60EFA2: call    Conversation__Conversation
0x60EFA7: jmp     short loc_60EFAB
0x60EFA9: xor     eax, eax
0x60EFAB: mov     [esp+28h+var_4], 0FFFFFFFFh
0x60EFB3: mov     [esp+28h+target], eax
0x60EFB7: mov     ecx, esi; this
0x60EFB9: call    Actor__StopDialoguePlayback; Side effects occur before validating that the generated NPC Conversation has an item: clears initiator interaction/current package state and removes invisibility.
0x60EFBE: mov     edx, [esi]
0x60EFC0: mov     eax, [edx+340h]
0x60EFC6: push    edi
0x60EFC7: mov     ecx, esi
0x60EFC9: call    eax
0x60EFCB: mov     ecx, [esi+58h]
0x60EFCE: mov     edx, [ecx]
0x60EFD0: mov     eax, [edx+178h]
0x60EFD6: push    edi
0x60EFD7: call    eax
0x60EFD9: mov     edx, [esi]
0x60EFDB: mov     eax, [edx+284h]
0x60EFE1: push    2Fh ; '/'
0x60EFE3: mov     ecx, esi
0x60EFE5: call    eax
0x60EFE7: test    eax, eax
0x60EFE9: jle     short loc_60EFF9
0x60EFEB: push    edi; casterFilterOrNull
0x60EFEC: push    49564E49h; effectCode
0x60EFF1: lea     ecx, [esi+68h]; this
0x60EFF4: call    MagicTarget_RemoveActiveEffectsByCode; Removes every nonterminated active effect whose effectCode matches. If casterFilterOrNull is nonnull, only effects from that caster are removed; null matches all casters. Native ABI is thiscall with two stack args and void return; prior ESI/ST0/userpurge inputs were decompiler artifacts.
0x60EFF9: cmp     ebp, ds:0B333C4h
0x60EFFF: jz      short loc_60F012
0x60F001: mov     ecx, [esp+28h+target]; this
0x60F005: call    Conversation__FirstItem; Empty but successfully allocated Conversation: return false after initiator playback/package/invisibility side effects and leak the container. A null allocation would crash inside FirstItem instead.
0x60F00A: test    al, al
0x60F00C: jz      loc_60F237
0x60F012: mov     ecx, [esi+58h]
0x60F015: cmp     [ecx+8], edi
0x60F018: jz      short loc_60F059
0x60F01A: mov     eax, [ecx]
0x60F01C: mov     edx, [eax+390h]
0x60F022: mov     edi, ecx
0x60F024: mov     ebx, ecx
0x60F026: call    edx
0x60F028: mov     ecx, edi
0x60F02A: push    eax
0x60F02B: mov     eax, [edi]
0x60F02D: mov     edx, [eax+0C0h]
0x60F033: call    edx
0x60F035: mov     ecx, ebx
0x60F037: push    eax
0x60F038: mov     eax, [ebx]
0x60F03A: mov     edx, [eax+0CCh]
0x60F040: call    edx
0x60F042: push    eax
0x60F043: mov     eax, ebx
0x60F045: mov     ecx, [eax+4]
0x60F048: mov     edx, [eax+8]
0x60F04B: push    ecx
0x60F04C: push    edx
0x60F04D: lea     ecx, [esi+44h]
0x60F050: call    sub_4268B0
0x60F055: mov     ebx, [esp+28h+var_10]
0x60F059: mov     ecx, [esi+58h]
0x60F05C: mov     eax, [ecx]
0x60F05E: mov     edx, [eax+49Ch]
0x60F064: call    edx
0x60F066: mov     ecx, [esi+58h]
0x60F069: mov     eax, [ecx]
0x60F06B: mov     edx, [eax+490h]
0x60F071: push    ebp
0x60F072: call    edx
0x60F074: mov     ecx, [ebp+58h]
0x60F077: mov     eax, [ecx]
0x60F079: mov     edx, [eax+49Ch]
0x60F07F: call    edx
0x60F081: mov     ecx, [ebp+58h]
0x60F084: mov     eax, [ecx]
0x60F086: mov     edx, [eax+490h]
0x60F08C: push    esi
0x60F08D: call    edx
0x60F08F: push    64h ; 'd'; Size
0x60F091: call    FormHeapAlloc; Allocate the shared 0x64-byte DialoguePackage after synchronizing both participants' process state.
0x60F096: add     esp, 4
0x60F099: mov     [esp+28h+var_10], eax
0x60F09D: test    eax, eax
0x60F09F: mov     [esp+28h+var_4], 1
0x60F0A7: jz      short loc_60F0BB
0x60F0A9: mov     ecx, [esp+28h+target]
0x60F0AD: push    ebp; target
0x60F0AE: push    esi; speaker
0x60F0AF: push    ecx; conversation
0x60F0B0: mov     ecx, eax; this
0x60F0B2: call    DialoguePackage__DialoguePackage; Constructs the dynamic 0x64-byte DialoguePackage and takes ownership of the prepared Conversation. Runtime fields at +0x50/+0x54/+0x58 are the conversation/item/response cursors.
0x60F0B7: mov     edi, eax
0x60F0B9: jmp     short loc_60F0BD
0x60F0BB: xor     edi, edi; Unchecked DialoguePackage allocation failure produces null v14; the following startingTopic write dereferences it. Normal runtime assumes FormHeapAlloc succeeds.
0x60F0BD: test    ebx, ebx
0x60F0BF: mov     edx, [esp+28h+startingTopic]
0x60F0C3: mov     [esp+28h+var_4], 0FFFFFFFFh
0x60F0CB: mov     [edi+40h], edx
0x60F0CE: jz      short loc_60F11E
0x60F0D0: mov     eax, [ebx+1Ch]
0x60F0D3: shr     eax, 0Ch
0x60F0D6: and     eax, 0FFFFFF01h
0x60F0DB: push    eax
0x60F0DC: mov     ecx, edi
0x60F0DE: call    sub_60E470
0x60F0E3: mov     ecx, [ebx+1Ch]
0x60F0E6: shr     ecx, 17h
0x60F0E9: and     ecx, 0FFFFFF01h
0x60F0EF: push    ecx
0x60F0F0: mov     ecx, edi
0x60F0F2: call    sub_60E490
0x60F0F7: mov     edx, [ebx+1Ch]
0x60F0FA: shr     edx, 14h
0x60F0FD: and     edx, 0FFFFFF01h
0x60F103: push    edx
0x60F104: mov     ecx, edi
0x60F106: call    sub_60E4D0
0x60F10B: mov     eax, [ebx+1Ch]
0x60F10E: shr     eax, 15h
0x60F111: and     eax, 0FFFFFF01h
0x60F116: push    eax
0x60F117: mov     ecx, edi
0x60F119: call    sub_60E4B0
0x60F11E: push    12h
0x60F120: mov     ecx, edi
0x60F122: call    TESPackage_SetType?; Sets the dynamic ambient conversation package to kPackageType_Dialogue (18 / 0x12), matching the authoritative TESPackageNames table.
0x60F127: or      dword ptr [edi+1Ch], 6
0x60F12B: push    0Ch; Size
0x60F12D: call    FormHeapAlloc
0x60F132: add     esp, 4
0x60F135: mov     [esp+28h+startingTopic], eax
0x60F139: test    eax, eax
0x60F13B: mov     [esp+28h+var_4], 2
0x60F143: jz      short loc_60F150
0x60F145: mov     ecx, eax
0x60F147: call    TESPackage_LocationData_constr
0x60F14C: mov     ebx, eax
0x60F14E: jmp     short loc_60F152
0x60F150: xor     ebx, ebx
0x60F152: push    0
0x60F154: mov     ecx, ebx
0x60F156: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x60F15E: call    TESPackage_LocationData_SetType
0x60F163: push    ebp
0x60F164: mov     ecx, ebx
0x60F166: call    TESPackage_LocationData_SetReference
0x60F16B: push    ebx
0x60F16C: mov     ecx, edi
0x60F16E: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x60F173: test    ebx, ebx
0x60F175: jz      short loc_60F187
0x60F177: mov     ecx, ebx
0x60F179: call    TESPackage_LocationData_destr
0x60F17E: push    ebx
0x60F17F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x60F184: add     esp, 4
0x60F187: push    0Ch; Size
0x60F189: call    FormHeapAlloc
0x60F18E: add     esp, 4
0x60F191: mov     [esp+28h+startingTopic], eax
0x60F195: test    eax, eax
0x60F197: mov     [esp+28h+var_4], 3
0x60F19F: jz      short loc_60F1AC
0x60F1A1: mov     ecx, eax
0x60F1A3: call    TESPackage_TargetData_constr; 3DTheft decode: TESPackage_TargetData constructor initializes targetType=2, target/object=0, count=0.
0x60F1A8: mov     ebx, eax
0x60F1AA: jmp     short loc_60F1AE
0x60F1AC: xor     ebx, ebx
0x60F1AE: push    ebx
0x60F1AF: mov     ecx, edi
0x60F1B1: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x60F1B9: call    TESPackage_SetTarget; 3DTheft decode: TESPackage_SetTarget allocates package->target when needed, copies a 0x0C TargetData record, and leaves later callers to set target type/ref/count fields.
0x60F1BE: test    ebx, ebx
0x60F1C0: jz      short loc_60F1D2
0x60F1C2: mov     ecx, ebx; this
0x60F1C4: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x60F1C9: push    ebx
0x60F1CA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x60F1CF: add     esp, 4
0x60F1D2: mov     ecx, [edi+28h]
0x60F1D5: push    0
0x60F1D7: mov     dword ptr [edi+18h], 0Ah
0x60F1DE: call    TESPackage_TargetData_SetType; 3DTheft decode: TargetData_SetType writes targetType and clears the target/object field for refr/base/type target modes.
0x60F1E3: mov     ecx, [edi+28h]
0x60F1E6: push    ebp
0x60F1E7: call    TeSPackage_TargetData_SetTargetREFR; 3DTheft decode: TargetData_SetTargetREFR only writes the reference field when targetType is 0 (reference target). It does not set count.
0x60F1EC: mov     ecx, [esi+58h]
0x60F1EF: mov     edx, [ecx]
0x60F1F1: mov     eax, [edx+36Ch]
0x60F1F7: call    eax
0x60F1F9: cmp     eax, 4
0x60F1FC: mov     ecx, [edi+28h]
0x60F1FF: jnz     short loc_60F208
0x60F201: push    0C8h ; 'È'
0x60F206: jmp     short loc_60F20A
0x60F208: push    5Ah ; 'Z'
0x60F20A: call    TESAIForm_SetServiceFlags
0x60F20F: mov     ecx, [esi+58h]
0x60F212: mov     edx, [ecx]
0x60F214: mov     eax, [edx+20h]
0x60F217: call    eax
0x60F219: push    1; a4
0x60F21B: push    0; a3
0x60F21D: push    edi; a2
0x60F21E: mov     ecx, esi; this
0x60F220: call    Actor_AddPackage?; Installs the newly allocated dynamic DialoguePackage as the initiator process's editorPackage (setCurrent=false, markDynamic=true). StartConversationPackage cleared currentPackage earlier; it does not directly SetCurrentPackage to the dialogue package here.
0x60F225: cmp     [esp+28h+incrementProcedure], 0
0x60F22A: jz      short loc_60F233
0x60F22C: mov     esi, [esi+58h]
0x60F22F: add     dword ptr [esi+4], 1
0x60F233: mov     al, 1
0x60F235: jmp     short loc_60F239
0x60F237: xor     al, al
0x60F239: mov     ecx, [esp+28h+var_C]
0x60F23D: mov     large fs:0, ecx
0x60F244: pop     ecx
0x60F245: pop     edi
0x60F246: pop     esi
0x60F247: pop     ebp
0x60F248: pop     ebx
0x60F249: add     esp, 14h
0x60F24C: retn    0Ch
0x9C30C0: mov     eax, [ebp+4]
0x9C30C3: push    eax
0x9C30C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C30C9: pop     ecx
0x9C30CA: retn
0x9C30CB: mov     eax, [ebp-10h]
0x9C30CE: push    eax
0x9C30CF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C30D4: pop     ecx
0x9C30D5: retn
0x9C30D6: mov     eax, [ebp+0Ch]
0x9C30D9: push    eax
0x9C30DA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C30DF: pop     ecx
0x9C30E0: retn
0x9C30E1: mov     eax, [ebp+0Ch]
0x9C30E4: push    eax
0x9C30E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C30EA: pop     ecx
0x9C30EB: retn
0x9C30EC: mov     edx, dword ptr [esp+incrementProcedure]
0x9C30F0: lea     eax, [edx-18h]
0x9C30F3: mov     ecx, [edx-1Ch]
0x9C30F6: xor     ecx, eax
0x9C30F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30FD: mov     eax, offset stru_AEBD8C
0x9C3102: jmp     ___CxxFrameHandler3
