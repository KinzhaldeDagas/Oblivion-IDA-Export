0x4F5810: fldz
0x4F5812: push    esi
0x4F5813: mov     esi, [esp+4+arg_0]
0x4F5817: test    esi, esi
0x4F5819: push    edi
0x4F581A: mov     edi, [esp+8+arg_C]
0x4F581E: fstp    qword ptr [edi]
0x4F5820: jz      short loc_4F5854
0x4F5822: mov     eax, [esi]
0x4F5824: mov     edx, [eax+190h]
0x4F582A: mov     ecx, esi
0x4F582C: call    edx
0x4F582E: test    al, al
0x4F5830: jz      short loc_4F5854
0x4F5832: mov     eax, [esi]
0x4F5834: mov     edx, [eax+260h]
0x4F583A: mov     ecx, esi
0x4F583C: call    edx
0x4F583E: test    al, al
0x4F5840: jz      short loc_4F5854
0x4F5842: mov     eax, [esi]
0x4F5844: fld1
0x4F5846: mov     edx, [eax+264h]
0x4F584C: fstp    qword ptr [edi]
0x4F584E: push    0
0x4F5850: mov     ecx, esi
0x4F5852: call    edx
0x4F5854: cmp     byte ptr ds:0B361ACh, 0
0x4F585B: jz      short loc_4F5872
0x4F585D: fld     qword ptr [edi]
0x4F585F: sub     esp, 8
0x4F5862: fstp    [esp+10h+var_14+4]
0x4F5865: push    offset aHasVampireFed0; "Has Vampire Fed >> %0.2f"
0x4F586A: call    Interface_ConsolePrint
0x4F586F: add     esp, 0Ch
0x4F5872: pop     edi
0x4F5873: mov     al, 1
0x4F5875: pop     esi
0x4F5876: retn
