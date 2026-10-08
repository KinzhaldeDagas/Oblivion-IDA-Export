0x788DA0: push    0FFFFFFFFh; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock user-data parser for top-level 19000. Copies counted 19002 string into CSpeedTreeRT+0x68 until 19001. Compatibility parser should preserve this family byte-exact.
0x788DA2: push    offset SEH_788DA0
0x788DA7: mov     eax, large fs:0
0x788DAD: push    eax
0x788DAE: sub     esp, 1Ch
0x788DB1: push    ebx
0x788DB2: push    ebp
0x788DB3: push    esi
0x788DB4: push    edi
0x788DB5: mov     eax, ds:0B30AACh
0x788DBA: xor     eax, esp
0x788DBC: push    eax
0x788DBD: lea     eax, [esp+3Ch+var_C]
0x788DC1: mov     large fs:0, eax
0x788DC7: mov     ebx, ecx
0x788DC9: mov     esi, [esp+3Ch+file]
0x788DCD: mov     ecx, esi; this
0x788DCF: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: 19000 user-data loop reads dword tokens until 19001; token 19002 reads a counted string, other dwords are ignored. Immediate 19001 is not an accepted empty block in this path.
0x788DD4: cmp     eax, 4A3Ah
0x788DD9: jnz     loc_788E5F
0x788DDF: lea     eax, [esp+3Ch+outSmallString]
0x788DE3: push    eax; outSmallString
0x788DE4: mov     ecx, esi; this
0x788DE6: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x788DEB: cmp     dword ptr [eax+18h], 10h
0x788DEF: mov     [esp+3Ch+var_4], 0
0x788DF7: jb      short loc_788DFE
0x788DF9: mov     ebp, [eax+4]
0x788DFC: jmp     short loc_788E01
0x788DFE: lea     ebp, [eax+4]
0x788E01: mov     eax, ebp
0x788E03: lea     edx, [eax+1]
0x788E06: mov     cl, [eax]
0x788E08: add     eax, 1
0x788E0B: test    cl, cl
0x788E0D: jnz     short loc_788E06
0x788E0F: sub     eax, edx
0x788E11: lea     esi, [eax+1]
0x788E14: push    esi; Size
0x788E15: call    FormHeapAlloc
0x788E1A: push    esi; byteCount
0x788E1B: mov     edi, eax
0x788E1D: push    ebp; source
0x788E1E: push    edi; destination
0x788E1F: call    _memcpy;
0x788E24: add     esp, 10h
0x788E27: cmp     [esp+3Ch+var_10], 10h
0x788E2C: mov     [ebx+68h], edi
0x788E2F: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x788E37: jb      short loc_788E46
0x788E39: mov     ecx, [esp+3Ch+var_24]
0x788E3D: push    ecx
0x788E3E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x788E43: add     esp, 4
0x788E46: mov     esi, [esp+3Ch+file]
0x788E4A: mov     [esp+3Ch+var_10], 0Fh
0x788E52: mov     [esp+3Ch+var_14], 0
0x788E5A: mov     byte ptr [esp+3Ch+var_24], 0
0x788E5F: mov     ecx, esi; this
0x788E61: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x788E66: cmp     eax, 4A39h
0x788E6B: jnz     loc_788DD4
0x788E71: mov     ecx, [esp+3Ch+var_C]
0x788E75: mov     large fs:0, ecx
0x788E7C: pop     ecx
0x788E7D: pop     edi
0x788E7E: pop     esi
0x788E7F: pop     ebp
0x788E80: pop     ebx
0x788E81: add     esp, 28h
0x788E84: retn    4
0x9CB280: lea     ecx, [ebp-28h]; this
0x9CB283: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB288: mov     edx, [esp+arg_4]
0x9CB28C: lea     eax, [edx-2Ch]
0x9CB28F: mov     ecx, [edx-30h]
0x9CB292: xor     ecx, eax
0x9CB294: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB299: mov     eax, offset stru_AF391C
0x9CB29E: jmp     ___CxxFrameHandler3
