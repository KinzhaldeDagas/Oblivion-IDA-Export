0x70E940: push    esi
0x70E941: push    edi
0x70E942: mov     edi, [esp+8+a2]
0x70E946: push    edi; a2
0x70E947: mov     esi, ecx
0x70E949: call    sub_700650
0x70E94E: test    al, al
0x70E950: jnz     short loc_70E957
0x70E952: pop     edi
0x70E953: pop     esi
0x70E954: retn    4
0x70E957: mov     ecx, [esi+4Ch]
0x70E95A: test    ecx, ecx
0x70E95C: jz      short loc_70E966
0x70E95E: mov     eax, [ecx]
0x70E960: mov     edx, [eax+24h]
0x70E963: push    edi
0x70E964: call    edx
0x70E966: pop     edi
0x70E967: mov     al, 1
0x70E969: pop     esi
0x70E96A: retn    4
