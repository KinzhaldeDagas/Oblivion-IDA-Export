0x4FA840: lea     eax, [ecx+48h]
0x4FA843: test    eax, eax
0x4FA845: push    esi
0x4FA846: mov     esi, dword ptr [esp+4+ArgList]
0x4FA84A: jz      short loc_4FA861
0x4FA84C: lea     esp, [esp+0]
0x4FA850: mov     edx, [eax]
0x4FA852: test    edx, edx
0x4FA854: jz      short loc_4FA861
0x4FA856: cmp     [edx], esi
0x4FA858: mov     eax, [eax+4]
0x4FA85B: jz      short loc_4FA880
0x4FA85D: test    eax, eax
0x4FA85F: jnz     short loc_4FA850
0x4FA861: mov     eax, [ecx]
0x4FA863: mov     edx, [eax+0D4h]
0x4FA869: call    edx
0x4FA86B: push    eax
0x4FA86C: push    esi; ArgList
0x4FA86D: push    offset aTryingToAccess; "Trying to access local variable %d in s"...
0x4FA872: call    PrintError
0x4FA877: add     esp, 0Ch
0x4FA87A: xor     eax, eax
0x4FA87C: pop     esi
0x4FA87D: retn    4
0x4FA880: mov     eax, [edx+18h]
0x4FA883: pop     esi
0x4FA884: retn    4
