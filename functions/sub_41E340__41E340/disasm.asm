0x41E340: mov     ecx, [esp+arg_0]
0x41E344: test    ecx, ecx
0x41E346: mov     al, 1
0x41E348: jz      short def_41E35D; jumptable 0041E35D default case, cases 4-7,9-16,18,19,23-25,27-47,49-58,60-72,74-85
0x41E34A: movzx   ecx, byte ptr [ecx+4]
0x41E34E: add     ecx, 0FFFFFFFEh; switch 85 cases
0x41E351: cmp     ecx, 54h
0x41E354: ja      short def_41E35D; jumptable 0041E35D default case, cases 4-7,9-16,18,19,23-25,27-47,49-58,60-72,74-85
0x41E356: movzx   ecx, ds:byte_41E374[ecx]
0x41E35D: jmp     ds:jpt_41E35D[ecx*4]; switch jump
0x41E364: xor     al, al; jumptable 0041E35D cases 2,3,8,17,20-22,26,48,59,73,86
0x41E366: retn    4; jumptable 0041E35D default case, cases 4-7,9-16,18,19,23-25,27-47,49-58,60-72,74-85
