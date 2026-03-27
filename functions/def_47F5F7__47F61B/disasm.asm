0x47F61B: add     eax, 4; jumptable 0047F5F7 default case
0x47F61E: sub     esi, 1
0x47F621: jnz     short loc_47F5F2
0x47F623: mov     esi, [esp+arg_1C]
0x47F627: lea     eax, ds:0[ebp*4]
0x47F62E: add     [esp+arg_C], eax
0x47F632: sub     [esp+arg_10], 1
0x47F637: jnz     short loc_47F5E5
0x47F639: mov     ebx, [esp+arg_14]
0x47F63D: add     edi, 1
0x47F640: cmp     edi, ebx
0x47F642: jb      loc_47F5C0
0x47F648: pop     ebp
0x47F649: add     dword ptr [esi+68h], 1
0x47F64D: pop     edi
0x47F64E: pop     ebx
0x47F64F: pop     esi
0x47F650: add     esp, 0Ch
0x47F653: retn
