0x6BDF60: push    ecx
0x6BDF61: push    esi
0x6BDF62: push    edi
0x6BDF63: mov     edi, [esp+0Ch+arg_0]
0x6BDF67: mov     eax, [edi+21Ch]
0x6BDF6D: mov     edx, [eax+4]
0x6BDF70: mov     esi, ecx
0x6BDF72: push    1
0x6BDF74: lea     ecx, [esp+10h+var_4]
0x6BDF78: push    ecx
0x6BDF79: push    4
0x6BDF7B: push    esi
0x6BDF7C: push    eax
0x6BDF7D: mov     [esp+20h+var_4], 4
0x6BDF85: call    edx
0x6BDF87: mov     eax, [edi+21Ch]
0x6BDF8D: push    1
0x6BDF8F: lea     ecx, [esp+24h+var_4]
0x6BDF93: push    ecx
0x6BDF94: push    1
0x6BDF96: lea     edx, [esp+2Ch+arg_0]
0x6BDF9A: push    edx
0x6BDF9B: push    eax
0x6BDF9C: mov     eax, [eax+4]
0x6BDF9F: mov     [esp+34h+var_4], 1
0x6BDFA7: call    eax
0x6BDFA9: add     esp, 28h
0x6BDFAC: cmp     byte ptr [esp+0Ch+arg_0], 0
0x6BDFB1: pop     edi
0x6BDFB2: setnz   cl
0x6BDFB5: mov     [esi+4], cl
0x6BDFB8: pop     esi
0x6BDFB9: pop     ecx
0x6BDFBA: retn    4
