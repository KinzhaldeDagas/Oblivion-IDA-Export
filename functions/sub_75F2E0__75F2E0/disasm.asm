0x75F2E0: push    ecx
0x75F2E1: mov     eax, [ecx]
0x75F2E3: mov     eax, [eax+0ACh]
0x75F2E9: lea     edx, [esp+4+var_4]
0x75F2EC: push    edx
0x75F2ED: call    eax
0x75F2EF: push    18h; Size
0x75F2F1: call    FormHeapAlloc
0x75F2F6: add     esp, 4
0x75F2F9: test    eax, eax
0x75F2FB: jz      short loc_75F30C
0x75F2FD: mov     ecx, [esp+4+var_4]
0x75F300: push    ecx
0x75F301: mov     ecx, eax
0x75F303: call    sub_6E7FA0
0x75F308: pop     ecx
0x75F309: retn    4
0x75F30C: xor     eax, eax
0x75F30E: pop     ecx
0x75F30F: retn    4
