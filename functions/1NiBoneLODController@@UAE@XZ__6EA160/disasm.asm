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
0x6EA19F: call    FormHeapFree
0x6EA1A4: mov     eax, [esi+58h]
0x6EA1A7: push    eax
0x6EA1A8: mov     dword ptr [esi+54h], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6EA1AF: call    FormHeapFree
0x6EA1B4: mov     eax, [esi+48h]
0x6EA1B7: push    eax
0x6EA1B8: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6EA1BF: call    FormHeapFree
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
