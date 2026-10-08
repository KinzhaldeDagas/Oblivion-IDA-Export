0x452170: mov     eax, [esp+arg_0]; EnginePatch v2: byte-checked SaveLoad_AdvanceBufferOffset hook. Clamps save cursor movement to active tracked record buffer.
0x452174: add     [ecx+14h], eax
0x452177: retn    4
