0x740E90: push    0FFFFFFFFh
0x740E92: push    offset SEH_8C62B0
0x740E97: mov     eax, large fs:0
0x740E9D: push    eax
0x740E9E: push    ecx
0x740E9F: push    esi
0x740EA0: mov     eax, ds:0B30AACh
0x740EA5: xor     eax, esp
0x740EA7: push    eax
0x740EA8: lea     eax, [esp+18h+var_C]
0x740EAC: mov     large fs:0, eax
0x740EB2: push    2Ch ; ','; Size
0x740EB4: call    FormHeapAlloc
0x740EB9: mov     esi, eax
0x740EBB: add     esp, 4
0x740EBE: mov     [esp+18h+var_10], esi
0x740EC2: test    esi, esi
0x740EC4: mov     [esp+18h+var_4], 0
0x740ECC: jz      short loc_740F1E
0x740ECE: mov     ecx, esi; this
0x740ED0: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x740ED5: fldz
0x740ED7: mov     dword ptr [esi], offset ??_7NiFogProperty@@6B@; const NiFogProperty::`vftable'
0x740EDD: fst     dword ptr [esi+20h]
0x740EE0: fst     dword ptr [esi+24h]
0x740EE3: fstp    dword ptr [esi+28h]
0x740EE6: fld1
0x740EE8: mov     word ptr [esi+18h], 0
0x740EEE: fstp    dword ptr [esi+1Ch]
0x740EF1: mov     eax, ds:0B3FA90h
0x740EF6: mov     [esi+20h], eax
0x740EF9: mov     ecx, ds:0B3FA94h
0x740EFF: mov     [esi+24h], ecx
0x740F02: mov     edx, ds:0B3FA98h
0x740F08: mov     [esi+28h], edx
0x740F0B: mov     eax, esi
0x740F0D: mov     ecx, [esp+18h+var_C]
0x740F11: mov     large fs:0, ecx
0x740F18: pop     ecx
0x740F19: pop     esi
0x740F1A: add     esp, 10h
0x740F1D: retn
0x740F1E: xor     eax, eax
0x740F20: mov     ecx, [esp+18h+var_C]
0x740F24: mov     large fs:0, ecx
0x740F2B: pop     ecx
0x740F2C: pop     esi
0x740F2D: add     esp, 10h
0x740F30: retn
