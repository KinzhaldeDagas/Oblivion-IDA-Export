0x8BB654: mov     edx, dword ptr [esp+arg_10]; jumptable 008BB62E default case
0x8BB658: mov     ecx, dword ptr [esp+Args]
0x8BB65C: push    edx; char
0x8BB65D: mov     edx, [esp+4+arg_18]
0x8BB661: push    ecx; Args
0x8BB662: mov     ecx, [esp+8+arg_14]
0x8BB666: push    edx; int
0x8BB667: push    ecx; int
0x8BB668: push    ebx; ArgList
0x8BB669: push    eax; int
0x8BB66A: mov     ecx, esi
0x8BB66C: call    sub_8BB6A0
0x8BB671: cmp     edi, 2
0x8BB674: jz      short loc_8BB67B
0x8BB676: cmp     edi, 3
0x8BB679: jnz     short loc_8BB67C
0x8BB67B: int     3; Trap to Debugger
0x8BB67C: pop     edi
0x8BB67D: pop     esi
0x8BB67E: pop     ebx
0x8BB67F: retn    14h
