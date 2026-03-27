0x498060: mov     eax, [esp+arg_0]
0x498064: mov     ecx, [eax]
0x498066: mov     ds:0B350DCh, ecx
0x49806C: mov     edx, [eax+4]
0x49806F: mov     ecx, ds:0B350D8h
0x498075: mov     ds:0B350E0h, edx
0x49807B: mov     eax, [eax+8]
0x49807E: sub     esp, 10h
0x498081: test    ecx, ecx
0x498083: mov     ds:0B350E4h, eax
0x498088: jz      short loc_4980BE
0x49808A: fld     dword ptr ds:0B350DCh
0x498090: lea     eax, [esp+10h+var_10]
0x498093: fstp    [esp+10h+var_10]
0x498096: push    eax
0x498097: fld     dword ptr ds:0B350E0h
0x49809D: fstp    [esp+14h+var_C]
0x4980A1: fld     dword ptr ds:0B350E4h
0x4980A7: fstp    [esp+14h+var_8]
0x4980AB: fldz
0x4980AD: fstp    [esp+14h+var_4]
0x4980B1: mov     edx, [ecx]
0x4980B3: mov     edx, [edx+60h]
0x4980B6: call    edx
0x4980B8: mov     al, 1
0x4980BA: add     esp, 10h
0x4980BD: retn
0x4980BE: xor     al, al
0x4980C0: add     esp, 10h
0x4980C3: retn
