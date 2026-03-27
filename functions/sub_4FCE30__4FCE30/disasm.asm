0x4FCE30: push    0FFFFFFFFh
0x4FCE32: push    offset SEH_4FCE30
0x4FCE37: mov     eax, large fs:0
0x4FCE3D: push    eax
0x4FCE3E: sub     esp, 110h
0x4FCE44: mov     eax, ds:0B30AACh
0x4FCE49: xor     eax, esp
0x4FCE4B: mov     [esp+11Ch+var_10], eax
0x4FCE52: push    esi
0x4FCE53: mov     eax, ds:0B30AACh
0x4FCE58: xor     eax, esp
0x4FCE5A: push    eax; ArgList
0x4FCE5B: lea     eax, [esp+124h+var_C]
0x4FCE62: mov     large fs:0, eax
0x4FCE68: mov     ecx, [esp+124h+Format]
0x4FCE6F: mov     esi, [esp+124h+arg_0]
0x4FCE76: lea     eax, [esp+124h+ArgList]
0x4FCE7D: push    eax; ArgList
0x4FCE7E: push    ecx; Format
0x4FCE7F: lea     edx, [esp+12Ch+DstBuf]
0x4FCE83: push    edx; DstBuf
0x4FCE84: call    __vsprintf
0x4FCE89: xor     eax, eax
0x4FCE8B: mov     [esp+130h+var_11C], eax
0x4FCE8F: mov     [esp+130h+var_118], ax
0x4FCE94: mov     [esp+130h+var_116], ax
0x4FCE99: mov     edx, [esi+1Ch]
0x4FCE9C: lea     ecx, [esp+130h+DstBuf]
0x4FCEA0: push    ecx
0x4FCEA1: mov     [esp+134h+var_4], eax
0x4FCEA8: mov     eax, [esi+0Ch]
0x4FCEAB: push    edx
0x4FCEAC: push    eax; ArgList
0x4FCEAD: lea     eax, [esp+13Ch+var_11C]
0x4FCEB1: push    offset aScriptSLineDS; "Script '%s', line %d:\n%s"
0x4FCEB6: push    eax; int
0x4FCEB7: call    BSStringT_Static_Format
0x4FCEBC: add     esp, 20h
0x4FCEBF: cmp     dword ptr [esi+8], 1
0x4FCEC3: mov     esi, [esp+124h+var_11C]
0x4FCEC7: push    esi; Format
0x4FCEC8: jnz     short loc_4FCED1
0x4FCECA: call    Interface_ConsolePrint
0x4FCECF: jmp     short loc_4FCED6
0x4FCED1: call    PrintError
0x4FCED6: add     esp, 4
0x4FCED9: push    esi
0x4FCEDA: call    FormHeapFree
0x4FCEDF: add     esp, 4
0x4FCEE2: mov     ecx, [esp+124h+var_C]
0x4FCEE9: mov     large fs:0, ecx
0x4FCEF0: pop     ecx
0x4FCEF1: pop     esi
0x4FCEF2: mov     ecx, [esp+11Ch+var_10]
0x4FCEF9: xor     ecx, esp
0x4FCEFB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FCF00: add     esp, 11Ch
0x4FCF06: retn
