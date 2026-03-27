0x557C80: push    0FFFFFFFFh
0x557C82: push    offset SEH_8C8900
0x557C87: mov     eax, large fs:0
0x557C8D: push    eax
0x557C8E: push    ecx
0x557C8F: mov     eax, ds:0B30AACh
0x557C94: xor     eax, esp
0x557C96: push    eax
0x557C97: lea     eax, [esp+14h+var_C]
0x557C9B: mov     large fs:0, eax
0x557CA1: push    24h ; '$'; Size
0x557CA3: call    FormHeapAlloc
0x557CA8: add     esp, 4
0x557CAB: mov     [esp+14h+var_10], eax
0x557CAF: test    eax, eax
0x557CB1: mov     [esp+14h+var_4], 0
0x557CB9: jz      short loc_557CD7
0x557CBB: mov     ecx, [esp+14h+Src]
0x557CBF: push    ecx; Src
0x557CC0: mov     ecx, eax
0x557CC2: call    sub_557BB0
0x557CC7: mov     ecx, [esp+14h+var_C]
0x557CCB: mov     large fs:0, ecx
0x557CD2: pop     ecx
0x557CD3: add     esp, 10h
0x557CD6: retn
0x557CD7: xor     eax, eax
0x557CD9: mov     ecx, [esp+14h+var_C]
0x557CDD: mov     large fs:0, ecx
0x557CE4: pop     ecx
0x557CE5: add     esp, 10h
0x557CE8: retn
