0x6A4659: mov     edi, [esi+3Ch]
0x6A465C: test    edi, edi
0x6A465E: jz      short ScriptEffect_Remove___DOne
0x6A4660: mov     ecx, edi
0x6A4662: call    ScriptEventList_destr??
0x6A4667: push    edi
0x6A4668: call    FormHeapFree
0x6A466D: add     esp, 4
0x6A4670: mov     dword ptr [esi+3Ch], 0
