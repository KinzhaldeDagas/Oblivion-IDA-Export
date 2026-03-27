0x6CEE20: sub     esp, 8Ch
0x6CEE26: push    ebx
0x6CEE27: push    ebp
0x6CEE28: push    esi
0x6CEE29: mov     esi, ecx
0x6CEE2B: movzx   eax, byte ptr [esi+0Fh]
0x6CEE2F: lea     ecx, [eax+eax*2]
0x6CEE32: imul    eax, 68h ; 'h'
0x6CEE35: add     eax, [esi+50h]
0x6CEE38: mov     edx, [esi+14h]
0x6CEE3B: mov     ebx, [edx+ecx*8]
0x6CEE3E: mov     ebp, eax
0x6CEE40: mov     [esp+98h+var_84], esi
0x6CEE44: fld     dword ptr [ebp+0]
0x6CEE47: fld     [esp+98h+arg_0]
0x6CEE4E: fld     st
0x6CEE50: fucomp  st(2)
0x6CEE52: fnstsw  ax
0x6CEE54: fstp    st(1)
0x6CEE56: test    ah, 44h
0x6CEE59: jnp     loc_6CEF6D
0x6CEE5F: fld     dword ptr [ebp+0]
0x6CEE62: fcomp   st(1)
0x6CEE64: fnstsw  ax
0x6CEE66: test    ah, 41h
0x6CEE69: jnz     loc_6CEF4D
0x6CEE6F: push    edi
0x6CEE70: fstp    st
0x6CEE72: lea     edi, [ebp+24h]
0x6CEE75: mov     ecx, edi
0x6CEE77: call    sub_6CBC10
0x6CEE7C: test    al, al
0x6CEE7E: jz      loc_6CEF1B
0x6CEE84: mov     eax, [ebx]
0x6CEE86: mov     eax, [eax+80h]
0x6CEE8C: lea     ecx, [esp+9Ch+var_8C]
0x6CEE90: push    ecx
0x6CEE91: lea     edx, [esp+0A0h+var_88]
0x6CEE95: push    edx
0x6CEE96: mov     ecx, ebx
0x6CEE98: call    eax
0x6CEE9A: lea     ecx, [esp+9Ch+var_80]
0x6CEE9E: call    sub_470AB0
0x6CEEA3: fld     dword ptr [esp+9Ch+var_88]
0x6CEEA7: mov     esi, [esp+9Ch+arg_4]
0x6CEEAE: mov     edx, [ebx]
0x6CEEB0: mov     edx, [edx+4Ch]
0x6CEEB3: lea     eax, [esp+9Ch+var_80]
0x6CEEB7: push    eax
0x6CEEB8: push    esi
0x6CEEB9: push    ecx
0x6CEEBA: mov     ecx, ebx
0x6CEEBC: fstp    [esp+0A8h+var_A8]
0x6CEEBF: call    edx
0x6CEEC1: lea     ecx, [esp+9Ch+var_60]
0x6CEEC5: call    sub_470AB0
0x6CEECA: fld     dword ptr [esp+9Ch+var_8C]
0x6CEECE: mov     eax, [ebx]
0x6CEED0: mov     edx, [eax+4Ch]
0x6CEED3: lea     ecx, [esp+9Ch+var_60]
0x6CEED7: push    ecx
0x6CEED8: push    esi
0x6CEED9: push    ecx
0x6CEEDA: mov     ecx, ebx
0x6CEEDC: fstp    [esp+0A8h+var_A8]
0x6CEEDF: call    edx
0x6CEEE1: lea     ecx, [esp+9Ch+var_40]
0x6CEEE5: call    sub_470AB0
0x6CEEEA: lea     eax, [esp+9Ch+var_40]
0x6CEEEE: push    eax
0x6CEEEF: lea     ecx, [esp+0A0h+var_80]
0x6CEEF3: call    sub_6CB4D0
0x6CEEF8: lea     ecx, [esp+9Ch+var_40]
0x6CEEFC: push    ecx
0x6CEEFD: lea     edx, [esp+0A0h+var_20]
0x6CEF04: push    edx
0x6CEF05: lea     ecx, [esp+0A4h+var_60]
0x6CEF09: call    sub_6CB640
0x6CEF0E: mov     ecx, 8
0x6CEF13: mov     esi, eax
0x6CEF15: rep movsd
0x6CEF17: mov     esi, [esp+9Ch+var_84]
0x6CEF1B: lea     edi, [esi+30h]
0x6CEF1E: mov     ecx, edi
0x6CEF20: call    sub_6CBC10
0x6CEF25: test    al, al
0x6CEF27: jnz     short loc_6CEF45
0x6CEF29: lea     eax, [ebp+24h]
0x6CEF2C: push    eax
0x6CEF2D: lea     eax, [esp+0A0h+var_20]
0x6CEF34: push    eax
0x6CEF35: mov     ecx, edi
0x6CEF37: call    sub_6CB640
0x6CEF3C: mov     ecx, 8
0x6CEF41: mov     esi, eax
0x6CEF43: rep movsd
0x6CEF45: fld     [esp+9Ch+arg_0]
0x6CEF4C: pop     edi
0x6CEF4D: mov     ecx, [esp+98h+arg_4]
0x6CEF54: mov     edx, [ebx]
0x6CEF56: mov     edx, [edx+4Ch]
0x6CEF59: lea     eax, [ebp+4]
0x6CEF5C: push    eax
0x6CEF5D: push    ecx
0x6CEF5E: push    ecx
0x6CEF5F: mov     ecx, ebx
0x6CEF61: fstp    [esp+0A4h+var_A4]
0x6CEF64: call    edx
0x6CEF66: fld     [esp+98h+arg_0]
0x6CEF6D: pop     esi
0x6CEF6E: fstp    dword ptr [ebp+0]
0x6CEF71: pop     ebp
0x6CEF72: pop     ebx
0x6CEF73: add     esp, 8Ch
0x6CEF79: retn    8
