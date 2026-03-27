0x65C2E2: mov     eax, [edi+8]
0x65C2E5: test    eax, eax
0x65C2E7: jz      short AVCollection_Save___SaveFatigueNode
0x65C2E9: mov     cl, [eax]
0x65C2EB: fld     dword ptr [eax+4]
0x65C2EE: push    ebp; Size
0x65C2EF: fstp    [esp+4+arg_14]
0x65C2F3: lea     edx, [esp+4+Src+3]
0x65C2F7: mov     byte ptr [esp+4+Src+3], cl
0x65C2FB: mov     ecx, ds:0B33B00h
0x65C301: push    edx; Src
0x65C302: call    SaveLoad_SaveData
0x65C307: mov     ecx, ds:0B33B00h
0x65C30D: push    4; Size
0x65C30F: lea     eax, [esp+4+arg_14]
0x65C313: push    eax; Src
0x65C314: call    SaveLoad_SaveData
0x65C319: add     [esp+arg_10], ebp
