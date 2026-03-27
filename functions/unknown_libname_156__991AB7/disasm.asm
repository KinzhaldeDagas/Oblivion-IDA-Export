0x991AB7: push    ebp
0x991AB8: mov     ebp, esp
0x991ABA: add     esp, 0FFFFFFE0h
0x991ABD: mov     [ebp+var_20], eax
0x991AC0: fstp    [ebp+var_8]
0x991AC3: mov     [ebp+var_1C], ecx
0x991AC6: mov     eax, [ebp+arg_8]
0x991AC9: mov     ecx, [ebp+arg_C]
0x991ACC: mov     [ebp+var_18], eax
0x991ACF: mov     [ebp+var_14], ecx
0x991AD2: lea     eax, [ebp+arg_0]
0x991AD5: lea     ecx, [ebp+var_20]
0x991AD8: push    eax
0x991AD9: push    ecx
0x991ADA: push    edx
0x991ADB: call    __87except
0x991AE0: add     esp, 0Ch
0x991AE3: fld     [ebp+var_8]
0x991AE6: cmp     [ebp+arg_0], 27Fh
0x991AEC: jz      short CW_is_restored
0x991AEE: fldcw   [ebp+arg_0]
0x991AF1: leave
0x991AF2: retn
