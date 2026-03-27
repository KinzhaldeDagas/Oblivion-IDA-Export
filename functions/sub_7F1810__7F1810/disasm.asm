0x7F1810: push    0FFFFFFFFh
0x7F1812: push    offset SEH_7F1810
0x7F1817: mov     eax, large fs:0
0x7F181D: push    eax
0x7F181E: push    ecx
0x7F181F: push    esi
0x7F1820: mov     eax, ds:0B30AACh
0x7F1825: xor     eax, esp
0x7F1827: push    eax
0x7F1828: lea     eax, [esp+18h+var_C]
0x7F182C: mov     large fs:0, eax
0x7F1832: mov     esi, ecx
0x7F1834: mov     [esp+18h+var_10], esi
0x7F1838: push    offset NiRefObject_objcount; lpAddend
0x7F183D: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7F1843: mov     dword ptr [esi+4], 0
0x7F184A: call    dword ptr ds:0A28078h
0x7F1850: push    300h; Size
0x7F1855: mov     [esp+1Ch+var_4], 0
0x7F185D: mov     dword ptr [esi], offset ??_7STLSPData@@6B@; const STLSPData::`vftable'
0x7F1863: call    FormHeapAlloc
0x7F1868: push    300h
0x7F186D: push    0
0x7F186F: push    eax
0x7F1870: mov     [esi+8], eax
0x7F1873: call    __memset
0x7F1878: fldz
0x7F187A: fst     dword ptr [esi+0Ch]
0x7F187D: add     esp, 10h
0x7F1880: fst     dword ptr [esi+10h]
0x7F1883: mov     eax, esi
0x7F1885: fstp    dword ptr [esi+14h]
0x7F1888: mov     ecx, [esp+18h+var_C]
0x7F188C: mov     large fs:0, ecx
0x7F1893: pop     ecx
0x7F1894: pop     esi
0x7F1895: add     esp, 10h
0x7F1898: retn
