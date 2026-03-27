0x4F6640: fldz
0x4F6642: push    esi
0x4F6643: mov     esi, [esp+4+arg_0]
0x4F6647: test    esi, esi
0x4F6649: push    edi
0x4F664A: mov     edi, [esp+8+arg_C]
0x4F664E: fstp    qword ptr [edi]
0x4F6650: jz      short loc_4F6679
0x4F6652: mov     eax, [esi]
0x4F6654: mov     edx, [eax+190h]
0x4F665A: mov     ecx, esi
0x4F665C: call    edx
0x4F665E: test    al, al
0x4F6660: jz      short loc_4F6679
0x4F6662: mov     ecx, [esi+58h]
0x4F6665: mov     eax, [ecx]
0x4F6667: mov     edx, [eax+378h]
0x4F666D: call    edx
0x4F666F: cmp     eax, [esp+8+arg_4]
0x4F6673: jnz     short loc_4F6679
0x4F6675: fld1
0x4F6677: fstp    qword ptr [edi]
0x4F6679: cmp     byte ptr ds:0B361ACh, 0
0x4F6680: jz      short loc_4F6697
0x4F6682: fld     qword ptr [edi]
0x4F6684: sub     esp, 8
0x4F6687: fstp    [esp+10h+var_10]
0x4F668A: push    offset aIscurrentfurni; "IsCurrentFurnitureRef>> %0.2f"
0x4F668F: call    Interface_ConsolePrint
0x4F6694: add     esp, 0Ch
0x4F6697: pop     edi
0x4F6698: mov     al, 1
0x4F669A: pop     esi
0x4F669B: retn
