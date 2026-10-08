0x670700: sub     esp, 83Ch; MW Medium Armor v20 deliberately leaves ServeSentence native. A deterministic post-call Medium loss is invalid because this function makes one random native-skill choice per unit (max ten), applies Security/Sneak +1 versus other skills -1, preserves progress, and bypasses ordinary advancement counters.
0x670706: mov     eax, ds:0B30AACh
0x67070B: xor     eax, esp
0x67070D: mov     [esp+83Ch+var_4], eax
0x670714: push    ebx
0x670715: push    ebp
0x670716: push    esi
0x670717: mov     esi, ecx
0x670719: mov     eax, [esi+608h]
0x67071F: lea     ecx, [eax+eax*2]
0x670722: add     ecx, ecx
0x670724: push    edi
0x670725: add     ecx, ecx
0x670727: add     ecx, ecx
0x670729: lea     edx, [esp+84Ch+var_7D4]
0x67072D: push    offset asc_A366D0; "\n"
0x670732: mov     [esi+590h], ecx
0x670738: mov     byte ptr [esi+594h], 1
0x67073F: add     [esi+658h], eax
0x670745: push    edx
0x670746: mov     byte ptr ds:0B14E4Ch, 0
0x67074D: call    __sprintf
0x670752: add     esp, 8
0x670755: mov     byte ptr [esi+200h], 0
0x67075C: call    Sky_CreateOrGetGlobalObject
0x670761: and     dword ptr [eax+0FCh], 0FFFFFFDFh
0x670768: jmp     short loc_670770
0x670770: cmp     dword ptr [esi+590h], 0
0x670777: jle     short loc_670786
0x670779: mov     ecx, ds:0B333C4h
0x67077F: call    sub_65F770
0x670784: jmp     short loc_670770
0x670786: call    Sky_CreateOrGetGlobalObject
0x67078B: or      dword ptr [eax+0FCh], 20h
0x670792: xor     eax, eax
0x670794: mov     [esp+84Ch+var_828], eax; Initialize a 21-entry signed skill-delta accumulator used only to summarize the sentence's direct base-skill changes.
0x670798: mov     [esp+84Ch+var_824], eax
0x67079C: mov     [esp+84Ch+var_820], eax
0x6707A0: mov     [esp+84Ch+var_81C], eax
0x6707A4: mov     [esp+84Ch+var_818], eax
0x6707A8: mov     [esp+84Ch+var_814], eax
0x6707AC: mov     [esp+84Ch+var_810], eax
0x6707B0: mov     [esp+84Ch+var_80C], eax
0x6707B4: mov     [esp+84Ch+var_808], eax
0x6707B8: mov     [esp+84Ch+var_804], eax
0x6707BC: mov     [esp+84Ch+var_800], eax
0x6707C0: mov     [esp+84Ch+var_7FC], eax
0x6707C4: mov     [esp+84Ch+var_7F8], eax
0x6707C8: mov     [esp+84Ch+var_7F4], eax
0x6707CC: mov     [esp+84Ch+var_7F0], eax
0x6707D0: mov     [esp+84Ch+var_7EC], eax
0x6707D4: mov     [esp+84Ch+var_7E8], eax
0x6707D8: mov     [esp+84Ch+var_7E4], eax
0x6707DC: mov     [esp+84Ch+var_7E0], eax
0x6707E0: mov     [esp+84Ch+var_7DC], eax
0x6707E4: mov     [esp+84Ch+var_7D8], eax
0x6707E8: mov     eax, 0Ah
0x6707ED: cmp     [esi+608h], eax
0x6707F3: jle     short loc_6707FB; Clamp the number of prison skill-mutation iterations to at most 10.
0x6707F5: mov     [esi+608h], eax
0x6707FB: cmp     dword ptr [esi+608h], 0
0x670802: jz      loc_670950
0x670808: push    0; Seed
0x67080A: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x67080F: mov     edi, eax
0x670811: mov     eax, 30C30C31h
0x670816: imul    edi
0x670818: sar     edx, 2
0x67081B: mov     eax, edx
0x67081D: shr     eax, 1Fh
0x670820: add     eax, edx
0x670822: imul    eax, 15h
0x670825: sub     edi, eax
0x670827: add     esp, 4
0x67082A: cmp     edi, 0Ch
0x67082D: jge     short loc_670849; Choose a native skill AV in 0x0C..0x20 using Oblivion's random/additive loop; the selection does not consult TESClass majorSkills.
0x67082F: nop
0x670830: push    0; Seed
0x670832: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x670837: cdq
0x670838: mov     ecx, 0Ah
0x67083D: idiv    ecx
0x67083F: add     esp, 4
0x670842: add     edi, edx
0x670844: cmp     edi, 0Ch
0x670847: jl      short loc_670830
0x670849: push    edi
0x67084A: push    2
0x67084C: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x670851: mov     ecx, ds:0B33A98h; this
0x670857: add     esp, 8
0x67085A: push    eax; skillIndex
0x67085B: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x670860: mov     edx, [esi]
0x670862: mov     ebx, eax
0x670864: mov     eax, [ebx+2Ch]
0x670867: push    eax
0x670868: mov     eax, [edx+288h]
0x67086E: mov     ecx, esi
0x670870: call    eax
0x670872: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x670877: cmp     eax, 1
0x67087A: jle     loc_67093C; Apply a sentence mutation only when the selected skill's current value is greater than 1.
0x670880: cmp     edi, 1Fh
0x670883: jz      short loc_6708E4
0x670885: cmp     edi, 1Eh
0x670888: jz      short loc_6708E4; Security (AV 0x1E) and Sneak (AV 0x1F) increase by one during sentence service; every other selected native skill takes the decrement branch.
0x67088A: push    edi
0x67088B: push    2
0x67088D: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x670892: mov     edi, [ebx+2Ch]
0x670895: movsx   eax, al
0x670898: fld     [esp+eax*4+854h+var_828]
0x67089C: lea     eax, [esp+eax*4+854h+var_828]
0x6708A0: fsub    qword ptr ds:0A2F928h
0x6708A6: add     esp, 8
0x6708A9: push    edi
0x6708AA: mov     ecx, esi
0x6708AC: fstp    dword ptr [eax]
0x6708AE: call    Actor_GetBaseCalcAVi
0x6708B3: mov     ebx, eax
0x6708B5: push    0; a2
0x6708B7: mov     ecx, esi; this
0x6708B9: sub     ebx, 1
0x6708BC: call    Actor_GetActorBaseForm
0x6708C1: mov     edx, [eax]
0x6708C3: push    ebx
0x6708C4: mov     ecx, eax
0x6708C6: mov     eax, [edx+134h]
0x6708CC: push    edi
0x6708CD: call    eax; Non-Security/Sneak branch: write base skill -1 directly to the actor base form. No normal skill-level counters or majorSkillAdvances are incremented.
0x6708CF: push    edi; actorValue
0x6708D0: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x6708D5: add     esp, 4
0x6708D8: push    1; updatePlayerUI
0x6708DA: push    edi; actorValue
0x6708DB: mov     ecx, esi; this
0x6708DD: call    Player_OnActorValueBaseChanged; After a direct prison decrement, notify Player_OnActorValueBaseChanged; for a player skill this rebuilds all 21 requiredSkillExp entries.
0x6708E2: jmp     short loc_67093C
0x6708E4: mov     ebp, [ebx+2Ch]
0x6708E7: push    ebp
0x6708E8: mov     ecx, esi
0x6708EA: call    Actor_GetBaseCalcAVi
0x6708EF: mov     ebx, eax
0x6708F1: push    0; a2
0x6708F3: mov     ecx, esi; this
0x6708F5: add     ebx, 1
0x6708F8: call    Actor_GetActorBaseForm
0x6708FD: mov     edx, [eax]
0x6708FF: push    ebx
0x670900: mov     ecx, eax
0x670902: mov     eax, [edx+134h]
0x670908: push    ebp
0x670909: call    eax; Security/Sneak branch: write base skill +1 directly to the actor base form, bypassing Player_SkillLevelIncrease side effects.
0x67090B: push    ebp; actorValue
0x67090C: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x670911: add     esp, 4
0x670914: push    1; updatePlayerUI
0x670916: push    ebp; actorValue
0x670917: mov     ecx, esi; this
0x670919: call    Player_OnActorValueBaseChanged; After a direct prison increase, rebuild player skill requirements through Player_OnActorValueBaseChanged.
0x67091E: push    edi
0x67091F: push    2
0x670921: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x670926: movsx   eax, al
0x670929: fld     [esp+eax*4+854h+var_828]
0x67092D: lea     eax, [esp+eax*4+854h+var_828]
0x670931: fadd    qword ptr ds:0A2F928h
0x670937: add     esp, 8
0x67093A: fstp    dword ptr [eax]
0x67093C: add     dword ptr [esi+608h], 0FFFFFFFFh
0x670943: cmp     dword ptr [esi+608h], 0
0x67094A: jnz     loc_670808
0x670950: mov     ecx, ds:0B3BAD0h
0x670956: push    1
0x670958: push    ecx
0x670959: push    0; int
0x67095B: mov     ecx, (offset qword_B3BB2C+1D4h)
0x670960: call    sub_6765F0
0x670965: mov     eax, ds:0B3BAD4h
0x67096A: test    eax, eax
0x67096C: jz      short loc_670999
0x67096E: lea     ecx, [eax+44h]; this
0x670971: call    ExtraDataList_GetContainerChanges
0x670976: test    eax, eax
0x670978: jz      short loc_67098F
0x67097A: mov     edx, ds:0B333C4h
0x670980: mov     ecx, ds:0B3BAD4h
0x670986: push    edx
0x670987: push    ecx
0x670988: mov     ecx, eax
0x67098A: call    sub_4917E0
0x67098F: push    0
0x670991: call    sub_57A3B0
0x670996: add     esp, 4
0x670999: cmp     dword ptr ds:0B3BAD0h, 0
0x6709A0: jz      loc_670B32
0x6709A6: mov     ecx, ds:0B35B90h
0x6709AC: test    ecx, ecx
0x6709AE: jz      short loc_6709B5
0x6709B0: call    sub_4BE5A0
0x6709B5: mov     ecx, ds:0B35B8Ch
0x6709BB: test    ecx, ecx
0x6709BD: jz      short loc_6709C4
0x6709BF: call    sub_4BD980
0x6709C4: mov     ecx, ds:0B3BAD0h; this
0x6709CA: mov     edi, 7FFFFFFFh
0x6709CF: mov     ebp, edi
0x6709D1: call    TESObjectREFR_GetWorldSpace
0x6709D6: mov     ecx, ds:0B3BAD0h; this
0x6709DC: mov     [esp+84Ch+var_82C], eax
0x6709E0: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6709E5: mov     ebx, eax
0x6709E7: test    ebx, ebx
0x6709E9: jnz     short loc_670A55
0x6709EB: mov     ebx, [esp+84Ch+var_82C]
0x6709EF: test    ebx, ebx
0x6709F1: jz      loc_670B32
0x6709F7: mov     ecx, ds:0B3BAD0h
0x6709FD: mov     edx, [ecx]
0x6709FF: mov     eax, [edx+174h]
0x670A05: call    eax
0x670A07: fld     dword ptr [eax]
0x670A09: fstp    [esp+84Ch+var_838]
0x670A0D: fld     [esp+84Ch+var_838]
0x670A11: fistp   [esp+84Ch+var_83C]
0x670A15: mov     ecx, ds:0B3BAD0h
0x670A1B: mov     edx, [ecx]
0x670A1D: mov     edi, [esp+84Ch+var_83C]
0x670A21: mov     eax, [edx+174h]
0x670A27: sar     edi, 0Ch
0x670A2A: call    eax
0x670A2C: fld     dword ptr [eax+4]
0x670A2F: fstp    [esp+84Ch+var_838]
0x670A33: fld     [esp+84Ch+var_838]
0x670A37: fistp   [esp+84Ch+var_83C]
0x670A3B: mov     ebp, [esp+84Ch+var_83C]
0x670A3F: sar     ebp, 0Ch
0x670A42: push    ebp; int
0x670A43: push    edi; ArgList
0x670A44: mov     ecx, ebx
0x670A46: call    TESWorldSpace_LoadExteriorCellAtCoord; Verified: exterior-cell loader checks cellMap first, searches master files using cellOffsetsArray fast path or GRUP/CELL fallback, creates a missing TESObjectCELL, post-fixes it, then attaches worldspace-indexed references.
0x670A4B: mov     ebx, eax
0x670A4D: test    ebx, ebx
0x670A4F: jz      loc_670B32
0x670A55: mov     ecx, ds:0B3BAD0h; this
0x670A5B: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x670A60: mov     ecx, eax; this
0x670A62: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x670A67: mov     ecx, eax; this
0x670A69: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x670A6E: test    eax, eax
0x670A70: mov     [esp+84Ch+var_83C], eax
0x670A74: jz      loc_670B32
0x670A7A: mov     ecx, eax
0x670A7C: call    sub_42B460; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x670A81: test    eax, eax
0x670A83: mov     ecx, [esp+84Ch+var_83C]
0x670A87: jnz     short loc_670ADF
0x670A89: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x670A8E: fld     dword ptr [eax]
0x670A90: fstp    [esp+84Ch+var_834]
0x670A94: fld     [esp+84Ch+var_834]
0x670A98: fistp   [esp+84Ch+var_838]
0x670A9C: mov     eax, [esp+84Ch+var_838]
0x670AA0: mov     ecx, [esp+84Ch+var_83C]
0x670AA4: sar     eax, 0Ch
0x670AA7: mov     dword ptr [esp+84Ch+ArgList], eax
0x670AAB: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x670AB0: fld     dword ptr [eax+4]
0x670AB3: fstp    [esp+84Ch+var_834]
0x670AB7: fld     [esp+84Ch+var_834]
0x670ABB: fistp   [esp+84Ch+var_838]
0x670ABF: mov     eax, [esp+84Ch+var_838]
0x670AC3: mov     ecx, dword ptr [esp+84Ch+ArgList]
0x670AC7: sar     eax, 0Ch
0x670ACA: cmp     ecx, edi
0x670ACC: jnz     short loc_670AD2
0x670ACE: cmp     ebp, eax
0x670AD0: jz      short loc_670AE6
0x670AD2: push    eax; int
0x670AD3: push    ecx; ArgList
0x670AD4: mov     ecx, [esp+854h+var_82C]
0x670AD8: call    TESWorldSpace_LoadExteriorCellAtCoord; Verified: exterior-cell loader checks cellMap first, searches master files using cellOffsetsArray fast path or GRUP/CELL fallback, creates a missing TESObjectCELL, post-fixes it, then attaches worldspace-indexed references.
0x670ADD: jmp     short loc_670AE4
0x670ADF: call    sub_42B460; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x670AE4: mov     ebx, eax
0x670AE6: mov     ebp, [esp+84Ch+var_83C]
0x670AEA: mov     ecx, ebp
0x670AEC: call    sub_42B430
0x670AF1: mov     ecx, ebp
0x670AF3: mov     edi, eax
0x670AF5: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x670AFA: mov     edx, [edi]
0x670AFC: push    1; char
0x670AFE: push    ebx; int
0x670AFF: sub     esp, 0Ch
0x670B02: mov     ecx, esp
0x670B04: mov     [ecx], edx
0x670B06: mov     edx, [edi+4]
0x670B09: mov     [ecx+4], edx
0x670B0C: mov     edx, [edi+8]
0x670B0F: mov     [ecx+8], edx
0x670B12: mov     edx, [eax]
0x670B14: sub     esp, 0Ch
0x670B17: mov     ecx, esp
0x670B19: mov     [ecx], edx
0x670B1B: mov     edx, [eax+4]
0x670B1E: mov     eax, [eax+8]
0x670B21: mov     [ecx+4], edx
0x670B24: mov     [ecx+8], eax
0x670B27: mov     ecx, ds:0B333C4h; int
0x670B2D: call    PlayerCharacter_ChangeCellAndPosition; World/cell transition path used by fast travel relocation after cell resolution. Leaves normal exterior refresh/SpeedTree/weather side effects intact.
0x670B32: mov     ecx, ds:0B333C4h
0x670B38: mov     edi, [ecx]
0x670B3A: mov     edx, [edi+250h]
0x670B40: call    edx
0x670B42: fmul    qword ptr ds:0A3D360h
0x670B48: mov     eax, [edi+254h]
0x670B4E: push    ecx
0x670B4F: mov     ecx, ds:0B333C4h
0x670B55: fstp    dword ptr [esp+850h+ArgList]
0x670B59: fld     dword ptr [esp+850h+ArgList]
0x670B5D: fstp    [esp+850h+var_850]
0x670B60: call    eax
0x670B62: xor     eax, eax
0x670B64: mov     [esi+608h], eax
0x670B6A: push    esi; criminal
0x670B6B: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x670B70: mov     ds:0B3BAD4h, eax
0x670B75: mov     ds:0B3BAD0h, eax
0x670B7A: call    ActorProcessManager_RemoveCrimesForCriminal
0x670B7F: mov     edi, 0Ch; Walk all 21 accumulated skill deltas and build the native sentence-result message. This reporting pass also has no major/minor distinction.
0x670B84: push    edi
0x670B85: push    2
0x670B87: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x670B8C: mov     ecx, ds:0B33A98h; this
0x670B92: add     esp, 8
0x670B95: push    eax; skillIndex
0x670B96: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x670B9B: push    edi
0x670B9C: push    2
0x670B9E: mov     ebx, eax
0x670BA0: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x670BA5: movsx   ecx, al
0x670BA8: add     esp, 8
0x670BAB: fld     [esp+ecx*4+84Ch+var_828]
0x670BAF: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x670BB4: test    eax, eax
0x670BB6: jg      short loc_670BBA
0x670BB8: jge     short loc_670BFD
0x670BBA: cmp     edi, 1Fh
0x670BBD: jz      short loc_670BCE
0x670BBF: cmp     edi, 1Eh
0x670BC2: jz      short loc_670BCE
0x670BC4: mov     edx, ds:0B383B0h
0x670BCA: neg     eax
0x670BCC: jmp     short loc_670BD4
0x670BCE: mov     edx, ds:0B383A8h
0x670BD4: mov     ebp, ds:0B38D28h
0x670BDA: push    eax
0x670BDB: push    edx
0x670BDC: mov     ecx, ebx; this
0x670BDE: call    TESSkill_GetName; mwMediumArmor: Returns the display name for an Oblivion skill actor value stored at skill+0x2C. No MediumArmor actor value exists in this table.
0x670BE3: push    eax
0x670BE4: push    ebp
0x670BE5: lea     eax, [esp+85Ch+var_7D4]
0x670BEC: push    eax
0x670BED: mov     ecx, eax
0x670BEF: push    offset aSSSSByD_; "%s %s %s %s by %d.\n"
0x670BF4: push    ecx
0x670BF5: call    __sprintf
0x670BFA: add     esp, 1Ch
0x670BFD: add     edi, 1
0x670C00: cmp     edi, 21h ; '!'
0x670C03: jl      loc_670B84
0x670C09: mov     edx, ds:0B38CF0h
0x670C0F: push    0
0x670C11: push    edx
0x670C12: push    1
0x670C14: lea     eax, [esp+858h+var_7D4]
0x670C1B: push    0
0x670C1D: push    eax
0x670C1E: call    ShowUIMessageBox
0x670C23: mov     edx, [esi+68h]
0x670C26: mov     eax, [edx+8]
0x670C29: add     esi, 68h ; 'h'
0x670C2C: add     esp, 14h
0x670C2F: mov     ecx, esi
0x670C31: call    eax
0x670C33: mov     esi, eax
0x670C35: test    esi, esi
0x670C37: jz      short loc_670C7D
0x670C39: mov     edi, 47445553h
0x670C3E: mov     edi, edi
0x670C40: cmp     dword ptr [esi+4], 0
0x670C44: jnz     short loc_670C4B
0x670C46: cmp     dword ptr [esi], 0
0x670C49: jz      short loc_670C7D
0x670C4B: mov     eax, [esi]
0x670C4D: mov     ecx, [eax+0Ch]
0x670C50: mov     edx, [ecx+1Ch]
0x670C53: cmp     [edx+98h], edi
0x670C59: jnz     short loc_670C76
0x670C5B: push    0; int
0x670C5D: push    offset ??_R0?AVSunDamageEffect@@@8; struct TypeDescriptor *
0x670C62: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x670C67: push    0; int
0x670C69: push    eax; void *
0x670C6A: call    OblivionDynamicCast
0x670C6F: add     esp, 14h
0x670C72: mov     byte ptr [eax+3Dh], 1
0x670C76: mov     esi, [esi+4]
0x670C79: test    esi, esi
0x670C7B: jnz     short loc_670C40
0x670C7D: mov     ecx, [esp+84Ch+var_4]
0x670C84: pop     edi
0x670C85: pop     esi
0x670C86: pop     ebp
0x670C87: pop     ebx
0x670C88: xor     ecx, esp
0x670C8A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x670C8F: add     esp, 83Ch
0x670C95: retn
