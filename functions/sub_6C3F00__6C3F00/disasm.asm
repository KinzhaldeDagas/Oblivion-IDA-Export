0x6C3F00: push    0FFFFFFFFh
0x6C3F02: push    offset SEH_8C62B0
0x6C3F07: mov     eax, large fs:0
0x6C3F0D: push    eax
0x6C3F0E: push    ecx
0x6C3F0F: push    esi
0x6C3F10: mov     eax, ds:0B30AACh
0x6C3F15: xor     eax, esp
0x6C3F17: push    eax
0x6C3F18: lea     eax, [esp+18h+var_C]
0x6C3F1C: mov     large fs:0, eax
0x6C3F22: push    40h ; '@'; Size
0x6C3F24: call    FormHeapAlloc
0x6C3F29: mov     esi, eax
0x6C3F2B: add     esp, 4
0x6C3F2E: mov     [esp+18h+var_10], esi
0x6C3F32: xor     eax, eax
0x6C3F34: cmp     esi, eax
0x6C3F36: mov     [esp+18h+var_4], eax
0x6C3F3A: jz      short loc_6C3F4B
0x6C3F3C: mov     ecx, esi
0x6C3F3E: call    sub_6CE1D0
0x6C3F43: mov     dword ptr [esi], offset ??_7NiTransformController@@6B@; const NiTransformController::`vftable'
0x6C3F49: mov     eax, esi
0x6C3F4B: mov     ecx, [esp+18h+var_C]
0x6C3F4F: mov     large fs:0, ecx
0x6C3F56: pop     ecx
0x6C3F57: pop     esi
0x6C3F58: add     esp, 10h
0x6C3F5B: retn
