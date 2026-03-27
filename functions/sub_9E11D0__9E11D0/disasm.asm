0x9E11D0: push    0FFFFFFFFh
0x9E11D2: push    offset SEH_9E11D0
0x9E11D7: mov     eax, large fs:0
0x9E11DD: push    eax
0x9E11DE: mov     eax, ___security_cookie
0x9E11E3: xor     eax, esp
0x9E11E5: push    eax
0x9E11E6: lea     eax, [esp+10h+var_C]
0x9E11EA: mov     large fs:0, eax
0x9E11F0: mov     ecx, offset dword_B35788
0x9E11F5: call    TESForm_constr
0x9E11FA: mov     ecx, offset dword_B35788
0x9E11FF: mov     [esp+10h+var_4], 0
0x9E1207: mov     dword_B35788, offset ??_7TESCombatStyle@@6B@; const TESCombatStyle::`vftable' ...
0x9E1211: mov     byte_B3578C, 3Eh ; '>'
0x9E1218: call    sub_4A9A00
0x9E121D: push    offset sub_A1AE40; void (__cdecl *)()
0x9E1222: mov     dword_B35788, offset ??_7DefaultCombatStyle@@6B@; const DefaultCombatStyle::`vftable' ...
0x9E122C: call    _atexit
0x9E1231: add     esp, 4
0x9E1234: mov     ecx, [esp+10h+var_C]
0x9E1238: mov     large fs:0, ecx
0x9E123F: pop     ecx
0x9E1240: add     esp, 0Ch
0x9E1243: retn
