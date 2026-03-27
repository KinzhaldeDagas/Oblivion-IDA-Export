0x4A5710: push    0FFFFFFFFh
0x4A5712: push    offset SEH_8C62B0
0x4A5717: mov     eax, large fs:0
0x4A571D: push    eax
0x4A571E: push    ecx
0x4A571F: push    esi
0x4A5720: mov     eax, ds:0B30AACh
0x4A5725: xor     eax, esp
0x4A5727: push    eax
0x4A5728: lea     eax, [esp+18h+var_C]
0x4A572C: mov     large fs:0, eax
0x4A5732: mov     esi, ecx
0x4A5734: push    10h; Size
0x4A5736: call    FormHeapAlloc
0x4A573B: add     esp, 4
0x4A573E: mov     [esp+18h+var_10], eax
0x4A5742: test    eax, eax
0x4A5744: mov     [esp+18h+var_4], 0
0x4A574C: jz      short loc_4A5767
0x4A574E: push    esi
0x4A574F: mov     ecx, eax
0x4A5751: call    sub_4A5670
0x4A5756: mov     ecx, [esp+18h+var_C]
0x4A575A: mov     large fs:0, ecx
0x4A5761: pop     ecx
0x4A5762: pop     esi
0x4A5763: add     esp, 10h
0x4A5766: retn
0x4A5767: xor     eax, eax
0x4A5769: mov     ecx, [esp+18h+var_C]
0x4A576D: mov     large fs:0, ecx
0x4A5774: pop     ecx
0x4A5775: pop     esi
0x4A5776: add     esp, 10h
0x4A5779: retn
