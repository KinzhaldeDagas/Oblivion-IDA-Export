0x6C5520: push    0FFFFFFFFh
0x6C5522: push    offset SEH_6C5520
0x6C5527: mov     eax, large fs:0
0x6C552D: push    eax
0x6C552E: push    ecx
0x6C552F: push    ebx
0x6C5530: push    esi
0x6C5531: mov     eax, ds:0B30AACh
0x6C5536: xor     eax, esp
0x6C5538: push    eax
0x6C5539: lea     eax, [esp+1Ch+var_C]
0x6C553D: mov     large fs:0, eax
0x6C5543: mov     esi, ecx
0x6C5545: mov     [esp+1Ch+var_10], esi
0x6C5549: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6C554E: xor     ebx, ebx
0x6C5550: mov     dword ptr [esi], offset ??_7NiControllerManager@@6B@; const NiControllerManager::`vftable'
0x6C5556: mov     [esp+1Ch+var_4], ebx
0x6C555A: mov     dword ptr [esi+3Ch], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C5561: mov     [esi+44h], bx
0x6C5565: mov     word ptr [esi+4Ah], 0Ah
0x6C556B: mov     [esi+46h], bx
0x6C556F: mov     [esi+48h], bx
0x6C5573: mov     [esi+40h], ebx
0x6C5576: mov     [esi+4Ch], ebx
0x6C5579: mov     [esi+50h], ebx
0x6C557C: mov     [esi+54h], ebx
0x6C557F: xor     ecx, ecx
0x6C5581: mov     eax, 25h ; '%'
0x6C5586: mov     [esi+5Ch], eax
0x6C5589: mov     edx, 4
0x6C558E: mul     edx
0x6C5590: seto    cl
0x6C5593: mov     byte ptr [esp+1Ch+var_4], 3
0x6C5598: mov     dword ptr [esi+58h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiControllerSequence@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiControllerSequence *>::`vftable'
0x6C559F: mov     [esi+64h], ebx
0x6C55A2: neg     ecx
0x6C55A4: or      ecx, eax
0x6C55A6: push    ecx; Size
0x6C55A7: call    FormHeapAlloc
0x6C55AC: mov     ecx, [esi+5Ch]
0x6C55AF: add     ecx, ecx
0x6C55B1: add     ecx, ecx
0x6C55B3: push    ecx
0x6C55B4: push    ebx
0x6C55B5: push    eax
0x6C55B6: mov     [esi+60h], eax
0x6C55B9: call    __memset
0x6C55BE: add     esp, 10h
0x6C55C1: mov     [esi+68h], bl
0x6C55C4: mov     dword ptr [esi+58h], offset ??_7?$NiTStringPointerMap@PAVNiControllerSequence@@@@6B@; const NiTStringPointerMap<NiControllerSequence *>::`vftable'
0x6C55CB: mov     [esi+6Ch], bl
0x6C55CE: mov     [esi+70h], ebx
0x6C55D1: mov     [esi+74h], ebx
0x6C55D4: mov     [esi+78h], ebx
0x6C55D7: mov     [esi+7Ch], ebx
0x6C55DA: mov     eax, esi
0x6C55DC: mov     ecx, [esp+1Ch+var_C]
0x6C55E0: mov     large fs:0, ecx
0x6C55E7: pop     ecx
0x6C55E8: pop     esi
0x6C55E9: pop     ebx
0x6C55EA: add     esp, 10h
0x6C55ED: retn
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
0x9C73B0: mov     ecx, [ebp-10h]; this
0x9C73B3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C73B8: mov     ecx, [ebp-10h]
0x9C73BB: add     ecx, 3Ch ; '<'
0x9C73BE: jmp     loc_6C44E0
0x9C73C3: mov     ecx, [ebp-10h]
0x9C73C6: add     ecx, 4Ch ; 'L'; void *
0x9C73C9: jmp     sub_6C4090
0x9C73CE: mov     ecx, [ebp-10h]
0x9C73D1: add     ecx, 58h ; 'X'
0x9C73D4: jmp     j_??1?$NiTStringPointerMap@PAVNiControllerSequence@@@@UAE@XZ; NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(void)
0x9C73D9: mov     edx, [esp+arg_4]
0x9C73DD: lea     eax, [edx-0Ch]
0x9C73E0: mov     ecx, [edx-10h]
0x9C73E3: xor     ecx, eax
0x9C73E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C73EA: mov     eax, offset stru_AEF800
0x9C73EF: jmp     ___CxxFrameHandler3
