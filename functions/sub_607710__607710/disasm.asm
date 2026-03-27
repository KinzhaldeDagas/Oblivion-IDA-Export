0x607710: push    esi
0x607711: call    MobileObject_GenerateNiNode
0x607716: mov     esi, eax
0x607718: test    esi, esi
0x60771A: jz      short loc_60772A
0x60771C: push    offset aArrow; "Arrow"
0x607721: mov     ecx, esi
0x607723: call    NiObjectNET_SetName
0x607728: mov     eax, esi
0x60772A: pop     esi
0x60772B: retn
