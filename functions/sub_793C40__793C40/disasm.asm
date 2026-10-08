0x793C40: mov     eax, [esp+startingMatrix]; Stores only this tree's [startingMatrix, matrixSpan] window into the shared global wind-matrix array.
0x793C44: mov     edx, [esp+matrixSpan]
0x793C48: mov     [ecx+28h], eax
0x793C4B: mov     [ecx+2Ch], edx
0x793C4E: retn    8
