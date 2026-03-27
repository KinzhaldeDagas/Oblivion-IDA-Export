0x65C31D: mov     eax, [edi+0Ch]
0x65C320: test    eax, eax
0x65C322: jz      short AVCollection_Save___SaveArray
0x65C324: mov     cl, [eax]
0x65C326: fld     dword ptr [eax+4]
0x65C329: push    ebp; Size
0x65C32A: fstp    [esp+4+arg_14]
0x65C32E: lea     edx, [esp+4+Src+3]
0x65C332: mov     byte ptr [esp+4+Src+3], cl
0x65C336: mov     ecx, ds:0B33B00h
0x65C33C: push    edx; Src
0x65C33D: call    SaveLoad_SaveData
0x65C342: mov     ecx, ds:0B33B00h
0x65C348: push    4; Size
0x65C34A: lea     eax, [esp+4+arg_14]
0x65C34E: push    eax; Src
0x65C34F: call    SaveLoad_SaveData
0x65C354: add     [esp+arg_10], ebp
