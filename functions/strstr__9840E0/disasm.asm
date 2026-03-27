0x9840E0: mov     ecx, [esp+SubStr]
0x9840E4: push    edi
0x9840E5: push    ebx
0x9840E6: push    esi
0x9840E7: mov     dl, [ecx]
0x9840E9: mov     edi, [esp+0Ch+Str]
0x9840ED: test    dl, dl
0x9840EF: jz      short _strstr___empty_str2
0x9840F1: mov     dh, [ecx+1]
0x9840F4: test    dh, dh
0x9840F6: jz      short _strstr___strchr_call
