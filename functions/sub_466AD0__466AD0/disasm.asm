0x466AD0: fld1
0x466AD2: mov     eax, ds:0B38790h
0x466AD7: push    esi
0x466AD8: push    ecx
0x466AD9: fstp    [esp+8+duration]; duration
0x466ADC: push    1; unk2
0x466ADE: push    0; unk1
0x466AE0: push    eax; string
0x466AE1: mov     esi, ecx
0x466AE3: call    GameUI_QueueMessage
0x466AE8: add     esp, 10h
0x466AEB: push    0; int
0x466AED: push    offset aQuicksave; "quicksave"
0x466AF2: push    0; int
0x466AF4: mov     ecx, esi
0x466AF6: call    TESSaveLoadGame_SaveGame?
0x466AFB: pop     esi
0x466AFC: retn
