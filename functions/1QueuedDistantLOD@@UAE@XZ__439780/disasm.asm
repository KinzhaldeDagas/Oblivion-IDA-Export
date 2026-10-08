0x439780: push    0FFFFFFFFh; Verified QueuedDistantLOD destruction: releases the Ni2DBuffer at DistantLODQueuedInstanceData+0x1C, frees the 0x20-byte context, releases the task's result/resource pointers, then frees the queued model path.
0x439782: push    offset ??1QueuedDistantLOD@@UAE@XZ_SEH
0x439787: mov     eax, large fs:0
0x43978D: push    eax
0x43978E: push    ecx
0x43978F: push    ebx
0x439790: push    ebp
0x439791: push    esi
0x439792: push    edi
0x439793: mov     eax, ___security_cookie
0x439798: xor     eax, esp
0x43979A: push    eax
0x43979B: lea     eax, [esp+24h+var_C]
0x43979F: mov     large fs:0, eax
0x4397A5: mov     esi, ecx
0x4397A7: mov     [esp+24h+var_10], esi
0x4397AB: mov     dword ptr [esi], offset ??_7QueuedDistantLOD@@6B@; const QueuedDistantLOD::`vftable'
0x4397B1: mov     ebx, [esi+38h]
0x4397B4: test    ebx, ebx
0x4397B6: mov     ebp, ds:InterlockedDecrement
0x4397BC: mov     [esp+24h+var_4], 1
0x4397C4: jz      short loc_4397EE
0x4397C6: mov     edi, [ebx+1Ch]; Verified destructor releases the Ni2DBuffer stored at the per-instance record's +0x1C, then frees the record. This is the cellLODBuffer retained by TESBoundObject_UpdateDistantLODInstances.
0x4397C9: test    edi, edi
0x4397CB: jz      short loc_4397E5
0x4397CD: lea     eax, [edi+4]
0x4397D0: push    eax; lpAddend
0x4397D1: call    ebp ; InterlockedDecrement
0x4397D3: test    eax, eax
0x4397D5: jnz     short loc_4397E5
0x4397D7: test    edi, edi
0x4397D9: jz      short loc_4397E5
0x4397DB: mov     edx, [edi]
0x4397DD: mov     eax, [edx]
0x4397DF: push    1
0x4397E1: mov     ecx, edi
0x4397E3: call    eax
0x4397E5: push    ebx
0x4397E6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4397EB: add     esp, 4
0x4397EE: mov     edi, [esi+3Ch]
0x4397F1: test    edi, edi
0x4397F3: mov     byte ptr [esp+24h+var_4], 0
0x4397F8: jz      short loc_439812
0x4397FA: lea     ecx, [edi+4]
0x4397FD: push    ecx; lpAddend
0x4397FE: call    ebp ; InterlockedDecrement
0x439800: test    eax, eax
0x439802: jnz     short loc_439812
0x439804: test    edi, edi
0x439806: jz      short loc_439812
0x439808: mov     edx, [edi]
0x43980A: mov     eax, [edx]
0x43980C: push    1
0x43980E: mov     ecx, edi
0x439810: call    eax
0x439812: mov     eax, [esi+28h]
0x439815: test    eax, eax
0x439817: mov     [esp+24h+var_4], 0FFFFFFFFh
0x43981F: jz      short loc_439827
0x439821: add     eax, 4
0x439824: push    eax; lpAddend
0x439825: call    ebp ; InterlockedDecrement
0x439827: mov     ecx, [esi+20h]
0x43982A: push    ecx
0x43982B: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x439831: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x439836: add     esp, 4
0x439839: mov     ecx, esi; this
0x43983B: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x439840: mov     ecx, [esp+24h+var_C]
0x439844: mov     large fs:0, ecx
0x43984B: pop     ecx
0x43984C: pop     edi
0x43984D: pop     esi
0x43984E: pop     ebp
0x43984F: pop     ebx
0x439850: add     esp, 10h
0x439853: retn
0x437320: push    esi
0x437321: mov     esi, ecx
0x437323: mov     eax, [esi+28h]
0x437326: test    eax, eax
0x437328: jz      short loc_437334
0x43732A: add     eax, 4
0x43732D: push    eax; lpAddend
0x43732E: call    ds:InterlockedDecrement
0x437334: mov     eax, [esi+20h]
0x437337: push    eax
0x437338: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x43733E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x437343: add     esp, 4
0x437346: mov     ecx, esi; this
0x437348: pop     esi
0x437349: jmp     ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x9AC7F0: mov     ecx, [ebp-10h]
0x9AC7F3: jmp     loc_437320
0x9AC7F8: mov     ecx, [ebp-10h]
0x9AC7FB: add     ecx, 3Ch ; '<'; slot
0x9AC7FE: jmp     NiPointerSlot_Release
0x9AC803: mov     edx, [esp+arg_4]
0x9AC807: lea     eax, [edx-14h]
0x9AC80A: mov     ecx, [edx-18h]
0x9AC80D: xor     ecx, eax
0x9AC80F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC814: mov     eax, offset stru_AD949C
0x9AC819: jmp     ___CxxFrameHandler3
