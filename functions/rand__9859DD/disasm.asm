0x9859DD: call    __getptd
0x9859E2: mov     ecx, [eax+14h]
0x9859E5: imul    ecx, 343FDh
0x9859EB: add     ecx, 269EC3h
0x9859F1: mov     [eax+14h], ecx
0x9859F4: mov     eax, ecx
0x9859F6: shr     eax, 10h
0x9859F9: and     eax, 7FFFh
0x9859FE: retn
