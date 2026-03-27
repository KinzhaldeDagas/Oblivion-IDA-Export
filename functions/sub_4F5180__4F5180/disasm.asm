0x4F5180: fldz
0x4F5182: push    esi
0x4F5183: mov     esi, [esp+4+arg_0]
0x4F5187: test    esi, esi
0x4F5189: push    edi
0x4F518A: mov     edi, [esp+8+arg_C]
0x4F518E: fstp    qword ptr [edi]
0x4F5190: jz      short loc_4F51B1
0x4F5192: mov     eax, [esi]
0x4F5194: mov     edx, [eax+190h]
0x4F519A: mov     ecx, esi
0x4F519C: call    edx
0x4F519E: test    al, al
0x4F51A0: jz      short loc_4F51B1
0x4F51A2: mov     ecx, esi
0x4F51A4: call    sub_5E6BC0
0x4F51A9: test    al, al
0x4F51AB: jz      short loc_4F51B1
0x4F51AD: fld1
0x4F51AF: fstp    qword ptr [edi]
0x4F51B1: cmp     byte ptr ds:0B361ACh, 0
0x4F51B8: jz      short loc_4F51CF
0x4F51BA: fld     qword ptr [edi]
0x4F51BC: sub     esp, 8
0x4F51BF: fstp    [esp+10h+var_10]
0x4F51C2: push    offset aIsWaiting0_2f; "Is Waiting >> %0.2f"
0x4F51C7: call    Interface_ConsolePrint
0x4F51CC: add     esp, 0Ch
0x4F51CF: pop     edi
0x4F51D0: mov     al, 1
0x4F51D2: pop     esi
0x4F51D3: retn
