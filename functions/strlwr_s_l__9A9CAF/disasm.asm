0x9A9CAF: push    ebp
0x9A9CB0: mov     ebp, esp
0x9A9CB2: sub     esp, 10h
0x9A9CB5: push    [ebp+Locale]; struct localeinfo_struct *
0x9A9CB8: lea     ecx, [ebp+var_10]; this
0x9A9CBB: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9A9CC0: lea     eax, [ebp+var_10]
0x9A9CC3: push    eax; struct localeinfo_struct *
0x9A9CC4: push    [ebp+Size]; MaxCount
0x9A9CC7: push    [ebp+Str]; Str
0x9A9CCA: call    ?_strlwr_s_l_stat@@YAHPADIPAUlocaleinfo_struct@@@Z
0x9A9CCF: add     esp, 0Ch
0x9A9CD2: cmp     [ebp+var_4], 0
0x9A9CD6: jz      short locret_9A9CDF
0x9A9CD8: mov     ecx, [ebp+var_8]
0x9A9CDB: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9A9CDF: leave
0x9A9CE0: retn
