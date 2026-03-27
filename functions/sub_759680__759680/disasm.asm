0x759680: push    ecx
0x759681: push    esi
0x759682: push    edi
0x759683: mov     edi, [esp+0Ch+arg_0]
0x759687: push    edi
0x759688: mov     esi, ecx
0x75968A: call    sub_75E920
0x75968F: mov     eax, [edi+21Ch]
0x759695: push    1
0x759697: lea     ecx, [esp+10h+var_4]
0x75969B: push    ecx
0x75969C: push    1
0x75969E: lea     edx, [esp+18h+arg_0]
0x7596A2: push    edx
0x7596A3: push    eax
0x7596A4: mov     eax, [eax+4]
0x7596A7: mov     [esp+20h+var_4], 1
0x7596AF: call    eax
0x7596B1: add     esp, 14h
0x7596B4: cmp     byte ptr [esp+0Ch+arg_0], 0
0x7596B9: push    edi
0x7596BA: setnz   cl
0x7596BD: mov     [esi+30h], cl
0x7596C0: lea     ecx, [esi+34h]
0x7596C3: call    sub_709430
0x7596C8: pop     edi
0x7596C9: pop     esi
0x7596CA: pop     ecx
0x7596CB: retn    4
