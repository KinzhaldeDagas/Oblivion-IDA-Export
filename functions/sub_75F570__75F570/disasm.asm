0x75F570: push    34h ; '4'; Size
0x75F572: call    FormHeapAlloc
0x75F577: add     esp, 4
0x75F57A: test    eax, eax
0x75F57C: jz      short loc_75F59A
0x75F57E: mov     ecx, [esp+arg_10]
0x75F582: fld     [esp+arg_C]
0x75F586: mov     edx, dword ptr [esp+arg_4]
0x75F58A: push    ecx; int
0x75F58B: push    ecx
0x75F58C: fstp    [esp+8+var_8]; float
0x75F58F: push    edx; char
0x75F590: mov     ecx, eax
0x75F592: call    sub_6D2480
0x75F597: retn    14h
0x75F59A: xor     eax, eax
0x75F59C: retn    14h
