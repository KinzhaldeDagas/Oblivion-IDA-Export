0x4F6060: push    esi
0x4F6061: mov     esi, [esp+4+arg_0]
0x4F6065: test    esi, esi
0x4F6067: jz      short loc_4F60D9
0x4F6069: mov     eax, [esi]
0x4F606B: mov     edx, [eax+190h]
0x4F6071: mov     ecx, esi
0x4F6073: call    edx
0x4F6075: test    al, al
0x4F6077: jz      short loc_4F60D9
0x4F6079: mov     eax, [esi+8]
0x4F607C: shr     eax, 0Bh
0x4F607F: test    al, 1
0x4F6081: push    edi
0x4F6082: mov     ecx, esi; this
0x4F6084: jnz     short loc_4F6090
0x4F6086: mov     edx, [esi]
0x4F6088: mov     eax, [edx+288h]
0x4F608E: jmp     short loc_4F60A1
0x4F6090: push    0; a2
0x4F6092: call    Actor_GetActorBaseForm
0x4F6097: mov     edx, [eax]
0x4F6099: mov     ecx, eax
0x4F609B: mov     eax, [edx+12Ch]
0x4F60A1: mov     edi, [esp+8+arg_4]
0x4F60A5: push    edi
0x4F60A6: call    eax
0x4F60A8: mov     eax, [esp+8+arg_C]
0x4F60AC: fstp    qword ptr [eax]
0x4F60AE: cmp     byte ptr ds:0B361ACh, 0
0x4F60B5: jz      short loc_4F60D4
0x4F60B7: fld     qword ptr [eax]
0x4F60B9: mov     ecx, ds:0B0A1A8h[edi*4]
0x4F60C0: sub     esp, 8
0x4F60C3: fstp    [esp+10h+var_14+4]
0x4F60C6: push    ecx
0x4F60C7: push    offset aGetactorvalueS; "GetActorValue: %s >> %0.2f"
0x4F60CC: call    Interface_ConsolePrint
0x4F60D1: add     esp, 10h
0x4F60D4: pop     edi
0x4F60D5: mov     al, 1
0x4F60D7: pop     esi
0x4F60D8: retn
0x4F60D9: mov     al, 1
0x4F60DB: pop     esi
0x4F60DC: retn
