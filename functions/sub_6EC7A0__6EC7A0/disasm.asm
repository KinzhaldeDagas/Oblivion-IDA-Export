0x6EC7A0: push    esi
0x6EC7A1: mov     esi, [esp+4+arg_0]
0x6EC7A5: push    esi
0x6EC7A6: call    NiTimeController_LoadBinary; Load persistent NiTimeController state: flags +0x08, frequency/phase/key bounds, and target/next links. Legacy migration clears flag bit 0x20 before stream version 0x0A01006D. Runtime time caches and update bytes are constructor state, not serialized.
0x6EC7AB: mov     ecx, esi
0x6EC7AD: call    sub_712A20
0x6EC7B2: pop     esi
0x6EC7B3: retn    4
