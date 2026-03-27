0x45C4A0: push    ecx
0x45C4A1: mov     eax, [ecx+18h]
0x45C4A4: shr     eax, 9
0x45C4A7: test    al, 1
0x45C4A9: jz      short loc_45C4B9
0x45C4AB: mov     edx, [esp+4+arg_8]
0x45C4AF: add     [ecx+90h], edx
0x45C4B5: pop     ecx
0x45C4B6: retn    0Ch
0x45C4B9: mov     ecx, [esp+4+arg_8]
0x45C4BD: mov     edx, [esp+4+arg_4]
0x45C4C1: push    1
0x45C4C3: lea     eax, [esp+8+var_4]
0x45C4C7: push    eax
0x45C4C8: mov     eax, [esp+0Ch+arg_0]
0x45C4CC: push    ecx
0x45C4CD: push    edx
0x45C4CE: push    eax
0x45C4CF: mov     eax, [eax+8]
0x45C4D2: mov     [esp+18h+var_4], 1
0x45C4DA: call    eax
0x45C4DC: add     esp, 14h
0x45C4DF: pop     ecx
0x45C4E0: retn    0Ch
