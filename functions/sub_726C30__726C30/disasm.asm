0x726C30: push    0FFFFFFFFh
0x726C32: push    offset SEH_726C30
0x726C37: mov     eax, large fs:0
0x726C3D: push    eax
0x726C3E: sub     esp, 10h
0x726C41: push    ebx
0x726C42: push    ebp
0x726C43: push    esi
0x726C44: push    edi
0x726C45: mov     eax, ds:0B30AACh
0x726C4A: xor     eax, esp
0x726C4C: push    eax
0x726C4D: lea     eax, [esp+30h+var_C]
0x726C51: mov     large fs:0, eax
0x726C57: mov     ebp, ecx
0x726C59: mov     ebx, [esp+30h+a2]
0x726C5D: push    ebx; a2
0x726C5E: call    sub_7008A0
