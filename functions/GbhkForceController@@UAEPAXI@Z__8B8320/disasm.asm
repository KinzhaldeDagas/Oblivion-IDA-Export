0x8B8320: push    esi
0x8B8321: mov     esi, ecx
0x8B8323: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x8B8328: test    byte ptr [esp+4+arg_0], 1
0x8B832D: jz      short loc_8B8346
0x8B832F: test    esi, esi
0x8B8331: jz      short loc_8B8346
0x8B8333: movzx   eax, byte ptr [esi-1]
0x8B8337: mov     ecx, esi
0x8B8339: sub     ecx, eax
0x8B833B: push    ecx; void *
0x8B833C: mov     ecx, offset FormHeap
0x8B8341: call    MemoryHeap_Free_checked
0x8B8346: mov     eax, esi
0x8B8348: pop     esi
0x8B8349: retn    4
