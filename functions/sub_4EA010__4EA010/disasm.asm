0x4EA010: sub     esp, 10h
0x4EA013: mov     al, [esp+10h+arg_0]
0x4EA017: test    al, al
0x4EA019: mov     ecx, ds:0B2C718h
0x4EA01F: mov     edx, ds:0B2C71Ch
0x4EA025: mov     [esp+10h+var_10], ecx
0x4EA028: mov     ecx, ds:0B2C720h
0x4EA02E: mov     [esp+10h+var_C], edx
0x4EA032: mov     edx, ds:0B2C724h
0x4EA038: mov     ds:0B09AE5h, al
0x4EA03D: jz      short loc_4EA048
0x4EA03F: fldz
0x4EA041: fstp    [esp+10h+var_10]
0x4EA044: fld1
0x4EA046: jmp     short loc_4EA04F
0x4EA048: fld1
0x4EA04A: fstp    [esp+10h+var_10]
0x4EA04D: fldz
0x4EA04F: mov     eax, [esp+10h+var_10]
0x4EA052: fstp    [esp+10h+var_C]
0x4EA056: mov     ds:0B2C718h, eax
0x4EA05B: mov     eax, [esp+10h+var_C]
0x4EA05F: mov     ds:0B2C71Ch, eax
0x4EA064: mov     ds:0B2C720h, ecx
0x4EA06A: mov     ds:0B2C724h, edx
0x4EA070: add     esp, 10h
0x4EA073: retn
