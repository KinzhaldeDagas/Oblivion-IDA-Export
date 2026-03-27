0x9979F5: push    ebp
0x9979F6: mov     ebp, esp
0x9979F8: sub     esp, 0Ch
0x9979FB: push    ebx
0x9979FC: xor     ebx, ebx
0x9979FE: cmp     dword_BABC14, ebx
0x997A04: push    esi
0x997A05: push    edi
0x997A06: jnz     short loc_997A0D
0x997A08: call    ___initmbctable
0x997A0D: push    104h; nSize
0x997A12: mov     esi, offset byte_BAA650
0x997A17: push    esi; lpFilename
0x997A18: push    ebx; hModule
0x997A19: mov     byte_BAA754, bl
0x997A1F: call    ds:GetModuleFileNameA
0x997A25: mov     eax, dword_BABC04
0x997A2A: cmp     eax, ebx
0x997A2C: mov     dword_BA9DC4, esi
0x997A32: jz      short loc_997A3B
0x997A34: cmp     [eax], bl
0x997A36: mov     [ebp+var_4], eax
0x997A39: jnz     short loc_997A3E
0x997A3B: mov     [ebp+var_4], esi
0x997A3E: mov     edx, [ebp+var_4]
0x997A41: lea     eax, [ebp+var_8]
0x997A44: push    eax
0x997A45: push    ebx
0x997A46: push    ebx
0x997A47: lea     edi, [ebp+var_C]
0x997A4A: call    _parse_cmdline
0x997A4F: mov     eax, [ebp+var_8]
0x997A52: add     esp, 0Ch
0x997A55: cmp     eax, 3FFFFFFFh
0x997A5A: jnb     short loc_997AA6
0x997A5C: mov     ecx, [ebp+var_C]
0x997A5F: cmp     ecx, 0FFFFFFFFh
0x997A62: jnb     short loc_997AA6
0x997A64: mov     edi, eax
0x997A66: shl     edi, 2
0x997A69: lea     eax, [edi+ecx]
0x997A6C: cmp     eax, ecx
0x997A6E: jb      short loc_997AA6
0x997A70: push    eax
0x997A71: call    unknown_libname_72
0x997A76: mov     esi, eax
0x997A78: cmp     esi, ebx
0x997A7A: pop     ecx
0x997A7B: jz      short loc_997AA6
0x997A7D: mov     edx, [ebp+var_4]
0x997A80: lea     eax, [ebp+var_8]
0x997A83: push    eax
0x997A84: add     edi, esi
0x997A86: push    edi
0x997A87: push    esi
0x997A88: lea     edi, [ebp+var_C]
0x997A8B: call    _parse_cmdline
0x997A90: mov     eax, [ebp+var_8]
0x997A93: add     esp, 0Ch
0x997A96: dec     eax
0x997A97: mov     dword_BA9DA8, eax
0x997A9C: mov     dword_BA9DAC, esi
0x997AA2: xor     eax, eax
0x997AA4: jmp     short loc_997AA9
0x997AA6: or      eax, 0FFFFFFFFh
0x997AA9: pop     edi
0x997AAA: pop     esi
0x997AAB: pop     ebx
0x997AAC: leave
0x997AAD: retn
