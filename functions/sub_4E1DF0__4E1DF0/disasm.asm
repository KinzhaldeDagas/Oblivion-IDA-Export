0x4E1DF0: push    0FFFFFFFFh
0x4E1DF2: push    offset SEH_4F28B0
0x4E1DF7: mov     eax, large fs:0
0x4E1DFD: push    eax
0x4E1DFE: sub     esp, 14h
0x4E1E01: push    ebx
0x4E1E02: push    ebp
0x4E1E03: push    esi
0x4E1E04: push    edi
0x4E1E05: mov     eax, ds:0B30AACh
0x4E1E0A: xor     eax, esp
0x4E1E0C: push    eax
0x4E1E0D: lea     eax, [esp+34h+var_C]
0x4E1E11: mov     large fs:0, eax
0x4E1E17: mov     edi, ecx
0x4E1E19: mov     eax, [edi+3Ch]
0x4E1E1C: xor     esi, esi
0x4E1E1E: cmp     eax, esi
0x4E1E20: jz      loc_4E1F66
0x4E1E26: mov     eax, [edi]
0x4E1E28: mov     edx, [eax+168h]
0x4E1E2E: call    edx
0x4E1E30: mov     ecx, ds:0B333C4h
0x4E1E36: cmp     edi, ecx
0x4E1E38: mov     ebx, eax
0x4E1E3A: mov     ebp, 1
0x4E1E3F: mov     [esp+34h+var_1C], ebx
0x4E1E43: mov     [esp+34h+var_20], ebp
0x4E1E47: jnz     short loc_4E1E7D
0x4E1E49: mov     [esp+34h+var_20], 2
0x4E1E51: jmp     short loc_4E1E59
0x4E1E53: mov     ecx, ds:0B333C4h
0x4E1E59: cmp     edi, ecx
0x4E1E5B: jnz     short loc_4E1E7D
0x4E1E5D: cmp     [esp+34h+var_20], ebp
0x4E1E61: jnz     short loc_4E1E7D
0x4E1E63: mov     al, [ecx+588h]
0x4E1E69: mov     byte ptr [esp+34h+var_18], al
0x4E1E6D: mov     edx, [esp+34h+var_18]
0x4E1E71: push    edx
0x4E1E72: call    sub_6600D0
0x4E1E77: mov     [esp+34h+var_1C], eax
0x4E1E7B: mov     ebx, eax
0x4E1E7D: cmp     ebx, esi
0x4E1E7F: jz      short loc_4E1E92
0x4E1E81: mov     eax, [esp+34h+arg_0]
0x4E1E85: push    eax
0x4E1E86: mov     ecx, ebx
0x4E1E88: call    sub_479C40
0x4E1E8D: jmp     loc_4E1F21
0x4E1E92: cmp     [esp+34h+arg_0], esi
0x4E1E96: jz      loc_4E1F21
0x4E1E9C: mov     ecx, [esp+34h+arg_0]
0x4E1EA0: add     ecx, 30h ; '0'
0x4E1EA3: cmp     ecx, esi
0x4E1EA5: jz      short loc_4E1F21
0x4E1EA7: mov     edx, [ecx]
0x4E1EA9: mov     eax, [edx+14h]
0x4E1EAC: push    esi
0x4E1EAD: push    edi
0x4E1EAE: push    0Ch
0x4E1EB0: call    eax
0x4E1EB2: push    eax
0x4E1EB3: call    sub_479450
0x4E1EB8: mov     ebx, eax
0x4E1EBA: mov     [esp+44h+Src], esi
0x4E1EBE: mov     [esp+44h+var_10], si
0x4E1EC3: mov     [esp+44h+var_E], si
0x4E1EC8: mov     ecx, [esp+44h+arg_0]
0x4E1ECC: mov     eax, [ecx+0Ch]
0x4E1ECF: mov     edx, ds:0B065B8h
0x4E1ED5: push    eax
0x4E1ED6: push    edx; ArgList
0x4E1ED7: lea     eax, [esp+4Ch+Src]
0x4E1EDB: push    offset aS08x; "%s (%08X)"
0x4E1EE0: push    eax; int
0x4E1EE1: mov     [esp+54h+var_4], esi
0x4E1EE5: call    BSStringT_Static_Format
0x4E1EEA: mov     ebp, [esp+54h+Src]
0x4E1EEE: add     esp, 20h
0x4E1EF1: push    ebp; Src
0x4E1EF2: mov     ecx, ebx
0x4E1EF4: call    NiObjectNET_SetName
0x4E1EF9: push    ebp
0x4E1EFA: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4E1F02: call    FormHeapFree
0x4E1F07: mov     ebx, [esp+38h+var_1C]
0x4E1F0B: add     esp, 4
0x4E1F0E: mov     [esp+34h+Src], esi
0x4E1F12: mov     [esp+34h+var_E], si
0x4E1F17: mov     [esp+34h+var_10], si
0x4E1F1C: mov     ebp, 1
0x4E1F21: mov     edx, [edi]
0x4E1F23: mov     eax, [edx+190h]
0x4E1F29: mov     ecx, edi
0x4E1F2B: call    eax
0x4E1F2D: test    al, al
0x4E1F2F: jz      short loc_4E1F3A
0x4E1F31: push    esi
0x4E1F32: push    ebx
0x4E1F33: mov     ecx, edi
0x4E1F35: call    sub_5F8300
0x4E1F3A: sub     [esp+34h+var_20], ebp
0x4E1F3E: jnz     loc_4E1E53
0x4E1F44: mov     edx, [edi]
0x4E1F46: mov     eax, [edx+190h]
0x4E1F4C: mov     ecx, edi
0x4E1F4E: call    eax
0x4E1F50: test    al, al
0x4E1F52: jz      short loc_4E1F66
0x4E1F54: mov     ecx, [edi+3Ch]
0x4E1F57: push    ecx
0x4E1F58: mov     ecx, edi
0x4E1F5A: call    sub_5EA1A0
0x4E1F5F: mov     ecx, edi; a1
0x4E1F61: call    sub_5EE1B0
0x4E1F66: mov     ecx, [esp+34h+var_C]
0x4E1F6A: mov     large fs:0, ecx
0x4E1F71: pop     ecx
0x4E1F72: pop     edi
0x4E1F73: pop     esi
0x4E1F74: pop     ebp
0x4E1F75: pop     ebx
0x4E1F76: add     esp, 20h
0x4E1F79: retn    4
