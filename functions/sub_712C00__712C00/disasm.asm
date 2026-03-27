0x712C00: sub     esp, 90h
0x712C06: mov     eax, ds:0B30AACh
0x712C0B: xor     eax, esp
0x712C0D: mov     [esp+90h+var_4], eax
0x712C14: push    esi; Src
0x712C15: mov     esi, ecx
0x712C17: mov     ecx, [esi+21Ch]
0x712C1D: push    80h ; '€'
0x712C22: lea     eax, [esp+98h+Str]
0x712C26: push    eax
0x712C27: call    sub_748330
0x712C2C: lea     ecx, [esp+94h+Str]
0x712C30: push    offset aFileFormat; "File Format"
0x712C35: push    ecx; Str
0x712C36: call    _strstr
0x712C3B: add     esp, 8
0x712C3E: test    eax, eax
0x712C40: jnz     short loc_712C7D
0x712C42: push    offset aNotANifFile; "Not a NIF file"
0x712C47: mov     dword ptr [esi+380h], 2
0x712C51: push    104h; SizeInBytes
0x712C56: add     esi, 384h
0x712C5C: push    esi; Dst
0x712C5D: call    _strcpy_s
0x712C62: add     esp, 0Ch
0x712C65: xor     al, al
0x712C67: pop     esi
0x712C68: mov     ecx, [esp+90h+var_4]
0x712C6F: xor     ecx, esp
0x712C71: call    @__security_check_cookie@4; __security_check_cookie(x)
0x712C76: add     esp, 90h
0x712C7C: retn
0x712C7D: mov     ecx, [esi+21Ch]
0x712C83: mov     edx, [ecx]
0x712C85: mov     eax, [edx+8]
0x712C88: push    ebx
0x712C89: push    edi; Src
0x712C8A: push    0
0x712C8C: call    eax
0x712C8E: mov     eax, [esi+21Ch]
0x712C94: mov     edx, [eax+4]
0x712C97: push    1
0x712C99: lea     ecx, [esp+0A0h+var_8C]
0x712C9D: push    ecx
0x712C9E: mov     ebx, 4
0x712CA3: push    ebx
0x712CA4: lea     edi, [esi+0D8h]
0x712CAA: push    edi
0x712CAB: push    eax
0x712CAC: mov     [esp+0B0h+var_8C], ebx
0x712CB0: call    edx
0x712CB2: mov     eax, [edi]
0x712CB4: add     esp, 14h
0x712CB7: cmp     eax, ds:0B26DF0h
0x712CBD: jnb     short loc_712CFC
0x712CBF: push    offset aNifVersionIsTo; "NIF version is too old."
0x712CC4: mov     dword ptr [esi+380h], 3
0x712CCE: push    104h; SizeInBytes
0x712CD3: add     esi, 384h
0x712CD9: push    esi; Dst
0x712CDA: call    _strcpy_s
0x712CDF: add     esp, 0Ch
0x712CE2: pop     edi
0x712CE3: pop     ebx
0x712CE4: xor     al, al
0x712CE6: pop     esi
0x712CE7: mov     ecx, [esp+90h+var_4]
0x712CEE: xor     ecx, esp
0x712CF0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x712CF5: add     esp, 90h
0x712CFB: retn
0x712CFC: cmp     eax, ds:0B26DF4h
0x712D02: jbe     short loc_712D3D
0x712D04: push    offset aUnknownNifVers; "Unknown NIF version."
0x712D09: mov     [esi+380h], ebx
0x712D0F: push    104h; SizeInBytes
0x712D14: add     esi, 384h
0x712D1A: push    esi; Dst
0x712D1B: call    _strcpy_s
0x712D20: add     esp, 0Ch
0x712D23: pop     edi
0x712D24: pop     ebx
0x712D25: xor     al, al
0x712D27: pop     esi
0x712D28: mov     ecx, [esp+90h+var_4]
0x712D2F: xor     ecx, esp
0x712D31: call    @__security_check_cookie@4; __security_check_cookie(x)
0x712D36: add     esp, 90h
0x712D3C: retn
0x712D3D: cmp     eax, 14000003h
0x712D42: push    ebp; Src
0x712D43: lea     ebp, [esi+1E5h]
0x712D49: mov     byte ptr [ebp+0], 1
0x712D4D: jb      short loc_712D59
0x712D4F: push    ebp
0x712D50: push    esi
0x712D51: call    sub_6BDED0
0x712D56: add     esp, 8
0x712D59: cmp     byte ptr [ebp+0], 1
0x712D5D: jz      short loc_712D92
0x712D5F: call    NiBinaryStream_GetByteSwapHint
0x712D64: test    al, al
0x712D66: jz      short loc_712D92
0x712D68: push    offset aEndianMismatch; "Endian mismatch."
0x712D6D: mov     dword ptr [esi+380h], 6
0x712D77: push    104h; SizeInBytes
0x712D7C: add     esi, 384h
0x712D82: push    esi; Dst
0x712D83: call    sub_434900
0x712D88: add     esp, 0Ch
0x712D8B: xor     al, al
0x712D8D: jmp     loc_712EF3
0x712D92: cmp     dword ptr [edi], 0A000108h
0x712D98: jb      short loc_712DB8
0x712D9A: lea     ebx, [esi+0DCh]
0x712DA0: push    ebx
0x712DA1: push    esi
0x712DA2: call    sub_6BE9D0
0x712DA7: add     esp, 8
0x712DAA: cmp     dword ptr [edi], 0A000165h
0x712DB0: jnz     short loc_712DB8
0x712DB2: mov     dword ptr [ebx], 1
0x712DB8: mov     eax, [esi+0DCh]
0x712DBE: cmp     eax, ds:0B3FB88h
0x712DC4: jnb     short loc_712DF0
0x712DC6: push    offset aNifUserDefined; "NIF user defined version is too old."
0x712DCB: mov     dword ptr [esi+380h], 3
0x712DD5: push    104h; SizeInBytes
0x712DDA: add     esi, 384h
0x712DE0: push    esi; Dst
0x712DE1: call    _strcpy_s
0x712DE6: add     esp, 0Ch
0x712DE9: xor     al, al
0x712DEB: jmp     loc_712EF3
0x712DF0: cmp     eax, ds:0B26DF8h
0x712DF6: jbe     short loc_712E22
0x712DF8: push    offset aUnknownNifUser; "Unknown NIF user defined version."
0x712DFD: mov     dword ptr [esi+380h], 4
0x712E07: push    104h; SizeInBytes
0x712E0C: add     esi, 384h
0x712E12: push    esi; Dst
0x712E13: call    sub_434900
0x712E18: add     esp, 0Ch
0x712E1B: xor     al, al
0x712E1D: jmp     loc_712EF3
0x712E22: lea     eax, [esp+0A0h+var_88]
0x712E26: push    eax
0x712E27: push    esi
0x712E28: call    sub_6BE9D0
0x712E2D: mov     ecx, [esp+0A8h+var_88]
0x712E31: add     esp, 8
0x712E34: push    ecx
0x712E35: lea     ecx, [esi+1ECh]
0x712E3B: call    sub_8BCA30
0x712E40: mov     eax, [edi]
0x712E42: cmp     eax, 0A000100h
0x712E47: lea     ecx, [esi+4]
0x712E4A: mov     dword ptr [ecx], 0
0x712E50: jbe     loc_712EDC
0x712E56: cmp     eax, 0A000108h
0x712E5B: jbe     short loc_712E66
0x712E5D: cmp     dword ptr [esi+0DCh], 0
0x712E64: jz      short loc_712EDC
0x712E66: cmp     eax, 0A000101h
0x712E6B: jbe     short loc_712E85
0x712E6D: push    ecx
0x712E6E: push    esi
0x712E6F: call    sub_6BE9D0
0x712E74: add     esp, 8
0x712E77: cmp     dword ptr [edi], 0A000102h
0x712E7D: jnz     short loc_712E85
0x712E7F: mov     dword ptr [edi], 0A000101h
0x712E85: lea     edx, [esp+0A0h+var_90+3]
0x712E89: push    edx
0x712E8A: push    esi
0x712E8B: call    sub_6BDED0
0x712E90: movzx   eax, byte ptr [esp+0A8h+var_90+3]
0x712E95: push    eax
0x712E96: lea     ecx, [esi+8]
0x712E99: push    ecx
0x712E9A: push    esi
0x712E9B: call    sub_6D7C20
0x712EA0: lea     edx, [esp+0B4h+var_90+3]
0x712EA4: push    edx
0x712EA5: push    esi
0x712EA6: call    sub_6BDED0
0x712EAB: movzx   eax, byte ptr [esp+0BCh+var_90+3]
0x712EB0: push    eax
0x712EB1: lea     ecx, [esi+48h]
0x712EB4: push    ecx
0x712EB5: push    esi
0x712EB6: call    sub_6D7C20
0x712EBB: lea     edx, [esp+0C8h+var_90+3]
0x712EBF: push    edx
0x712EC0: push    esi
0x712EC1: call    sub_6BDED0
0x712EC6: movzx   eax, byte ptr [esp+0D0h+var_90+3]
0x712ECB: push    eax
0x712ECC: lea     ecx, [esi+88h]
0x712ED2: push    ecx
0x712ED3: push    esi
0x712ED4: call    sub_6D7C20
0x712ED9: add     esp, 3Ch
0x712EDC: cmp     byte ptr [ebp+0], 1
0x712EE0: mov     ecx, [esi+21Ch]
0x712EE6: mov     edx, [ecx]
0x712EE8: mov     edx, [edx+8]
0x712EEB: setnz   al
0x712EEE: push    eax
0x712EEF: call    edx
0x712EF1: mov     al, 1
0x712EF3: mov     ecx, [esp+0A0h+var_4]
0x712EFA: pop     ebp
0x712EFB: pop     edi
0x712EFC: pop     ebx
0x712EFD: pop     esi
0x712EFE: xor     ecx, esp
0x712F00: call    @__security_check_cookie@4; __security_check_cookie(x)
0x712F05: add     esp, 90h
0x712F0B: retn
