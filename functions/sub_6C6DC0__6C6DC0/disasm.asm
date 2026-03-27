0x6C6DC0: push    ecx
0x6C6DC1: push    ebp
0x6C6DC2: push    edi
0x6C6DC3: xor     ebp, ebp
0x6C6DC5: mov     edi, ecx
0x6C6DC7: cmp     [edi+0Ch], ebp
0x6C6DCA: mov     [esp+0Ch+var_4], ebp
0x6C6DCE: jbe     loc_6C6EC3
0x6C6DD4: fld     [esp+0Ch+arg_8]
0x6C6DD8: push    ebx
0x6C6DD9: fld     [esp+10h+arg_4]
0x6C6DDD: mov     ecx, 1
0x6C6DE2: fld     [esp+10h+arg_0]
0x6C6DE6: push    esi
0x6C6DE7: mov     edx, [edi+14h]
0x6C6DEA: mov     eax, [edx+ebp+8]
0x6C6DEE: add     edx, ebp
0x6C6DF0: test    eax, eax
0x6C6DF2: jz      loc_6C6EA5
0x6C6DF8: cmp     [eax+0Eh], cl
0x6C6DFB: mov     bl, [edx+0Ch]
0x6C6DFE: jnz     short loc_6C6E05
0x6C6E00: cmp     bl, [eax+0Fh]
0x6C6E03: jz      short loc_6C6E37
0x6C6E05: movzx   esi, bl
0x6C6E08: mov     ebx, [eax+14h]
0x6C6E0B: lea     esi, [esi+esi*2]
0x6C6E0E: fst     dword ptr [ebx+esi*8+4]
0x6C6E12: fld     dword ptr ds:0A7DEB4h
0x6C6E18: fchs
0x6C6E1A: fstp    dword ptr [eax+24h]
0x6C6E1D: fld     dword ptr ds:0A7DEB4h
0x6C6E23: fchs
0x6C6E25: fstp    dword ptr [eax+28h]
0x6C6E28: fld     dword ptr ds:0A7DEB4h
0x6C6E2E: or      byte ptr [eax+0Ch], 4
0x6C6E32: fchs
0x6C6E34: fstp    dword ptr [eax+2Ch]
0x6C6E37: mov     eax, [edx+8]
0x6C6E3A: cmp     [eax+0Eh], cl
0x6C6E3D: mov     bl, [edx+0Ch]
0x6C6E40: jnz     short loc_6C6E47
0x6C6E42: cmp     bl, [eax+0Fh]
0x6C6E45: jz      short loc_6C6E7D
0x6C6E47: movzx   esi, bl
0x6C6E4A: fxch    st(1)
0x6C6E4C: mov     ebx, [eax+14h]
0x6C6E4F: lea     esi, [esi+esi*2]
0x6C6E52: fst     dword ptr [ebx+esi*8+10h]
0x6C6E56: fld     dword ptr ds:0A7DEB4h
0x6C6E5C: fchs
0x6C6E5E: fstp    dword ptr [eax+24h]
0x6C6E61: fld     dword ptr ds:0A7DEB4h
0x6C6E67: fchs
0x6C6E69: fstp    dword ptr [eax+28h]
0x6C6E6C: fld     dword ptr ds:0A7DEB4h
0x6C6E72: or      byte ptr [eax+0Ch], 4
0x6C6E76: fchs
0x6C6E78: fstp    dword ptr [eax+2Ch]
0x6C6E7B: fxch    st(1)
0x6C6E7D: mov     al, [edx+0Ch]
0x6C6E80: mov     edx, [edx+8]
0x6C6E83: cmp     [edx+0Eh], cl
0x6C6E86: jnz     short loc_6C6E94
0x6C6E88: cmp     al, [edx+0Fh]
0x6C6E8B: jnz     short loc_6C6E94
0x6C6E8D: fxch    st(2)
0x6C6E8F: fst     dword ptr [edx+20h]
0x6C6E92: jmp     short loc_6C6EA3
0x6C6E94: mov     edx, [edx+14h]
0x6C6E97: fxch    st(2)
0x6C6E99: movzx   eax, al
0x6C6E9C: lea     eax, [eax+eax*2]
0x6C6E9F: fst     dword ptr [edx+eax*8+14h]
0x6C6EA3: fxch    st(2)
0x6C6EA5: mov     eax, [esp+14h+var_4]
0x6C6EA9: add     eax, ecx
0x6C6EAB: add     ebp, 10h
0x6C6EAE: cmp     eax, [edi+0Ch]
0x6C6EB1: mov     [esp+14h+var_4], eax
0x6C6EB5: jb      loc_6C6DE7
0x6C6EBB: fstp    st(2)
0x6C6EBD: pop     esi
0x6C6EBE: fstp    st
0x6C6EC0: pop     ebx
0x6C6EC1: fstp    st
0x6C6EC3: pop     edi
0x6C6EC4: pop     ebp
0x6C6EC5: pop     ecx
0x6C6EC6: retn    0Ch
