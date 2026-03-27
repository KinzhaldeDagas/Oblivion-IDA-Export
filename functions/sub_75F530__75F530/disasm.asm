0x75F530: push    ecx
0x75F531: mov     eax, [ecx]
0x75F533: mov     eax, [eax+0ACh]
0x75F539: lea     edx, [esp+4+var_4]
0x75F53C: push    edx
0x75F53D: call    eax
0x75F53F: push    18h; Size
0x75F541: call    FormHeapAlloc
0x75F546: add     esp, 4
0x75F549: test    eax, eax
0x75F54B: jz      short loc_75F55F
0x75F54D: fld     [esp+4+var_4]
0x75F550: push    ecx
0x75F551: mov     ecx, eax
0x75F553: fstp    [esp+8+var_8]; float
0x75F556: call    sub_6D29E0
0x75F55B: pop     ecx
0x75F55C: retn    4
0x75F55F: xor     eax, eax
0x75F561: pop     ecx
0x75F562: retn    4
