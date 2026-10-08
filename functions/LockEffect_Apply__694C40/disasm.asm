0x694C40: push    ebx; Verified LockEffect marker semantics for ExtraLockData.flags bit 0x02: LockEffect_Apply writes exactly 0x02 before setting locked bit 0x01. On the next application, an existing lock without bit 0x02 causes this effect to remove itself; bit0x02 plus locked bit0x01 also removes it as completed; bit0x02 while unlocked causes the effect to reapply. Thus 0x02 marks a lock owned/pending from LockEffect, while 0x01 is the actual locked state. Fallout LockEffect::Start uses the same 0x02→0x03 sequence in REFR_LOCK but different storage and Lock/UnLock methods.
0x694C41: push    0; int
0x694C43: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x694C48: mov     ebx, ecx
0x694C4A: mov     eax, [ebx+20h]
0x694C4D: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x694C52: push    0; int
0x694C54: push    eax; void *
0x694C55: call    OblivionDynamicCast
0x694C5A: add     esp, 14h
0x694C5D: test    eax, eax
0x694C5F: jz      short loc_694C9B
0x694C61: push    esi
0x694C62: lea     esi, [eax+0Ch]
0x694C65: mov     eax, [esi]
0x694C67: mov     edx, [eax+4]
0x694C6A: mov     ecx, esi
0x694C6C: call    edx
0x694C6E: test    eax, eax
0x694C70: jz      short loc_694C9A
0x694C72: mov     eax, [esi]
0x694C74: mov     edx, [eax+4]
0x694C77: mov     ecx, esi
0x694C79: call    edx
0x694C7B: mov     ecx, eax; this
0x694C7D: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x694C82: test    eax, eax
0x694C84: jz      short loc_694C9D
0x694C86: mov     al, [eax+8]
0x694C89: test    al, 2
0x694C8B: jz      short loc_694C91
0x694C8D: test    al, 1
0x694C8F: jz      short loc_694C9D
0x694C91: push    0
0x694C93: mov     ecx, ebx
0x694C95: call    ActiveEffect_Base_Remove; Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
0x694C9A: pop     esi
0x694C9B: pop     ebx
0x694C9C: retn
0x694C9D: mov     eax, [esi]
0x694C9F: mov     edx, [eax+4]
0x694CA2: push    edi
0x694CA3: mov     ecx, esi
0x694CA5: call    edx
0x694CA7: mov     ecx, eax; this
0x694CA9: call    TESObjectREFR_GetOrCreateLockData; Verified lock-data factory: returns the existing ExtraLockData payload or allocates a zeroed 12-byte payload, installs it in an ExtraLock wrapper, and returns it. An allocation failure leaves/sets a null-payload ExtraLock wrapper through ExtraDataList_SetLock.
0x694CAE: fld     dword ptr [ebx+18h]
0x694CB1: mov     edi, eax
0x694CB3: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x694CB8: mov     [edi], al
0x694CBA: mov     dword ptr [edi+4], 0
0x694CC1: mov     byte ptr [edi+8], 2
0x694CC5: mov     eax, [esi]
0x694CC7: mov     edx, [eax+4]
0x694CCA: mov     ecx, esi
0x694CCC: call    edx
0x694CCE: mov     ecx, eax; this
0x694CD0: call    TESObjectREFR_MarkLockDataAsModified; Verified modified-state propagation: if this reference has lock data, calls TESFormVtbl::MarkAsModified with mask 0x40; otherwise, if its linked-door chain has lock data, marks that linked-door reference with the same mask.
0x694CD5: mov     eax, [esi]
0x694CD7: mov     edx, [eax+4]
0x694CDA: mov     ecx, esi
0x694CDC: call    edx
0x694CDE: pop     edi
0x694CDF: pop     esi
0x694CE0: mov     ecx, eax; this
0x694CE2: pop     ebx
0x694CE3: jmp     TESObjectREFR_SetLockedFlagOnSelfOrLinkedDoor; Verified lock-state propagation helper: if this reference has an ExtraLock wrapper, sets its locked bit; otherwise follows its linked-door reference and sets that wrapper's locked bit. It then calls TESObjectREFR_MarkLockDataAsModified so the owning reference or linked door records change mask 0x40.
