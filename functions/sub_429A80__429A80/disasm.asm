0x429A80: mov     eax, ecx; Verified ExtraLock constructor: initializes BSExtraData type 0x31 and wrapper vtable, clears the +8 base field, and stores the ExtraLockData* payload at +0x0C.
0x429A82: mov     ecx, [esp+lockData]
0x429A86: mov     byte ptr [eax+4], 31h ; '1'
0x429A8A: mov     dword ptr [eax+8], 0
0x429A91: mov     dword ptr [eax], offset ??_7ExtraLock@@6B@; const ExtraLock::`vftable'
0x429A97: mov     [eax+0Ch], ecx
0x429A9A: retn    4
