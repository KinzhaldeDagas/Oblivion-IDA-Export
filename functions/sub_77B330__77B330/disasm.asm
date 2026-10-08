0x77B330: mov     al, [esp+arg_0]; DX10OBSE runtime log pass 2026-05-24: InternalNormalizeNormals byte setter is hot and often writes the existing value. Plugin now suppresses same-value DX10 uploads/log spam while preserving observed Oblivion behavior and frame-summary call counts.
0x77B334: mov     [ecx+0FF5h], al
0x77B33A: retn    4
