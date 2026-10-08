0x6DDEC0: push    0FFFFFFFFh
0x6DDEC2: push    offset ??0NiPathController@@QAE@XZ_SEH
0x6DDEC7: mov     eax, large fs:0
0x6DDECD: push    eax
0x6DDECE: push    ecx
0x6DDECF: push    ebx
0x6DDED0: push    esi
0x6DDED1: push    edi
0x6DDED2: mov     eax, ds:0B30AACh
0x6DDED7: xor     eax, esp
0x6DDED9: push    eax
0x6DDEDA: lea     eax, [esp+20h+var_C]
0x6DDEDE: mov     large fs:0, eax
0x6DDEE4: mov     ebx, ecx
0x6DDEE6: push    6Ch ; 'l'; Size
0x6DDEE8: call    FormHeapAlloc
0x6DDEED: mov     esi, eax
0x6DDEEF: add     esp, 4
0x6DDEF2: mov     [esp+20h+var_10], esi
0x6DDEF6: xor     edi, edi
0x6DDEF8: cmp     esi, edi
0x6DDEFA: mov     [esp+20h+var_4], edi
0x6DDEFE: jz      short loc_6DDF43
0x6DDF00: mov     ecx, esi; this
0x6DDF02: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6DDF07: mov     dword ptr [esi], offset ??_7NiPathController@@6B@; const NiPathController::`vftable'
0x6DDF0D: mov     [esi+48h], edi
0x6DDF10: mov     [esi+4Ch], edi
0x6DDF13: fldz
0x6DDF15: fst     dword ptr [esi+58h]
0x6DDF18: mov     [esi+40h], edi
0x6DDF1B: fst     dword ptr [esi+5Ch]
0x6DDF1E: mov     [esi+44h], edi
0x6DDF21: fstp    dword ptr [esi+64h]
0x6DDF24: mov     dword ptr [esi+68h], 1
0x6DDF2B: fld     dword ptr ds:0A30634h
0x6DDF31: mov     [esi+60h], di
0x6DDF35: fstp    dword ptr [esi+54h]
0x6DDF38: mov     [esi+50h], edi
0x6DDF3B: mov     word ptr [esi+3Ch], 3
0x6DDF41: jmp     short loc_6DDF45
0x6DDF43: xor     esi, esi
0x6DDF45: mov     eax, [esp+20h+arg_0]
0x6DDF49: push    eax
0x6DDF4A: push    esi
0x6DDF4B: mov     ecx, ebx
0x6DDF4D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6DDF55: call    sub_6DDC60
0x6DDF5A: mov     eax, esi
0x6DDF5C: mov     ecx, [esp+20h+var_C]
0x6DDF60: mov     large fs:0, ecx
0x6DDF67: pop     ecx
0x6DDF68: pop     edi
0x6DDF69: pop     esi
0x6DDF6A: pop     ebx
0x6DDF6B: add     esp, 10h
0x6DDF6E: retn    4
0x9C7EA0: mov     eax, [ebp-10h]
0x9C7EA3: push    eax
0x9C7EA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C7EA9: pop     ecx
0x9C7EAA: retn
0x9C7EAB: mov     ecx, [ebp-10h]; this
0x9C7EAE: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C7EB3: mov     ecx, [ebp-10h]
0x9C7EB6: add     ecx, 48h ; 'H'; slot
0x9C7EB9: jmp     NiPointerSlot_Release
0x9C7EBE: mov     ecx, [ebp-10h]
0x9C7EC1: add     ecx, 4Ch ; 'L'; slot
0x9C7EC4: jmp     NiPointerSlot_Release
0x9C7EC9: mov     edx, [esp+arg_4]
0x9C7ECD: lea     eax, [edx-10h]
0x9C7ED0: mov     ecx, [edx-14h]
0x9C7ED3: xor     ecx, eax
0x9C7ED5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7EDA: mov     eax, offset stru_AF0200
0x9C7EDF: jmp     ___CxxFrameHandler3
