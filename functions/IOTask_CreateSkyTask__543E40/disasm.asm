0x543E40: push    0FFFFFFFFh
0x543E42: push    offset SEH_543E40
0x543E47: mov     eax, large fs:0
0x543E4D: push    eax
0x543E4E: push    ecx
0x543E4F: push    esi
0x543E50: mov     eax, ds:0B30AACh
0x543E55: xor     eax, esp
0x543E57: push    eax
0x543E58: lea     eax, [esp+18h+var_C]
0x543E5C: mov     large fs:0, eax
0x543E62: mov     esi, ecx
0x543E64: mov     [esp+18h+var_10], esi
0x543E68: push    3
0x543E6A: call    sub_436FA0
0x543E6F: mov     eax, [esp+18h+arg_0]
0x543E73: test    eax, eax
0x543E75: mov     dword ptr [esi], offset ??_7SkyTask@@6B@; const SkyTask::`vftable'
0x543E7B: mov     [esp+18h+var_4], 0
0x543E83: mov     [esi+28h], eax
0x543E86: jz      short loc_543E92
0x543E88: add     eax, 4
0x543E8B: push    eax; lpAddend
0x543E8C: call    dword ptr ds:0A28078h
0x543E92: mov     dword ptr [esi+2Ch], 0
0x543E99: mov     ecx, [esp+18h+arg_4]
0x543E9D: mov     al, [esp+18h+arg_C]
0x543EA1: push    ecx
0x543EA2: mov     ecx, esi
0x543EA4: mov     byte ptr [esp+1Ch+var_4], 2
0x543EA9: mov     [esi+34h], al
0x543EAC: call    sub_434600
0x543EB1: push    0
0x543EB3: push    1
0x543EB5: mov     ecx, esi
0x543EB7: call    sub_434CB0
0x543EBC: mov     eax, [esi+28h]
0x543EBF: test    eax, eax
0x543EC1: mov     edx, [esp+18h+arg_8]
0x543EC5: mov     [esi+30h], edx
0x543EC8: jz      short loc_543ED5
0x543ECA: cmp     byte ptr [esi+34h], 0
0x543ECE: jz      short loc_543ED5
0x543ED0: or      word ptr [eax+18h], 1
0x543ED5: mov     eax, esi
0x543ED7: mov     ecx, [esp+18h+var_C]
0x543EDB: mov     large fs:0, ecx
0x543EE2: pop     ecx
0x543EE3: pop     esi
0x543EE4: add     esp, 10h
0x543EE7: retn    10h
