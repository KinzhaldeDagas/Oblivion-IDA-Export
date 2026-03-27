0x701AD0: mov     ecx, ds:0B3F940h
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
