0x947600: mov     ecx, ds:0BA7D98h
0x947606: mov     eax, [ecx]
0x947608: push    32h ; '2'
0x94760A: push    44h ; 'D'
0x94760C: call    dword ptr [eax+10h]
0x94760F: mov     ecx, [esp+arg_0]
0x947613: push    ecx
0x947614: mov     ecx, eax
0x947616: mov     word ptr [eax+4], 44h ; 'D'
0x94761C: call    sub_946D90
0x947621: test    eax, eax
0x947623: jz      short loc_947629
0x947625: add     eax, 8
0x947628: retn
0x947629: xor     eax, eax
0x94762B: retn
