0x985F09: push    ebp
0x985F0A: mov     ebp, esp
0x985F0C: sub     esp, 28h
0x985F0F: push    ebx
0x985F10: push    esi
0x985F11: push    [ebp+Locale]; struct localeinfo_struct *
0x985F14: lea     ecx, [ebp+var_10]; this
0x985F17: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x985F1C: mov     esi, [ebp+String]
0x985F1F: xor     ebx, ebx
0x985F21: cmp     esi, ebx
0x985F23: jnz     short loc_985F4D
0x985F25: call    __errno
0x985F2A: push    ebx
0x985F2B: push    ebx
0x985F2C: push    ebx
0x985F2D: push    ebx
0x985F2E: push    ebx
0x985F2F: mov     dword ptr [eax], 16h
0x985F35: call    __invalid_parameter
0x985F3A: add     esp, 14h
0x985F3D: cmp     [ebp+var_4], bl
0x985F40: jz      short loc_985F49
0x985F42: mov     eax, [ebp+var_8]
0x985F45: and     dword ptr [eax+70h], 0FFFFFFFDh
0x985F49: fldz
0x985F4B: jmp     short loc_985FAE
0x985F4D: mov     eax, [ebp+var_10.locinfo]
0x985F50: cmp     dword ptr [eax+0ACh], 1
0x985F57: jle     short loc_985F6D
0x985F59: lea     eax, [ebp+var_10]
0x985F5C: push    eax; Locale
0x985F5D: movzx   eax, byte ptr [esi]
0x985F60: push    8; Type
0x985F62: push    eax; C
0x985F63: call    __isctype_l
0x985F68: add     esp, 0Ch
0x985F6B: jmp     short loc_985F7D
0x985F6D: movzx   ecx, byte ptr [esi]
0x985F70: mov     eax, [eax+0C8h]
0x985F76: movzx   eax, byte ptr [eax+ecx*2]
0x985F7A: and     eax, 8
0x985F7D: cmp     eax, ebx
0x985F7F: jz      short loc_985F84
0x985F81: inc     esi
0x985F82: jmp     short loc_985F4D
0x985F84: lea     eax, [ebp+var_10]
0x985F87: push    eax
0x985F88: push    ebx
0x985F89: push    ebx
0x985F8A: push    esi; Str
0x985F8B: call    _strlen
0x985F90: pop     ecx
0x985F91: push    eax
0x985F92: lea     eax, [ebp+var_28]
0x985F95: push    esi
0x985F96: push    eax
0x985F97: call    __fltin2
0x985F9C: fld     qword ptr [eax+10h]
0x985F9F: add     esp, 18h
0x985FA2: cmp     [ebp+var_4], bl
0x985FA5: jz      short loc_985FAE
0x985FA7: mov     eax, [ebp+var_8]
0x985FAA: and     dword ptr [eax+70h], 0FFFFFFFDh
0x985FAE: pop     esi
0x985FAF: pop     ebx
0x985FB0: leave
0x985FB1: retn
