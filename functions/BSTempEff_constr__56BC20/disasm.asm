0x56BC20: push    esi
0x56BC21: mov     esi, ecx
0x56BC23: call    NiObject_constr
0x56BC28: fld     [esp+4+arg_4]
0x56BC2C: mov     eax, [esp+4+arg_0]
0x56BC30: fstp    dword ptr [esi+8]
0x56BC33: fldz
0x56BC35: mov     [esi+0Ch], eax
0x56BC38: fstp    dword ptr [esi+10h]
0x56BC3B: mov     dword ptr [esi], offset ??_7BSTempEffect@@6B@; const BSTempEffect::`vftable'
0x56BC41: mov     byte ptr [esi+14h], 0
0x56BC45: mov     eax, esi
0x56BC47: pop     esi
0x56BC48: retn    8
