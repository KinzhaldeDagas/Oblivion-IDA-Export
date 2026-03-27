0x8B1100: push    esi
0x8B1101: mov     esi, ecx
0x8B1103: mov     ecx, ds:0BA7D98h
0x8B1109: mov     eax, [ecx]
0x8B110B: push    14h
0x8B110D: push    100h
0x8B1112: call    dword ptr [eax+10h]
0x8B1115: push    100h
0x8B111A: push    0
0x8B111C: push    eax
0x8B111D: mov     [esi], eax
0x8B111F: call    sub_8B18C0
0x8B1124: mov     ecx, [esi]
0x8B1126: push    100h
0x8B112B: push    0
0x8B112D: push    ecx
0x8B112E: mov     dword ptr [esi+4], 0
0x8B1135: mov     dword ptr [esi+8], 0Fh
0x8B113C: call    sub_8B18C0
0x8B1141: add     esp, 18h
0x8B1144: mov     dword ptr [esi+4], 0
0x8B114B: mov     eax, esi
0x8B114D: pop     esi
0x8B114E: retn
