0x493D50: push    ebp
0x493D51: mov     ebp, esp
0x493D53: and     esp, 0FFFFFFF8h
0x493D56: sub     esp, 94h
0x493D5C: push    ebx
0x493D5D: mov     ebx, [ebp+arg_0]
0x493D60: test    ebx, ebx
0x493D62: push    esi
0x493D63: mov     esi, ecx
0x493D65: push    edi
0x493D66: mov     [esp+0A0h+var_8C], esi
0x493D6A: jnz     short loc_493D77
0x493D6C: xor     al, al
0x493D6E: pop     edi
0x493D6F: pop     esi
0x493D70: pop     ebx
0x493D71: mov     esp, ebp
0x493D73: pop     ebp
0x493D74: retn    8
0x493D77: mov     ecx, [esi+4]
0x493D7A: fldz
0x493D7C: test    ecx, ecx
0x493D7E: fld     qword ptr ds:0A3D998h
0x493D84: jge     short loc_493D96
0x493D86: mov     eax, ecx
0x493D88: neg     eax
0x493D8A: mov     [esp+0A0h+var_90], eax
0x493D8E: fild    [esp+0A0h+var_90]
0x493D92: fmul    st, st(1)
0x493D94: jmp     short loc_493D98
0x493D96: fld     st(1)
0x493D98: fstp    [esp+0A0h+var_90]
0x493D9C: fld     [esp+0A0h+var_90]
0x493DA0: fcomp   qword ptr ds:0A38538h
0x493DA6: fnstsw  ax
0x493DA8: test    ah, 41h
0x493DAB: jnz     short loc_493DB9
0x493DAD: fstp    st(1)
0x493DAF: fstp    st
0x493DB1: fld     dword ptr ds:0A3D9A4h
0x493DB7: jmp     short loc_493DD5
0x493DB9: test    ecx, ecx
0x493DBB: jge     short loc_493DCB
0x493DBD: neg     ecx
0x493DBF: fstp    st(1)
0x493DC1: mov     [esp+0A0h+var_90], ecx
0x493DC5: fimul   [esp+0A0h+var_90]
0x493DC9: jmp     short loc_493DCD
0x493DCB: fstp    st
0x493DCD: fstp    [esp+0A0h+var_90]
0x493DD1: fld     [esp+0A0h+var_90]
0x493DD5: mov     edx, [ebx]
0x493DD7: fstp    [esp+0A0h+var_90]
0x493DDB: fld     [esp+0A0h+var_90]
0x493DDF: mov     eax, [edx+7Ch]
0x493DE2: push    0
0x493DE4: push    1
0x493DE6: push    1
0x493DE8: push    1
0x493DEA: push    0
0x493DEC: push    ecx
0x493DED: mov     ecx, ebx
0x493DEF: fstp    [esp+0B8h+var_B8]
0x493DF2: call    eax
0x493DF4: xor     eax, eax
0x493DF6: cmp     [esi], eax
0x493DF8: mov     [esp+0A0h+var_90], eax
0x493DFC: jbe     short loc_493E75
0x493DFE: jmp     short loc_493E06
0x493E00: mov     eax, [esp+0A0h+var_90]
0x493E04: mov     esi, ecx
0x493E06: mov     edx, [esi+8]
0x493E09: fld     dword ptr ds:0A3D9A0h
0x493E0F: mov     esi, [edx+eax*4]
0x493E12: mov     ecx, 10h
0x493E17: lea     edi, [esp+0A0h+var_88]
0x493E1B: rep movsd
0x493E1D: mov     ecx, [esp+0A0h+var_8C]
0x493E21: mov     edx, [ecx+0Ch]
0x493E24: mov     esi, [edx+eax*4]
0x493E27: mov     eax, [ebx]
0x493E29: mov     edx, [eax+0A0h]
0x493E2F: mov     ecx, 11h
0x493E34: lea     edi, [esp+0A0h+var_48]
0x493E38: rep movsd
0x493E3A: push    ecx
0x493E3B: lea     ecx, [esp+0A4h+var_88]
0x493E3F: fstp    [esp+0A4h+var_A4]
0x493E42: push    ecx
0x493E43: mov     ecx, ebx
0x493E45: call    edx
0x493E47: fld     dword ptr ds:0A3D9A0h
0x493E4D: mov     eax, [ebx]
0x493E4F: mov     edx, [eax+0A4h]
0x493E55: push    ecx
0x493E56: lea     ecx, [esp+0A4h+var_48]
0x493E5A: fstp    [esp+0A4h+var_A4]
0x493E5D: push    ecx
0x493E5E: mov     ecx, ebx
0x493E60: call    edx
0x493E62: mov     eax, [esp+0A0h+var_90]
0x493E66: mov     ecx, [esp+0A0h+var_8C]
0x493E6A: add     eax, 1
0x493E6D: cmp     eax, [ecx]
0x493E6F: mov     [esp+0A0h+var_90], eax
0x493E73: jb      short loc_493E00
0x493E75: fldz
0x493E77: fld     [ebp+arg_4]
0x493E7A: fcom    st(1)
0x493E7C: fnstsw  ax
0x493E7E: fstp    st(1)
0x493E80: test    ah, 41h
0x493E83: jnz     short loc_493EBB
0x493E85: mov     edx, [ebx]
0x493E87: mov     eax, [edx+0A8h]
0x493E8D: push    1
0x493E8F: push    ecx
0x493E90: fstp    [esp+0A8h+var_A8]
0x493E93: push    0
0x493E95: mov     ecx, ebx
0x493E97: call    eax
0x493E99: fld     [ebp+arg_4]
0x493E9C: mov     edx, [ebx]
0x493E9E: mov     eax, [edx+0A8h]
0x493EA4: push    1
0x493EA6: push    ecx
0x493EA7: fstp    [esp+0A8h+var_A8]
0x493EAA: push    2
0x493EAC: mov     ecx, ebx
0x493EAE: call    eax
0x493EB0: mov     al, 1
0x493EB2: pop     edi
0x493EB3: pop     esi
0x493EB4: pop     ebx
0x493EB5: mov     esp, ebp
0x493EB7: pop     ebp
0x493EB8: retn    8
0x493EBB: pop     edi
0x493EBC: fstp    st
0x493EBE: pop     esi
0x493EBF: mov     al, 1
0x493EC1: pop     ebx
0x493EC2: mov     esp, ebp
0x493EC4: pop     ebp
0x493EC5: retn    8
