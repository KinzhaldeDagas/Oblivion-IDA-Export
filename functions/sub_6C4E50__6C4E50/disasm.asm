0x6C4E50: push    ecx
0x6C4E51: push    esi
0x6C4E52: mov     esi, [esp+8+arg_0]
0x6C4E56: push    edi
0x6C4E57: push    esi
0x6C4E58: mov     edi, ecx
0x6C4E5A: call    sub_715F40
0x6C4E5F: mov     eax, [esi+21Ch]
0x6C4E65: push    1
0x6C4E67: lea     ecx, [esp+10h+var_4]
0x6C4E6B: push    ecx
0x6C4E6C: push    1
0x6C4E6E: lea     edx, [esp+18h+arg_0]
0x6C4E72: push    edx
0x6C4E73: push    eax
0x6C4E74: mov     eax, [eax+4]
0x6C4E77: mov     [esp+20h+var_4], 1
0x6C4E7F: call    eax
0x6C4E81: add     esp, 14h
0x6C4E84: cmp     byte ptr [esp+0Ch+arg_0], 0
0x6C4E89: setnz   cl
0x6C4E8C: mov     [edi+6Ch], cl
0x6C4E8F: mov     ecx, esi
0x6C4E91: call    sub_712AE0
0x6C4E96: cmp     dword ptr [esi+0D8h], 0A010068h
0x6C4EA0: jb      short loc_6C4EB2
0x6C4EA2: mov     ecx, esi
0x6C4EA4: call    sub_712A90
0x6C4EA9: push    eax; a2
0x6C4EAA: lea     ecx, [edi+7Ch]; this
0x6C4EAD: call    NiSmartPointer_Set??
0x6C4EB2: pop     edi
0x6C4EB3: pop     esi
0x6C4EB4: pop     ecx
0x6C4EB5: retn    4
