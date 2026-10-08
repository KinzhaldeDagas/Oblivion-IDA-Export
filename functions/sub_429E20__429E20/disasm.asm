0x429E20: mov     eax, ecx; Verified ExtraGlobal constructor: initializes BSExtraData type 0x28, clears next, installs ExtraGlobal vtable, and stores TESGlobal* at +0x0C; payload size is 16 bytes.
0x429E22: mov     ecx, [esp+global]
0x429E26: mov     byte ptr [eax+4], 28h ; '('
0x429E2A: mov     dword ptr [eax+8], 0
0x429E31: mov     dword ptr [eax], offset ??_7ExtraGlobal@@6B@; const ExtraGlobal::`vftable'
0x429E37: mov     [eax+0Ch], ecx
0x429E3A: retn    4
