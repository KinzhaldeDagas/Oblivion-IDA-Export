0x8A7170: mov     eax, ds:0BA9DE4h
0x8A7175: mov     edx, large fs:2Ch
0x8A717C: mov     eax, [edx+eax*4]
0x8A717F: mov     eax, [eax+19Ch]
0x8A7185: test    eax, eax
0x8A7187: jnz     short loc_8A718E
0x8A7189: mov     eax, ds:0BA7D9Ch
0x8A718E: mov     edx, [ecx]
0x8A7190: push    esi
0x8A7191: mov     esi, [esp+4+arg_8]
0x8A7195: push    esi
0x8A7196: mov     esi, [esp+8+arg_4]
0x8A719A: mov     eax, [eax+esi*4+0BCh]
0x8A71A1: push    eax
0x8A71A2: mov     eax, [esp+0Ch+arg_0]
0x8A71A6: push    eax
0x8A71A7: call    dword ptr [edx+14h]
0x8A71AA: pop     esi
0x8A71AB: retn    0Ch
