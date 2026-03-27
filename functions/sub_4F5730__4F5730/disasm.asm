0x4F5730: fldz
0x4F5732: push    esi
0x4F5733: mov     esi, [esp+4+arg_0]
0x4F5737: test    esi, esi
0x4F5739: push    edi
0x4F573A: mov     edi, [esp+8+arg_C]
0x4F573E: fstp    qword ptr [edi]
0x4F5740: jz      short loc_4F5776
0x4F5742: mov     eax, [esi]
0x4F5744: mov     edx, [eax+190h]
0x4F574A: mov     ecx, esi
0x4F574C: call    edx
0x4F574E: test    al, al
0x4F5750: jz      short loc_4F5776
0x4F5752: mov     eax, [esp+8+arg_4]
0x4F5756: test    eax, eax
0x4F5758: jz      short loc_4F5776
0x4F575A: push    eax
0x4F575B: mov     eax, [esi]
0x4F575D: mov     edx, [eax+124h]
0x4F5763: mov     ecx, esi
0x4F5765: call    edx
0x4F5767: mov     ecx, eax
0x4F5769: call    MagicTarget_HasMagicItem
0x4F576E: test    al, al
0x4F5770: jz      short loc_4F5776
0x4F5772: fld1
0x4F5774: fstp    qword ptr [edi]
0x4F5776: cmp     byte ptr ds:0B361ACh, 0
0x4F577D: jz      short loc_4F5794
0x4F577F: fld     qword ptr [edi]
0x4F5781: sub     esp, 8
0x4F5784: fstp    [esp+10h+var_14+4]
0x4F5787: push    offset aIsSpellTarget0; "Is Spell Target >> %0.2f"
0x4F578C: call    Interface_ConsolePrint
0x4F5791: add     esp, 0Ch
0x4F5794: pop     edi
0x4F5795: mov     al, 1
0x4F5797: pop     esi
0x4F5798: retn
