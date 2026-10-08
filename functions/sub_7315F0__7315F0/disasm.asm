0x7315F0: mov     eax, ds:0B3FFB4h; Pass223: Registers startup callback 0x00730D80 and shutdown callback 0x00731290 through 0x00747C20.
0x7315F5: push    esi
0x7315F6: mov     esi, ecx
0x7315F8: mov     ecx, eax
0x7315FA: add     eax, 1
0x7315FD: test    ecx, ecx
0x7315FF: mov     ds:0B3FFB4h, eax
0x731604: jnz     short loc_731618
0x731606: push    offset sub_731290; Pass223/229: Engine shutdown property callback; unregisters Ni*Property factories and clears default property globals.
0x73160B: push    offset sub_730D80; Pass223/229/240: Engine startup property callback; seeds default Ni*Property globals and default plain NiFogProperty, then registers NIF factories.
0x731610: call    sub_747C20; Pass223: Stores engine startup/shutdown callback pair for default property lifecycle.
0x731615: add     esp, 8
0x731618: mov     eax, esi
0x73161A: pop     esi
0x73161B: retn
