0x46D070: push    ecx
0x46D071: push    ebp
0x46D072: mov     ebp, [esp+8+arg_0]
0x46D076: test    ebp, ebp
0x46D078: push    edi
0x46D079: lea     edi, [ecx+4]
0x46D07C: jz      short loc_46D08D
0x46D07E: push    0FFFFFFFFh; a2
0x46D080: mov     ecx, ebp; this
0x46D082: call    TESForm_GetOverrideFile
0x46D087: mov     [esp+0Ch+var_4], eax
0x46D08B: jmp     short loc_46D095
0x46D08D: mov     [esp+0Ch+var_4], 0
0x46D095: test    edi, edi
0x46D097: jz      loc_46D19B
0x46D09D: push    esi
0x46D09E: mov     edi, edi
