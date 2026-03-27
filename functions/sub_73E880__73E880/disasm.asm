0x73E880: push    0FFFFFFFFh
0x73E882: push    offset SEH_8C8900
0x73E887: mov     eax, large fs:0
0x73E88D: push    eax
0x73E88E: push    ecx
0x73E88F: mov     eax, ds:0B30AACh
0x73E894: xor     eax, esp
0x73E896: push    eax
0x73E897: lea     eax, [esp+14h+var_C]
0x73E89B: mov     large fs:0, eax
0x73E8A1: push    30h ; '0'; Size
0x73E8A3: call    FormHeapAlloc
0x73E8A8: add     esp, 4
0x73E8AB: mov     [esp+14h+var_10], eax
0x73E8AF: test    eax, eax
0x73E8B1: mov     [esp+14h+var_4], 0
0x73E8B9: jz      short loc_73E8D2
0x73E8BB: mov     ecx, eax
0x73E8BD: call    sub_73E630
0x73E8C2: mov     ecx, [esp+14h+var_C]
0x73E8C6: mov     large fs:0, ecx
0x73E8CD: pop     ecx
0x73E8CE: add     esp, 10h
0x73E8D1: retn
0x73E8D2: xor     eax, eax
0x73E8D4: mov     ecx, [esp+14h+var_C]
0x73E8D8: mov     large fs:0, ecx
0x73E8DF: pop     ecx
0x73E8E0: add     esp, 10h
0x73E8E3: retn
