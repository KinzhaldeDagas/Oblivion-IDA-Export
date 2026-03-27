0x593943: test    edi, edi
0x593945: mov     ecx, [esp+arg_14]
0x593949: mov     edx, [esp+arg_10]
0x59394D: mov     [esi+78h], edi
0x593950: mov     [esi+7Ch], ebx
0x593953: mov     [esi+80h], ecx
0x593959: mov     [esi+84h], edx
0x59395F: mov     dword ptr ds:0B3B718h, 0
0x593969: jz      short AlchMenu_Create___HandleALEM
0x59396B: mov     eax, ds:0B333C4h
0x593970: push    eax
0x593971: mov     ecx, edi
0x593973: call    sub_4851B0
0x593978: push    eax
0x593979: push    offset aIcons; "Icons"
0x59397E: lea     ecx, [esp+8+arg_1C]
0x593982: push    offset aSS_2; "%s\\%s"
0x593987: push    ecx
0x593988: call    __sprintf
0x59398D: mov     ecx, [esi+30h]
0x593990: add     esp, 10h
0x593993: lea     edx, [esp+arg_1C]
0x593997: push    edx
0x593998: push    0FE6h
0x59399D: call    Tile_SetString
