0x763DE0: mov     eax, ds:0B42160h
0x763DE5: test    eax, eax
0x763DE7: jnz     locret_763E71
0x763DED: mov     eax, ds:0B42158h
0x763DF2: test    eax, eax
0x763DF4: jnz     short loc_763E1F
0x763DF6: push    offset aD3d9_dll; "D3D9.DLL"
0x763DFB: call    dword ptr ds:0A28118h
0x763E01: test    eax, eax
0x763E03: mov     ds:0B42150h, eax
0x763E08: jz      short loc_763E6C
0x763E0A: push    offset aDirect3dcreate; "Direct3DCreate9"
0x763E0F: push    eax; hModule
0x763E10: call    dword ptr ds:0A2811Ch
0x763E16: test    eax, eax
0x763E18: mov     ds:0B42158h, eax
0x763E1D: jz      short loc_763E6C
0x763E1F: push    esi
0x763E20: push    20h ; ' '
0x763E22: call    eax ; dword_B42158
0x763E24: mov     esi, eax
0x763E26: test    esi, esi
0x763E28: jz      short loc_763E6B
0x763E2A: push    14h; Size
0x763E2C: call    FormHeapAlloc
0x763E31: add     esp, 4
0x763E34: test    eax, eax
0x763E36: jz      short loc_763E59
0x763E38: push    offset off_B28E00
0x763E3D: push    esi
0x763E3E: mov     ecx, eax
0x763E40: call    sub_775DF0
0x763E45: mov     ds:0B42160h, eax
0x763E4A: mov     eax, [esi]
0x763E4C: mov     ecx, [eax+8]
0x763E4F: push    esi
0x763E50: call    ecx
0x763E52: mov     eax, ds:0B42160h
0x763E57: pop     esi
0x763E58: retn
0x763E59: mov     dword ptr ds:0B42160h, 0
0x763E63: mov     eax, [esi]
0x763E65: mov     ecx, [eax+8]
0x763E68: push    esi
0x763E69: call    ecx
0x763E6B: pop     esi
0x763E6C: mov     eax, ds:0B42160h
0x763E71: retn
