0x4A4EA0: push    0FFFFFFFFh
0x4A4EA2: push    offset SEH_4A4EA0
0x4A4EA7: mov     eax, large fs:0
0x4A4EAD: push    eax
0x4A4EAE: sub     esp, 0Ch
0x4A4EB1: push    ebx
0x4A4EB2: push    esi
0x4A4EB3: push    edi
0x4A4EB4: mov     eax, ds:0B30AACh
0x4A4EB9: xor     eax, esp
0x4A4EBB: push    eax
0x4A4EBC: lea     eax, [esp+28h+var_C]
0x4A4EC0: mov     large fs:0, eax
0x4A4EC6: mov     ebx, ecx
0x4A4EC8: mov     [esp+28h+var_18], ebx
0x4A4ECC: mov     edi, [esp+28h+arg_0]
0x4A4ED0: push    edi
0x4A4ED1: call    sub_4A34E0
0x4A4ED6: lea     esi, [ebx+8]
0x4A4ED9: mov     dword ptr [ebx], offset ??_7TESRegionDataMap@@6B@; const TESRegionDataMap::`vftable'
0x4A4EDF: mov     [esp+28h+var_4], 0
0x4A4EE7: mov     dword ptr [esi], 0
0x4A4EED: mov     word ptr [esi+4], 0
0x4A4EF3: mov     word ptr [esi+6], 0
0x4A4EF9: mov     eax, [edi]
0x4A4EFB: mov     edx, [eax+28h]
0x4A4EFE: lea     ecx, [esp+28h+var_14]
0x4A4F02: push    ecx
0x4A4F03: mov     ecx, edi
0x4A4F05: mov     byte ptr [esp+2Ch+var_4], 1
0x4A4F0A: call    edx
0x4A4F0C: mov     edi, eax
0x4A4F0E: mov     eax, [edi]
0x4A4F10: test    eax, eax
0x4A4F12: mov     byte ptr [esp+28h+var_4], 2
0x4A4F17: jz      short loc_4A4F2B
0x4A4F19: mov     ecx, [esi]
0x4A4F1B: test    ecx, ecx
0x4A4F1D: jz      short loc_4A4F2B
0x4A4F1F: push    eax; Str2
0x4A4F20: push    ecx; Str1
0x4A4F21: call    __strcmp
0x4A4F26: add     esp, 8
0x4A4F29: jmp     short loc_4A4F38
0x4A4F2B: xor     ecx, ecx
0x4A4F2D: test    eax, eax
0x4A4F2F: setz    cl
0x4A4F32: lea     ecx, [ecx+ecx-1]
0x4A4F36: mov     eax, ecx
0x4A4F38: test    eax, eax
0x4A4F3A: jz      short loc_4A4F48
0x4A4F3C: mov     edi, [edi]
0x4A4F3E: push    0; a3
0x4A4F40: push    edi; a2
0x4A4F41: mov     ecx, esi; this
0x4A4F43: call    BSStringT_Set
0x4A4F48: mov     edx, dword ptr [esp+28h+var_14]
0x4A4F4C: push    edx
0x4A4F4D: call    FormHeapFree
0x4A4F52: add     esp, 4
0x4A4F55: mov     eax, ebx
0x4A4F57: mov     ecx, dword ptr [esp+28h+var_C]
0x4A4F5B: mov     large fs:0, ecx
0x4A4F62: pop     ecx
0x4A4F63: pop     edi
0x4A4F64: pop     esi
0x4A4F65: pop     ebx
0x4A4F66: add     esp, 18h
0x4A4F69: retn    4
