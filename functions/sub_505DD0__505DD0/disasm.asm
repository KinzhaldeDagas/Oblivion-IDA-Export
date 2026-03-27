0x505DD0: push    ecx
0x505DD1: mov     edx, [esp+4+l]
0x505DD5: fldz
0x505DD7: push    esi
0x505DD8: mov     esi, [esp+8+arg_18]
0x505DDC: push    edi
0x505DDD: fstp    qword ptr [esi]
0x505DDF: mov     edi, [esp+0Ch+a4]
0x505DE3: lea     eax, [esp+0Ch+arg_18]
0x505DE7: push    eax
0x505DE8: mov     eax, [esp+10h+arg_10]
0x505DEC: lea     ecx, [esp+10h+var_4]
0x505DF0: push    ecx; UInt16
0x505DF1: mov     ecx, [esp+14h+arg_C]
0x505DF5: push    edx; l
0x505DF6: mov     edx, [esp+18h+a3]
0x505DFA: push    eax; a6
0x505DFB: mov     eax, [esp+1Ch+arg_4]
0x505DFF: push    ecx; a5
0x505E00: mov     ecx, [esp+20h+a1]
0x505E04: push    edi; a4
0x505E05: push    edx; a3
0x505E06: push    eax; a2
0x505E07: push    ecx; a1
0x505E08: mov     dword ptr [esp+30h+var_4], 0
0x505E10: mov     [esp+30h+arg_18], 0
0x505E18: call    Script_ExtractArgs
0x505E1D: add     esp, 24h
0x505E20: test    al, al
0x505E22: jnz     short loc_505E28
0x505E24: pop     edi
0x505E25: pop     esi
0x505E26: pop     ecx
0x505E27: retn
0x505E28: mov     eax, [esp+0Ch+arg_18]
0x505E2C: test    eax, eax
0x505E2E: jnz     short loc_505E44
0x505E30: mov     ecx, ds:0B333C4h
0x505E36: mov     edx, [ecx]
0x505E38: mov     eax, [edx+170h]
0x505E3E: call    eax
0x505E40: mov     [esp+0Ch+arg_18], eax
0x505E44: mov     ecx, dword ptr [esp+0Ch+var_4]
0x505E48: push    esi
0x505E49: push    eax
0x505E4A: push    ecx
0x505E4B: push    edi
0x505E4C: call    sub_4F8B90
0x505E51: add     esp, 10h
0x505E54: pop     edi
0x505E55: mov     al, 1
0x505E57: pop     esi
0x505E58: pop     ecx
0x505E59: retn
