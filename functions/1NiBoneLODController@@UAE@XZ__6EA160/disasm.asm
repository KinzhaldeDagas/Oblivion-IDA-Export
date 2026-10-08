0x6EA160: push    0FFFFFFFFh
0x6EA162: push    offset ??1NiBoneLODController@@UAE@XZ_SEH
0x6EA167: mov     eax, large fs:0
0x6EA16D: push    eax
0x6EA16E: push    ecx
0x6EA16F: push    esi
0x6EA170: mov     eax, ds:0B30AACh
0x6EA175: xor     eax, esp
0x6EA177: push    eax
0x6EA178: lea     eax, [esp+18h+var_C]
0x6EA17C: mov     large fs:0, eax
0x6EA182: mov     esi, ecx
0x6EA184: mov     [esp+18h+var_10], esi
0x6EA188: mov     dword ptr [esi], offset ??_7NiBoneLODController@@6B@; const NiBoneLODController::`vftable'
0x6EA18E: mov     [esp+18h+var_4], 3
0x6EA196: call    sub_6E9F60
0x6EA19B: mov     eax, [esi+64h]
0x6EA19E: push    eax
0x6EA19F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6EA1A4: mov     eax, [esi+58h]
0x6EA1A7: push    eax
0x6EA1A8: mov     dword ptr [esi+54h], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6EA1AF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6EA1B4: mov     eax, [esi+48h]
0x6EA1B7: push    eax
0x6EA1B8: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6EA1BF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6EA1C4: add     esp, 0Ch
0x6EA1C7: mov     ecx, esi; this
0x6EA1C9: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6EA1D1: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6EA1D6: mov     ecx, [esp+18h+var_C]
0x6EA1DA: mov     large fs:0, ecx
0x6EA1E1: pop     ecx
0x6EA1E2: pop     esi
0x6EA1E3: add     esp, 10h
0x6EA1E6: retn
0x6E8C00: mov     eax, [ecx+4]
0x6E8C03: push    eax
0x6E8C04: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6E8C0A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E8C0F: pop     ecx
0x6E8C10: retn
0x6E8C20: mov     eax, [ecx+4]
0x6E8C23: push    eax
0x6E8C24: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6E8C2A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E8C2F: pop     ecx
0x6E8C30: retn
0x9C81E0: mov     ecx, [ebp-10h]; this
0x9C81E3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C81E8: mov     ecx, [ebp-10h]
0x9C81EB: add     ecx, 44h ; 'D'
0x9C81EE: jmp     loc_6E8C00
0x9C81F3: mov     ecx, [ebp-10h]
0x9C81F6: add     ecx, 54h ; 'T'
0x9C81F9: jmp     loc_6E8C20
0x9C81FE: mov     ecx, [ebp-10h]
0x9C8201: add     ecx, 64h ; 'd'; void *
0x9C8204: jmp     sub_6C4090
0x9C8209: mov     edx, [esp+arg_4]
0x9C820D: lea     eax, [edx-8]
0x9C8210: mov     ecx, [edx-0Ch]
0x9C8213: xor     ecx, eax
0x9C8215: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C821A: mov     eax, offset stru_AF04C8
0x9C821F: jmp     ___CxxFrameHandler3
