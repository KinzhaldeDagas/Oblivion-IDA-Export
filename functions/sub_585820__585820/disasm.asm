0x585820: push    esi
0x585821: mov     esi, ecx
0x585823: cmp     byte ptr [esi+31h], 0
0x585827: jle     short loc_5858A3
0x585829: mov     eax, ds:0B13994h
0x58582E: fld     dword ptr ds:0A30634h
0x585834: push    eax; int
0x585835: push    ecx
0x585836: fstp    [esp+0Ch+var_C]; float
0x585839: push    0FFFFFFFFh; int
0x58583B: fild    dword ptr ds:0B3A704h
0x585841: push    1; int
0x585843: sub     esp, 8
0x585846: fstp    [esp+1Ch+var_18]; float
0x58584A: fild    dword ptr ds:0B3A700h
0x585850: fstp    [esp+1Ch+var_1C]; float
0x585853: push    offset asc_A69C84; int
0x585858: push    1
0x58585A: call    sub_571F90
0x58585F: add     esp, 4
0x585862: mov     ecx, eax
0x585864: call    sub_5723E0
0x585869: mov     ecx, [esi+10h]
0x58586C: mov     eax, [esi+2Ch]
0x58586F: add     eax, ecx
0x585871: cmp     eax, ecx
0x585873: jle     short loc_585877
0x585875: mov     eax, ecx
0x585877: mov     edx, ds:0B1398Ch
0x58587D: push    edi
0x58587E: mov     edi, eax
0x585880: sub     edi, edx
0x585882: test    edi, edi
0x585884: pop     edi
0x585885: jg      short loc_585889
0x585887: mov     eax, edx
0x585889: cmp     eax, ecx
0x58588B: jle     short loc_58588F
0x58588D: mov     eax, ecx
0x58588F: mov     ecx, esi
0x585891: mov     [esi+2Ch], eax
0x585894: call    sub_585620
0x585899: push    0
0x58589B: call    sub_5794C0
0x5858A0: add     esp, 4
0x5858A3: pop     esi
0x5858A4: retn
