0x69D880: fldz; Verified MagicHitEffect constructor starts from the 24-byte BSTempEffect base, nulls ownerActiveEffect (+0x18) and targetReference (+0x1C), zeros elapsedSeconds (+0x20) and bFinished (+0x24), establishing a 40-byte base layout.
0x69D882: push    esi
0x69D883: push    ecx
0x69D884: fstp    [esp+8+durationSeconds]; durationSeconds
0x69D887: push    0; parentCell
0x69D889: mov     esi, ecx
0x69D88B: call    BSTempEffect_Constructor; Verified BSTempEffect constructor: initializes NiObject base, stores duration at +0x08 and parent cell at +0x0C, zeros elapsed at +0x10, sets initializeCallbackDone (+0x14) false, and installs BSTempEffect vtable.
0x69D890: fldz
0x69D892: fstp    dword ptr [esi+20h]
0x69D895: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69D89B: fld     dword ptr ds:0A32048h
0x69D8A1: mov     dword ptr [esi+1Ch], 0
0x69D8A8: fstp    dword ptr [esi+8]
0x69D8AB: mov     dword ptr [esi+18h], 0
0x69D8B2: mov     byte ptr [esi+24h], 0
0x69D8B6: mov     eax, esi
0x69D8B8: pop     esi
0x69D8B9: retn
