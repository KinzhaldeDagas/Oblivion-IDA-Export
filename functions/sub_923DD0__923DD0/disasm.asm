0x923DD0: sub     esp, 18h
0x923DD3: mov     ecx, [esp+18h+arg_8]
0x923DD7: push    ebx
0x923DD8: mov     ebx, [esp+1Ch+arg_0]
0x923DDC: mov     eax, [ebx+48h]
0x923DDF: push    esi
0x923DE0: mov     esi, [esp+20h+arg_4]
0x923DE4: mov     [esp+20h+var_18], eax
0x923DE8: lea     eax, [esi+ecx*4]
0x923DEB: cmp     esi, eax
0x923DED: push    edi
0x923DEE: mov     edi, [ebx+8]
0x923DF1: mov     [esp+24h+arg_8], eax
0x923DF5: jnb     loc_923F1B
0x923DFB: push    ebp
0x923DFC: lea     esp, [esp+0]
0x923E00: mov     eax, [esi]
0x923E02: mov     cl, [eax+18h]
0x923E05: mov     ebp, [eax+24h]
0x923E08: mov     eax, [ebp+4]
0x923E0B: mov     eax, [eax+50h]
0x923E0E: xor     edx, edx
0x923E10: cmp     cl, 4
0x923E13: mov     ecx, [ebp+8]
0x923E16: mov     ecx, [ecx+50h]
0x923E19: setz    dl
0x923E1C: add     ebp, 4
0x923E1F: add     eax, 10h
0x923E22: add     ecx, 10h
0x923E25: mov     [esp+28h+arg_4], edx
0x923E29: mov     edx, [eax-8]
0x923E2C: add     edx, [ebx+0Ch]
0x923E2F: mov     [edi+14h], edx
0x923E32: mov     edx, [ecx-8]
0x923E35: add     edx, [ebx+0Ch]
0x923E38: mov     [edi+1Ch], eax
0x923E3B: mov     [edi+20h], ecx
0x923E3E: mov     [edi+18h], edx
0x923E41: mov     eax, [esi]
0x923E43: mov     [edi+24h], eax
0x923E46: mov     ecx, [esi]
0x923E48: mov     edx, [ecx+24h]
0x923E4B: mov     eax, [edx+18h]
0x923E4E: mov     [edi+28h], eax
0x923E51: mov     eax, [esp+28h+arg_C]
0x923E55: mov     ecx, [eax+8]
0x923E58: mov     edx, [eax+4]
0x923E5B: and     ecx, 3FFFFFFFh
0x923E61: cmp     edx, ecx
0x923E63: jnz     short loc_923E74
0x923E65: push    0Ch
0x923E67: push    eax
0x923E68: call    sub_8A6EE0
0x923E6D: mov     eax, [esp+30h+arg_C]
0x923E71: add     esp, 8
0x923E74: mov     ecx, [eax+4]
0x923E77: lea     edx, [ecx+ecx*2]
0x923E7A: mov     ecx, [eax]
0x923E7C: lea     ecx, [ecx+edx*4]
0x923E7F: mov     edx, [eax+4]
0x923E82: inc     edx
0x923E83: mov     [eax+4], edx
0x923E86: mov     edx, [esi]
0x923E88: mov     eax, [esp+28h+arg_4]
0x923E8C: shl     eax, 4
0x923E8F: mov     [ecx], edx
0x923E91: lea     edx, [eax+ebx+2Ch]
0x923E95: mov     eax, [edx]
0x923E97: mov     [ecx+4], eax
0x923E9A: mov     eax, [ebp+0]
0x923E9D: fld     dword ptr [eax+34h]
0x923EA0: mov     eax, [ebp+4]
0x923EA3: mov     eax, [eax+34h]
0x923EA6: mov     [esp+28h+arg_0], eax
0x923EAA: fcom    [esp+28h+arg_0]
0x923EAE: mov     [esp+28h+arg_4], edx
0x923EB2: fnstsw  ax
0x923EB4: test    ah, 5
0x923EB7: jnp     short loc_923EBF
0x923EB9: fstp    st
0x923EBB: fld     [esp+28h+arg_0]
0x923EBF: fstp    dword ptr [ecx+8]
0x923EC2: mov     ecx, [edx]
0x923EC4: mov     edx, [esi]
0x923EC6: mov     [esp+28h+var_14], ecx
0x923ECA: mov     ecx, [edx+0Ch]
0x923ECD: mov     eax, [ecx]
0x923ECF: lea     edx, [esp+28h+var_18]
0x923ED3: push    edx
0x923ED4: push    edi
0x923ED5: call    dword ptr [eax+1Ch]
0x923ED8: mov     eax, [esp+28h+var_18]
0x923EDC: mov     ecx, [esp+28h+var_14]
0x923EE0: mov     edx, [esp+28h+arg_4]
0x923EE4: mov     [ebx+48h], eax
0x923EE7: mov     [edx], ecx
0x923EE9: mov     eax, [esi]
0x923EEB: mov     ecx, [eax+0Ch]
0x923EEE: mov     edx, [ecx]
0x923EF0: lea     eax, [esp+28h+var_10]
0x923EF4: push    eax
0x923EF5: call    dword ptr [edx+20h]
0x923EF8: mov     ecx, [esp+28h+var_4]
0x923EFC: mov     ebp, [ebx+4Ch]
0x923EFF: mov     eax, [esp+28h+arg_8]
0x923F03: lea     edx, ds:0[ecx*4]
0x923F0A: add     ebp, edx
0x923F0C: add     esi, 4
0x923F0F: cmp     esi, eax
0x923F11: mov     [ebx+4Ch], ebp
0x923F14: jb      loc_923E00
0x923F1A: pop     ebp
0x923F1B: mov     eax, [ebx+2Ch]
0x923F1E: pop     edi
0x923F1F: mov     dword ptr [eax], 400h
0x923F25: mov     ecx, [ebx+3Ch]
0x923F28: pop     esi
0x923F29: mov     dword ptr [ecx], 400h
0x923F2F: pop     ebx
0x923F30: add     esp, 18h
0x923F33: retn
