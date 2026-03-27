0x50D860: cmp     byte ptr ds:0B0703Ch, 0
0x50D867: jz      short loc_50D894
0x50D869: push    offset aWaterSystemOff; "Water System Off"
0x50D86E: call    Interface_ConsolePrint
0x50D873: mov     eax, ds:0B333A0h
0x50D878: mov     ecx, [eax+54h]
0x50D87B: add     esp, 4
0x50D87E: call    sub_499E20
0x50D883: mov     ecx, ds:0B333A0h
0x50D889: mov     ecx, [ecx+54h]
0x50D88C: push    1
0x50D88E: call    WaterManager__Destroy?
0x50D893: retn
0x50D894: push    offset aWaterSystemOn; "Water System On"
0x50D899: call    Interface_ConsolePrint
0x50D89E: mov     edx, ds:0B333A0h
0x50D8A4: mov     ecx, [edx+54h]
0x50D8A7: add     esp, 4
0x50D8AA: call    sub_49E280
0x50D8AF: mov     eax, ds:0B333A0h
0x50D8B4: mov     ecx, [eax+54h]
0x50D8B7: jmp     sub_498F30
