0x6FD6E0: push    0FFFFFFFFh
0x6FD6E2: push    offset SEH_8C8900
0x6FD6E7: mov     eax, large fs:0
0x6FD6ED: push    eax
0x6FD6EE: push    ecx
0x6FD6EF: mov     eax, ds:0B30AACh
0x6FD6F4: xor     eax, esp
0x6FD6F6: push    eax
0x6FD6F7: lea     eax, [esp+14h+var_C]
0x6FD6FB: mov     large fs:0, eax
0x6FD701: push    54h ; 'T'; Size
0x6FD703: call    FormHeapAlloc
0x6FD708: add     esp, 4
0x6FD70B: mov     [esp+14h+var_10], eax
0x6FD70F: test    eax, eax
0x6FD711: mov     [esp+14h+var_4], 0
0x6FD719: jz      short loc_6FD732
0x6FD71B: mov     ecx, eax
0x6FD71D: call    sub_6FD530
0x6FD722: mov     ecx, [esp+14h+var_C]
0x6FD726: mov     large fs:0, ecx
0x6FD72D: pop     ecx
0x6FD72E: add     esp, 10h
0x6FD731: retn
0x6FD732: xor     eax, eax
0x6FD734: mov     ecx, [esp+14h+var_C]
0x6FD738: mov     large fs:0, ecx
0x6FD73F: pop     ecx
0x6FD740: add     esp, 10h
0x6FD743: retn
