0x751DF0: push    ecx
0x751DF1: movzx   eax, word ptr [esp+4+arg_8]
0x751DF6: push    ebp
0x751DF7: mov     ebp, [esp+8+arg_C]
0x751DFB: push    esi
0x751DFC: mov     esi, ecx
0x751DFE: mov     ecx, [ebp+0B4h]
0x751E04: lea     edx, ds:0[eax*8]
0x751E0B: sub     edx, eax
0x751E0D: mov     eax, [ecx+5Ch]
0x751E10: mov     cx, [eax+edx*4+18h]
0x751E15: cmp     cx, [esi+18h]
0x751E19: jnb     loc_751F0A
0x751E1F: call    _rand
0x751E24: mov     [esp+0Ch+arg_C], eax
0x751E28: fild    [esp+0Ch+arg_C]
0x751E2C: fdiv    qword ptr ds:0A3D5A8h
0x751E32: fstp    [esp+0Ch+arg_C]
0x751E36: fld     [esp+0Ch+arg_C]
0x751E3A: fld     dword ptr [esi+1Ch]
0x751E3D: fcompp
0x751E3F: fnstsw  ax
0x751E41: test    ah, 5
0x751E44: jnp     loc_751F0A
0x751E4A: push    ebx
0x751E4B: push    edi
0x751E4C: call    _rand
0x751E51: mov     [esp+14h+arg_C], eax
0x751E55: fild    [esp+14h+arg_C]
0x751E59: movzx   edi, word ptr [esi+20h]
0x751E5D: movzx   edx, word ptr [esi+22h]
0x751E61: fdiv    qword ptr ds:0A3D5A8h
0x751E67: movzx   eax, di
0x751E6A: sub     edx, eax
0x751E6C: mov     [esp+14h+arg_C], edx
0x751E70: fstp    [esp+14h+var_4]
0x751E74: fild    [esp+14h+arg_C]
0x751E78: fmul    [esp+14h+var_4]
0x751E7C: fstp    [esp+14h+arg_C]
0x751E80: fld     [esp+14h+arg_C]
0x751E84: fnstcw  word ptr [esp+14h+arg_C]
0x751E88: movzx   eax, word ptr [esp+14h+arg_C]
0x751E8D: fld     st
0x751E8F: or      eax, 0C00h
0x751E94: mov     [esp+14h+var_4], eax
0x751E98: fldcw   word ptr [esp+14h+var_4]
0x751E9C: fistp   [esp+14h+var_4]
0x751EA0: mov     cx, word ptr [esp+14h+var_4]
0x751EA5: movzx   ebx, cx
0x751EA8: fldcw   word ptr [esp+14h+arg_C]
0x751EAC: fld1
0x751EAE: call    unknown_libname_14
0x751EB3: fstp    [esp+14h+arg_C]
0x751EB7: fld     [esp+14h+arg_C]
0x751EBB: fcomp   dword ptr ds:0A3D65Ch
0x751EC1: fnstsw  ax
0x751EC3: test    ah, 41h
0x751EC6: jnz     short loc_751ECB
0x751EC8: add     ebx, 1
0x751ECB: add     edi, ebx
0x751ECD: movzx   eax, di
0x751ED0: test    ax, ax
0x751ED3: jnz     short loc_751EDD
0x751ED5: mov     eax, 1
0x751EDA: test    ax, ax
0x751EDD: jbe     short loc_751F08
0x751EDF: movzx   edi, ax
0x751EE2: mov     eax, [esp+14h+arg_8]
0x751EE6: fld     [esp+14h+arg_4]
0x751EEA: mov     edx, [esi]
0x751EEC: mov     edx, [edx+60h]
0x751EEF: push    ebp
0x751EF0: push    eax
0x751EF1: sub     esp, 8
0x751EF4: fstp    [esp+24h+var_20]
0x751EF8: mov     ecx, esi
0x751EFA: fld     [esp+24h+arg_0]
0x751EFE: fstp    [esp+24h+var_24]
0x751F01: call    edx
0x751F03: sub     edi, 1
0x751F06: jnz     short loc_751EE2
0x751F08: pop     edi
0x751F09: pop     ebx
0x751F0A: pop     esi
0x751F0B: pop     ebp
0x751F0C: pop     ecx
0x751F0D: retn    10h
