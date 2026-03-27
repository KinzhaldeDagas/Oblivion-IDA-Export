0x74F910: mov     ax, [esp+arg_0]
0x74F915: test    ax, ax
0x74F918: jnz     short loc_74F944
0x74F91A: push    34h ; '4'; Size
0x74F91C: call    FormHeapAlloc
0x74F921: add     esp, 4
0x74F924: test    eax, eax
0x74F926: jz      short loc_74F974
0x74F928: mov     ecx, [esp+arg_10]
0x74F92C: fld     [esp+arg_C]
0x74F930: mov     edx, dword ptr [esp+arg_4]
0x74F934: push    ecx; int
0x74F935: push    ecx
0x74F936: fstp    [esp+8+var_8]; float
0x74F939: push    edx; char
0x74F93A: mov     ecx, eax
0x74F93C: call    sub_6D2480
0x74F941: retn    14h
0x74F944: cmp     ax, 1
0x74F948: jnz     short loc_74F974
0x74F94A: push    34h ; '4'; Size
0x74F94C: call    FormHeapAlloc
0x74F951: add     esp, 4
0x74F954: test    eax, eax
0x74F956: jz      short loc_74F974
0x74F958: mov     ecx, [esp+arg_10]
0x74F95C: fld     [esp+arg_C]
0x74F960: mov     edx, dword ptr [esp+arg_4]
0x74F964: push    ecx; int
0x74F965: push    ecx
0x74F966: fstp    [esp+8+var_8]; float
0x74F969: push    edx; char
0x74F96A: mov     ecx, eax
0x74F96C: call    sub_6EB460
0x74F971: retn    14h
0x74F974: xor     eax, eax
0x74F976: retn    14h
