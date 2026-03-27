0x7FAC40: push    0FFFFFFFFh
0x7FAC42: push    offset ??0Lighting30Shader@@QAE@XZ_SEH
0x7FAC47: mov     eax, large fs:0
0x7FAC4D: push    eax
0x7FAC4E: push    ecx
0x7FAC4F: push    ebx
0x7FAC50: push    ebp
0x7FAC51: push    esi
0x7FAC52: push    edi
0x7FAC53: mov     eax, ds:0B30AACh
0x7FAC58: xor     eax, esp
0x7FAC5A: push    eax
0x7FAC5B: lea     eax, [esp+24h+var_C]
0x7FAC5F: mov     large fs:0, eax
0x7FAC65: mov     esi, ecx
0x7FAC67: mov     [esp+24h+var_10], esi
0x7FAC6B: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7FAC70: xor     ebx, ebx
0x7FAC72: mov     dword ptr [esi], offset ??_7Lighting30Shader@@6B@; const Lighting30Shader::`vftable'
0x7FAC78: mov     [esp+24h+var_4], ebx
0x7FAC7C: mov     [esi+7Ch], ebx
0x7FAC7F: mov     [esi+80h], ebx
0x7FAC85: mov     [esi+84h], ebx
0x7FAC8B: mov     [esi+88h], ebx
0x7FAC91: mov     [esi+8Ch], ebx
0x7FAC97: mov     [esi+90h], ebx
0x7FAC9D: mov     [esi+94h], ebx
0x7FACA3: mov     [esi+98h], ebx
0x7FACA9: mov     edi, [esi+24h]
0x7FACAC: mov     ebp, [esp+24h+arg_0]
0x7FACB0: cmp     edi, ebp
0x7FACB2: mov     byte ptr [esp+24h+var_4], 8
0x7FACB7: jz      short loc_7FACEA
0x7FACB9: cmp     edi, ebx
0x7FACBB: jz      short loc_7FACD9
0x7FACBD: lea     eax, [edi+4]
0x7FACC0: push    eax; lpAddend
0x7FACC1: call    dword ptr ds:0A2807Ch
0x7FACC7: test    eax, eax
0x7FACC9: jnz     short loc_7FACD9
0x7FACCB: cmp     edi, ebx
0x7FACCD: jz      short loc_7FACD9
0x7FACCF: mov     edx, [edi]
0x7FACD1: mov     eax, [edx]
0x7FACD3: push    1
0x7FACD5: mov     ecx, edi
0x7FACD7: call    eax
0x7FACD9: cmp     ebp, ebx
0x7FACDB: mov     [esi+24h], ebp
0x7FACDE: jz      short loc_7FACEA
0x7FACE0: lea     ecx, [ebp+4]
0x7FACE3: push    ecx; lpAddend
0x7FACE4: call    dword ptr ds:0A28078h
0x7FACEA: mov     edi, [esi+8Ch]
0x7FACF0: cmp     edi, ebp
0x7FACF2: jz      short loc_7FAD28
0x7FACF4: cmp     edi, ebx
0x7FACF6: jz      short loc_7FAD14
0x7FACF8: lea     edx, [edi+4]
0x7FACFB: push    edx; lpAddend
0x7FACFC: call    dword ptr ds:0A2807Ch
0x7FAD02: test    eax, eax
0x7FAD04: jnz     short loc_7FAD14
0x7FAD06: cmp     edi, ebx
0x7FAD08: jz      short loc_7FAD14
0x7FAD0A: mov     eax, [edi]
0x7FAD0C: mov     edx, [eax]
0x7FAD0E: push    1
0x7FAD10: mov     ecx, edi
0x7FAD12: call    edx
0x7FAD14: cmp     ebp, ebx
0x7FAD16: mov     [esi+8Ch], ebp
0x7FAD1C: jz      short loc_7FAD28
0x7FAD1E: add     ebp, 4
0x7FAD21: push    ebp; lpAddend
0x7FAD22: call    dword ptr ds:0A28078h
0x7FAD28: mov     edi, [esi+90h]
0x7FAD2E: mov     ebp, [esp+24h+arg_4]
0x7FAD32: cmp     edi, ebp
0x7FAD34: jz      short loc_7FAD6A
0x7FAD36: cmp     edi, ebx
0x7FAD38: jz      short loc_7FAD56
0x7FAD3A: lea     eax, [edi+4]
0x7FAD3D: push    eax; lpAddend
0x7FAD3E: call    dword ptr ds:0A2807Ch
0x7FAD44: test    eax, eax
0x7FAD46: jnz     short loc_7FAD56
0x7FAD48: cmp     edi, ebx
0x7FAD4A: jz      short loc_7FAD56
0x7FAD4C: mov     edx, [edi]
0x7FAD4E: mov     eax, [edx]
0x7FAD50: push    1
0x7FAD52: mov     ecx, edi
0x7FAD54: call    eax
0x7FAD56: cmp     ebp, ebx
0x7FAD58: mov     [esi+90h], ebp
0x7FAD5E: jz      short loc_7FAD6A
0x7FAD60: add     ebp, 4
0x7FAD63: push    ebp; lpAddend
0x7FAD64: call    dword ptr ds:0A28078h
0x7FAD6A: mov     edi, [esi+94h]
0x7FAD70: mov     ebp, [esp+24h+arg_8]
0x7FAD74: cmp     edi, ebp
0x7FAD76: jz      short loc_7FADAC
0x7FAD78: cmp     edi, ebx
0x7FAD7A: jz      short loc_7FAD98
0x7FAD7C: lea     ecx, [edi+4]
0x7FAD7F: push    ecx; lpAddend
0x7FAD80: call    dword ptr ds:0A2807Ch
0x7FAD86: test    eax, eax
0x7FAD88: jnz     short loc_7FAD98
0x7FAD8A: cmp     edi, ebx
0x7FAD8C: jz      short loc_7FAD98
0x7FAD8E: mov     edx, [edi]
0x7FAD90: mov     eax, [edx]
0x7FAD92: push    1
0x7FAD94: mov     ecx, edi
0x7FAD96: call    eax
0x7FAD98: cmp     ebp, ebx
0x7FAD9A: mov     [esi+94h], ebp
0x7FADA0: jz      short loc_7FADAC
0x7FADA2: add     ebp, 4
0x7FADA5: push    ebp; lpAddend
0x7FADA6: call    dword ptr ds:0A28078h
0x7FADAC: mov     edi, [esi+98h]
0x7FADB2: mov     ebp, [esp+24h+arg_C]
0x7FADB6: cmp     edi, ebp
0x7FADB8: jz      short loc_7FADEE
0x7FADBA: cmp     edi, ebx
0x7FADBC: jz      short loc_7FADDA
0x7FADBE: lea     ecx, [edi+4]
0x7FADC1: push    ecx; lpAddend
0x7FADC2: call    dword ptr ds:0A2807Ch
0x7FADC8: test    eax, eax
0x7FADCA: jnz     short loc_7FADDA
0x7FADCC: cmp     edi, ebx
0x7FADCE: jz      short loc_7FADDA
0x7FADD0: mov     edx, [edi]
0x7FADD2: mov     eax, [edx]
0x7FADD4: push    1
0x7FADD6: mov     ecx, edi
0x7FADD8: call    eax
0x7FADDA: cmp     ebp, ebx
0x7FADDC: mov     [esi+98h], ebp
0x7FADE2: jz      short loc_7FADEE
0x7FADE4: add     ebp, 4
0x7FADE7: push    ebp; lpAddend
0x7FADE8: call    dword ptr ds:0A28078h
0x7FADEE: mov     edi, [esi+7Ch]
0x7FADF1: cmp     edi, ebx
0x7FADF3: mov     ebp, ds:0A2807Ch
0x7FADF9: jz      short loc_7FAE16
0x7FADFB: lea     ecx, [edi+4]
0x7FADFE: push    ecx; lpAddend
0x7FADFF: call    ebp ; InterlockedDecrement
0x7FAE01: test    eax, eax
0x7FAE03: jnz     short loc_7FAE13
0x7FAE05: cmp     edi, ebx
0x7FAE07: jz      short loc_7FAE13
0x7FAE09: mov     edx, [edi]
0x7FAE0B: mov     eax, [edx]
0x7FAE0D: push    1
0x7FAE0F: mov     ecx, edi
0x7FAE11: call    eax
0x7FAE13: mov     [esi+7Ch], ebx
0x7FAE16: mov     edi, [esi+80h]
0x7FAE1C: cmp     edi, ebx
0x7FAE1E: jz      short loc_7FAE3E
0x7FAE20: lea     ecx, [edi+4]
0x7FAE23: push    ecx; lpAddend
0x7FAE24: call    ebp ; InterlockedDecrement
0x7FAE26: test    eax, eax
0x7FAE28: jnz     short loc_7FAE38
0x7FAE2A: cmp     edi, ebx
0x7FAE2C: jz      short loc_7FAE38
0x7FAE2E: mov     edx, [edi]
0x7FAE30: mov     eax, [edx]
0x7FAE32: push    1
0x7FAE34: mov     ecx, edi
0x7FAE36: call    eax
0x7FAE38: mov     [esi+80h], ebx
0x7FAE3E: mov     edi, [esi+84h]
0x7FAE44: cmp     edi, ebx
0x7FAE46: jz      short loc_7FAE66
0x7FAE48: lea     ecx, [edi+4]
0x7FAE4B: push    ecx; lpAddend
0x7FAE4C: call    ebp ; InterlockedDecrement
0x7FAE4E: test    eax, eax
0x7FAE50: jnz     short loc_7FAE60
0x7FAE52: cmp     edi, ebx
0x7FAE54: jz      short loc_7FAE60
0x7FAE56: mov     edx, [edi]
0x7FAE58: mov     eax, [edx]
0x7FAE5A: push    1
0x7FAE5C: mov     ecx, edi
0x7FAE5E: call    eax
0x7FAE60: mov     [esi+84h], ebx
0x7FAE66: mov     edi, [esi+88h]
0x7FAE6C: cmp     edi, ebx
0x7FAE6E: jz      short loc_7FAE8E
0x7FAE70: lea     ecx, [edi+4]
0x7FAE73: push    ecx; lpAddend
0x7FAE74: call    ebp ; InterlockedDecrement
0x7FAE76: test    eax, eax
0x7FAE78: jnz     short loc_7FAE88
0x7FAE7A: cmp     edi, ebx
0x7FAE7C: jz      short loc_7FAE88
0x7FAE7E: mov     edx, [edi]
0x7FAE80: mov     eax, [edx]
0x7FAE82: push    1
0x7FAE84: mov     ecx, edi
0x7FAE86: call    eax
0x7FAE88: mov     [esi+88h], ebx
0x7FAE8E: xor     eax, eax
0x7FAE90: mov     [esi+9Ch], ebx
0x7FAE96: push    31h ; '1'
0x7FAE98: push    ebx
0x7FAE99: push    offset byte_B46930
0x7FAE9E: mov     ds:0B46964h, eax
0x7FAEA3: mov     ds:0B46968h, eax
0x7FAEA8: mov     ds:0B4696Ch, eax
0x7FAEAD: mov     ds:0B46970h, eax
0x7FAEB2: mov     ds:0B46974h, eax
0x7FAEB7: mov     ds:0B46978h, eax
0x7FAEBC: mov     ds:0B4697Ch, eax
0x7FAEC1: mov     ds:0B46980h, eax
0x7FAEC6: mov     ds:0B46984h, al
0x7FAECB: call    __memset
0x7FAED0: add     esp, 0Ch
0x7FAED3: cmp     dword ptr ds:0B42F48h, 7
0x7FAEDA: mov     eax, esi
0x7FAEDC: jge     short loc_7FAEE8
0x7FAEDE: mov     dword ptr ds:0B2DCFCh, 8
0x7FAEE8: mov     ecx, dword ptr [esp+24h+var_C]
0x7FAEEC: mov     large fs:0, ecx
0x7FAEF3: pop     ecx
0x7FAEF4: pop     edi
0x7FAEF5: pop     esi
0x7FAEF6: pop     ebp
0x7FAEF7: pop     ebx
0x7FAEF8: add     esp, 10h
0x7FAEFB: retn    10h
