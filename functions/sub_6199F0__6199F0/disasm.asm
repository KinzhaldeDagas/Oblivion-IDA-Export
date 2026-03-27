0x6199F0: sub     esp, 0Ch
0x6199F3: push    ebx
0x6199F4: push    esi
0x6199F5: push    edi
0x6199F6: mov     edi, [esp+18h+arg_4]
0x6199FA: mov     eax, [edi]
0x6199FC: mov     edx, [eax+174h]
0x619A02: mov     ecx, edi
0x619A04: call    edx
0x619A06: mov     esi, [eax]
0x619A08: mov     ebx, [eax+4]
0x619A0B: mov     eax, [eax+8]
0x619A0E: mov     ecx, edi
0x619A10: mov     [esp+18h+var_4], eax
0x619A14: call    sub_5E0660
0x619A19: fmul    qword ptr ds:0A31C70h
0x619A1F: mov     ecx, [esp+18h+arg_14]
0x619A23: mov     edx, [esp+18h+arg_8]
0x619A27: fadd    [esp+18h+var_4]
0x619A2B: push    ecx
0x619A2C: sub     esp, 8
0x619A2F: fstp    [esp+24h+var_4]
0x619A33: mov     ecx, [esp+24h+var_4]
0x619A37: fld     [esp+24h+arg_10]
0x619A3B: fstp    [esp+24h+var_20]
0x619A3F: fld     [esp+24h+arg_C]
0x619A43: fstp    [esp+24h+var_24]
0x619A46: push    edx
0x619A47: sub     esp, 0Ch
0x619A4A: mov     eax, esp
0x619A4C: mov     [eax], esi
0x619A4E: mov     esi, [esp+34h+arg_0]
0x619A52: mov     [eax+4], ebx
0x619A55: push    esi
0x619A56: mov     [eax+8], ecx
0x619A59: call    sub_6159C0
0x619A5E: fld     dword ptr [esi]
0x619A60: fsub    dword ptr [edi+20h]
0x619A63: add     esp, 20h
0x619A66: fstp    [esp+18h+var_C]
0x619A6A: mov     edx, [esp+18h+var_C]
0x619A6E: fld     dword ptr [esi+4]
0x619A71: fsub    dword ptr [edi+24h]
0x619A74: fstp    [esp+18h+var_8]
0x619A78: fld     dword ptr [esi+8]
0x619A7B: fsub    dword ptr [edi+28h]
0x619A7E: mov     [esi], edx
0x619A80: fstp    [esp+18h+var_4]
0x619A84: mov     ecx, [esp+18h+var_4]
0x619A88: fldz
0x619A8A: mov     [esi+8], ecx
0x619A8D: fstp    dword ptr [esi+4]
0x619A90: fld     dword ptr [esi]
0x619A92: fld     qword ptr ds:0A491E0h
0x619A98: fcom    st(1)
0x619A9A: fnstsw  ax
0x619A9C: fstp    st(1)
0x619A9E: test    ah, 1
0x619AA1: fld     qword ptr ds:0A3D5B0h
0x619AA7: fld     qword ptr ds:0A3D5B8h
0x619AAD: fld     dword ptr [esi]
0x619AAF: jnz     short loc_619AB5
0x619AB1: fadd    st, st(2)
0x619AB3: jmp     short loc_619AC2
0x619AB5: fcomp   st(1)
0x619AB7: fnstsw  ax
0x619AB9: test    ah, 41h
0x619ABC: jnz     short loc_619AC4
0x619ABE: fld     dword ptr [esi]
0x619AC0: fsub    st, st(2)
0x619AC2: fstp    dword ptr [esi]
0x619AC4: fld     dword ptr [esi+8]
0x619AC7: fcomp   st(3)
0x619AC9: fnstsw  ax
0x619ACB: fstp    st(2)
0x619ACD: test    ah, 41h
0x619AD0: jp      short loc_619AE3
0x619AD2: fstp    st(1)
0x619AD4: mov     eax, esi
0x619AD6: fadd    dword ptr [esi+8]
0x619AD9: fstp    dword ptr [esi+8]
0x619ADC: pop     edi
0x619ADD: pop     esi
0x619ADE: pop     ebx
0x619ADF: add     esp, 0Ch
0x619AE2: retn
0x619AE3: fld     dword ptr [esi+8]
0x619AE6: fcomp   st(2)
0x619AE8: fnstsw  ax
0x619AEA: fstp    st(1)
0x619AEC: test    ah, 41h
0x619AEF: jnz     short loc_619B00
0x619AF1: fsubr   dword ptr [esi+8]
0x619AF4: mov     eax, esi
0x619AF6: fstp    dword ptr [esi+8]
0x619AF9: pop     edi
0x619AFA: pop     esi
0x619AFB: pop     ebx
0x619AFC: add     esp, 0Ch
0x619AFF: retn
0x619B00: pop     edi
0x619B01: fstp    st
0x619B03: mov     eax, esi
0x619B05: pop     esi
0x619B06: pop     ebx
0x619B07: add     esp, 0Ch
0x619B0A: retn
