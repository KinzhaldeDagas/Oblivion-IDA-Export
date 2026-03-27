0x644050: push    esi
0x644051: mov     esi, ecx
0x644053: mov     ecx, [esi+8]
0x644056: test    ecx, ecx
0x644058: push    edi
0x644059: mov     edi, [esp+8+arg_0]
0x64405D: jz      short loc_64408B
0x64405F: fld     dword ptr ds:0A30634h
0x644065: push    ecx
0x644066: fstp    [esp+0Ch+var_C]; float
0x644069: push    0; char
0x64406B: push    edi; int
0x64406C: call    sub_566DC0
0x644071: test    al, al
0x644073: jnz     short loc_64408B
0x644075: mov     eax, [esi]
0x644077: mov     edx, [eax+188h]
0x64407D: push    0FFFFFFFFh
0x64407F: push    edi
0x644080: mov     ecx, esi
0x644082: call    edx
0x644084: pop     edi
0x644085: xor     al, al
0x644087: pop     esi
0x644088: retn    4
0x64408B: mov     eax, [esi+8]
0x64408E: mov     ecx, [eax+1Ch]
0x644091: shr     ecx, 2
0x644094: test    cl, 1
0x644097: jz      short loc_6440A8
0x644099: mov     edx, [esi]
0x64409B: mov     eax, [edx+188h]
0x6440A1: push    1
0x6440A3: push    edi
0x6440A4: mov     ecx, esi
0x6440A6: call    eax
0x6440A8: pop     edi
0x6440A9: xor     al, al
0x6440AB: pop     esi
0x6440AC: retn    4
