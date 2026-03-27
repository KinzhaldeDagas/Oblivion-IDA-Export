0x706E10: push    ecx
0x706E11: push    esi
0x706E12: push    edi
0x706E13: mov     edi, [esp+0Ch+arg_0]
0x706E17: push    edi
0x706E18: mov     esi, ecx
0x706E1A: call    sub_700AC0
0x706E1F: add     esi, 18h
0x706E22: cmp     dword ptr [edi+0D8h], 0A000102h
0x706E2C: jnb     short loc_706E3D
0x706E2E: movzx   eax, byte ptr [edi+25Ch]
0x706E35: and     eax, 3
0x706E38: mov     [esi], ax
0x706E3B: jmp     short loc_706E5E
0x706E3D: mov     eax, [edi+21Ch]
0x706E43: mov     edx, [eax+4]
0x706E46: push    1
0x706E48: lea     ecx, [esp+10h+arg_0]
0x706E4C: push    ecx
0x706E4D: push    2
0x706E4F: push    esi
0x706E50: push    eax
0x706E51: mov     [esp+20h+arg_0], 2
0x706E59: call    edx
0x706E5B: add     esp, 14h
0x706E5E: mov     eax, [edi+0D8h]
0x706E64: cmp     eax, 4010005h
0x706E69: jb      short loc_706EAF
0x706E6B: cmp     eax, 14010002h
0x706E70: jnb     short loc_706EAF
0x706E72: mov     edi, [edi+21Ch]
0x706E78: mov     edx, [edi+4]
0x706E7B: push    1
0x706E7D: lea     eax, [esp+10h+arg_0]
0x706E81: push    eax
0x706E82: push    4
0x706E84: lea     ecx, [esp+18h+var_4]
0x706E88: push    ecx
0x706E89: push    edi
0x706E8A: mov     [esp+20h+arg_0], 4
0x706E92: call    edx
0x706E94: mov     ax, [esi]
0x706E97: mov     ecx, [esp+20h+var_4]
0x706E9B: and     ax, 0FFC3h
0x706E9F: lea     edx, ds:0[ecx*4]
0x706EA6: add     esp, 14h
0x706EA9: or      ax, dx
0x706EAC: mov     [esi], ax
0x706EAF: pop     edi
0x706EB0: pop     esi
0x706EB1: pop     ecx
0x706EB2: retn    4
