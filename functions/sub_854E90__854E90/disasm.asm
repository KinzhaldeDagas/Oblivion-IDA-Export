0x854E90: push    0FFFFFFFFh
0x854E92: push    offset SEH_854E90
0x854E97: mov     eax, large fs:0
0x854E9D: push    eax
0x854E9E: push    esi
0x854E9F: push    edi
0x854EA0: mov     eax, ds:0B30AACh
0x854EA5: xor     eax, esp
0x854EA7: push    eax
0x854EA8: lea     eax, [esp+18h+var_C]
0x854EAC: mov     large fs:0, eax
0x854EB2: mov     edi, ecx
0x854EB4: cmp     [esp+18h+arg_10], 0
0x854EB9: jz      loc_854F53
0x854EBF: cmp     byte ptr [esp+18h+arg_8], 1
0x854EC4: jnz     short loc_854F30
0x854EC6: push    10h; Size
0x854EC8: call    FormHeapAlloc
0x854ECD: add     esp, 4
0x854ED0: mov     [esp+18h+arg_8], eax
0x854ED4: test    eax, eax
0x854ED6: mov     esi, [esp+18h+arg_C]
0x854EDA: mov     [esp+18h+var_4], 0
0x854EE2: jz      short loc_854EFE
0x854EE4: movzx   ecx, byte ptr [esi]
0x854EE7: mov     edx, [esp+18h+arg_0]
0x854EEB: push    0
0x854EED: push    0
0x854EEF: push    ecx
0x854EF0: push    2
0x854EF2: push    edx
0x854EF3: push    eax
0x854EF4: call    sub_7E2370
0x854EF9: add     esp, 18h
0x854EFC: jmp     short loc_854F00
0x854EFE: xor     eax, eax
0x854F00: mov     [esp+18h+arg_8], eax
0x854F04: lea     eax, [esp+18h+arg_8]
0x854F08: push    eax
0x854F09: lea     ecx, [edi+28h]
0x854F0C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854F14: call    sub_5B1E20
0x854F19: mov     byte ptr [esi], 0
0x854F1C: mov     ecx, [esp+18h+var_C]
0x854F20: mov     large fs:0, ecx
0x854F27: pop     ecx
0x854F28: pop     edi
0x854F29: pop     esi
0x854F2A: add     esp, 0Ch
0x854F2D: retn    14h
0x854F30: mov     eax, [esp+18h+arg_4]
0x854F34: mov     ecx, [esp+18h+arg_C]
0x854F38: add     word ptr [eax], 1
0x854F3C: mov     byte ptr [ecx], 0
0x854F3F: mov     ecx, [esp+18h+var_C]
0x854F43: mov     large fs:0, ecx
0x854F4A: pop     ecx
0x854F4B: pop     edi
0x854F4C: pop     esi
0x854F4D: add     esp, 0Ch
0x854F50: retn    14h
0x854F53: cmp     byte ptr [esp+18h+arg_8], 1
0x854F58: jnz     short loc_854FC4
0x854F5A: push    10h; Size
0x854F5C: call    FormHeapAlloc
0x854F61: add     esp, 4
0x854F64: mov     [esp+18h+arg_8], eax
0x854F68: test    eax, eax
0x854F6A: mov     esi, [esp+18h+arg_C]
0x854F6E: mov     [esp+18h+var_4], 1
0x854F76: jz      short loc_854F92
0x854F78: movzx   edx, byte ptr [esi]
0x854F7B: mov     ecx, [esp+18h+arg_0]
0x854F7F: push    0
0x854F81: push    0
0x854F83: push    edx
0x854F84: push    0
0x854F86: push    ecx
0x854F87: push    eax
0x854F88: call    sub_7E2370
0x854F8D: add     esp, 18h
0x854F90: jmp     short loc_854F94
0x854F92: xor     eax, eax
0x854F94: lea     edx, [esp+18h+arg_8]
0x854F98: push    edx
0x854F99: lea     ecx, [edi+28h]
0x854F9C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854FA4: mov     [esp+1Ch+arg_8], eax
0x854FA8: call    sub_5B1E20
0x854FAD: mov     byte ptr [esi], 0
0x854FB0: mov     ecx, [esp+18h+var_C]
0x854FB4: mov     large fs:0, ecx
0x854FBB: pop     ecx
0x854FBC: pop     edi
0x854FBD: pop     esi
0x854FBE: add     esp, 0Ch
0x854FC1: retn    14h
0x854FC4: mov     eax, [esp+18h+arg_4]
0x854FC8: add     word ptr [eax], 1
0x854FCC: mov     eax, [esp+18h+arg_C]
0x854FD0: mov     byte ptr [eax], 0
0x854FD3: mov     ecx, [esp+18h+var_C]
0x854FD7: mov     large fs:0, ecx
0x854FDE: pop     ecx
0x854FDF: pop     edi
0x854FE0: pop     esi
0x854FE1: add     esp, 0Ch
0x854FE4: retn    14h
