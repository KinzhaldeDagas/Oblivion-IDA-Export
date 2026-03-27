0x4307F0: cmp     [esp+arg_0], 0
0x4307F5: jz      short loc_430808
0x4307F7: mov     dword ptr [ecx+4], offset BSFile_ReadFuncSwapper
0x4307FE: mov     dword ptr [ecx+8], offset BSFile_WriteFuncSwapped
0x430805: retn    4
0x430808: mov     dword ptr [ecx+4], offset BSFile_ReadFunc
0x43080F: mov     dword ptr [ecx+8], offset BSFile_WriteFunc
0x430816: retn    4
