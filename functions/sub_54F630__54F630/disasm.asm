0x54F630: push    edi
0x54F631: mov     edi, [esp+4+arg_0]
0x54F635: test    edi, edi
0x54F637: jz      short loc_54F668
0x54F639: mov     ecx, [esp+4+arg_4]
0x54F63D: test    ecx, ecx
0x54F63F: jz      short loc_54F668
0x54F641: cmp     [esp+4+arg_8], 0
0x54F646: jz      short loc_54F65D
0x54F648: lea     eax, ds:0[ecx*4]
0x54F64F: push    eax
0x54F650: push    0
0x54F652: push    edi
0x54F653: call    __memset
0x54F658: add     esp, 0Ch
0x54F65B: pop     edi
0x54F65C: retn
0x54F65D: test    ecx, ecx
0x54F65F: jbe     short loc_54F668
0x54F661: mov     eax, 7F7FFFFFh
0x54F666: rep stosd
0x54F668: pop     edi
0x54F669: retn
