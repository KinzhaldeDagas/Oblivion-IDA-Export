0x9930D8: push    ebp
0x9930D9: mov     ebp, esp
0x9930DB: push    ecx
0x9930DC: fstcw   word ptr [ebp+var_4]
0x9930E0: mov     eax, [ebp+arg_4]
0x9930E3: mov     ecx, [ebp+arg_0]
0x9930E6: and     ecx, [ebp+arg_4]
0x9930E9: not     eax
0x9930EB: and     eax, [ebp+var_4]
0x9930EE: or      eax, ecx
0x9930F0: movzx   eax, ax
0x9930F3: mov     [ebp+arg_4], eax
0x9930F6: fldcw   word ptr [ebp+arg_4]
0x9930F9: movsx   eax, word ptr [ebp+var_4]
0x9930FD: leave
0x9930FE: retn
