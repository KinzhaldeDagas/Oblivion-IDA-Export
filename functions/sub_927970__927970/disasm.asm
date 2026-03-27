0x927970: mov     edx, [esp+arg_C]
0x927974: push    esi
0x927975: mov     esi, ecx
0x927977: mov     ecx, [esp+4+arg_8]
0x92797B: mov     eax, [ecx]
0x92797D: push    edi
0x92797E: push    edx
0x92797F: call    dword ptr [eax+2Ch]
0x927982: mov     edi, [esp+8+arg_0]
0x927986: push    eax
0x927987: mov     eax, [esp+0Ch+arg_4]
0x92798B: mov     ecx, [eax+20h]
0x92798E: push    ecx
0x92798F: push    edi
0x927990: lea     ecx, [esi-10h]
0x927993: call    sub_927680
0x927998: mov     eax, edi
0x92799A: pop     edi
0x92799B: pop     esi
0x92799C: retn    10h
