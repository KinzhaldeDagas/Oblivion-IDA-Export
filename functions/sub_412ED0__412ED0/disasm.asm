0x412ED0: mov     eax, [esp+arg_0]
0x412ED4: push    esi
0x412ED5: push    eax; struct std::exception *
0x412ED6: mov     esi, ecx
0x412ED8: call    ??0exception@std@@QAE@ABV01@@Z; std::exception::exception(std::exception const &)
0x412EDD: mov     dword ptr [esi], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x412EE3: mov     eax, esi
0x412EE5: pop     esi
0x412EE6: retn    4
