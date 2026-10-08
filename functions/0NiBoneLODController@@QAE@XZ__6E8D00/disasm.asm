0x6E8D00: push    0FFFFFFFFh
0x6E8D02: push    offset ??0NiBoneLODController@@QAE@XZ_SEH
0x6E8D07: mov     eax, large fs:0
0x6E8D0D: push    eax
0x6E8D0E: push    ecx
0x6E8D0F: push    esi
0x6E8D10: mov     eax, ds:0B30AACh
0x6E8D15: xor     eax, esp
0x6E8D17: push    eax
0x6E8D18: lea     eax, [esp+18h+var_C]
0x6E8D1C: mov     large fs:0, eax
0x6E8D22: mov     esi, ecx
0x6E8D24: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6E8D29: xor     eax, eax
0x6E8D2B: mov     dword ptr [esi], offset ??_7NiBoneLODController@@6B@; const NiBoneLODController::`vftable'
0x6E8D31: mov     dword ptr [esi+3Ch], 0FFFFFFFFh
0x6E8D38: mov     [esi+40h], eax
0x6E8D3B: mov     ecx, 1
0x6E8D40: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6E8D47: mov     [esi+4Ch], ax
0x6E8D4B: mov     [esi+52h], cx
0x6E8D4F: mov     [esi+4Eh], ax
0x6E8D53: mov     [esi+50h], ax
0x6E8D57: mov     [esi+48h], eax
0x6E8D5A: mov     dword ptr [esi+54h], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6E8D61: mov     [esi+5Ch], ax
0x6E8D65: mov     [esi+62h], cx
0x6E8D69: mov     [esi+5Eh], ax
0x6E8D6D: mov     [esi+60h], ax
0x6E8D71: mov     [esi+58h], eax
0x6E8D74: mov     [esi+64h], eax
0x6E8D77: mov     [esi+68h], eax
0x6E8D7A: mov     [esi+6Ch], eax
0x6E8D7D: mov     eax, esi
0x6E8D7F: mov     ecx, [esp+18h+var_C]
0x6E8D83: mov     large fs:0, ecx
0x6E8D8A: pop     ecx
0x6E8D8B: pop     esi
0x6E8D8C: add     esp, 10h
0x6E8D8F: retn
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
0x9C8160: mov     ecx, [ebp-10h]; this
0x9C8163: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C8168: mov     ecx, [ebp-10h]
0x9C816B: add     ecx, 44h ; 'D'
0x9C816E: jmp     loc_6E8C00
0x9C8173: mov     ecx, [ebp-10h]
0x9C8176: add     ecx, 54h ; 'T'
0x9C8179: jmp     loc_6E8C20
0x9C817E: mov     edx, [esp+arg_4]
0x9C8182: lea     eax, [edx-8]
0x9C8185: mov     ecx, [edx-0Ch]
0x9C8188: xor     ecx, eax
0x9C818A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C818F: mov     eax, offset stru_AF0450
0x9C8194: jmp     ___CxxFrameHandler3
