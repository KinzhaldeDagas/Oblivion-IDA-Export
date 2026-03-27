0x501A80: push    ecx
0x501A81: mov     ecx, [esp+4+l]
0x501A85: mov     edx, [esp+4+arg_10]
0x501A89: push    esi
0x501A8A: mov     esi, [esp+8+a4]
0x501A8E: lea     eax, [esp+8+var_1]
0x501A92: push    eax; UInt16
0x501A93: mov     eax, [esp+0Ch+arg_C]
0x501A97: push    ecx; l
0x501A98: mov     ecx, [esp+10h+a3]
0x501A9C: push    edx; a6
0x501A9D: mov     edx, [esp+14h+arg_4]
0x501AA1: push    eax; a5
0x501AA2: mov     eax, [esp+18h+a1]
0x501AA6: push    esi; a4
0x501AA7: push    ecx; a3
0x501AA8: push    edx; a2
0x501AA9: push    eax; a1
0x501AAA: call    Script_ExtractArgs
0x501AAF: add     esp, 20h
0x501AB2: test    al, al
0x501AB4: jnz     short loc_501AB9
0x501AB6: pop     esi
0x501AB7: pop     ecx
0x501AB8: retn
0x501AB9: mov     ecx, [esp+8+arg_18]
0x501ABD: movsx   edx, [esp+8+var_1]
0x501AC2: push    ecx
0x501AC3: push    0
0x501AC5: push    edx
0x501AC6: push    esi
0x501AC7: call    sub_4F4410
0x501ACC: add     esp, 10h
0x501ACF: pop     esi
0x501AD0: pop     ecx
0x501AD1: retn
