0x628520: push    esi
0x628521: mov     esi, ecx
0x628523: mov     eax, [esi]
0x628525: mov     edx, [eax+184h]
0x62852B: push    edi
0x62852C: call    edx
0x62852E: mov     edi, eax
0x628530: test    edi, edi
0x628532: jz      short loc_62856D
0x628534: mov     eax, [esi]
0x628536: mov     edx, [eax+194h]
0x62853C: push    ebx
0x62853D: mov     ebx, [esp+0Ch+arg_0]
0x628541: push    ebx
0x628542: mov     ecx, esi
0x628544: call    edx
0x628546: fld     dword ptr ds:0A30634h
0x62854C: push    ecx
0x62854D: fstp    [esp+10h+var_10]; float
0x628550: push    0; char
0x628552: push    ebx; int
0x628553: mov     ecx, edi
0x628555: call    sub_566DC0
0x62855A: test    al, al
0x62855C: mov     eax, [esi]
0x62855E: pop     ebx
0x62855F: mov     ecx, esi
0x628561: jz      short loc_628574
0x628563: mov     edx, [eax+0BCh]
0x628569: push    1
0x62856B: call    edx
0x62856D: pop     edi
0x62856E: xor     al, al
0x628570: pop     esi
0x628571: retn    8
0x628574: mov     edx, [eax+17Ch]
0x62857A: push    0
0x62857C: call    edx
0x62857E: pop     edi
0x62857F: mov     al, 1
0x628581: pop     esi
0x628582: retn    8
