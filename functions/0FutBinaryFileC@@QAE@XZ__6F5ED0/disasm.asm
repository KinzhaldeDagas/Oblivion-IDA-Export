0x6F5ED0: push    0FFFFFFFFh
0x6F5ED2: push    offset ??0FutBinaryFileC@@QAE@XZ_SEH
0x6F5ED7: mov     eax, large fs:0
0x6F5EDD: push    eax
0x6F5EDE: push    ecx
0x6F5EDF: push    ebx
0x6F5EE0: push    esi
0x6F5EE1: push    edi
0x6F5EE2: mov     eax, ds:0B30AACh
0x6F5EE7: xor     eax, esp
0x6F5EE9: push    eax
0x6F5EEA: lea     eax, [esp+20h+var_C]
0x6F5EEE: mov     large fs:0, eax
0x6F5EF4: mov     esi, ecx
0x6F5EF6: mov     [esp+20h+var_10], esi
0x6F5EFA: xor     ebx, ebx
0x6F5EFC: mov     dword ptr [esi], offset ??_7FutBinaryFileC@@6B@; const FutBinaryFileC::`vftable'
0x6F5F02: mov     eax, 0Fh
0x6F5F07: mov     [esi+1Ch], eax
0x6F5F0A: mov     [esi+18h], ebx
0x6F5F0D: mov     [esp+20h+var_4], ebx
0x6F5F11: mov     [esi+8], bl
0x6F5F14: lea     edi, [esi+20h]
0x6F5F17: mov     [edi+18h], eax
0x6F5F1A: mov     [edi+14h], ebx
0x6F5F1D: mov     [edi+4], bl
0x6F5F20: push    0FFFFFFFFh
0x6F5F22: push    ebx
0x6F5F23: lea     eax, [esp+28h+arg_0]
0x6F5F27: push    eax
0x6F5F28: mov     ecx, edi
0x6F5F2A: mov     byte ptr [esp+2Ch+var_4], 2
0x6F5F2F: call    sub_414420
0x6F5F34: cmp     dword ptr [esi+34h], 8
0x6F5F38: jz      short loc_6F5F49
0x6F5F3A: push    1Bh; int
0x6F5F3C: push    offset a_Binaryfile_cp; ".\\binaryFile.cpp"
0x6F5F41: call    sub_6ED6D0
0x6F5F46: add     esp, 8
0x6F5F49: mov     [esi+3Ch], ebx
0x6F5F4C: cmp     dword ptr [edi+14h], 5
0x6F5F50: jnb     short loc_6F5F57
0x6F5F52: call    __invalid_parameter_noinfo
0x6F5F57: mov     eax, 10h
0x6F5F5C: cmp     [edi+18h], eax
0x6F5F5F: jb      short loc_6F5F66
0x6F5F61: mov     edi, [edi+4]
0x6F5F64: jmp     short loc_6F5F69
0x6F5F66: add     edi, 4
0x6F5F69: mov     byte ptr [edi+5], 30h ; '0'
0x6F5F6D: cmp     [esp+20h+arg_18], eax
0x6F5F71: jb      short loc_6F5F80
0x6F5F73: mov     ecx, [esp+20h+arg_4]
0x6F5F77: push    ecx
0x6F5F78: call    FormHeapFree
0x6F5F7D: add     esp, 4
0x6F5F80: mov     eax, esi
0x6F5F82: mov     ecx, [esp+20h+var_C]
0x6F5F86: mov     large fs:0, ecx
0x6F5F8D: pop     ecx
0x6F5F8E: pop     edi
0x6F5F8F: pop     esi
0x6F5F90: pop     ebx
0x6F5F91: add     esp, 10h
0x6F5F94: retn    1Ch
