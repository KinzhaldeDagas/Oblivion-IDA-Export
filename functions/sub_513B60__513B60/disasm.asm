0x513B60: mov     ecx, offset byte_B07BF4
0x513B65: mov     al, [ecx]
0x513B67: mov     [ecx], al
0x513B69: add     ecx, 1
0x513B6C: test    al, al
0x513B6E: jnz     short loc_513B65
0x513B70: mov     eax, ds:0B07BF0h
0x513B75: mov     edx, [eax+14h]
0x513B78: push    1
0x513B7A: mov     ecx, offset INISettingCollection
0x513B7F: call    edx
0x513B81: test    al, al
0x513B83: jz      short loc_513BA3
0x513B85: mov     eax, ds:0B07BF0h
0x513B8A: mov     edx, [eax+1Ch]
0x513B8D: mov     ecx, offset INISettingCollection
0x513B92: call    edx
0x513B94: mov     eax, ds:0B07BF0h
0x513B99: mov     edx, [eax+18h]
0x513B9C: mov     ecx, offset INISettingCollection
0x513BA1: call    edx
0x513BA3: mov     al, 1
0x513BA5: retn
