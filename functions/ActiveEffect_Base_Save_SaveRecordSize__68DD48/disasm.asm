0x68DD48: mov     edx, [esi]
0x68DD4A: mov     eax, [edx+0Ch]
0x68DD4D: push    edi
0x68DD4E: mov     ecx, esi
0x68DD50: call    eax
0x68DD52: movzx   ecx, ax
0x68DD55: push    2; Size
0x68DD57: lea     edx, [esp+8+Src]
0x68DD5B: mov     [esp+8+Src], ecx
0x68DD5F: mov     ecx, ds:0B33B00h
0x68DD65: push    edx; Src
0x68DD66: call    SaveLoad_SaveData
