0x5F1330: push    esi
0x5F1331: mov     esi, ecx
0x5F1333: mov     eax, [esi]
0x5F1335: mov     edx, [eax+78h]
0x5F1338: call    edx
0x5F133A: test    al, al
0x5F133C: jnz     short loc_5F137C
0x5F133E: mov     ecx, [esi+58h]
0x5F1341: mov     eax, [ecx+8]
0x5F1344: test    eax, eax
0x5F1346: jz      short loc_5F135F
0x5F1348: mov     al, [eax+20h]
0x5F134B: cmp     al, 5
0x5F134D: jnz     short loc_5F1355
0x5F134F: cmp     dword ptr [ecx+4], 0
0x5F1353: jnz     short loc_5F135F
0x5F1355: cmp     al, 6
0x5F1357: jnz     short loc_5F137C
0x5F1359: cmp     dword ptr [ecx+4], 0
0x5F135D: jz      short loc_5F137C
0x5F135F: mov     eax, [ecx]
0x5F1361: mov     edx, [eax+478h]
0x5F1367: call    edx
0x5F1369: test    al, al
0x5F136B: jz      short loc_5F1380
0x5F136D: mov     ecx, [esi+58h]
0x5F1370: mov     eax, [ecx]
0x5F1372: mov     edx, [eax+474h]
0x5F1378: push    0
0x5F137A: call    edx
0x5F137C: xor     al, al
0x5F137E: pop     esi
0x5F137F: retn
0x5F1380: mov     eax, [esi]
0x5F1382: mov     edx, [eax+154h]
0x5F1388: mov     ecx, esi
0x5F138A: call    edx
0x5F138C: mov     esi, eax
0x5F138E: test    esi, esi
0x5F1390: jz      short loc_5F137C
0x5F1392: mov     eax, [esi]
0x5F1394: mov     edx, [eax+98h]
0x5F139A: mov     ecx, esi
0x5F139C: call    edx
0x5F139E: test    al, al
0x5F13A0: jz      short loc_5F137C
0x5F13A2: mov     eax, ds:0B333CCh
0x5F13A7: fld     dword ptr ds:0A524B0h
0x5F13AD: mov     eax, [eax+0DCh]
0x5F13B3: push    ecx
0x5F13B4: fstp    [esp+8+var_8]; float
0x5F13B7: push    eax; int
0x5F13B8: mov     ecx, esi
0x5F13BA: call    sub_4A0300
0x5F13BF: test    al, al
0x5F13C1: jnz     short loc_5F137C
0x5F13C3: mov     al, 1
0x5F13C5: pop     esi
0x5F13C6: retn
