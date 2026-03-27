0x520220: mov     eax, [ecx+18h]
0x520223: mov     edx, [eax+14h]
0x520226: add     ecx, 18h
0x520229: push    ebx
0x52022A: push    2Eh ; '.'; Ch
0x52022C: xor     bl, bl
0x52022E: call    edx
0x520230: push    eax; Str
0x520231: call    _strrchr
0x520236: add     esp, 8
0x520239: test    eax, eax
0x52023B: jz      short loc_520251
0x52023D: push    offset a_kf; Str2
0x520242: push    eax; Str1
0x520243: call    __strcmp
0x520248: add     esp, 8
0x52024B: test    eax, eax
0x52024D: mov     al, 1
0x52024F: jz      short loc_520253
0x520251: mov     al, bl
0x520253: pop     ebx
0x520254: retn
