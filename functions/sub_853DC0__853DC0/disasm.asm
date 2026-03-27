0x853DC0: push    0FFFFFFFFh
0x853DC2: push    offset SEH_853DC0
0x853DC7: mov     eax, large fs:0
0x853DCD: push    eax
0x853DCE: push    esi
0x853DCF: push    edi
0x853DD0: mov     eax, ds:0B30AACh
0x853DD5: xor     eax, esp
0x853DD7: push    eax
0x853DD8: lea     eax, [esp+18h+var_C]
0x853DDC: mov     large fs:0, eax
0x853DE2: mov     edi, ecx
0x853DE4: cmp     [esp+18h+arg_14], 0
0x853DE9: jnz     loc_853E96
0x853DEF: cmp     [esp+18h+arg_18], 0
0x853DF4: jnz     short loc_853E46
0x853DF6: cmp     byte ptr [esp+18h+arg_C], 1
0x853DFB: jnz     loc_853F5D
0x853E01: push    10h; Size
0x853E03: call    FormHeapAlloc
0x853E08: add     esp, 4
0x853E0B: mov     [esp+18h+arg_C], eax
0x853E0F: test    eax, eax
0x853E11: mov     esi, [esp+18h+arg_10]
0x853E15: mov     [esp+18h+var_4], 0
0x853E1D: jz      loc_853F2B
0x853E23: mov     ecx, [esp+18h+arg_4]
0x853E27: movzx   edx, byte ptr [esi]
0x853E2A: push    ecx
0x853E2B: mov     ecx, [esp+1Ch+arg_0]
0x853E2F: push    1
0x853E31: push    edx
0x853E32: push    10Fh
0x853E37: push    ecx
0x853E38: push    eax
0x853E39: call    sub_7E2370
0x853E3E: add     esp, 18h
0x853E41: jmp     loc_853F2D
0x853E46: cmp     byte ptr [esp+18h+arg_C], 1
0x853E4B: jnz     loc_853F5D
0x853E51: push    10h; Size
0x853E53: call    FormHeapAlloc
0x853E58: add     esp, 4
0x853E5B: mov     [esp+18h+arg_C], eax
0x853E5F: test    eax, eax
0x853E61: mov     esi, [esp+18h+arg_10]
0x853E65: mov     [esp+18h+var_4], 1
0x853E6D: jz      loc_853F2B
0x853E73: mov     ecx, [esp+18h+arg_4]
0x853E77: movzx   edx, byte ptr [esi]
0x853E7A: push    ecx
0x853E7B: mov     ecx, [esp+1Ch+arg_0]
0x853E7F: push    1
0x853E81: push    edx
0x853E82: push    110h
0x853E87: push    ecx
0x853E88: push    eax
0x853E89: call    sub_7E2370
0x853E8E: add     esp, 18h
0x853E91: jmp     loc_853F2D
0x853E96: cmp     [esp+18h+arg_18], 0
0x853E9B: jnz     short loc_853EE6
0x853E9D: cmp     byte ptr [esp+18h+arg_C], 1
0x853EA2: jnz     loc_853F5D
0x853EA8: push    10h; Size
0x853EAA: call    FormHeapAlloc
0x853EAF: add     esp, 4
0x853EB2: mov     [esp+18h+arg_C], eax
0x853EB6: test    eax, eax
0x853EB8: mov     esi, [esp+18h+arg_10]
0x853EBC: mov     [esp+18h+var_4], 2
0x853EC4: jz      short loc_853F2B
0x853EC6: mov     ecx, [esp+18h+arg_4]
0x853ECA: movzx   edx, byte ptr [esi]
0x853ECD: push    ecx
0x853ECE: mov     ecx, [esp+1Ch+arg_0]
0x853ED2: push    1
0x853ED4: push    edx
0x853ED5: push    111h
0x853EDA: push    ecx
0x853EDB: push    eax
0x853EDC: call    sub_7E2370
0x853EE1: add     esp, 18h
0x853EE4: jmp     short loc_853F2D
0x853EE6: cmp     byte ptr [esp+18h+arg_C], 1
0x853EEB: jnz     short loc_853F5D
0x853EED: push    10h; Size
0x853EEF: call    FormHeapAlloc
0x853EF4: add     esp, 4
0x853EF7: mov     [esp+18h+arg_C], eax
0x853EFB: test    eax, eax
0x853EFD: mov     esi, [esp+18h+arg_10]
0x853F01: mov     [esp+18h+var_4], 3
0x853F09: jz      short loc_853F2B
0x853F0B: mov     ecx, [esp+18h+arg_4]
0x853F0F: movzx   edx, byte ptr [esi]
0x853F12: push    ecx
0x853F13: mov     ecx, [esp+1Ch+arg_0]
0x853F17: push    1
0x853F19: push    edx
0x853F1A: push    112h
0x853F1F: push    ecx
0x853F20: push    eax
0x853F21: call    sub_7E2370
0x853F26: add     esp, 18h
0x853F29: jmp     short loc_853F2D
0x853F2B: xor     eax, eax
0x853F2D: lea     edx, [esp+18h+arg_C]
0x853F31: push    edx
0x853F32: lea     ecx, [edi+28h]
0x853F35: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x853F3D: mov     [esp+1Ch+arg_C], eax
0x853F41: call    sub_5B1E20
0x853F46: mov     byte ptr [esi], 0
0x853F49: mov     ecx, [esp+18h+var_C]
0x853F4D: mov     large fs:0, ecx
0x853F54: pop     ecx
0x853F55: pop     edi
0x853F56: pop     esi
0x853F57: add     esp, 0Ch
0x853F5A: retn    2Ch ; ','
0x853F5D: mov     eax, [esp+18h+arg_8]
0x853F61: add     word ptr [eax], 1
0x853F65: mov     eax, [esp+18h+arg_10]
0x853F69: mov     byte ptr [eax], 0
0x853F6C: mov     ecx, [esp+18h+var_C]
0x853F70: mov     large fs:0, ecx
0x853F77: pop     ecx
0x853F78: pop     edi
0x853F79: pop     esi
0x853F7A: add     esp, 0Ch
0x853F7D: retn    2Ch ; ','
