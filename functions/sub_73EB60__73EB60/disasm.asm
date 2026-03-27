0x73EB60: fldz
0x73EB62: fcomp   dword ptr [ecx+14h]
0x73EB65: fnstsw  ax
0x73EB67: test    ah, 44h
0x73EB6A: jp      short loc_73EB71
0x73EB6C: jmp     sub_73EA40
0x73EB71: mov     edx, [esp+arg_0]
0x73EB75: add     edx, 64h ; 'd'
0x73EB78: lea     eax, [ecx+8]
0x73EB7B: push    edx
0x73EB7C: push    eax
0x73EB7D: add     ecx, 18h
0x73EB80: call    sub_72A820
0x73EB85: retn    4
