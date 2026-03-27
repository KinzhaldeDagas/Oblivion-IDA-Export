0x4D7A90: push    esi
0x4D7A91: mov     esi, ecx
0x4D7A93: mov     eax, [esi]
0x4D7A95: mov     edx, [eax+170h]
0x4D7A9B: call    edx
0x4D7A9D: movzx   eax, byte ptr [eax+4]
0x4D7AA1: add     eax, 0FFFFFFDDh
0x4D7AA4: cmp     eax, 2
0x4D7AA7: ja      short loc_4D7ADD
0x4D7AA9: mov     eax, [esi]
0x4D7AAB: push    ebx
0x4D7AAC: mov     ebx, [esp+8+arg_0]
0x4D7AB0: test    bl, bl
0x4D7AB2: push    10000000h
0x4D7AB7: mov     ecx, esi
0x4D7AB9: jz      short loc_4D7ACE
0x4D7ABB: mov     edx, [eax+40h]
0x4D7ABE: call    edx
0x4D7AC0: push    ebx
0x4D7AC1: lea     ecx, [esi+44h]
0x4D7AC4: call    sub_4209D0
0x4D7AC9: pop     ebx
0x4D7ACA: pop     esi
0x4D7ACB: retn    4
0x4D7ACE: mov     edx, [eax+44h]
0x4D7AD1: call    edx
0x4D7AD3: push    ebx
0x4D7AD4: lea     ecx, [esi+44h]
0x4D7AD7: call    sub_4209D0
0x4D7ADC: pop     ebx
0x4D7ADD: pop     esi
0x4D7ADE: retn    4
