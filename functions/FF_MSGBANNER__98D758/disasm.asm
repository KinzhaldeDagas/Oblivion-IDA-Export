0x98D758: push    3; Mode
0x98D75A: call    __set_error_mode
0x98D75F: cmp     eax, 1
0x98D762: pop     ecx
0x98D763: jz      short loc_98D77A
0x98D765: push    3; Mode
0x98D767: call    __set_error_mode
0x98D76C: test    eax, eax
0x98D76E: pop     ecx
0x98D76F: jnz     short locret_98D790
0x98D771: cmp     dword_B30DA8, 1
0x98D778: jnz     short locret_98D790
0x98D77A: push    0FCh ; 'ü'
0x98D77F: call    __NMSG_WRITE
0x98D784: push    0FFh
0x98D789: call    __NMSG_WRITE
0x98D78E: pop     ecx
0x98D78F: pop     ecx
0x98D790: retn
