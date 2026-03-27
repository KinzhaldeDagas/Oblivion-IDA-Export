0x481210: push    ecx
0x481211: mov     eax, [esp+4+arg_C]
0x481215: mov     ecx, [esp+4+arg_8]
0x481219: push    eax
0x48121A: mov     eax, [esp+8+arg_4]
0x48121E: push    ecx
0x48121F: mov     ecx, [esp+0Ch+arg_0]
0x481223: lea     edx, [esp+0Ch+var_4]
0x481227: push    edx
0x481228: push    eax
0x481229: push    ecx
0x48122A: mov     [esp+18h+var_4], 0
0x481232: call    sub_4810E0
0x481237: add     esp, 14h
0x48123A: test    al, al
0x48123C: jz      short loc_481243
0x48123E: mov     eax, [esp+4+var_4]
0x481241: pop     ecx
0x481242: retn
0x481243: or      eax, 0FFFFFFFFh
0x481246: pop     ecx
0x481247: retn
