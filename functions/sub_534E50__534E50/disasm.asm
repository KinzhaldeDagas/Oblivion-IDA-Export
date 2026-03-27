0x534E50: sub     esp, 0A4h
0x534E56: mov     eax, ds:0B30AACh
0x534E5B: xor     eax, esp
0x534E5D: mov     [esp+0A4h+var_4], eax
0x534E64: mov     eax, [esp+0A4h+FullPath]
0x534E6B: push    ebx
0x534E6C: push    esi
0x534E6D: push    edi
0x534E6E: mov     ebx, ecx
0x534E70: lea     ecx, [esp+0B0h+Ext]
0x534E74: push    ecx; Ext
0x534E75: lea     edx, [esp+0B4h+Filename]
0x534E79: push    edx; Filename
0x534E7A: push    0; Dir
0x534E7C: push    0; Drive
0x534E7E: push    eax; FullPath
0x534E7F: call    __splitpath
0x534E84: lea     eax, [esp+0C4h+Ext]
0x534E88: add     esp, 14h
0x534E8B: mov     esi, eax
0x534E8D: lea     ecx, [ecx+0]
0x534E90: mov     cl, [eax]
0x534E92: add     eax, 1
0x534E95: test    cl, cl
0x534E97: jnz     short loc_534E90
0x534E99: lea     edi, [esp+0B0h+Filename]
0x534E9D: sub     eax, esi
0x534E9F: add     edi, 0FFFFFFFFh
0x534EA2: mov     cl, [edi+1]
0x534EA5: add     edi, 1
0x534EA8: test    cl, cl
0x534EAA: jnz     short loc_534EA2
0x534EAC: mov     ecx, eax
0x534EAE: shr     ecx, 2
0x534EB1: rep movsd
0x534EB3: mov     ecx, eax
0x534EB5: and     ecx, 3
0x534EB8: rep movsb
0x534EBA: xor     esi, esi
0x534EBC: cmp     [ebx+0Ch], esi
0x534EBF: jle     short loc_534F18
0x534EC1: push    ebp
0x534EC2: mov     eax, [ebx+8]
0x534EC5: mov     edi, [eax+esi*8]
0x534EC8: mov     ebp, [eax+esi*8+4]
0x534ECC: lea     eax, [esp+0B4h+Filename]
0x534ED0: push    edi
0x534ED1: push    eax
0x534ED2: call    sub_8B17C0
0x534ED7: add     esp, 8
0x534EDA: test    eax, eax
0x534EDC: jnz     short loc_534EE7
0x534EDE: cmp     [esp+0B4h+arg_4], ebp
0x534EE5: jz      short loc_534EF1
0x534EE7: add     esi, 1
0x534EEA: cmp     esi, [ebx+0Ch]
0x534EED: jl      short loc_534EC2
0x534EEF: jmp     short loc_534F17
0x534EF1: mov     ecx, ds:0BA7D98h
0x534EF7: mov     edx, [ecx]
0x534EF9: mov     eax, [edx+4]
0x534EFC: push    edi
0x534EFD: call    eax
0x534EFF: add     dword ptr [ebx+0Ch], 0FFFFFFFFh
0x534F03: mov     eax, [ebx+0Ch]
0x534F06: mov     ebx, [ebx+8]
0x534F09: mov     ecx, [ebx+eax*8]
0x534F0C: mov     [ebx+esi*8], ecx
0x534F0F: mov     edx, [ebx+eax*8+4]
0x534F13: mov     [ebx+esi*8+4], edx
0x534F17: pop     ebp
0x534F18: mov     ecx, [esp+0B0h+var_4]
0x534F1F: pop     edi
0x534F20: pop     esi
0x534F21: pop     ebx
0x534F22: xor     ecx, esp
0x534F24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x534F29: add     esp, 0A4h
0x534F2F: retn    8
