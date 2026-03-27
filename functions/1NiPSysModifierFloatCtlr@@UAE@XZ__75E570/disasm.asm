0x75E570: push    esi
0x75E571: mov     esi, ecx
0x75E573: mov     eax, [esi+40h]
0x75E576: push    edi
0x75E577: push    eax
0x75E578: mov     dword ptr [esi], offset ??_7NiPSysModifierCtlr@@6B@; const NiPSysModifierCtlr::`vftable'
0x75E57E: call    FormHeapFree
0x75E583: mov     edi, [esi+3Ch]
0x75E586: add     esp, 4
0x75E589: test    edi, edi
0x75E58B: jz      short loc_75E5A9
0x75E58D: lea     ecx, [edi+4]
0x75E590: push    ecx; lpAddend
0x75E591: call    dword ptr ds:0A2807Ch
0x75E597: test    eax, eax
0x75E599: jnz     short loc_75E5A9
0x75E59B: test    edi, edi
0x75E59D: jz      short loc_75E5A9
0x75E59F: mov     edx, [edi]
0x75E5A1: mov     eax, [edx]
0x75E5A3: push    1
0x75E5A5: mov     ecx, edi
0x75E5A7: call    eax
0x75E5A9: pop     edi
0x75E5AA: mov     ecx, esi; this
0x75E5AC: pop     esi
0x75E5AD: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
