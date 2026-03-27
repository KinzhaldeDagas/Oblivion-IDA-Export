0x984EAC: push    ebp
0x984EAD: mov     ebp, esp
0x984EAF: sub     esp, 10h
0x984EB2: push    [ebp+Locale]; struct localeinfo_struct *
0x984EB5: lea     ecx, [ebp+var_10]; this
0x984EB8: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x984EBD: mov     eax, [ebp+var_10.locinfo]
0x984EC0: cmp     dword ptr [eax+0ACh], 1
0x984EC7: jle     short loc_984EDF
0x984EC9: lea     eax, [ebp+var_10]
0x984ECC: push    eax; Locale
0x984ECD: push    103h; Type
0x984ED2: push    [ebp+C]; C
0x984ED5: call    __isctype_l
0x984EDA: add     esp, 0Ch
0x984EDD: jmp     short loc_984EF1
0x984EDF: mov     eax, [eax+0C8h]
0x984EE5: mov     ecx, [ebp+C]
0x984EE8: movzx   eax, word ptr [eax+ecx*2]
0x984EEC: and     eax, 103h
0x984EF1: cmp     [ebp+var_4], 0
0x984EF5: jz      short locret_984EFE
0x984EF7: mov     ecx, [ebp+var_8]
0x984EFA: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x984EFE: leave
0x984EFF: retn
