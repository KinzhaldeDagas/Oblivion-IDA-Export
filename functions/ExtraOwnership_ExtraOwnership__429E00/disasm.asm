0x429E00: mov     eax, ecx; Verified ExtraOwnership constructor: initializes BSExtraData type 0x27, clears next, installs ExtraOwnership vtable, and stores the TESForm* owner at +0x0C. The payload size is 16 bytes.
0x429E02: mov     ecx, [esp+owner]
0x429E06: mov     byte ptr [eax+4], 27h ; '''
0x429E0A: mov     dword ptr [eax+8], 0
0x429E11: mov     dword ptr [eax], offset ??_7ExtraOwnership@@6B@; const ExtraOwnership::`vftable'
0x429E17: mov     [eax+0Ch], ecx
0x429E1A: retn    4
