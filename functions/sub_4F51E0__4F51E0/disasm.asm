0x4F51E0: fldz
0x4F51E2: mov     ecx, [esp+arg_0]
0x4F51E6: test    ecx, ecx
0x4F51E8: push    esi
0x4F51E9: mov     esi, [esp+4+arg_C]
0x4F51ED: fstp    qword ptr [esi]
0x4F51EF: jz      short loc_4F520E
0x4F51F1: mov     eax, [ecx]
0x4F51F3: mov     edx, [eax+164h]
0x4F51F9: call    edx
0x4F51FB: test    eax, eax
0x4F51FD: jz      short loc_4F520E
0x4F51FF: mov     ecx, eax
0x4F5201: call    sub_472EA0
0x4F5206: test    al, al
0x4F5208: jnz     short loc_4F520E
0x4F520A: fld1
0x4F520C: fstp    qword ptr [esi]
0x4F520E: cmp     byte ptr ds:0B361ACh, 0
0x4F5215: jz      short loc_4F522C
0x4F5217: fld     qword ptr [esi]
0x4F5219: sub     esp, 8
0x4F521C: fstp    [esp+0Ch+var_C]
0x4F521F: push    offset aIsIdlePlaying0; "Is Idle Playing >> %0.2f"
0x4F5224: call    Interface_ConsolePrint
0x4F5229: add     esp, 0Ch
0x4F522C: mov     al, 1
0x4F522E: pop     esi
0x4F522F: retn
