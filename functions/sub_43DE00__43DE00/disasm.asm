0x43DE00: push    esi
0x43DE01: mov     esi, ecx
0x43DE03: mov     eax, [esi+10h]
0x43DE06: mov     edx, [esi+14h]
0x43DE09: push    esi
0x43DE0A: mov     cl, 10h
0x43DE0C: call    __allshr
0x43DE11: mov     ecx, TESDataHandler_g_PlayerRef
0x43DE17: movzx   eax, al
0x43DE1A: push    eax
0x43DE1B: call    sub_662F60
0x43DE20: mov     ecx, esi
0x43DE22: pop     esi
0x43DE23: jmp     sub_43DC00
