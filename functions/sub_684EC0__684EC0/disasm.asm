0x684EC0: sub     esp, 0Ch
0x684EC3: push    esi
0x684EC4: push    edi
0x684EC5: mov     esi, ecx
0x684EC7: call    sub_684830
0x684ECC: mov     edi, [esi+30h]
0x684ECF: test    edi, edi
0x684ED1: jz      short loc_684EEA
0x684ED3: mov     ecx, edi
0x684ED5: call    sub_538B60
0x684EDA: push    edi
0x684EDB: call    FormHeapFree
0x684EE0: add     esp, 4
0x684EE3: mov     dword ptr [esi+30h], 0
0x684EEA: lea     ecx, [esi+14h]
0x684EED: call    sub_68C6E0
0x684EF2: fld     dword ptr ds:0A32048h
0x684EF8: fst     dword ptr [esi+1Ch]
0x684EFB: pop     edi
0x684EFC: fldz
0x684EFE: mov     dword ptr [esi+48h], 0
0x684F05: fst     dword ptr [esi+24h]
0x684F08: mov     byte ptr [esi+2Ch], 0
0x684F0C: fstp    dword ptr [esi+20h]
0x684F0F: fst     [esp+10h+var_C]
0x684F13: mov     eax, [esp+10h+var_C]
0x684F17: fst     [esp+10h+var_8]
0x684F1B: mov     ecx, [esp+10h+var_8]
0x684F1F: mov     [esi+3Ch], eax
0x684F22: fstp    [esp+10h+var_4]
0x684F26: mov     edx, [esp+10h+var_4]
0x684F2A: mov     [esi+40h], ecx
0x684F2D: mov     [esi+44h], edx
0x684F30: pop     esi
0x684F31: add     esp, 0Ch
0x684F34: retn
