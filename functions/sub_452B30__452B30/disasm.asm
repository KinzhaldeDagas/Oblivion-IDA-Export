0x452B30: push    esi
0x452B31: mov     esi, ecx
0x452B33: mov     eax, [esi+4]
0x452B36: push    eax
0x452B37: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x452B3D: call    FormHeapFree
0x452B42: add     esp, 4
0x452B45: test    [esp+4+arg_0], 1
0x452B4A: jz      short loc_452B55
0x452B4C: push    esi
0x452B4D: call    FormHeapFree
0x452B52: add     esp, 4
0x452B55: mov     eax, esi
0x452B57: pop     esi
0x452B58: retn    4
