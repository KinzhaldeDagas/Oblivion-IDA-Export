0x996E4E: mov     eax, [esp+arg_4]
0x996E52: and     eax, 7FFFFFFFh
0x996E57: cmp     eax, 40900000h
0x996E5C: jnb     short start_15___SPECIAL_CASES
0x996E5E: movlpd  xmm0, qword ptr [esp+4]
0x996E64: addsd   xmm0, ds:qword_AAE810
0x996E6C: sub     esp, 10h
0x996E6F: movlpd  [esp+10h+var_C], xmm0
0x996E75: fld     [esp+10h+var_C]
0x996E79: add     esp, 10h
0x996E7C: retn
