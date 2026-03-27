0x533930: mov     eax, [esp+arg_0]
0x533934: lea     eax, [eax+eax*2]
0x533937: shl     eax, 4
0x53393A: add     eax, [ecx+10h]
0x53393D: sub     esp, 8
0x533940: mov     eax, [eax+28h]
0x533943: push    esi
0x533944: xor     esi, esi
0x533946: test    eax, eax
0x533948: jz      short loc_533972
0x53394A: mov     ecx, [eax+10h]
0x53394D: add     ecx, eax
0x53394F: jz      short loc_533972
0x533951: push    offset dword_BA7B80
0x533956: lea     eax, [esp+10h+var_8]
0x53395A: push    eax
0x53395B: call    sub_47F990
0x533960: mov     ecx, [eax]
0x533962: test    ecx, ecx
0x533964: jz      short loc_533972
0x533966: call    sub_452A60
0x53396B: pop     esi
0x53396C: add     esp, 8
0x53396F: retn    4
0x533972: mov     eax, esi
0x533974: pop     esi
0x533975: add     esp, 8
0x533978: retn    4
