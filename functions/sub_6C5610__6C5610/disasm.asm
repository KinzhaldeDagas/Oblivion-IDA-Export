0x6C5610: push    0FFFFFFFFh
0x6C5612: push    offset SEH_6C5610
0x6C5617: mov     eax, large fs:0
0x6C561D: push    eax
0x6C561E: push    ecx
0x6C561F: push    ebx
0x6C5620: push    ebp
0x6C5621: push    esi
0x6C5622: push    edi
0x6C5623: mov     eax, ds:0B30AACh
0x6C5628: xor     eax, esp
0x6C562A: push    eax
0x6C562B: lea     eax, [esp+24h+var_C]
0x6C562F: mov     large fs:0, eax
0x6C5635: mov     esi, ecx
0x6C5637: mov     [esp+24h+var_10], esi
0x6C563B: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6C5640: xor     ebx, ebx
0x6C5642: mov     dword ptr [esi], offset ??_7NiControllerManager@@6B@; const NiControllerManager::`vftable'
0x6C5648: mov     [esp+24h+var_4], ebx
0x6C564C: mov     dword ptr [esi+3Ch], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C5653: mov     [esi+44h], bx
0x6C5657: mov     word ptr [esi+4Ah], 0Ah
0x6C565D: mov     [esi+46h], bx
0x6C5661: mov     [esi+48h], bx
0x6C5665: mov     [esi+40h], ebx
0x6C5668: mov     [esi+4Ch], ebx
0x6C566B: mov     [esi+50h], ebx
0x6C566E: mov     [esi+54h], ebx
0x6C5671: xor     ecx, ecx
0x6C5673: mov     eax, 25h ; '%'
0x6C5678: mov     [esi+5Ch], eax
0x6C567B: mov     edx, 4
0x6C5680: mul     edx
0x6C5682: seto    cl
0x6C5685: mov     byte ptr [esp+24h+var_4], 3
0x6C568A: mov     dword ptr [esi+58h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiControllerSequence@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiControllerSequence *>::`vftable'
0x6C5691: mov     [esi+64h], ebx
0x6C5694: neg     ecx
0x6C5696: or      ecx, eax
0x6C5698: push    ecx; Size
0x6C5699: call    FormHeapAlloc
0x6C569E: mov     ecx, [esi+5Ch]
0x6C56A1: add     ecx, ecx
0x6C56A3: add     ecx, ecx
0x6C56A5: push    ecx
0x6C56A6: push    ebx
0x6C56A7: push    eax
0x6C56A8: mov     [esi+60h], eax
0x6C56AB: call    __memset
0x6C56B0: add     esp, 10h
0x6C56B3: mov     [esi+68h], bl
0x6C56B6: mov     dword ptr [esi+58h], offset ??_7?$NiTStringPointerMap@PAVNiControllerSequence@@@@6B@; const NiTStringPointerMap<NiControllerSequence *>::`vftable'
0x6C56BD: mov     dl, byte ptr [esp+24h+arg_4]
0x6C56C1: mov     [esi+6Ch], dl
0x6C56C4: mov     [esi+70h], ebx
0x6C56C7: mov     [esi+74h], ebx
0x6C56CA: mov     [esi+78h], ebx
0x6C56CD: mov     [esi+7Ch], ebx
0x6C56D0: mov     edi, [esp+24h+arg_0]
0x6C56D4: push    edi
0x6C56D5: mov     ecx, esi
0x6C56D7: mov     byte ptr [esp+28h+var_4], 7
0x6C56DC: call    NiTimeController__SetTarget; Retargets a controller while holding a temporary self-reference. Removes it from the previous NiObjectNET controller chain, assigns non-owning target +0x30, avoids duplicate insertion, then inserts into the new target's refcounted chain and propagates manager-controlled target state when applicable.
0x6C56E1: push    20h ; ' '; Size
0x6C56E3: call    FormHeapAlloc
0x6C56E8: add     esp, 4
0x6C56EB: mov     [esp+24h+arg_4], eax
0x6C56EF: cmp     eax, ebx
0x6C56F1: mov     byte ptr [esp+24h+var_4], 8
0x6C56F6: jz      short loc_6C5704
0x6C56F8: push    edi
0x6C56F9: mov     ecx, eax; this
0x6C56FB: call    ??0NiDefaultAVObjectPalette@@QAE@XZ; NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(void)
0x6C5700: mov     ebp, eax
0x6C5702: jmp     short loc_6C5706
0x6C5704: xor     ebp, ebp
0x6C5706: mov     edi, [esi+7Ch]
0x6C5709: cmp     edi, ebp
0x6C570B: mov     byte ptr [esp+24h+var_4], 7
0x6C5710: jz      short loc_6C5743
0x6C5712: cmp     edi, ebx
0x6C5714: jz      short loc_6C5732
0x6C5716: lea     eax, [edi+4]
0x6C5719: push    eax; lpAddend
0x6C571A: call    dword ptr ds:0A2807Ch
0x6C5720: test    eax, eax
0x6C5722: jnz     short loc_6C5732
0x6C5724: cmp     edi, ebx
0x6C5726: jz      short loc_6C5732
0x6C5728: mov     edx, [edi]
0x6C572A: mov     eax, [edx]
0x6C572C: push    1
0x6C572E: mov     ecx, edi
0x6C5730: call    eax
0x6C5732: cmp     ebp, ebx
0x6C5734: mov     [esi+7Ch], ebp
0x6C5737: jz      short loc_6C5743
0x6C5739: add     ebp, 4
0x6C573C: push    ebp; lpAddend
0x6C573D: call    dword ptr ds:0A28078h
0x6C5743: mov     eax, esi
0x6C5745: mov     ecx, dword ptr [esp+24h+var_C]
0x6C5749: mov     large fs:0, ecx
0x6C5750: pop     ecx
0x6C5751: pop     edi
0x6C5752: pop     esi
0x6C5753: pop     ebp
0x6C5754: pop     ebx
0x6C5755: add     esp, 10h
0x6C5758: retn    8
0x6C44E0: mov     eax, [ecx+4]
0x6C44E3: test    eax, eax
0x6C44E5: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C44EB: jz      short locret_6C450C
0x6C44ED: mov     ecx, [eax-4]
0x6C44F0: push    esi
0x6C44F1: lea     esi, [eax-4]
0x6C44F4: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6C44F9: push    ecx; int
0x6C44FA: push    4; unsigned int
0x6C44FC: push    eax; void *
0x6C44FD: call    $LN21
0x6C4502: push    esi
0x6C4503: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C4508: add     esp, 4
0x6C450B: pop     esi
0x6C450C: retn
0x6C4760: mov     eax, [ecx]
0x6C4762: test    eax, eax
0x6C4764: jz      short locret_6C4785
0x6C4766: mov     ecx, [eax-4]
0x6C4769: push    esi
0x6C476A: lea     esi, [eax-4]
0x6C476D: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6C4772: push    ecx; int
0x6C4773: push    4; unsigned int
0x6C4775: push    eax; void *
0x6C4776: call    $LN21
0x6C477B: push    esi
0x6C477C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C4781: add     esp, 4
0x6C4784: pop     esi
0x6C4785: retn
0x9C7400: mov     ecx, [ebp-10h]; this
0x9C7403: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C7408: mov     ecx, [ebp-10h]
0x9C740B: add     ecx, 3Ch ; '<'
0x9C740E: jmp     loc_6C44E0
0x9C7413: mov     ecx, [ebp-10h]
0x9C7416: add     ecx, 4Ch ; 'L'; void *
0x9C7419: jmp     sub_6C4090
0x9C741E: mov     ecx, [ebp-10h]
0x9C7421: add     ecx, 58h ; 'X'
0x9C7424: jmp     j_??1?$NiTStringPointerMap@PAVNiControllerSequence@@@@UAE@XZ; NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(void)
0x9C7429: mov     ecx, [ebp-10h]
0x9C742C: add     ecx, 70h ; 'p'
0x9C742F: jmp     loc_6C4760
0x9C7434: mov     ecx, [ebp-10h]
0x9C7437: add     ecx, 7Ch ; '|'; slot
0x9C743A: jmp     NiPointerSlot_Release
0x9C743F: mov     eax, [ebp+8]
0x9C7442: push    eax
0x9C7443: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C7448: pop     ecx
0x9C7449: retn
0x9C744A: mov     edx, [esp+arg_4]
0x9C744E: lea     eax, [edx-14h]
0x9C7451: mov     ecx, [edx-18h]
0x9C7454: xor     ecx, eax
0x9C7456: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C745B: mov     eax, offset stru_AEF854
0x9C7460: jmp     ___CxxFrameHandler3
