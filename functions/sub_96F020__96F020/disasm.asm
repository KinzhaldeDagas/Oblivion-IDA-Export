0x96F020: push    ebx
0x96F021: push    ebp
0x96F022: push    esi
0x96F023: push    edi
0x96F024: mov     edi, [esp+10h+arg_0]
0x96F028: push    edi
0x96F029: mov     ebp, ecx
0x96F02B: call    sub_709430
0x96F030: lea     esi, [ebp+0Ch]
0x96F033: mov     ebx, 3
0x96F038: push    edi
0x96F039: mov     ecx, esi
0x96F03B: call    sub_709430
0x96F040: add     esi, 0Ch
0x96F043: sub     ebx, 1
0x96F046: jnz     short loc_96F038
0x96F048: push    3
0x96F04A: add     ebp, 30h ; '0'
0x96F04D: push    ebp
0x96F04E: push    edi
0x96F04F: call    sub_6DE270
0x96F054: add     esp, 0Ch
0x96F057: pop     edi
0x96F058: pop     esi
0x96F059: pop     ebp
0x96F05A: pop     ebx
0x96F05B: retn    4
