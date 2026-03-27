0x4F54A0: fldz
0x4F54A2: push    esi
0x4F54A3: mov     esi, [esp+4+arg_0]
0x4F54A7: test    esi, esi
0x4F54A9: push    edi
0x4F54AA: mov     edi, [esp+8+arg_C]
0x4F54AE: fstp    qword ptr [edi]
0x4F54B0: jz      short loc_4F54F8
0x4F54B2: mov     eax, [esi]
0x4F54B4: mov     edx, [eax+154h]
0x4F54BA: mov     ecx, esi
0x4F54BC: call    edx
0x4F54BE: test    eax, eax
0x4F54C0: jz      short loc_4F54F8
0x4F54C2: mov     eax, [esi]
0x4F54C4: mov     edx, [eax+154h]
0x4F54CA: mov     ecx, esi
0x4F54CC: call    edx
0x4F54CE: test    eax, eax
0x4F54D0: jz      short loc_4F54F8
0x4F54D2: mov     edx, [eax]
0x4F54D4: mov     ecx, eax
0x4F54D6: mov     eax, [edx+8]
0x4F54D9: call    eax
0x4F54DB: push    eax
0x4F54DC: call    sub_4DE320
0x4F54E1: add     esp, 4
0x4F54E4: test    al, al
0x4F54E6: jz      short loc_4F54EC
0x4F54E8: fld1
0x4F54EA: jmp     short loc_4F54EE
0x4F54EC: fldz
0x4F54EE: fstp    [esp+8+arg_C]
0x4F54F2: fld     [esp+8+arg_C]
0x4F54F6: fstp    qword ptr [edi]
0x4F54F8: cmp     byte ptr ds:0B361ACh, 0
0x4F54FF: jz      short loc_4F5516
0x4F5501: fld     qword ptr [edi]
0x4F5503: sub     esp, 8
0x4F5506: fstp    [esp+10h+var_10]
0x4F5509: push    offset aHasflames0_2f; "HasFlames >> %0.2f"
0x4F550E: call    Interface_ConsolePrint
0x4F5513: add     esp, 0Ch
0x4F5516: pop     edi
0x4F5517: mov     al, 1
0x4F5519: pop     esi
0x4F551A: retn
