0x61FAD0: sub     esp, 14h
0x61FAD3: push    esi
0x61FAD4: mov     esi, ecx
0x61FAD6: cmp     byte ptr [esi+17Dh], 0
0x61FADD: jz      loc_61FB7E
0x61FAE3: mov     eax, [esi+70h]
0x61FAE6: cmp     eax, 2
0x61FAE9: push    ebx
0x61FAEA: push    edi
0x61FAEB: jz      short loc_61FAF6
0x61FAED: cmp     eax, 4
0x61FAF0: jnz     loc_61FB83
0x61FAF6: mov     eax, [esi+180h]
0x61FAFC: mov     edi, [esi+3Ch]
0x61FAFF: push    eax
0x61FB00: lea     ecx, [esp+24h+var_10]
0x61FB04: push    ecx
0x61FB05: mov     ecx, esi
0x61FB07: call    sub_6135F0
0x61FB0C: push    eax
0x61FB0D: push    edi
0x61FB0E: call    sub_61DDF0
0x61FB13: fstp    [esp+30h+var_14]
0x61FB17: fld     [esp+30h+var_14]
0x61FB1B: add     esp, 10h
0x61FB1E: fmul    qword ptr ds:0A30DC8h
0x61FB24: fstp    [esp+20h+var_10]
0x61FB28: fld     [esp+20h+var_10]
0x61FB2C: fabs
0x61FB2E: fstp    [esp+20h+var_10]
0x61FB32: fld     [esp+20h+var_10]
0x61FB36: fcomp   qword ptr ds:0A2FC80h
0x61FB3C: fnstsw  ax
0x61FB3E: test    ah, 41h
0x61FB41: jnz     short loc_61FB47
0x61FB43: mov     bl, 1
0x61FB45: jmp     short loc_61FB49
0x61FB47: xor     bl, bl
0x61FB49: mov     ecx, [esi+3Ch]
0x61FB4C: mov     edx, [ecx]
0x61FB4E: mov     eax, [edx+1E0h]
0x61FB54: call    eax
0x61FB56: fadd    [esp+20h+var_14]
0x61FB5A: test    bl, bl
0x61FB5C: fstp    [esp+20h+var_14]
0x61FB60: jz      loc_61FC18
0x61FB66: fld     [esp+20h+var_14]
0x61FB6A: push    1; char
0x61FB6C: push    ecx
0x61FB6D: mov     ecx, [esi+3Ch]
0x61FB70: fstp    [esp+28h+var_28]; float
0x61FB73: push    ecx; Concurrency::details::SchedulerBase *
0x61FB74: call    sub_685530
0x61FB79: add     esp, 0Ch
0x61FB7C: pop     edi
0x61FB7D: pop     ebx
0x61FB7E: pop     esi
0x61FB7F: add     esp, 14h
0x61FB82: retn
0x61FB83: mov     edi, [esi+3Ch]
0x61FB86: call    sub_6135F0
0x61FB8B: mov     edx, [edi]
0x61FB8D: mov     ebx, eax
0x61FB8F: mov     eax, [edx+174h]
0x61FB95: mov     ecx, edi
0x61FB97: call    eax
0x61FB99: mov     edx, [ebx]
0x61FB9B: mov     edi, eax
0x61FB9D: mov     eax, [edx+174h]
0x61FBA3: mov     ecx, ebx
0x61FBA5: call    eax
0x61FBA7: fld     dword ptr [eax+4]
0x61FBAA: fsub    dword ptr [edi+4]
0x61FBAD: lea     ecx, [esp+20h+var_C]
0x61FBB1: push    ecx
0x61FBB2: fstp    [esp+24h+var_10]
0x61FBB6: fld     dword ptr [eax+8]
0x61FBB9: fsub    dword ptr [edi+8]
0x61FBBC: fstp    [esp+24h+var_14]
0x61FBC0: fld     dword ptr [eax]
0x61FBC2: fsub    dword ptr [edi]
0x61FBC4: fstp    [esp+24h+var_C]
0x61FBC8: fld     [esp+24h+var_10]
0x61FBCC: fstp    [esp+24h+var_8]
0x61FBD0: fld     [esp+24h+var_14]
0x61FBD4: fstp    [esp+24h+var_4]
0x61FBD8: call    sub_683CB0
0x61FBDD: mov     ecx, [esi+3Ch]
0x61FBE0: fstp    [esp+24h+var_14]
0x61FBE4: mov     edx, [ecx]
0x61FBE6: mov     eax, [edx+1E0h]
0x61FBEC: add     esp, 4
0x61FBEF: call    eax
0x61FBF1: fsub    [esp+20h+var_14]
0x61FBF5: fstp    [esp+20h+var_10]
0x61FBF9: fld     [esp+20h+var_10]
0x61FBFD: fabs
0x61FBFF: fstp    [esp+20h+var_10]
0x61FC03: fld     [esp+20h+var_10]
0x61FC07: fcomp   qword ptr ds:0A2FC80h
0x61FC0D: fnstsw  ax
0x61FC0F: test    ah, 41h
0x61FC12: jz      loc_61FB66
0x61FC18: pop     edi
0x61FC19: pop     ebx
0x61FC1A: mov     ecx, esi
0x61FC1C: pop     esi
0x61FC1D: add     esp, 14h
0x61FC20: jmp     loc_615050
