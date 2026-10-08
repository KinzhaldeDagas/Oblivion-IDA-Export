0x6C5120: push    0FFFFFFFFh
0x6C5122: push    offset ??1NiControllerManager@@UAE@XZ_SEH
0x6C5127: mov     eax, large fs:0
0x6C512D: push    eax
0x6C512E: push    ecx
0x6C512F: push    ebp
0x6C5130: push    esi
0x6C5131: push    edi
0x6C5132: mov     eax, ds:0B30AACh
0x6C5137: xor     eax, esp
0x6C5139: push    eax
0x6C513A: lea     eax, [esp+20h+var_C]
0x6C513E: mov     large fs:0, eax
0x6C5144: mov     esi, ecx
0x6C5146: mov     [esp+20h+var_10], esi
0x6C514A: mov     dword ptr [esi], offset ??_7NiControllerManager@@6B@; const NiControllerManager::`vftable'
0x6C5150: lea     edi, [esi+3Ch]
0x6C5153: mov     ecx, edi
0x6C5155: mov     [esp+20h+var_4], 5
0x6C515D: call    sub_739670; Pass227: Clears NiScreenSpaceCamera +0x134 texture array and releases live NiScreenTexture pointers.
0x6C5162: mov     dword ptr [esi+78h], 0
0x6C5169: mov     ebp, [esi+7Ch]
0x6C516C: test    ebp, ebp
0x6C516E: mov     byte ptr [esp+20h+var_4], 4
0x6C5173: jz      short loc_6C5192
0x6C5175: lea     eax, [ebp+4]
0x6C5178: push    eax; lpAddend
0x6C5179: call    dword ptr ds:0A2807Ch
0x6C517F: test    eax, eax
0x6C5181: jnz     short loc_6C5192
0x6C5183: test    ebp, ebp
0x6C5185: jz      short loc_6C5192
0x6C5187: mov     edx, [ebp+0]
0x6C518A: mov     eax, [edx]
0x6C518C: push    1
0x6C518E: mov     ecx, ebp
0x6C5190: call    eax
0x6C5192: mov     eax, [esi+70h]
0x6C5195: test    eax, eax
0x6C5197: mov     byte ptr [esp+20h+var_4], 3
0x6C519C: jz      short loc_6C51BB
0x6C519E: mov     ecx, [eax-4]
0x6C51A1: lea     ebp, [eax-4]
0x6C51A4: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6C51A9: push    ecx; int
0x6C51AA: push    4; unsigned int
0x6C51AC: push    eax; void *
0x6C51AD: call    $LN21
0x6C51B2: push    ebp
0x6C51B3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C51B8: add     esp, 4
0x6C51BB: lea     ecx, [esi+58h]
0x6C51BE: mov     byte ptr [esp+20h+var_4], 2
0x6C51C3: call    ??1?$NiTStringPointerMap@PAVNiControllerSequence@@@@UAE@XZ; NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(void)
0x6C51C8: mov     eax, [esi+4Ch]
0x6C51CB: push    eax
0x6C51CC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C51D1: mov     eax, [edi+4]
0x6C51D4: add     esp, 4
0x6C51D7: test    eax, eax
0x6C51D9: mov     byte ptr [esp+20h+var_4], 0
0x6C51DE: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiControllerSequence@@@@@@6B@; const NiTArray<NiPointer<NiControllerSequence>>::`vftable'
0x6C51E4: jz      short loc_6C5203
0x6C51E6: mov     edx, [eax-4]
0x6C51E9: lea     edi, [eax-4]
0x6C51EC: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6C51F1: push    edx; int
0x6C51F2: push    4; unsigned int
0x6C51F4: push    eax; void *
0x6C51F5: call    $LN21
0x6C51FA: push    edi
0x6C51FB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C5200: add     esp, 4
0x6C5203: mov     ecx, esi; this
0x6C5205: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C520D: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6C5212: mov     ecx, dword ptr [esp+20h+var_C]
0x6C5216: mov     large fs:0, ecx
0x6C521D: pop     ecx
0x6C521E: pop     edi
0x6C521F: pop     esi
0x6C5220: pop     ebp
0x6C5221: add     esp, 10h
0x6C5224: retn
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
0x9C72F0: mov     ecx, [ebp-10h]; this
0x9C72F3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C72F8: mov     ecx, [ebp-10h]
0x9C72FB: add     ecx, 3Ch ; '<'
0x9C72FE: jmp     loc_6C44E0
0x9C7303: mov     ecx, [ebp-10h]
0x9C7306: add     ecx, 4Ch ; 'L'; void *
0x9C7309: jmp     sub_6C4090
0x9C730E: mov     ecx, [ebp-10h]
0x9C7311: add     ecx, 58h ; 'X'
0x9C7314: jmp     j_??1?$NiTStringPointerMap@PAVNiControllerSequence@@@@UAE@XZ; NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(void)
0x9C7319: mov     ecx, [ebp-10h]
0x9C731C: add     ecx, 70h ; 'p'
0x9C731F: jmp     loc_6C4760
0x9C7324: mov     ecx, [ebp-10h]
0x9C7327: add     ecx, 7Ch ; '|'; slot
0x9C732A: jmp     NiPointerSlot_Release
0x9C732F: mov     edx, [esp+arg_4]
0x9C7333: lea     eax, [edx-10h]
0x9C7336: mov     ecx, [edx-14h]
0x9C7339: xor     ecx, eax
0x9C733B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7340: mov     eax, offset stru_AEF74C
0x9C7345: jmp     ___CxxFrameHandler3
