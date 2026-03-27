0x4CA5F0: test    byte ptr [ecx+24h], 1
0x4CA5F4: jnz     short loc_4CA61F
0x4CA5F6: mov     eax, [ecx+3Ch]
0x4CA5F9: test    eax, eax
0x4CA5FB: jz      short loc_4CA602
0x4CA5FD: mov     ecx, [eax+4]
0x4CA600: jmp     short loc_4CA604
0x4CA602: xor     ecx, ecx
0x4CA604: test    eax, eax
0x4CA606: jz      short loc_4CA60C
0x4CA608: mov     eax, [eax]
0x4CA60A: jmp     short loc_4CA60E
0x4CA60C: xor     eax, eax
0x4CA60E: sar     ecx, 5
0x4CA611: push    ecx
0x4CA612: sar     eax, 5
0x4CA615: push    eax
0x4CA616: call    sub_4EF1D0
0x4CA61B: add     esp, 8
0x4CA61E: retn
0x4CA61F: mov     eax, [ecx+0Ch]
0x4CA622: and     eax, 0FFFFFFh
0x4CA627: xor     edx, edx
0x4CA629: mov     ecx, 0Ah
0x4CA62E: div     ecx
0x4CA630: mov     eax, edx
0x4CA632: retn
