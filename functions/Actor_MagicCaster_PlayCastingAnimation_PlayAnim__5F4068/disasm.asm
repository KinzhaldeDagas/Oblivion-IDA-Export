0x5F4068: mov     ecx, [esp+arg_10]; this
0x5F406C: push    0FFFFFFFFh; repeatOrAction
0x5F406E: push    1; playImmediately
0x5F4070: push    ebp; encodedKey
0x5F4071: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x5F4076: mov     edx, [esi]
0x5F4078: mov     eax, [edx+3A4h]
0x5F407E: push    1
0x5F4080: push    ebp
0x5F4081: mov     ecx, esi
0x5F4083: call    eax
0x5F4085: lea     ecx, [ebx+ebx*8]
0x5F4088: mov     edx, ds:0B102E8h[ecx*4]
0x5F408F: mov     ecx, [esp+8+arg_8]; this
0x5F4093: push    edx; slotSelector
0x5F4094: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F4099: test    eax, eax
0x5F409B: jz      Actor_MagicCaster_PlayCastingAnimation___Done
0x5F40A1: push    eax; sequence
0x5F40A2: push    2; action
0x5F40A4: mov     ecx, esi; this
0x5F40A6: call    Actor_SetCurrentActionWithBowVisualCleanup; Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
0x5F40AB: mov     eax, [edi]
0x5F40AD: mov     edx, [eax+30h]
0x5F40B0: push    0; effectIndex
0x5F40B2: mov     ecx, edi
0x5F40B4: call    edx
0x5F40B6: mov     ecx, eax; magicItem
0x5F40B8: call    MagicItem_GetFXEffect; Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
0x5F40BD: mov     edi, eax
0x5F40BF: test    edi, edi
0x5F40C1: jz      Actor_MagicCaster_PlayCastingAnimation___Done
0x5F40C7: cmp     dword ptr [edi+80h], 0
0x5F40CE: jz      Actor_MagicCaster_PlayCastingAnimation___Done
0x5F40D4: mov     eax, [esi]
0x5F40D6: mov     edx, [eax+330h]
0x5F40DC: mov     ecx, esi
0x5F40DE: call    edx
0x5F40E0: test    eax, eax
0x5F40E2: jz      short loc_5F4117
0x5F40E4: mov     eax, [edi+80h]
0x5F40EA: mov     eax, [eax+0Ch]
0x5F40ED: mov     edx, [esi]
0x5F40EF: push    0
0x5F40F1: push    eax
0x5F40F2: mov     eax, [edx+330h]
0x5F40F8: mov     ecx, esi
0x5F40FA: call    eax
0x5F40FC: mov     ecx, eax
0x5F40FE: call    sub_619FA0
0x5F4103: mov     ecx, [esp+24h]
0x5F4107: mov     large fs:0, ecx
0x5F410E: pop     ecx
0x5F410F: pop     edi
0x5F4110: pop     esi
0x5F4111: pop     ebp
0x5F4112: pop     ebx
0x5F4113: add     esp, 1Ch
0x5F4116: retn
0x5F4117: mov     ecx, ds:0B333C4h
0x5F411D: cmp     [esp+8+arg_10], ecx
0x5F4121: jnz     short loc_5F4146
0x5F4123: mov     edx, [edi+80h]
0x5F4129: mov     eax, [edx+0Ch]
0x5F412C: push    eax
0x5F412D: call    sub_663520
0x5F4132: mov     ecx, [esp+24h]
0x5F4136: mov     large fs:0, ecx
0x5F413D: pop     ecx
0x5F413E: pop     edi
0x5F413F: pop     esi
0x5F4140: pop     ebp
0x5F4141: pop     ebx
0x5F4142: add     esp, 1Ch
0x5F4145: retn
0x5F4146: mov     ecx, [edi+80h]
0x5F414C: mov     eax, [ecx+0Ch]
0x5F414F: push    1; a5
0x5F4151: push    102h; a4
0x5F4156: push    0; a3
0x5F4158: push    eax; a2
0x5F4159: mov     ecx, esi; this
0x5F415B: call    sub_65AC50
0x5F4160: mov     esi, eax
0x5F4162: test    esi, esi
0x5F4164: jz      short Actor_MagicCaster_PlayCastingAnimation___Done
0x5F4166: mov     ecx, esi; this
0x5F4168: call    sub_6B73E0
0x5F416D: push    esi
0x5F416E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5F4173: add     esp, 4
