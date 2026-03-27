0x418F30: mov     eax, [ecx+1Ch]
0x418F33: test    dword ptr [eax+58h], 70000h
0x418F3A: jz      short loc_418F40
0x418F3C: mov     eax, [eax+60h]
0x418F3F: retn
0x418F40: xor     eax, eax
0x418F42: retn
