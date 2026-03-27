0x65C270: sub     esp, 0Ch
0x65C273: push    ebx
0x65C274: push    ebp
0x65C275: push    esi
0x65C276: push    edi
0x65C277: mov     edi, ecx
0x65C279: mov     ecx, ds:0B33B00h
0x65C27F: push    2; Size
0x65C281: lea     eax, [esp+20h+Src]
0x65C285: mov     [esp+20h+Src], 0
0x65C28D: mov     ebx, [ecx+14h]
0x65C290: push    eax; Src
0x65C291: call    SaveLoad_SaveData
0x65C296: test    edi, edi
0x65C298: mov     esi, edi
0x65C29A: mov     ebp, 1
0x65C29F: jz      short AVCollection_Save___SaveMagickaNode
