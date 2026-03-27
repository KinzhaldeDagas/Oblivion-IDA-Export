0x628460: push    esi
0x628461: mov     esi, ecx
0x628463: mov     eax, [esi]
0x628465: mov     edx, [eax+2C4h]
0x62846B: push    1
0x62846D: push    400h
0x628472: call    edx
0x628474: mov     ecx, [esp+4+arg_0]
0x628478: mov     eax, [esi]
0x62847A: mov     edx, [eax+51Ch]
0x628480: push    0
0x628482: push    ecx
0x628483: mov     ecx, esi
0x628485: call    edx
0x628487: test    al, al
0x628489: jz      short loc_62849E
0x62848B: mov     eax, [esi]
0x62848D: mov     edx, [eax+2C4h]
0x628493: push    0
0x628495: push    400h
0x62849A: mov     ecx, esi
0x62849C: call    edx
0x62849E: pop     esi
0x62849F: retn    4
