0x57C000: mov     ecx, ds:0B33B00h
0x57C006: sub     esp, 14h
0x57C009: push    1; Size
0x57C00B: lea     eax, [esp+18h+Dst]
0x57C00F: push    eax; Dst
0x57C010: call    SaveLoad_LoadData
0x57C015: push    1; Size
0x57C017: lea     ecx, [esp+18h+var_8]
0x57C01B: push    ecx; Dst
0x57C01C: mov     ecx, ds:0B33B00h
0x57C022: call    SaveLoad_LoadData
0x57C027: mov     ecx, ds:0B33B00h
0x57C02D: push    1; Size
0x57C02F: lea     edx, [esp+18h+var_C]
0x57C033: push    edx; Dst
0x57C034: call    SaveLoad_LoadData
0x57C039: mov     ecx, ds:0B33B00h
0x57C03F: push    1; Size
0x57C041: lea     eax, [esp+18h+var_10]
0x57C045: push    eax; Dst
0x57C046: call    SaveLoad_LoadData
0x57C04B: push    4; Size
0x57C04D: lea     ecx, [esp+18h+var_14]
0x57C051: push    ecx; Dst
0x57C052: mov     ecx, ds:0B33B00h
0x57C058: call    SaveLoad_LoadData
0x57C05D: mov     edx, [esp+14h+var_14]
0x57C060: mov     eax, [esp+14h+var_10]
0x57C064: mov     ecx, [esp+14h+var_C]
0x57C068: push    edx
0x57C069: mov     edx, [esp+18h+var_8]
0x57C06D: push    eax
0x57C06E: mov     eax, [esp+1Ch+Dst]
0x57C072: push    ecx
0x57C073: push    edx
0x57C074: push    eax
0x57C075: call    sub_57B990
0x57C07A: mov     ecx, ds:0B33B00h
0x57C080: add     esp, 14h
0x57C083: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x57C087: jb      short loc_57C095
0x57C089: push    1; Size
0x57C08B: push    offset byte_B14500; Dst
0x57C090: call    SaveLoad_LoadData
0x57C095: add     esp, 14h
0x57C098: retn
