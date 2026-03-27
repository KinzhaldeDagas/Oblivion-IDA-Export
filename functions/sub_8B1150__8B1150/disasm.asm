0x8B1150: push    esi
0x8B1151: mov     eax, ecx
0x8B1153: mov     esi, [eax+8]
0x8B1156: mov     ecx, ds:0BA7D98h
0x8B115C: mov     eax, [eax]
0x8B115E: mov     edx, [ecx]
0x8B1160: push    14h
0x8B1162: inc     esi
0x8B1163: shl     esi, 4
0x8B1166: push    esi
0x8B1167: push    eax
0x8B1168: call    dword ptr [edx+14h]
0x8B116B: pop     esi
0x8B116C: retn
