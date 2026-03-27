0x6D0FE0: push    0FFFFFFFFh
0x6D0FE2: push    offset SEH_8C8900
0x6D0FE7: mov     eax, large fs:0
0x6D0FED: push    eax
0x6D0FEE: push    ecx
0x6D0FEF: mov     eax, ds:0B30AACh
0x6D0FF4: xor     eax, esp
0x6D0FF6: push    eax
0x6D0FF7: lea     eax, [esp+14h+var_C]
0x6D0FFB: mov     large fs:0, eax
0x6D1001: movzx   eax, word ptr [esp+14h+arg_0]
0x6D1006: fldz
0x6D1008: movzx   edx, word ptr [ecx+4Ah]
0x6D100C: fstp    [esp+14h+arg_0]
0x6D1010: cmp     eax, edx
0x6D1012: jnb     short loc_6D101E
0x6D1014: mov     ecx, [ecx+44h]
0x6D1017: fld     dword ptr [ecx+eax*4]
0x6D101A: fstp    [esp+14h+arg_0]
0x6D101E: push    18h; Size
0x6D1020: call    FormHeapAlloc
0x6D1025: add     esp, 4
0x6D1028: mov     [esp+14h+var_10], eax
0x6D102C: test    eax, eax
0x6D102E: mov     [esp+14h+var_4], 0
0x6D1036: jz      short loc_6D1059
0x6D1038: fld     [esp+14h+arg_0]
0x6D103C: push    ecx
0x6D103D: mov     ecx, eax
0x6D103F: fstp    [esp+18h+var_18]; float
0x6D1042: call    sub_6D29E0
0x6D1047: mov     ecx, [esp+14h+var_C]
0x6D104B: mov     large fs:0, ecx
0x6D1052: pop     ecx
0x6D1053: add     esp, 10h
0x6D1056: retn    4
0x6D1059: xor     eax, eax
0x6D105B: mov     ecx, [esp+14h+var_C]
0x6D105F: mov     large fs:0, ecx
0x6D1066: pop     ecx
0x6D1067: add     esp, 10h
0x6D106A: retn    4
