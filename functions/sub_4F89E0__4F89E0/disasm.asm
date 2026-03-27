0x4F89E0: fldz
0x4F89E2: push    esi
0x4F89E3: mov     esi, [esp+4+arg_0]
0x4F89E7: test    esi, esi
0x4F89E9: push    edi
0x4F89EA: mov     edi, [esp+8+arg_C]
0x4F89EE: fstp    qword ptr [edi]
0x4F89F0: jz      short loc_4F8A29
0x4F89F2: mov     eax, [esi]
0x4F89F4: mov     edx, [eax+190h]
0x4F89FA: mov     ecx, esi
0x4F89FC: call    edx
0x4F89FE: test    al, al
0x4F8A00: jz      short loc_4F8A29
0x4F8A02: mov     eax, [esi+3Ch]
0x4F8A05: push    offset aBip01Spine; "Bip01 Spine"
0x4F8A0A: push    eax
0x4F8A0B: mov     ecx, esi
0x4F8A0D: call    sub_4D96F0
0x4F8A12: test    eax, eax
0x4F8A14: jz      short loc_4F8A25
0x4F8A16: push    0
0x4F8A18: push    eax
0x4F8A19: call    sub_8975C0
0x4F8A1E: add     esp, 8
0x4F8A21: test    al, al
0x4F8A23: jz      short loc_4F8A29
0x4F8A25: fld1
0x4F8A27: fstp    qword ptr [edi]
0x4F8A29: cmp     byte ptr ds:0B361ACh, 0
0x4F8A30: jz      short loc_4F8A47
0x4F8A32: fld     qword ptr [edi]
0x4F8A34: sub     esp, 8
0x4F8A37: fstp    [esp+10h+var_10]
0x4F8A3A: push    offset aIsLeftUp0_2f; "Is Left Up >> %0.2f"
0x4F8A3F: call    Interface_ConsolePrint
0x4F8A44: add     esp, 0Ch
0x4F8A47: pop     edi
0x4F8A48: mov     al, 1
0x4F8A4A: pop     esi
0x4F8A4B: retn
