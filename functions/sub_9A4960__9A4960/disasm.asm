0x9A4960: mov     edx, [esp+Src]
0x9A4964: sub     esp, 8
0x9A4967: lea     eax, [esp+8+var_4]
0x9A496B: push    eax; int
0x9A496C: lea     ecx, [esp+0Ch+var_8]
0x9A4970: push    ecx; int
0x9A4971: push    edx; Src
0x9A4972: call    sub_9A47E0
0x9A4977: add     esp, 0Ch
0x9A497A: test    al, al
0x9A497C: jz      short loc_9A4997
0x9A497E: mov     eax, [esp+8+var_8]
0x9A4981: test    eax, eax
0x9A4983: jz      short loc_9A4997
0x9A4985: mov     ecx, [esp+8+var_4]
0x9A4989: push    ecx
0x9A498A: push    eax
0x9A498B: call    sub_9A48B0
0x9A4990: add     esp, 8
0x9A4993: add     esp, 8
0x9A4996: retn
0x9A4997: xor     eax, eax
0x9A4999: add     esp, 8
0x9A499C: retn
