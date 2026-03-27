0x4F56D0: fldz
0x4F56D2: push    esi
0x4F56D3: mov     esi, [esp+4+arg_0]
0x4F56D7: test    esi, esi
0x4F56D9: push    edi
0x4F56DA: mov     edi, [esp+8+arg_C]
0x4F56DE: fstp    qword ptr [edi]
0x4F56E0: jz      short loc_4F5701
0x4F56E2: mov     eax, [esi]
0x4F56E4: mov     edx, [eax+190h]
0x4F56EA: mov     ecx, esi
0x4F56EC: call    edx
0x4F56EE: test    al, al
0x4F56F0: jz      short loc_4F5701
0x4F56F2: mov     ecx, esi
0x4F56F4: call    Actor_IsSwimming
0x4F56F9: test    al, al
0x4F56FB: jz      short loc_4F5701
0x4F56FD: fld1
0x4F56FF: fstp    qword ptr [edi]
0x4F5701: cmp     byte ptr ds:0B361ACh, 0
0x4F5708: jz      short loc_4F571F
0x4F570A: fld     qword ptr [edi]
0x4F570C: sub     esp, 8
0x4F570F: fstp    [esp+10h+var_10]
0x4F5712: push    offset aIsSwimming0_2f; "Is Swimming >> %0.2f"
0x4F5717: call    Interface_ConsolePrint
0x4F571C: add     esp, 0Ch
0x4F571F: pop     edi
0x4F5720: mov     al, 1
0x4F5722: pop     esi
0x4F5723: retn
