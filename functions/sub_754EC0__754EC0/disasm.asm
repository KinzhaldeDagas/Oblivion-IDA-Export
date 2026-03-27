0x754EC0: push    esi
0x754EC1: mov     esi, ecx
0x754EC3: and     word ptr [esi+8], 0FFF9h
0x754EC9: cmp     dword ptr [esi+30h], 0
0x754ECD: jz      short loc_754F19
0x754ECF: fld     [esp+4+arg_0]
0x754ED3: push    ecx
0x754ED4: fstp    [esp+8+var_8]; float
0x754ED7: call    sub_6C36B0
0x754EDC: test    al, al
0x754EDE: jnz     short loc_754F19
0x754EE0: fld     dword ptr [esi+3Ch]
0x754EE3: fld     dword ptr ds:0A7DEB4h
0x754EE9: fchs
0x754EEB: fucompp
0x754EED: fnstsw  ax
0x754EEF: test    ah, 44h
0x754EF2: jp      short loc_754EFA
0x754EF4: fld     dword ptr [esi+28h]
0x754EF7: fstp    dword ptr [esi+3Ch]
0x754EFA: fld     dword ptr [esi+3Ch]
0x754EFD: fld     dword ptr [esi+28h]
0x754F00: fcompp
0x754F02: fnstsw  ax
0x754F04: test    ah, 5
0x754F07: jp      short loc_754F13
0x754F09: mov     eax, [esi+30h]
0x754F0C: mov     byte ptr [eax+0ECh], 1
0x754F13: fld     dword ptr [esi+28h]
0x754F16: fstp    dword ptr [esi+3Ch]
0x754F19: pop     esi
0x754F1A: retn    4
