0x961350: push    esi
0x961351: push    3Ch ; '<'; Size
0x961353: call    FormHeapAlloc
0x961358: add     esp, 4
0x96135B: test    eax, eax
0x96135D: jz      short loc_9613C3
0x96135F: mov     ecx, ds:0B258D0h
0x961365: fld1
0x961367: sub     esp, 0Ch
0x96136A: mov     edx, esp
0x96136C: mov     [edx], ecx
0x96136E: mov     ecx, ds:0B258D4h
0x961374: mov     [edx+4], ecx
0x961377: mov     ecx, ds:0B258D8h
0x96137D: mov     [edx+8], ecx
0x961380: mov     ecx, ds:0B3F9A8h
0x961386: sub     esp, 0Ch
0x961389: mov     edx, esp
0x96138B: mov     [edx], ecx
0x96138D: mov     ecx, ds:0B3F9ACh
0x961393: mov     [edx+4], ecx
0x961396: mov     ecx, ds:0B3F9B0h
0x96139C: mov     [edx+8], ecx
0x96139F: sub     esp, 8
0x9613A2: fst     [esp+24h+var_20]; float
0x9613A6: mov     ecx, eax
0x9613A8: fstp    [esp+24h+var_24]; float
0x9613AB: call    sub_9604C0
0x9613B0: mov     esi, eax
0x9613B2: mov     edx, [esi]
0x9613B4: mov     eax, [esp+4+arg_0]
0x9613B8: mov     edx, [edx]
0x9613BA: push    eax
0x9613BB: mov     ecx, esi
0x9613BD: call    edx
0x9613BF: mov     eax, esi
0x9613C1: pop     esi
0x9613C2: retn
0x9613C3: mov     eax, [esp+4+arg_0]
0x9613C7: xor     esi, esi
0x9613C9: mov     edx, [esi]
0x9613CB: mov     edx, [edx]
0x9613CD: push    eax
0x9613CE: mov     ecx, esi
0x9613D0: call    edx
0x9613D2: mov     eax, esi
0x9613D4: pop     esi
0x9613D5: retn
