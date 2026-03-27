0x8BC870: push    esi
0x8BC871: push    edi
0x8BC872: mov     edi, [esp+8+arg_0]
0x8BC876: mov     eax, [edi]
0x8BC878: mov     esi, ecx
0x8BC87A: mov     ecx, [esi+14h]
0x8BC87D: push    ecx
0x8BC87E: push    1
0x8BC880: push    offset aShape; "Shape"
0x8BC885: mov     ecx, edi
0x8BC887: call    dword ptr [eax+8]
0x8BC88A: mov     eax, [esi+40h]
0x8BC88D: test    eax, eax
0x8BC88F: js      short loc_8BC8B3
0x8BC891: mov     ecx, [esi+38h]
0x8BC894: mov     edx, [edi]
0x8BC896: and     eax, 3FFFFFFFh
0x8BC89B: shl     eax, 3
0x8BC89E: push    eax
0x8BC89F: mov     eax, [esi+3Ch]
0x8BC8A2: shl     eax, 3
0x8BC8A5: push    eax
0x8BC8A6: push    ecx
0x8BC8A7: push    8
0x8BC8A9: push    offset aCollagtptr; "CollAgtPtr"
0x8BC8AE: mov     ecx, edi
0x8BC8B0: call    dword ptr [edx+4]
0x8BC8B3: mov     eax, [esi+4Ch]
0x8BC8B6: test    eax, eax
0x8BC8B8: js      short loc_8BC8DC
0x8BC8BA: mov     ecx, [esi+44h]
0x8BC8BD: mov     edx, [edi]
0x8BC8BF: and     eax, 3FFFFFFFh
0x8BC8C4: shl     eax, 4
0x8BC8C7: push    eax
0x8BC8C8: mov     eax, [esi+48h]
0x8BC8CB: shl     eax, 4
0x8BC8CE: push    eax
0x8BC8CF: push    ecx
0x8BC8D0: push    4
0x8BC8D2: push    offset aProperties; "Properties"
0x8BC8D7: mov     ecx, edi
0x8BC8D9: call    dword ptr [edx+4]
0x8BC8DC: pop     edi
0x8BC8DD: pop     esi
0x8BC8DE: retn    4
