0x5E0EA0: mov     eax, [ecx+0B0h]
0x5E0EA6: test    eax, eax
0x5E0EA8: jz      short loc_5E0EAF
0x5E0EAA: cmp     eax, 4
0x5E0EAD: jnz     short locret_5E0EBC
0x5E0EAF: fld     [esp+arg_0]
0x5E0EB3: push    ecx
0x5E0EB4: fstp    [esp+4+a2]; a2
0x5E0EB7: call    sub_65A450
0x5E0EBC: retn    4
