0x5107A0: sub     esp, 0Ch; PlayGroup script command path. Actors use Actor_LoadAnimGroup_ + ActorAnimData_PlayAnimGroup; non-actors play a sequence directly from NiControllerManager.
0x5107A3: mov     edx, [esp+0Ch+l]
0x5107A7: push    edi
0x5107A8: mov     edi, [esp+10h+arg_8]
0x5107AC: lea     eax, [esp+10h+var_8]
0x5107B0: push    eax
0x5107B1: mov     eax, [esp+14h+arg_10]
0x5107B5: lea     ecx, [esp+14h+var_C]
0x5107B9: push    ecx; UInt16
0x5107BA: mov     ecx, [esp+18h+arg_C]
0x5107BE: push    edx; l
0x5107BF: mov     edx, [esp+1Ch+a3]
0x5107C3: push    eax; a6
0x5107C4: mov     eax, [esp+20h+arg_4]
0x5107C8: push    ecx; a5
0x5107C9: mov     ecx, [esp+24h+a1]
0x5107CD: push    edi; a4
0x5107CE: push    edx; a3
0x5107CF: push    eax; a2
0x5107D0: push    ecx; a1
0x5107D1: mov     [esp+34h+var_8], 0
0x5107D9: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x5107DE: add     esp, 24h
0x5107E1: test    al, al
0x5107E3: jnz     short loc_5107EA
0x5107E5: pop     edi
0x5107E6: add     esp, 0Ch
0x5107E9: retn
0x5107EA: test    edi, edi
0x5107EC: jz      Cmd_PlayGroup___Return_1
0x5107F2: mov     edx, [edi]
0x5107F4: mov     eax, [edx+40h]
0x5107F7: push    ebp
0x5107F8: push    esi
0x5107F9: push    2000000h
0x5107FE: mov     ecx, edi
0x510800: call    eax
0x510802: mov     edx, [edi]
0x510804: mov     eax, [edx+164h]
0x51080A: mov     ecx, edi
0x51080C: call    eax
0x51080E: test    eax, eax
0x510810: jz      loc_5108B9
0x510816: mov     edx, [edi]
0x510818: mov     eax, [edx+190h]
0x51081E: mov     ecx, edi
0x510820: call    eax
0x510822: test    al, al
0x510824: jz      loc_5108B9
0x51082A: push    0; int
0x51082C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x510831: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x510836: push    0; int
0x510838: push    edi; void *
0x510839: call    OblivionDynamicCast
0x51083E: mov     ecx, dword ptr [esp+30h+var_C]
0x510842: mov     edx, [esp+30h+groupID]
0x510846: add     esp, 14h
0x510849: push    0FFFFFFFFh; repeatOrAction
0x51084B: push    ecx; playImmediately
0x51084C: push    0; forceWeaponPrefix
0x51084E: mov     esi, eax
0x510850: push    0; weaponEntryDataArg
0x510852: push    edx; groupID
0x510853: mov     ecx, esi; this
0x510855: call    Actor_LoadAnimGroup_; Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
0x51085A: mov     ecx, edi
0x51085C: push    eax; encodedKey
0x51085D: mov     eax, [edi]
0x51085F: mov     edx, [eax+164h]
0x510865: call    edx
0x510867: mov     ecx, eax; this
0x510869: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x51086E: cmp     [esp+1Ch+groupID], 0
0x510873: jz      short loc_510899
0x510875: mov     eax, [edi]
0x510877: mov     edx, [eax+164h]
0x51087D: push    0; slotSelector
0x51087F: mov     ecx, edi
0x510881: call    edx
0x510883: mov     ecx, eax; this
0x510885: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x51088A: push    eax; sequence
0x51088B: push    0Ch; action
0x51088D: mov     ecx, esi; this
0x51088F: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x510894: jmp     Cmd_PlayGroup___SetFromActiveFile
0x510899: mov     ecx, esi
0x51089B: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x5108A0: cmp     eax, 0Ch
0x5108A3: jnz     Cmd_PlayGroup___SetFromActiveFile
0x5108A9: push    0; sequence
0x5108AB: push    0FFFFFFFFh; action
0x5108AD: mov     ecx, esi; this
0x5108AF: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5108B4: jmp     Cmd_PlayGroup___SetFromActiveFile
0x5108B9: cmp     [esp+1Ch+groupID], 0FFh
0x5108C1: jz      Cmd_PlayGroup___SetFromActiveFile
0x5108C7: mov     eax, [edi]
0x5108C9: mov     edx, [eax+154h]
0x5108CF: push    ebx
0x5108D0: mov     ecx, edi
0x5108D2: call    edx
0x5108D4: test    eax, eax
0x5108D6: jz      loc_510A55
0x5108DC: mov     edx, [eax]
0x5108DE: mov     ecx, eax
0x5108E0: mov     eax, [edx+8]
0x5108E3: call    eax
0x5108E5: mov     ebx, eax
0x5108E7: test    ebx, ebx
0x5108E9: jz      loc_510A55
0x5108EF: push    0; index
0x5108F1: mov     ecx, ebx; this
0x5108F3: call    NiNode_GetChildAtIndex
0x5108F8: test    eax, eax
0x5108FA: jz      loc_510A55
0x510900: push    0; index
0x510902: mov     ecx, ebx; this
0x510904: call    NiNode_GetChildAtIndex
0x510909: cmp     dword ptr [eax+0Ch], 0
0x51090D: jz      loc_510A55
0x510913: push    0; index
0x510915: mov     ecx, ebx; this
0x510917: call    NiNode_GetChildAtIndex
0x51091C: mov     eax, [eax+0Ch]
0x51091F: push    eax
0x510920: push    offset stru_B3CAC0
0x510925: call    NiRTTI_Cast
0x51092A: mov     esi, eax
0x51092C: add     esp, 8
0x51092F: test    esi, esi
0x510931: jnz     short loc_51094E
0x510933: mov     ebx, [ebx+0Ch]
0x510936: push    ebx
0x510937: push    offset stru_B3CAC0
0x51093C: call    NiRTTI_Cast
0x510941: mov     esi, eax
0x510943: add     esp, 8
0x510946: test    esi, esi
0x510948: jz      loc_510A42
0x51094E: mov     eax, [esp+20h+groupID]
0x510952: lea     ecx, [eax+eax*8]
0x510955: mov     edx, ds:0B102E0h[ecx*4]
0x51095C: push    edx; name
0x51095D: mov     ecx, esi; this
0x51095F: call    NiControllerManager_FindSequenceByName; Looks up a NiControllerSequence by name in the controller manager name map at +0x58; returns null on miss.
0x510964: mov     ebp, eax
0x510966: test    ebp, ebp
0x510968: mov     [esp+20h+var_8], ebp
0x51096C: jz      loc_510A18
0x510972: xor     ebx, ebx
0x510974: cmp     [esi+46h], bx
0x510978: jbe     short loc_5109BB
0x51097A: lea     ebx, [ebx+0]
0x510980: mov     eax, [esi+40h]
0x510983: mov     ebp, [eax+ebx*4]
0x510986: mov     ecx, ds:0B102E0h
0x51098C: mov     eax, [ebp+8]
0x51098F: push    ecx; right
0x510990: push    eax; left
0x510991: call    CRT_StricmpLocaleDispatch
0x510996: add     esp, 8
0x510999: test    eax, eax
0x51099B: jz      short loc_5109AC
0x51099D: fldz
0x51099F: push    0; transition
0x5109A1: push    ecx
0x5109A2: fstp    [esp+28h+easeInTime]; easeOutTime
0x5109A5: mov     ecx, ebp; this
0x5109A7: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x5109AC: movzx   edx, word ptr [esi+46h]
0x5109B0: add     ebx, 1
0x5109B3: cmp     ebx, edx
0x5109B5: jb      short loc_510980
0x5109B7: mov     ebp, [esp+20h+var_8]
0x5109BB: cmp     dword ptr [esp+20h+var_C], 0
0x5109C0: push    0; timeSyncSequence
0x5109C2: mov     ecx, esi
0x5109C4: jz      short loc_5109EE
0x5109C6: fild    dword ptr [esp+24h+var_C]
0x5109CA: push    0; int
0x5109CC: sub     esp, 8
0x5109CF: fmul    qword ptr ds:0A2FC80h
0x5109D5: fstp    [esp+30h+var_8]
0x5109D9: fld     [esp+30h+var_8]
0x5109DD: fstp    [esp+30h+weight]; float
0x5109E1: fldz
0x5109E3: fstp    [esp+30h+var_30]; float
0x5109E6: push    ebp; int
0x5109E7: call    NiControllerManager_BlendFromPose; Creates or reuses a __TempBlendSequence__ for the current pose, then transitions from that temporary pose to the requested destination sequence through 0x6C9D30. ActorAnimData_PlaySequence uses this for player/camera-visible roots when a normal cross-fade cannot be used.
0x5109EC: jmp     short loc_510A06
0x5109EE: fldz
0x5109F0: sub     esp, 8
0x5109F3: fstp    [esp+2Ch+easeInTime]; easeInTime
0x5109F7: fld1
0x5109F9: fstp    [esp+2Ch+weight]; weight
0x5109FC: push    0; startOver
0x5109FE: push    0; priority
0x510A00: push    ebp; sequence
0x510A01: call    BSAnimGroupSequence_Activate; BSAnimGroupSequence activation wrapper. Delegates to NiControllerSequence_Activate with the final transition flag forced to zero.
0x510A06: fld     dword ptr ds:0A7DEB4h
0x510A0C: fchs
0x510A0E: fstp    dword ptr [ebp+48h]
0x510A11: or      word ptr [esi+8], 8
0x510A16: jmp     short loc_510A6E
0x510A18: mov     eax, [edi+0Ch]
0x510A1B: push    eax
0x510A1C: mov     ecx, edi; this
0x510A1E: call    TESObjectREFR_GetName
0x510A23: push    eax
0x510A24: mov     eax, [esp+28h+groupID]
0x510A28: lea     eax, [eax+eax*8]
0x510A2B: mov     ecx, ds:0B102E0h[eax*4]
0x510A32: push    ecx; ArgList
0x510A33: push    offset aPlaygroupError; "PlayGroup Error: Sequence '%s' not foun"...
0x510A38: call    PrintError
0x510A3D: add     esp, 10h
0x510A40: jmp     short loc_510A6E
0x510A42: mov     eax, [edi+0Ch]
0x510A45: push    eax
0x510A46: mov     ecx, edi; this
0x510A48: call    TESObjectREFR_GetName
0x510A4D: push    eax
0x510A4E: push    offset aPlaygroupErr_0; "PlayGroup Error: No NiControllerManager"...
0x510A53: jmp     short loc_510A66
0x510A55: mov     eax, [edi+0Ch]
0x510A58: push    eax
0x510A59: mov     ecx, edi; this
0x510A5B: call    TESObjectREFR_GetName
0x510A60: push    eax; ArgList
0x510A61: push    offset aPlaygroupErr_1; "PlayGroup Error: No 3d or controllers f"...
0x510A66: call    PrintError
0x510A6B: add     esp, 0Ch
0x510A6E: pop     ebx
