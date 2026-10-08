0x56BC20: push    esi; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x56BC21: mov     esi, ecx
0x56BC23: call    NiObject_constr
0x56BC28: fld     [esp+4+durationSeconds]
0x56BC2C: mov     eax, [esp+4+parentCell]
0x56BC30: fstp    dword ptr [esi+8]; BloodOnDeath decode 2026-05-26: BSTempEffect constructor stores duration at +0x08 and owning cell at +0x0C; elapsed starts at +0x10.
0x56BC33: fldz
0x56BC35: mov     [esi+0Ch], eax
0x56BC38: fstp    dword ptr [esi+10h]
0x56BC3B: mov     dword ptr [esi], offset ??_7BSTempEffect@@6B@; const BSTempEffect::`vftable'
0x56BC41: mov     byte ptr [esi+14h], 0
0x56BC45: mov     eax, esi
0x56BC47: pop     esi
0x56BC48: retn    8
