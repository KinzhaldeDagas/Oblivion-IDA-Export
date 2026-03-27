0x505020: push    esi
0x505021: mov     esi, [esp+4+arg_8]
0x505025: test    esi, esi
0x505027: jz      short loc_50508A
0x505029: mov     eax, [esi]
0x50502B: mov     edx, [eax+154h]
0x505031: mov     ecx, esi
0x505033: call    edx
0x505035: test    eax, eax
0x505037: jz      short loc_50508A
0x505039: mov     eax, [esi]
0x50503B: mov     edx, [eax+154h]
0x505041: mov     ecx, esi
0x505043: call    edx
0x505045: test    eax, eax
0x505047: mov     esi, [esp+4+arg_18]
0x50504B: jz      short loc_50506C
0x50504D: mov     edx, [eax]
0x50504F: mov     ecx, eax
0x505051: mov     eax, [edx+8]
0x505054: call    eax
0x505056: push    eax
0x505057: call    sub_4DE1C0
0x50505C: movzx   ecx, al
0x50505F: mov     [esp+8+arg_8], ecx
0x505063: add     esp, 4
0x505066: fild    [esp+4+arg_8]
0x50506A: fstp    qword ptr [esi]
0x50506C: cmp     byte ptr ds:0B361ACh, 0
0x505073: jz      short loc_50508A
0x505075: fld     qword ptr [esi]
0x505077: sub     esp, 8
0x50507A: fstp    [esp+0Ch+var_C]
0x50507D: push    offset aRemoveflames0_; "RemoveFlames >> %0.2f"
0x505082: call    Interface_ConsolePrint
0x505087: add     esp, 0Ch
0x50508A: mov     al, 1
0x50508C: pop     esi
0x50508D: retn
