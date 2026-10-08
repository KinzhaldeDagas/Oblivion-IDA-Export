0x612CF0: push    ecx; Marks CombatController+0x15A as a blocking ally and starts timer: +0x164=current controller time +0x44, +0x168=game setting, +0x16C=-1.
0x612CF1: cmp     byte ptr [ecx+15Ah], 0
0x612CF8: jnz     short loc_612D28
0x612CFA: fld     dword ptr ds:0B37290h; Blocking-ally duration is fCombatInTheWayTimer (default 1.0 s).
0x612D00: fstp    [esp+4+var_4]
0x612D03: fld     dword ptr [ecx+44h]
0x612D06: fstp    dword ptr [ecx+164h]
0x612D0C: fld     [esp+4+var_4]
0x612D0F: fstp    dword ptr [ecx+168h]
0x612D15: fld     dword ptr ds:0A30634h
0x612D1B: fstp    dword ptr [ecx+16Ch]
0x612D21: mov     byte ptr [ecx+15Ah], 1
0x612D28: pop     ecx
0x612D29: retn
