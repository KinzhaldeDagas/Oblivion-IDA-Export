0x75F320: push    34h ; '4'; Size
0x75F322: call    FormHeapAlloc
0x75F327: add     esp, 4
0x75F32A: test    eax, eax
0x75F32C: jz      short loc_75F34A
0x75F32E: mov     ecx, [esp+arg_10]
0x75F332: fld     [esp+arg_C]
0x75F336: mov     edx, dword ptr [esp+arg_4]
0x75F33A: push    ecx; int
0x75F33B: push    ecx
0x75F33C: fstp    [esp+8+var_8]; float
0x75F33F: push    edx; char
0x75F340: mov     ecx, eax
0x75F342: call    sub_6EB460
0x75F347: retn    14h
0x75F34A: xor     eax, eax
0x75F34C: retn    14h
