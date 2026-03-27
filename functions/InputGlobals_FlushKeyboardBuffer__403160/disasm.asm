0x403160: push    ecx
0x403161: cmp     dword ptr [ecx+28h], 0
0x403165: jz      short loc_403185
0x403167: mov     eax, [ecx+28h]
0x40316A: push    0
0x40316C: lea     edx, [esp+8+var_4]
0x403170: push    edx
0x403171: push    0
0x403173: mov     [esp+10h+var_4], 0FFFFFFFFh
0x40317B: mov     ecx, [eax]
0x40317D: push    14h
0x40317F: push    eax
0x403180: mov     eax, [ecx+28h]
0x403183: call    eax
0x403185: pop     ecx
0x403186: retn
