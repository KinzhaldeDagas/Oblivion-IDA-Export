0x56A020: push    ecx
0x56A021: push    esi
0x56A022: mov     esi, ecx
0x56A024: mov     ecx, ds:0B33B00h
0x56A02A: push    1; Size
0x56A02C: push    esi; Dst
0x56A02D: call    SaveLoad_LoadData
0x56A032: mov     ecx, ds:0B33B00h
0x56A038: push    4; Size
0x56A03A: lea     eax, [esi+8]
0x56A03D: push    eax; Dst
0x56A03E: call    SaveLoad_LoadData
0x56A043: mov     al, [esi]
0x56A045: cmp     al, 1
0x56A047: jbe     short loc_56A061
0x56A049: cmp     al, 2
0x56A04B: jnz     short loc_56A07A
0x56A04D: mov     ecx, ds:0B33B00h
0x56A053: push    4; Size
0x56A055: add     esi, 4
0x56A058: push    esi; Dst
0x56A059: call    SaveLoad_LoadData
0x56A05E: pop     esi
0x56A05F: pop     ecx
0x56A060: retn
0x56A061: push    4; Size
0x56A063: lea     ecx, [esp+0Ch+Dst]
0x56A067: push    ecx; Dst
0x56A068: mov     ecx, ds:0B33B00h
0x56A06E: call    SaveLoad_LoadFormID
0x56A073: mov     edx, [esp+10h+var_C]
0x56A077: mov     [esi+4], edx
0x56A07A: pop     esi
0x56A07B: pop     ecx
0x56A07C: retn
