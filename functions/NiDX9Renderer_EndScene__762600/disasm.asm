0x762600: push    esi
0x762601: mov     esi, ecx
0x762603: cmp     byte ptr [esi+6F0h], 0
0x76260A: jnz     short loc_762630
0x76260C: mov     eax, [esi+280h]
0x762612: mov     ecx, [eax]
0x762614: mov     edx, [ecx+0A8h]
0x76261A: push    eax
0x76261B: call    edx
0x76261D: test    eax, eax
0x76261F: jge     short loc_762625
0x762621: xor     al, al
0x762623: pop     esi
0x762624: retn
0x762625: mov     ecx, [esi+8B0h]
0x76262B: call    sub_777A40
0x762630: mov     al, 1
0x762632: pop     esi
0x762633: retn
