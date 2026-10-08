0x6E0D60: push    esi
0x6E0D61: mov     esi, ecx
0x6E0D63: mov     dword ptr [esi], offset ??_7NiLightColorController@@6B@; const NiLightColorController::`vftable'
0x6E0D69: call    ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x6E0D6E: test    byte ptr [esp+4+arg_0], 1
0x6E0D73: jz      short loc_6E0D7E
0x6E0D75: push    esi
0x6E0D76: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E0D7B: add     esp, 4
0x6E0D7E: mov     eax, esi
0x6E0D80: pop     esi
0x6E0D81: retn    4
