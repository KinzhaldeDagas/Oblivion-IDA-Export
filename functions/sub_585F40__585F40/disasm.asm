0x585F40: push    0FFFFFFFFh
0x585F42: push    offset SEH_5A8BC0
0x585F47: mov     eax, large fs:0
0x585F4D: push    eax
0x585F4E: sub     esp, 8
0x585F51: push    esi
0x585F52: mov     eax, ds:0B30AACh
0x585F57: xor     eax, esp
0x585F59: push    eax
0x585F5A: lea     eax, [esp+1Ch+var_C]
0x585F5E: mov     large fs:0, eax
0x585F64: xor     esi, esi
0x585F66: mov     [esp+1Ch+var_14], esi
0x585F6A: mov     [esp+1Ch+var_10], si
0x585F6F: mov     [esp+1Ch+var_E], si
0x585F74: mov     ecx, [esp+1Ch+Format]
0x585F78: lea     eax, [esp+1Ch+ArgList]
0x585F7C: push    eax; ArgList
0x585F7D: push    ecx; Format
0x585F7E: mov     ecx, [esp+24h+arg_0]; this
0x585F82: mov     [esp+24h+var_4], esi
0x585F86: call    Console_FormatPrint
0x585F8B: push    esi
0x585F8C: call    FormHeapFree
0x585F91: add     esp, 4
0x585F94: mov     ecx, [esp+1Ch+var_C]
0x585F98: mov     large fs:0, ecx
0x585F9F: pop     ecx
0x585FA0: pop     esi
0x585FA1: add     esp, 14h
0x585FA4: retn
