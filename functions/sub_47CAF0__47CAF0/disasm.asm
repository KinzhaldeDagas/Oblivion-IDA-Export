0x47CAF0: sub     esp, 40h
0x47CAF3: fld     dword ptr ds:0A3744Ch
0x47CAF9: mov     eax, ecx
0x47CAFB: fstp    [esp+40h+var_3C]
0x47CAFF: mov     ecx, 2
0x47CB04: fld     dword ptr ds:0A3D0C8h
0x47CB0A: fstp    [esp+40h+var_38]
0x47CB0E: fld1
0x47CB10: fstp    [esp+40h+var_34]
0x47CB14: mov     [esp+ecx*4+40h+var_30], eax
0x47CB18: mov     eax, [eax+1Ch]
0x47CB1B: test    eax, eax
0x47CB1D: jz      loc_47CBC2
0x47CB23: sub     ecx, 1
0x47CB26: jns     short loc_47CB14
0x47CB28: fldz
0x47CB2A: push    ebx
0x47CB2B: push    esi
0x47CB2C: fst     [esp+48h+var_40]
0x47CB30: push    edi
0x47CB31: xor     ebx, ebx
0x47CB33: jmp     short loc_47CB37
0x47CB35: fldz
0x47CB37: sub     esp, 0Ch
0x47CB3A: fst     [esp+58h+var_50]; float
0x47CB3E: lea     ecx, [esp+58h+var_24]
0x47CB42: fstp    [esp+58h+var_54]; float
0x47CB46: fld     [esp+ebx+58h+var_3C]
0x47CB4A: fsub    [esp+58h+var_40]
0x47CB4E: fstp    [esp+58h+var_40]
0x47CB52: fld     [esp+58h+var_40]
0x47CB56: fmul    [esp+58h+arg_0]
0x47CB5A: fstp    [esp+58h+var_40]
0x47CB5E: fld     [esp+58h+var_40]
0x47CB62: fstp    [esp+58h+var_58]; float
0x47CB65: call    sub_7116A0
0x47CB6A: mov     eax, [esp+ebx+4Ch+var_30]
0x47CB6E: mov     esi, [eax+0A8h]
0x47CB74: test    esi, esi
0x47CB76: jz      short loc_47CBAB
0x47CB78: mov     edx, [esi]
0x47CB7A: mov     eax, [edx+4]
0x47CB7D: mov     ecx, esi
0x47CB7F: call    eax
0x47CB81: test    eax, eax
0x47CB83: jz      short loc_47CB93
0x47CB85: cmp     eax, offset unk_BA7A14
0x47CB8A: jz      short loc_47CBC8
0x47CB8C: mov     eax, [eax+4]
0x47CB8F: test    eax, eax
0x47CB91: jnz     short loc_47CB85
0x47CB93: xor     al, al
0x47CB95: neg     al
0x47CB97: sbb     eax, eax
0x47CB99: and     eax, esi
0x47CB9B: jz      short loc_47CBAB
0x47CB9D: lea     edi, [eax+28h]
0x47CBA0: mov     ecx, 9
0x47CBA5: lea     esi, [esp+4Ch+var_24]
0x47CBA9: rep movsd
0x47CBAB: fld     [esp+ebx+4Ch+var_3C]
0x47CBAF: add     ebx, 4
0x47CBB2: cmp     ebx, 0Ch
0x47CBB5: fstp    [esp+4Ch+var_40]
0x47CBB9: jl      loc_47CB35
0x47CBBF: pop     edi
0x47CBC0: pop     esi
0x47CBC1: pop     ebx
0x47CBC2: add     esp, 40h
0x47CBC5: retn    4
0x47CBC8: mov     al, 1
0x47CBCA: jmp     short loc_47CB95
