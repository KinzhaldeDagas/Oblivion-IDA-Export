0x702EC0: mov     eax, [esp+arg_0]
0x702EC4: test    eax, eax
0x702EC6: jl      loc_702FB8
0x702ECC: movzx   edx, word ptr [ecx+60h]
0x702ED0: cmp     eax, edx
0x702ED2: jge     loc_702FB8
0x702ED8: mov     edx, [ecx+5Ch]
0x702EDB: movzx   eax, word ptr [edx+eax*2]
0x702EDF: cmp     ax, 0FFFFh
0x702EE3: jz      loc_702FB8
0x702EE9: mov     edx, [ecx+58h]
0x702EEC: movzx   eax, ax
0x702EEF: cmp     word ptr [edx+eax*8], 4
0x702EF4: lea     eax, [edx+eax*8]
0x702EF7: jnz     loc_702FB8
0x702EFD: movzx   edx, word ptr [eax+2]
0x702F01: fld     [esp+arg_4]
0x702F05: fld     st
0x702F07: push    esi
0x702F08: fadd    [esp+4+arg_C]
0x702F0C: mov     esi, [ecx+1Ch]
0x702F0F: lea     eax, [edx+edx*2]
0x702F12: add     eax, eax
0x702F14: fstp    [esp+4+arg_4]
0x702F18: add     eax, eax
0x702F1A: fld     [esp+4+arg_8]
0x702F1E: push    edi
0x702F1F: fld     st
0x702F21: fadd    [esp+8+arg_10]
0x702F25: fstp    [esp+8+arg_0]
0x702F29: fxch    st(1)
0x702F2B: fst     dword ptr [eax+esi]
0x702F2E: mov     esi, [ecx+1Ch]
0x702F31: fxch    st(1)
0x702F33: fst     dword ptr [esi+eax+4]
0x702F37: mov     esi, [ecx+1Ch]
0x702F3A: fldz
0x702F3C: fst     dword ptr [esi+eax+8]
0x702F40: mov     edi, [ecx+1Ch]
0x702F43: fxch    st(2)
0x702F45: mov     eax, 1
0x702F4A: add     edx, eax
0x702F4C: lea     esi, [edx+edx*2]
0x702F4F: add     esi, esi
0x702F51: add     esi, esi
0x702F53: fstp    dword ptr [esi+edi]
0x702F56: mov     edi, [ecx+1Ch]
0x702F59: fld     [esp+8+arg_0]
0x702F5D: add     edx, eax
0x702F5F: fst     dword ptr [edi+esi+4]
0x702F63: mov     edi, [ecx+1Ch]
0x702F66: fxch    st(2)
0x702F68: fst     dword ptr [edi+esi+8]
0x702F6C: mov     edi, [ecx+1Ch]
0x702F6F: fld     [esp+8+arg_4]
0x702F73: lea     esi, [edx+edx*2]
0x702F76: add     esi, esi
0x702F78: add     esi, esi
0x702F7A: fst     dword ptr [esi+edi]
0x702F7D: mov     edi, [ecx+1Ch]
0x702F80: add     edx, eax
0x702F82: fxch    st(3)
0x702F84: fstp    dword ptr [edi+esi+4]
0x702F88: mov     edi, [ecx+1Ch]
0x702F8B: lea     edx, [edx+edx*2]
0x702F8E: fst     dword ptr [edi+esi+8]
0x702F92: mov     esi, [ecx+1Ch]
0x702F95: add     edx, edx
0x702F97: fxch    st(2)
0x702F99: add     edx, edx
0x702F9B: fstp    dword ptr [edx+esi]
0x702F9E: mov     esi, [ecx+1Ch]
0x702FA1: pop     edi
0x702FA2: fstp    dword ptr [esi+edx+4]
0x702FA6: mov     esi, [ecx+1Ch]
0x702FA9: fstp    dword ptr [esi+edx+8]
0x702FAD: or      [ecx+2Eh], ax
0x702FB1: mov     [ecx+6Eh], al
0x702FB4: pop     esi
0x702FB5: retn    14h
0x702FB8: xor     al, al
0x702FBA: retn    14h
