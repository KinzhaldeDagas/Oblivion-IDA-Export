0x501BA0: push    ecx
0x501BA1: mov     ecx, [esp+4+l]
0x501BA5: mov     edx, [esp+4+arg_10]
0x501BA9: push    esi
0x501BAA: mov     esi, [esp+8+a4]
0x501BAE: lea     eax, [esp+8+var_1]
0x501BB2: push    eax; UInt16
0x501BB3: mov     eax, [esp+0Ch+arg_C]
0x501BB7: push    ecx; l
0x501BB8: mov     ecx, [esp+10h+a3]
0x501BBC: push    edx; a6
0x501BBD: mov     edx, [esp+14h+arg_4]
0x501BC1: push    eax; a5
0x501BC2: mov     eax, [esp+18h+a1]
0x501BC6: push    esi; a4
0x501BC7: push    ecx; a3
0x501BC8: push    edx; a2
0x501BC9: push    eax; a1
0x501BCA: call    Script_ExtractArgs
0x501BCF: add     esp, 20h
0x501BD2: test    al, al
0x501BD4: jnz     short loc_501BD9
0x501BD6: pop     esi
0x501BD7: pop     ecx
0x501BD8: retn
0x501BD9: mov     ecx, [esp+8+arg_18]
0x501BDD: movsx   edx, [esp+8+var_1]
0x501BE2: push    ecx
0x501BE3: push    0
0x501BE5: push    edx
0x501BE6: push    esi
0x501BE7: call    sub_4F4500
0x501BEC: add     esp, 10h
0x501BEF: pop     esi
0x501BF0: pop     ecx
0x501BF1: retn
