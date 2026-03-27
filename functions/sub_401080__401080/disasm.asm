0x401080: push    edi
0x401081: mov     edi, [esp+4+arg_8]
0x401085: sub     edi, 1
0x401088: js      short loc_4010AE
0x40108A: push    ebx
0x40108B: mov     ebx, [esp+8+arg_C]
0x40108F: push    ebp
0x401090: mov     ebp, [esp+0Ch+arg_4]
0x401094: push    esi
0x401095: mov     esi, [esp+10h+arg_0]
0x401099: lea     esp, [esp+0]
0x4010A0: mov     ecx, esi
0x4010A2: call    ebx
0x4010A4: add     esi, ebp
0x4010A6: sub     edi, 1
0x4010A9: jns     short loc_4010A0
0x4010AB: pop     esi
0x4010AC: pop     ebp
0x4010AD: pop     ebx
0x4010AE: pop     edi
0x4010AF: retn    10h
