0x6E0840: push    esi
0x6E0841: mov     esi, ecx
0x6E0843: mov     dword ptr [esi], offset ??_7NiLightDimmerController@@6B@; const NiLightDimmerController::`vftable'
0x6E0849: call    ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x6E084E: test    byte ptr [esp+4+arg_0], 1
0x6E0853: jz      short loc_6E085E
0x6E0855: push    esi
0x6E0856: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E085B: add     esp, 4
0x6E085E: mov     eax, esi
0x6E0860: pop     esi
0x6E0861: retn    4
