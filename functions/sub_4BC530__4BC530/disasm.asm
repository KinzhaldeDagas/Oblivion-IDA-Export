0x4BC530: push    ecx
0x4BC531: fld     qword ptr ds:0A45A50h
0x4BC537: push    esi
0x4BC538: mov     esi, ecx
0x4BC53A: mov     eax, 190h
0x4BC53F: mov     [esi+24h], ax
0x4BC543: mov     [esi+26h], ax
0x4BC547: mov     word ptr [esi+28h], 0C8h ; 'È'
0x4BC54D: call    __CIsqrt
0x4BC552: fstp    [esp+8+var_4]
0x4BC556: fld     [esp+8+var_4]
0x4BC55A: mov     ecx, esi
0x4BC55C: fstp    dword ptr [esi+2Ch]
0x4BC55F: pop     esi
0x4BC560: add     esp, 4
0x4BC563: jmp     j_TESForm_InitializeComponents
