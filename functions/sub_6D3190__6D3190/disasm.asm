0x6D3190: mov     eax, [esp+arg_0]
0x6D3194: fld     dword ptr [eax]
0x6D3196: mov     ecx, [esp+arg_4]
0x6D319A: fld     dword ptr [ecx]
0x6D319C: fucompp
0x6D319E: fnstsw  ax
0x6D31A0: test    ah, 44h
0x6D31A3: jp      short loc_6D31AB
0x6D31A5: mov     eax, 1
0x6D31AA: retn
0x6D31AB: xor     eax, eax
0x6D31AD: retn
