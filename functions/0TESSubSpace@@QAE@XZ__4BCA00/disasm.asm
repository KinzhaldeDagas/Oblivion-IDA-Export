0x4BCA00: push    0FFFFFFFFh
0x4BCA02: push    offset ??0TESObjectSTAT@@QAE@XZ_SEH
0x4BCA07: mov     eax, large fs:0
0x4BCA0D: push    eax
0x4BCA0E: sub     esp, 8
0x4BCA11: push    esi
0x4BCA12: mov     eax, ds:0B30AACh
0x4BCA17: xor     eax, esp
0x4BCA19: push    eax
0x4BCA1A: lea     eax, [esp+1Ch+var_C]
0x4BCA1E: mov     large fs:0, eax
0x4BCA24: mov     esi, ecx
0x4BCA26: mov     [esp+1Ch+var_10], esi
0x4BCA2A: call    TESBoundObject_constr
0x4BCA2F: fld     qword ptr ds:0A45A50h
0x4BCA35: mov     eax, 190h
0x4BCA3A: mov     [esp+1Ch+var_4], 0
0x4BCA42: mov     dword ptr [esi], offset ??_7TESSubSpace@@6B@; const TESSubSpace::`vftable'
0x4BCA48: mov     byte ptr [esi+4], 29h ; ')'
0x4BCA4C: mov     [esi+24h], ax
0x4BCA50: mov     [esi+26h], ax
0x4BCA54: mov     word ptr [esi+28h], 0C8h ; 'È'
0x4BCA5A: call    __CIsqrt
0x4BCA5F: fstp    [esp+1Ch+var_14]
0x4BCA63: fld     [esp+1Ch+var_14]
0x4BCA67: mov     ecx, esi; this
0x4BCA69: fstp    dword ptr [esi+2Ch]
0x4BCA6C: call    j_TESForm_InitializeComponents
0x4BCA71: mov     eax, esi
0x4BCA73: mov     ecx, [esp+1Ch+var_C]
0x4BCA77: mov     large fs:0, ecx
0x4BCA7E: pop     ecx
0x4BCA7F: pop     esi
0x4BCA80: add     esp, 14h
0x4BCA83: retn
