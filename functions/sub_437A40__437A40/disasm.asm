0x437A40: mov     eax, [ecx+20h]
0x437A43: add     eax, 0A0h ; ' '
0x437A48: mov     eax, [eax+4]
0x437A4B: test    eax, eax
0x437A4D: jnz     short loc_437A54
0x437A4F: mov     eax, offset EmptyString
0x437A54: push    eax
0x437A55: mov     eax, [esp+4+arg_0]
0x437A59: push    offset aQueuedHeadForN; "Queued head for NPC %s"
0x437A5E: push    eax
0x437A5F: call    __sprintf
0x437A64: add     esp, 0Ch
0x437A67: mov     al, 1
0x437A69: retn    4
