0x583DD0: mov     eax, [esp+arg_0]
0x583DD4: push    esi
0x583DD5: mov     esi, ecx
0x583DD7: add     eax, 0FFFFFFFBh
0x583DDA: mov     [esi+0Ch], eax
0x583DDD: jns     short loc_583DEC
0x583DDF: call    UI_GetVirtualScreenWidth; Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
0x583DE4: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x583DE9: mov     [esi+0Ch], eax
0x583DEC: pop     esi
0x583DED: retn    4
