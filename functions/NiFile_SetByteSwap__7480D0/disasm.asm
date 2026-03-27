0x7480D0: cmp     [esp+arg_0], 0
0x7480D5: jz      short loc_7480E8
0x7480D7: mov     dword ptr [ecx+4], offset NiFile_ReadFuncSwapped
0x7480DE: mov     dword ptr [ecx+8], offset NiFile_WriteFuncSwapped
0x7480E5: retn    4
0x7480E8: mov     dword ptr [ecx+4], offset NiFile_ReadFunc
0x7480EF: mov     dword ptr [ecx+8], offset NiFile_WriteFunc
0x7480F6: retn    4
