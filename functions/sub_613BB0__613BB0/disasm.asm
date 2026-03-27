0x613BB0: sub     esp, 8
0x613BB3: push    ebx
0x613BB4: push    esi
0x613BB5: mov     esi, [esp+10h+arg_0]
0x613BB9: test    esi, esi
0x613BBB: mov     ebx, ecx
0x613BBD: jz      short sub_613BE7
0x613BBF: cmp     dword ptr [esi], 0
0x613BC2: jz      short sub_613BE7
0x613BC4: call    sub_6135F0
0x613BC9: test    eax, eax
0x613BCB: jz      short sub_613BE7
0x613BCD: mov     eax, [ebx+3Ch]
0x613BD0: mov     edx, [esi]
0x613BD2: push    0
0x613BD4: lea     ecx, [eax+5Ch]
0x613BD7: mov     eax, [ecx]
0x613BD9: mov     eax, [eax+1Ch]
0x613BDC: push    0
0x613BDE: push    0
0x613BE0: push    edx
0x613BE1: call    eax
0x613BE3: test    al, al
0x613BE5: jnz     short loc_613BF1
