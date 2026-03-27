0x6608A0: push    ecx
0x6608A1: push    esi
0x6608A2: mov     esi, ecx
0x6608A4: call    Actor_IsSneaking
0x6608A9: test    al, al
0x6608AB: jnz     short loc_6608DD
0x6608AD: mov     ecx, [esi+58h]
0x6608B0: mov     eax, [ecx]
0x6608B2: mov     edx, [eax+33Ch]
0x6608B8: push    0
0x6608BA: call    edx
0x6608BC: mov     ecx, [esp+8+arg_4]
0x6608C0: mov     edx, [esp+8+arg_0]
0x6608C4: mov     [esp+8+var_4], eax
0x6608C8: mov     eax, [esp+8+arg_8]
0x6608CC: push    eax
0x6608CD: push    ecx
0x6608CE: push    edx
0x6608CF: lea     eax, [esp+14h+var_4]
0x6608D3: push    esi
0x6608D4: push    eax
0x6608D5: call    sub_616530
0x6608DA: add     esp, 14h
0x6608DD: pop     esi
0x6608DE: pop     ecx
0x6608DF: retn    0Ch
