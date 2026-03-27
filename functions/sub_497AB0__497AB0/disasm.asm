0x497AB0: mov     ecx, [esp+arg_0]
0x497AB4: xor     eax, eax
0x497AB6: cmp     dword ptr ds:0B42F48h, 5
0x497ABD: setl    al
0x497AC0: sub     eax, 1
0x497AC3: and     eax, 2
0x497AC6: cmp     eax, ecx
0x497AC8: mov     ds:0B430B0h, eax
0x497ACD: jb      short locret_497AD5
0x497ACF: mov     ds:0B430B0h, ecx
0x497AD5: retn
