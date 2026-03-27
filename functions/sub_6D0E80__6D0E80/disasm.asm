0x6D0E80: sub     esp, 0Ch
0x6D0E83: push    ebx
0x6D0E84: push    ebp
0x6D0E85: push    esi
0x6D0E86: mov     esi, [esp+18h+arg_0]
0x6D0E8A: push    edi
0x6D0E8B: push    esi
0x6D0E8C: mov     edi, ecx
0x6D0E8E: call    sub_754EB0
0x6D0E93: mov     eax, [esi+220h]
0x6D0E99: push    1
0x6D0E9B: lea     ecx, [esp+20h+var_8]
0x6D0E9F: push    ecx
0x6D0EA0: push    2
0x6D0EA2: lea     edx, [edi+3Ch]
0x6D0EA5: push    edx
0x6D0EA6: push    eax
0x6D0EA7: mov     eax, [eax+8]
0x6D0EAA: mov     [esp+30h+var_8], 2
0x6D0EB2: call    eax
0x6D0EB4: mov     edx, [esi]
0x6D0EB6: mov     eax, [edi+50h]
0x6D0EB9: mov     edx, [edx+2Ch]
0x6D0EBC: add     esp, 14h
0x6D0EBF: push    eax
0x6D0EC0: mov     ecx, esi
0x6D0EC2: call    edx
0x6D0EC4: mov     al, [edi+5Ah]
0x6D0EC7: push    1
0x6D0EC9: lea     ecx, [esp+20h+var_8]
0x6D0ECD: push    ecx
0x6D0ECE: mov     byte ptr [esp+24h+arg_0], al
0x6D0ED2: mov     eax, [esi+220h]
0x6D0ED8: push    1
0x6D0EDA: lea     edx, [esp+28h+arg_0]
0x6D0EDE: push    edx
0x6D0EDF: push    eax
0x6D0EE0: mov     eax, [eax+8]
0x6D0EE3: mov     [esp+30h+var_8], 1
0x6D0EEB: call    eax
0x6D0EED: mov     edx, [edi]
0x6D0EEF: mov     eax, [edx+74h]
0x6D0EF2: add     esp, 14h
0x6D0EF5: mov     ecx, edi
0x6D0EF7: call    eax
0x6D0EF9: movzx   ecx, ax
0x6D0EFC: mov     eax, [esi+220h]
0x6D0F02: push    1
0x6D0F04: lea     edx, [esp+20h+var_8]
0x6D0F08: push    edx
0x6D0F09: mov     [esp+24h+var_C], ecx
0x6D0F0D: mov     edx, [eax+8]
0x6D0F10: mov     ebp, 4
0x6D0F15: push    ebp
0x6D0F16: lea     ecx, [esp+28h+var_C]
0x6D0F1A: push    ecx
0x6D0F1B: push    eax
0x6D0F1C: mov     [esp+30h+var_8], ebp
0x6D0F20: call    edx
0x6D0F22: xor     ebx, ebx
0x6D0F24: add     esp, 14h
0x6D0F27: cmp     [esp+1Ch+var_C], ebx
0x6D0F2B: jbe     short loc_6D0F53
0x6D0F2D: lea     ecx, [ecx+0]
0x6D0F30: mov     eax, [edi]
0x6D0F32: mov     edx, [eax+80h]
0x6D0F38: push    ebx
0x6D0F39: mov     ecx, edi
0x6D0F3B: call    edx
0x6D0F3D: mov     edx, [esi]
0x6D0F3F: push    eax
0x6D0F40: mov     eax, [edx+2Ch]
0x6D0F43: mov     ecx, esi
0x6D0F45: call    eax
0x6D0F47: add     ebx, 1
0x6D0F4A: movzx   ecx, bx
0x6D0F4D: cmp     ecx, [esp+1Ch+var_C]
0x6D0F51: jb      short loc_6D0F30
0x6D0F53: mov     eax, [esi+220h]
0x6D0F59: push    1
0x6D0F5B: lea     edx, [esp+20h+var_8]
0x6D0F5F: push    edx
0x6D0F60: mov     edx, [eax+8]
0x6D0F63: push    ebp
0x6D0F64: lea     ecx, [esp+28h+var_C]
0x6D0F68: push    ecx
0x6D0F69: push    eax
0x6D0F6A: mov     [esp+30h+var_8], ebp
0x6D0F6E: call    edx
0x6D0F70: xor     ebx, ebx
0x6D0F72: add     esp, 14h
0x6D0F75: cmp     [esp+1Ch+var_C], ebx
0x6D0F79: jbe     short loc_6D0FC9
0x6D0F7B: jmp     short loc_6D0F80
0x6D0F7D: align 10h
0x6D0F80: movzx   eax, word ptr [edi+4Ah]
0x6D0F84: fldz
0x6D0F86: cmp     ebx, eax
0x6D0F88: fstp    [esp+1Ch+var_8]
0x6D0F8C: jnb     short loc_6D0F98
0x6D0F8E: mov     ecx, [edi+44h]
0x6D0F91: fld     dword ptr [ecx+ebx*4]
0x6D0F94: fstp    [esp+1Ch+var_8]
0x6D0F98: fld     [esp+1Ch+var_8]
0x6D0F9C: mov     eax, [esi+220h]
0x6D0FA2: push    1
0x6D0FA4: fstp    [esp+20h+var_4]
0x6D0FA8: lea     edx, [esp+20h+var_8]
0x6D0FAC: push    edx
0x6D0FAD: mov     edx, [eax+8]
0x6D0FB0: push    ebp
0x6D0FB1: lea     ecx, [esp+28h+var_4]
0x6D0FB5: push    ecx
0x6D0FB6: push    eax
0x6D0FB7: mov     [esp+30h+var_8], ebp
0x6D0FBB: call    edx
0x6D0FBD: add     ebx, 1
0x6D0FC0: add     esp, 14h
0x6D0FC3: cmp     ebx, [esp+1Ch+var_C]
0x6D0FC7: jb      short loc_6D0F80
0x6D0FC9: pop     edi
0x6D0FCA: pop     esi
0x6D0FCB: pop     ebp
0x6D0FCC: pop     ebx
0x6D0FCD: add     esp, 0Ch
0x6D0FD0: retn    4
