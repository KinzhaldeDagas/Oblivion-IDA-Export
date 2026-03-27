0x75E700: push    esi
0x75E701: mov     esi, ecx
0x75E703: mov     eax, [esi+40h]
0x75E706: push    edi
0x75E707: push    eax
0x75E708: mov     dword ptr [esi], offset ??_7NiPSysModifierCtlr@@6B@; const NiPSysModifierCtlr::`vftable'
0x75E70E: call    FormHeapFree
0x75E713: mov     edi, [esi+3Ch]
0x75E716: add     esp, 4
0x75E719: test    edi, edi
0x75E71B: jz      short loc_75E739
0x75E71D: lea     ecx, [edi+4]
0x75E720: push    ecx; lpAddend
0x75E721: call    dword ptr ds:0A2807Ch
0x75E727: test    eax, eax
0x75E729: jnz     short loc_75E739
0x75E72B: test    edi, edi
0x75E72D: jz      short loc_75E739
0x75E72F: mov     edx, [edi]
0x75E731: mov     eax, [edx]
0x75E733: push    1
0x75E735: mov     ecx, edi
0x75E737: call    eax
0x75E739: mov     ecx, esi; this
0x75E73B: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x75E740: test    [esp+8+arg_0], 1
0x75E745: jz      short loc_75E750
0x75E747: push    esi
0x75E748: call    FormHeapFree
0x75E74D: add     esp, 4
0x75E750: pop     edi
0x75E751: mov     eax, esi
0x75E753: pop     esi
0x75E754: retn    4
