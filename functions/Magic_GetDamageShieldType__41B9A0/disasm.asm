0x41B9A0: mov     eax, [esp+arg_0]
0x41B9A4: cmp     eax, 47444853h
0x41B9A9: jz      short Magic_GetDamageShieldType___SHDG
0x41B9AB: cmp     eax, 47444946h
0x41B9B0: jz      short Magic_GetDamageShieldType___FIDG
0x41B9B2: xor     ecx, ecx
0x41B9B4: cmp     eax, 47445246h
0x41B9B9: setnz   cl
0x41B9BC: sub     ecx, 1
0x41B9BF: and     ecx, 2
0x41B9C2: mov     eax, ecx
0x41B9C4: retn
