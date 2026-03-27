0x8B0E10: push    esi
0x8B0E11: mov     esi, ecx
0x8B0E13: mov     ecx, ds:0BA7D98h
0x8B0E19: mov     eax, [ecx]
0x8B0E1B: push    14h
0x8B0E1D: push    80h ; '€'
0x8B0E22: call    dword ptr [eax+10h]
0x8B0E25: push    80h ; '€'
0x8B0E2A: push    0
0x8B0E2C: push    eax
0x8B0E2D: mov     [esi], eax
0x8B0E2F: call    sub_8B18C0
0x8B0E34: mov     ecx, [esi]
0x8B0E36: push    80h ; '€'
0x8B0E3B: push    0
0x8B0E3D: push    ecx
0x8B0E3E: mov     dword ptr [esi+4], 0
0x8B0E45: mov     dword ptr [esi+8], 0Fh
0x8B0E4C: call    sub_8B18C0
0x8B0E51: add     esp, 18h
0x8B0E54: mov     dword ptr [esi+4], 0
0x8B0E5B: mov     eax, esi
0x8B0E5D: pop     esi
0x8B0E5E: retn
