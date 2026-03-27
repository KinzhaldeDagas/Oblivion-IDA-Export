0x897AC0: mov     ecx, [ecx+10h]
0x897AC3: test    ecx, ecx
0x897AC5: mov     al, 1
0x897AC7: jz      short loc_897AE3
0x897AC9: mov     ecx, [ecx+8]
0x897ACC: test    ecx, ecx
0x897ACE: jz      short loc_897AD5
0x897AD0: lea     edx, [ecx+14h]
0x897AD3: jmp     short loc_897AD7
0x897AD5: xor     edx, edx
0x897AD7: cmp     [edx+18h], al
0x897ADA: jnz     short loc_897AE3
0x897ADC: mov     ecx, [edx+10h]
0x897ADF: add     ecx, edx
0x897AE1: jmp     short loc_897AE5
0x897AE3: xor     ecx, ecx
0x897AE5: test    ecx, ecx
0x897AE7: jz      short locret_897AF9
0x897AE9: mov     ecx, [ecx+50h]
0x897AEC: mov     eax, [ecx]
0x897AEE: mov     edx, [eax+8]
0x897AF1: call    edx
0x897AF3: cmp     eax, 6
0x897AF6: setnl   al
0x897AF9: retn
