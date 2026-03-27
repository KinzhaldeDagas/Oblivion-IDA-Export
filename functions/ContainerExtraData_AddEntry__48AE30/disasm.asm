0x48AE30: sub     esp, 14h
0x48AE33: fld     dword ptr ds:0A30634h
0x48AE39: push    ebx
0x48AE3A: mov     ebx, [esp+18h+arg_0]
0x48AE3E: push    ebp
0x48AE3F: push    edi
0x48AE40: mov     edi, ecx
0x48AE42: xor     ebp, ebp
0x48AE44: fstp    dword ptr [edi+8]
0x48AE47: cmp     ebx, ebp
0x48AE49: mov     [esp+20h+var_10], edi
0x48AE4D: jz      ContainerExtraData_AddEntry___Done
