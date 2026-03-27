0x4F0DA0: cmp     byte ptr [ecx+0D8h], 0
0x4F0DA7: jz      short loc_4F0DCC
0x4F0DA9: movsx   edx, [esp+arg_0]
0x4F0DAE: lea     eax, [esp+arg_0]
0x4F0DB2: push    eax
0x4F0DB3: movzx   eax, [esp+4+arg_4]
0x4F0DB8: shl     edx, 10h
0x4F0DBB: or      edx, eax
0x4F0DBD: push    edx
0x4F0DBE: add     ecx, 0C8h ; 'È'
0x4F0DC4: call    sub_4D6760
0x4F0DC9: retn    8
0x4F0DCC: mov     al, 1
0x4F0DCE: retn    8
