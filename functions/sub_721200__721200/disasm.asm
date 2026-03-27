0x721200: mov     eax, [esp+arg_0]
0x721204: test    eax, eax
0x721206: jnz     short loc_72120D
0x721208: xor     al, al
0x72120A: retn    4
0x72120D: fld     dword ptr [ecx+0Ch]
0x721210: fld     dword ptr [eax+0Ch]
0x721213: fucompp
0x721215: fnstsw  ax
0x721217: test    ah, 44h
0x72121A: jp      short loc_721208
0x72121C: mov     al, 1
0x72121E: retn    4
