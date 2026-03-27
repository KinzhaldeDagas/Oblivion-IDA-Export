0x4F83D0: fldz
0x4F83D2: push    esi
0x4F83D3: mov     esi, [esp+4+arg_C]
0x4F83D7: fstp    qword ptr [esi]
0x4F83D9: mov     ecx, ds:0B333C4h
0x4F83DF: call    Actor_GetDefaultClass
0x4F83E4: mov     edx, [esp+4+arg_4]
0x4F83E8: xor     ecx, ecx
0x4F83EA: test    edx, edx
0x4F83EC: jz      short loc_4F83F6
0x4F83EE: cmp     byte ptr [edx+4], 5
0x4F83F2: jnz     short loc_4F83F6
0x4F83F4: mov     ecx, edx
0x4F83F6: cmp     eax, ecx
0x4F83F8: jnz     short loc_4F83FE
0x4F83FA: fld1
0x4F83FC: fstp    qword ptr [esi]
0x4F83FE: cmp     byte ptr ds:0B361ACh, 0
0x4F8405: jz      short loc_4F841C
0x4F8407: fld     qword ptr [esi]
0x4F8409: sub     esp, 8
0x4F840C: fstp    [esp+0Ch+var_C]
0x4F840F: push    offset aGetisclass0_2f; "GetIsClass >> %0.2f"
0x4F8414: call    Interface_ConsolePrint
0x4F8419: add     esp, 0Ch
0x4F841C: mov     al, 1
0x4F841E: pop     esi
0x4F841F: retn
