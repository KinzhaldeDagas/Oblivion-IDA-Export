0x498F70: push    0FFFFFFFFh
0x498F72: push    offset SEH_8C8900
0x498F77: mov     eax, large fs:0
0x498F7D: push    eax
0x498F7E: push    ecx
0x498F7F: mov     eax, ds:0B30AACh
0x498F84: xor     eax, esp
0x498F86: push    eax
0x498F87: lea     eax, [esp+14h+var_C]
0x498F8B: mov     large fs:0, eax
0x498F91: push    0C0h ; 'À'; Size
0x498F96: call    FormHeapAlloc
0x498F9B: add     esp, 4
0x498F9E: mov     [esp+14h+var_10], eax
0x498FA2: test    eax, eax
0x498FA4: mov     [esp+14h+var_4], 0
0x498FAC: jz      short loc_498FCC
0x498FAE: mov     ecx, [esp+14h+a2]
0x498FB2: push    ecx; a2
0x498FB3: mov     ecx, eax; this
0x498FB5: call    NiTriShape_NiTriShape
0x498FBA: mov     ecx, [esp+14h+var_C]
0x498FBE: mov     large fs:0, ecx
0x498FC5: pop     ecx
0x498FC6: add     esp, 10h
0x498FC9: retn    4
0x498FCC: xor     eax, eax
0x498FCE: mov     ecx, [esp+14h+var_C]
0x498FD2: mov     large fs:0, ecx
0x498FD9: pop     ecx
0x498FDA: add     esp, 10h
0x498FDD: retn    4
