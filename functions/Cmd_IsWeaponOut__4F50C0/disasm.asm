0x4F50C0: fldz
0x4F50C2: push    esi
0x4F50C3: mov     esi, [esp+4+arg_0]
0x4F50C7: test    esi, esi
0x4F50C9: push    edi
0x4F50CA: mov     edi, [esp+8+arg_C]
0x4F50CE: fstp    qword ptr [edi]
0x4F50D0: jz      short loc_4F50F1
0x4F50D2: mov     eax, [esi]
0x4F50D4: mov     edx, [eax+190h]
0x4F50DA: mov     ecx, esi
0x4F50DC: call    edx
0x4F50DE: test    al, al
0x4F50E0: jz      short loc_4F50F1
0x4F50E2: mov     ecx, esi
0x4F50E4: call    Actor_IsWeaponOut
0x4F50E9: test    al, al
0x4F50EB: jz      short loc_4F50F1
0x4F50ED: fld1
0x4F50EF: fstp    qword ptr [edi]
0x4F50F1: cmp     byte ptr ds:0B361ACh, 0
0x4F50F8: jz      short loc_4F510F
0x4F50FA: fld     qword ptr [edi]
0x4F50FC: sub     esp, 8
0x4F50FF: fstp    [esp+10h+var_10]
0x4F5102: push    offset aIsWeaponOut0_2; "Is Weapon Out >> %0.2f"
0x4F5107: call    Interface_ConsolePrint
0x4F510C: add     esp, 0Ch
0x4F510F: pop     edi
0x4F5110: mov     al, 1
0x4F5112: pop     esi
0x4F5113: retn
