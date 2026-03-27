0x714E70: sub     esp, 8Ch
0x714E76: mov     eax, [esp+8Ch+arg_C]
0x714E7D: push    esi
0x714E7E: mov     esi, [esp+90h+arg_8]
0x714E85: fld     dword ptr [esi]
0x714E87: push    edi
0x714E88: fstp    [esp+94h+var_80]
0x714E8C: push    eax
0x714E8D: fld     dword ptr [esi+4]
0x714E90: lea     ecx, [esp+98h+var_40]
0x714E94: fchs
0x714E96: push    ecx
0x714E97: fstp    [esp+9Ch+var_7C]
0x714E9B: lea     ecx, [esp+9Ch+var_80]
0x714E9F: fld     dword ptr [esi+8]
0x714EA2: fchs
0x714EA4: fstp    [esp+9Ch+var_78]
0x714EA8: fld     dword ptr [esi+0Ch]
0x714EAB: fchs
0x714EAD: fstp    [esp+9Ch+var_74]
0x714EB1: call    sub_714CF0
0x714EB6: push    eax
0x714EB7: lea     edx, [esp+98h+var_20]
0x714EBB: push    edx
0x714EBC: call    sub_714DB0
0x714EC1: add     esp, 8
0x714EC4: mov     edi, eax
0x714EC6: mov     eax, [esp+94h+arg_4]
0x714ECD: push    eax
0x714ECE: lea     ecx, [esp+98h+var_50]
0x714ED2: push    ecx
0x714ED3: lea     ecx, [esp+9Ch+var_80]
0x714ED7: call    sub_714CF0
0x714EDC: push    eax
0x714EDD: lea     edx, [esp+98h+var_30]
0x714EE1: push    edx
0x714EE2: call    sub_714DB0
0x714EE7: fld     dword ptr [edi+4]
0x714EEA: fadd    dword ptr [eax+4]
0x714EED: add     esp, 8
0x714EF0: fstp    [esp+94h+var_88]
0x714EF4: fld     dword ptr [edi+8]
0x714EF7: fadd    dword ptr [eax+8]
0x714EFA: fstp    [esp+94h+var_84]
0x714EFE: fld     dword ptr [edi+0Ch]
0x714F01: fadd    dword ptr [eax+0Ch]
0x714F04: fstp    [esp+94h+var_8C]
0x714F08: fld     dword ptr [edi]
0x714F0A: fadd    dword ptr [eax]
0x714F0C: lea     eax, [esp+94h+var_70]
0x714F10: push    eax; int
0x714F11: push    ecx
0x714F12: fstp    [esp+9Ch+var_70]
0x714F16: lea     ecx, [esp+9Ch+var_10]
0x714F1D: fld     [esp+9Ch+var_88]
0x714F21: fstp    [esp+9Ch+var_6C]
0x714F25: fld     [esp+9Ch+var_84]
0x714F29: fstp    [esp+9Ch+var_68]
0x714F2D: fld     [esp+9Ch+var_8C]
0x714F31: fstp    [esp+9Ch+var_64]
0x714F35: fld     dword ptr ds:0A7EAB4h
0x714F3B: fstp    [esp+9Ch+var_9C]; float
0x714F3E: push    ecx; int
0x714F3F: call    sub_72F990
0x714F44: push    eax
0x714F45: lea     edx, [esp+0A4h+var_60]
0x714F49: push    edx
0x714F4A: call    sub_72F9F0
0x714F4F: mov     edi, [esp+0A8h+arg_0]
0x714F56: add     esp, 14h
0x714F59: lea     eax, [esp+94h+var_60]
0x714F5D: push    eax
0x714F5E: push    edi
0x714F5F: mov     ecx, esi
0x714F61: call    sub_714CF0
0x714F66: mov     eax, edi
0x714F68: pop     edi
0x714F69: pop     esi
0x714F6A: add     esp, 8Ch
0x714F70: retn
