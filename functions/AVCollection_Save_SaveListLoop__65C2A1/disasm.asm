0x65C2A1: mov     eax, [esi]
0x65C2A3: test    eax, eax
0x65C2A5: jz      short AVCollection_Save___SaveMagickaNode
0x65C2A7: mov     cl, [eax]
0x65C2A9: fld     dword ptr [eax+4]
0x65C2AC: push    ebp; Size
0x65C2AD: fstp    [esp+4+arg_14]
0x65C2B1: lea     edx, [esp+4+Src+3]
0x65C2B5: mov     byte ptr [esp+4+Src+3], cl
0x65C2B9: mov     ecx, ds:0B33B00h
0x65C2BF: push    edx; Src
0x65C2C0: call    SaveLoad_SaveData
0x65C2C5: mov     ecx, ds:0B33B00h
0x65C2CB: push    4; Size
0x65C2CD: lea     eax, [esp+4+arg_14]
0x65C2D1: push    eax; Src
0x65C2D2: call    SaveLoad_SaveData
0x65C2D7: add     [esp+arg_10], ebp
0x65C2DB: mov     esi, [esi+4]
0x65C2DE: test    esi, esi
0x65C2E0: jnz     short AVCollection_Save___SaveListLoop
