0x701AD0: mov     ecx, ds:0B3F940h; 3DTheft decode 2026-05-16: if manager exists, calls manager vfunc +0x60 with args (1, manager+0x19C, 0, 0), then clears byte +0x1B0. manager+0x19C is the observed embedded signal-task argument.
0x701AD6: test    ecx, ecx
0x701AD8: jz      short locret_701AFB
0x701ADA: mov     eax, [ecx]
0x701ADC: mov     eax, [eax+60h]
0x701ADF: push    0
0x701AE1: push    0
0x701AE3: lea     edx, [ecx+19Ch]
0x701AE9: push    edx
0x701AEA: push    1
0x701AEC: call    eax
0x701AEE: mov     ecx, ds:0B3F940h
0x701AF4: mov     byte ptr [ecx+1B0h], 0
0x701AFB: retn
