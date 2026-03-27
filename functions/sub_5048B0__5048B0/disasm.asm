0x5048B0: mov     eax, [esp+arg_8]
0x5048B4: test    eax, eax
0x5048B6: jz      short loc_5048CB
0x5048B8: mov     ecx, [esp+arg_18]
0x5048BC: push    ecx
0x5048BD: push    0
0x5048BF: push    0
0x5048C1: push    eax
0x5048C2: call    sub_4F75F0
0x5048C7: add     esp, 10h
0x5048CA: retn
0x5048CB: mov     al, 1
0x5048CD: retn
