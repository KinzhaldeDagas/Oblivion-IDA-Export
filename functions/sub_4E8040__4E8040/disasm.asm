0x4E8040: sub     esp, 8; Verified preferred-node predicate: reads the least-significant bit of the Z float at graph-node+0x1C. The registered fPathPreferredPointBonus setting applies a bonus to this marked point for non-creature actors.
0x4E8043: fld     dword ptr [ecx+1Ch]
0x4E8046: fstp    [esp+8+var_4]
0x4E804A: fld     [esp+8+var_4]
0x4E804E: fistp   [esp+8+var_8]
0x4E8051: mov     al, byte ptr [esp+8+var_8]
0x4E8054: and     al, 1
0x4E8056: add     esp, 8
0x4E8059: retn
