0x60CF80: mov     eax, [esp+arg_8]
0x60CF84: push    esi; int
0x60CF85: push    0; int
0x60CF87: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x60CF8C: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60CF91: push    0; int
0x60CF93: push    eax; void *
0x60CF94: mov     esi, ecx
0x60CF96: call    OblivionDynamicCast
0x60CF9B: add     esp, 14h
0x60CF9E: test    eax, eax
0x60CFA0: jz      short loc_60CFC4
0x60CFA2: cmp     eax, ds:0B333C4h
0x60CFA8: jz      short loc_60CFC4
0x60CFAA: cmp     dword ptr [esi+8], 0
0x60CFAE: jnz     short loc_60CFC4
0x60CFB0: cmp     dword ptr [esi+4], 0FFFFFFFFh
0x60CFB4: jnz     short loc_60CFC4
0x60CFB6: mov     ecx, eax; int
0x60CFB8: mov     dword ptr [esi+4], 0
0x60CFBF: call    EvaluatePackage
0x60CFC4: pop     esi
0x60CFC5: retn    0Ch
