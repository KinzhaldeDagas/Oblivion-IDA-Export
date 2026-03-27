0x533C40: push    0FFFFFFFFh
0x533C42: push    offset SEH_5358F0
0x533C47: mov     eax, large fs:0
0x533C4D: push    eax
0x533C4E: push    ecx
0x533C4F: push    esi
0x533C50: mov     eax, ds:0B30AACh
0x533C55: xor     eax, esp
0x533C57: push    eax
0x533C58: lea     eax, [esp+18h+var_C]
0x533C5C: mov     large fs:0, eax
0x533C62: mov     esi, ecx
0x533C64: mov     [esp+18h+var_10], esi
0x533C68: fld     dword ptr ds:0A5613Ch
0x533C6E: lea     eax, [esi+20h]
0x533C71: mov     dword ptr [esi], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x533C77: mov     [esi+10h], eax
0x533C7A: xor     eax, eax
0x533C7C: mov     dword ptr [esi+18h], 80000008h
0x533C83: fstp    dword ptr [esi+4]
0x533C86: mov     [esi+14h], eax
0x533C89: mov     [esp+18h+var_4], eax
0x533C8D: mov     [esi+1A0h], eax
0x533C93: fld     [esp+18h+arg_0]
0x533C97: mov     ecx, [esp+18h+arg_4]
0x533C9B: push    ecx; int
0x533C9C: push    ecx
0x533C9D: mov     ecx, esi
0x533C9F: fstp    [esp+20h+var_20]; float
0x533CA2: mov     byte ptr [esp+20h+var_4], 1
0x533CA7: call    sub_533A00
0x533CAC: mov     eax, esi
0x533CAE: mov     ecx, [esp+18h+var_C]
0x533CB2: mov     large fs:0, ecx
0x533CB9: pop     ecx
0x533CBA: pop     esi
0x533CBB: add     esp, 10h
0x533CBE: retn    8
