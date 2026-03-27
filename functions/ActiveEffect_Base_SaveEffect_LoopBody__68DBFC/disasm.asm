0x68DBFC: mov     edi, [esi]
0x68DBFE: mov     edx, [edi]
0x68DC00: mov     eax, [edx+54h]
0x68DC03: mov     ecx, edi
0x68DC05: call    eax
0x68DC07: push    1; Size
0x68DC09: lea     ecx, [esp+4+Src]
0x68DC0D: push    ecx; Src
0x68DC0E: mov     ecx, ds:0B33B00h
0x68DC14: mov     [esp+8+Src], al
0x68DC18: call    SaveLoad_SaveData
0x68DC1D: mov     edx, [edi]
0x68DC1F: mov     eax, [edx+78h]
0x68DC22: push    ebx
0x68DC23: push    ebp
0x68DC24: mov     ecx, edi
0x68DC26: call    eax
0x68DC28: add     [esp+8+arg_7], 1
0x68DC2D: mov     esi, [esi+4]
0x68DC30: test    esi, esi
0x68DC32: jnz     short ActiveEffect_Base_SaveEffect___LoopTest
