0x6C3A40: push    0FFFFFFFFh
0x6C3A42: push    offset ??1NiPoint3InterpController@@UAE@XZ_SEH
0x6C3A47: mov     eax, large fs:0
0x6C3A4D: push    eax
0x6C3A4E: push    ecx
0x6C3A4F: push    esi
0x6C3A50: push    edi
0x6C3A51: mov     eax, ds:0B30AACh
0x6C3A56: xor     eax, esp
0x6C3A58: push    eax
0x6C3A59: lea     eax, [esp+1Ch+var_C]
0x6C3A5D: mov     large fs:0, eax
0x6C3A63: mov     edi, ecx
0x6C3A65: mov     [esp+1Ch+var_10], edi
0x6C3A69: mov     esi, [edi+3Ch]
0x6C3A6C: test    esi, esi
0x6C3A6E: mov     [esp+1Ch+var_4], 0
0x6C3A76: jz      short loc_6C3A94
0x6C3A78: lea     eax, [esi+4]
0x6C3A7B: push    eax; lpAddend
0x6C3A7C: call    dword ptr ds:0A2807Ch
0x6C3A82: test    eax, eax
0x6C3A84: jnz     short loc_6C3A94
0x6C3A86: test    esi, esi
0x6C3A88: jz      short loc_6C3A94
0x6C3A8A: mov     edx, [esi]
0x6C3A8C: mov     eax, [edx]
0x6C3A8E: push    1
0x6C3A90: mov     ecx, esi
0x6C3A92: call    eax
0x6C3A94: mov     ecx, edi; this
0x6C3A96: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6C3A9E: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6C3AA3: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6C3AA7: mov     large fs:0, ecx
0x6C3AAE: pop     ecx
0x6C3AAF: pop     edi
0x6C3AB0: pop     esi
0x6C3AB1: add     esp, 10h
0x6C3AB4: retn
