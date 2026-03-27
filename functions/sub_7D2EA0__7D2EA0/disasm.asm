0x7D2EA0: sub     esp, 1Ch
0x7D2EA3: push    ebx
0x7D2EA4: push    esi
0x7D2EA5: mov     esi, [esp+24h+arg_4]
0x7D2EA9: test    esi, esi
0x7D2EAB: mov     ebx, ecx
0x7D2EAD: jnz     short loc_7D2EB9
0x7D2EAF: pop     esi
0x7D2EB0: xor     al, al
0x7D2EB2: pop     ebx
0x7D2EB3: add     esp, 1Ch
0x7D2EB6: retn    8
0x7D2EB9: mov     eax, [esi]
0x7D2EBB: mov     edx, [eax+4]
0x7D2EBE: mov     ecx, esi
0x7D2EC0: call    edx
0x7D2EC2: cmp     eax, offset dword_B3FCFC
0x7D2EC7: jnz     short loc_7D2ED3
0x7D2EC9: pop     esi
0x7D2ECA: mov     al, 1
0x7D2ECC: pop     ebx
0x7D2ECD: add     esp, 1Ch
0x7D2ED0: retn    8
0x7D2ED3: cmp     dword ptr [ebx+14Ch], 0
0x7D2EDA: mov     eax, [esp+24h+arg_0]
0x7D2EDE: mov     ecx, [eax+20h]
0x7D2EE1: mov     edx, [eax+24h]
0x7D2EE4: mov     [esp+24h+var_10.Center.x], ecx
0x7D2EE8: mov     ecx, [eax+28h]
0x7D2EEB: mov     [esp+24h+var_10.Center.y], edx
0x7D2EEF: mov     edx, [eax+2Ch]
0x7D2EF2: mov     byte ptr [esp+24h+arg_4], 1
0x7D2EF7: mov     [esp+24h+var_10.Center.z], ecx
0x7D2EFB: mov     [esp+24h+var_10.Radius], edx
0x7D2EFF: jz      short loc_7D2F5D
0x7D2F01: push    ebp
0x7D2F02: push    edi
0x7D2F03: xor     edi, edi
0x7D2F05: lea     ebp, [ebx+150h]
0x7D2F0B: jmp     short loc_7D2F10
0x7D2F0D: align 10h
0x7D2F10: mov     esi, 1
0x7D2F15: mov     ecx, edi
0x7D2F17: shl     esi, cl
0x7D2F19: test    [ebx+1B0h], esi
0x7D2F1F: jz      short loc_7D2F44
0x7D2F21: push    ebp; a2
0x7D2F22: lea     ecx, [esp+30h+var_10]; this
0x7D2F26: call    sub_47DA70
0x7D2F2B: cmp     eax, 2
0x7D2F2E: jnz     short loc_7D2F37
0x7D2F30: mov     byte ptr [esp+2Ch+arg_4], 0
0x7D2F35: jmp     short loc_7D2F44
0x7D2F37: cmp     eax, 1
0x7D2F3A: jnz     short loc_7D2F44
0x7D2F3C: not     esi
0x7D2F3E: and     [ebx+1B0h], esi
0x7D2F44: add     edi, 1
0x7D2F47: add     ebp, 10h
0x7D2F4A: cmp     edi, 6
0x7D2F4D: jb      short loc_7D2F10
0x7D2F4F: mov     al, byte ptr [esp+2Ch+arg_4]
0x7D2F53: pop     edi
0x7D2F54: pop     ebp
0x7D2F55: pop     esi
0x7D2F56: pop     ebx
0x7D2F57: add     esp, 1Ch
0x7D2F5A: retn    8
0x7D2F5D: fld     dword ptr [esi+88h]
0x7D2F63: fsub    [esp+24h+var_10.Center.x]
0x7D2F67: fstp    [esp+24h+var_1C]
0x7D2F6B: fld     dword ptr [esi+8Ch]
0x7D2F71: fsub    [esp+24h+var_10.Center.y]
0x7D2F75: fstp    [esp+24h+var_18]
0x7D2F79: fld     dword ptr [esi+90h]
0x7D2F7F: fsub    [esp+24h+var_10.Center.z]
0x7D2F83: fstp    [esp+24h+var_14]
0x7D2F87: fld     [esp+24h+var_18]
0x7D2F8B: fld     [esp+24h+var_1C]
0x7D2F8F: fld     [esp+24h+var_14]
0x7D2F93: fld     st(1)
0x7D2F95: fmulp   st(2), st
0x7D2F97: fld     st(2)
0x7D2F99: fmulp   st(3), st
0x7D2F9B: fxch    st(1)
0x7D2F9D: faddp   st(2), st
0x7D2F9F: fmul    st, st
0x7D2FA1: faddp   st(1), st
0x7D2FA3: fstp    [esp+24h+arg_0]
0x7D2FA7: fld     [esp+24h+arg_0]
0x7D2FAB: call    __CIsqrt
0x7D2FB0: fstp    [esp+24h+arg_0]
0x7D2FB4: fld     [esp+24h+arg_0]
0x7D2FB8: mov     byte ptr [esp+24h+arg_4], 1
0x7D2FBD: fsub    [esp+24h+var_10.Radius]
0x7D2FC1: fstp    [esp+24h+arg_0]
0x7D2FC5: fld     [esp+24h+arg_0]
0x7D2FC9: fld     dword ptr [esi+0F8h]
0x7D2FCF: fcompp
0x7D2FD1: fnstsw  ax
0x7D2FD3: test    ah, 41h
0x7D2FD6: jz      short loc_7D2FDD
0x7D2FD8: mov     byte ptr [esp+24h+arg_4], 0
0x7D2FDD: mov     al, byte ptr [esp+24h+arg_4]
0x7D2FE1: pop     esi
0x7D2FE2: pop     ebx
0x7D2FE3: add     esp, 1Ch
0x7D2FE6: retn    8
