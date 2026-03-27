0x4F4830: fldz
0x4F4832: push    esi
0x4F4833: mov     esi, [esp+4+arg_0]
0x4F4837: test    esi, esi
0x4F4839: push    edi
0x4F483A: mov     edi, [esp+8+arg_C]
0x4F483E: fstp    qword ptr [edi]
0x4F4840: jz      short loc_4F4861
0x4F4842: mov     eax, [esi]
0x4F4844: mov     edx, [eax+190h]
0x4F484A: mov     ecx, esi
0x4F484C: call    edx
0x4F484E: test    al, al
0x4F4850: jz      short loc_4F4861
0x4F4852: mov     ecx, esi
0x4F4854: call    sub_5E04C0
0x4F4859: test    al, al
0x4F485B: jz      short loc_4F4861
0x4F485D: fld1
0x4F485F: fstp    qword ptr [edi]
0x4F4861: cmp     byte ptr ds:0B361ACh, 0
0x4F4868: jz      short loc_4F487F
0x4F486A: fld     qword ptr [edi]
0x4F486C: sub     esp, 8
0x4F486F: fstp    [esp+10h+var_10]
0x4F4872: push    offset aGetvampire0_2f; "GetVampire >> %0.2f"
0x4F4877: call    Interface_ConsolePrint
0x4F487C: add     esp, 0Ch
0x4F487F: pop     edi
0x4F4880: mov     al, 1
0x4F4882: pop     esi
0x4F4883: retn
