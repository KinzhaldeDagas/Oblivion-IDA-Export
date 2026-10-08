0x6DEE80: push    esi
0x6DEE81: mov     esi, ecx
0x6DEE83: mov     dword ptr [esi], offset ??_7NiMaterialColorController@@6B@; const NiMaterialColorController::`vftable'
0x6DEE89: call    ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x6DEE8E: test    byte ptr [esp+4+arg_0], 1
0x6DEE93: jz      short loc_6DEE9E
0x6DEE95: push    esi
0x6DEE96: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6DEE9B: add     esp, 4
0x6DEE9E: mov     eax, esi
0x6DEEA0: pop     esi
0x6DEEA1: retn    4
