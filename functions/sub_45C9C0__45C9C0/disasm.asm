0x45C9C0: sub     esp, 11Ch
0x45C9C6: mov     eax, ds:0B30AACh
0x45C9CB: xor     eax, esp
0x45C9CD: mov     [esp+11Ch+var_4], eax
0x45C9D4: push    ebx
0x45C9D5: push    ebp
0x45C9D6: push    esi
0x45C9D7: mov     esi, [esp+128h+arg_0]
0x45C9DE: push    edi
0x45C9DF: mov     edi, ecx
0x45C9E1: mov     ecx, ds:0B33A98h
0x45C9E7: mov     [esp+12Ch+var_110], edi
0x45C9EB: mov     [esp+12Ch+var_117], 0
0x45C9F0: mov     [esp+12Ch+var_116], 0
0x45C9F5: call    sub_446B10
0x45C9FA: mov     [esp+12Ch+var_118], al
0x45C9FE: mov     eax, [esi+30h]
0x45CA01: cmp     eax, 0FFFFFFFFh
0x45CA04: jnz     short loc_45CA0C
0x45CA06: mov     eax, [esi+148h]
0x45CA0C: mov     edx, [esi+4]
0x45CA0F: mov     ebp, 1
0x45CA14: push    ebp
0x45CA15: lea     ecx, [esp+130h+var_114]
0x45CA19: push    ecx
0x45CA1A: push    ebp
0x45CA1B: lea     ebx, [edi+48h]
0x45CA1E: push    ebx
0x45CA1F: push    esi
0x45CA20: mov     [esp+140h+var_10C], eax
0x45CA24: mov     [esp+140h+var_114], ebp
0x45CA28: call    edx
0x45CA2A: mov     eax, [edi+4Ch]
0x45CA2D: add     esp, 14h
0x45CA30: test    eax, eax
0x45CA32: jz      short loc_45CA3D
0x45CA34: push    eax
0x45CA35: call    FormHeapFree
0x45CA3A: add     esp, 4
0x45CA3D: movzx   eax, byte ptr [ebx]
0x45CA40: push    eax; Size
0x45CA41: call    FormHeapAlloc
0x45CA46: add     esp, 4
0x45CA49: cmp     byte ptr [ebx], 0
0x45CA4C: mov     [edi+4Ch], eax
0x45CA4F: mov     [esp+12Ch+var_119], 0
0x45CA54: jbe     loc_45CB69
0x45CA5A: lea     ebx, [ebx+0]
0x45CA60: mov     eax, [esi+4]
0x45CA63: push    ebp
0x45CA64: lea     ecx, [esp+130h+var_114]
0x45CA68: push    ecx
0x45CA69: push    ebp
0x45CA6A: lea     edx, [esp+138h+var_115]
0x45CA6E: push    edx
0x45CA6F: push    esi
0x45CA70: mov     [esp+140h+var_114], ebp
0x45CA74: call    eax
0x45CA76: push    104h
0x45CA7B: lea     ecx, [esp+144h+ArgList]
0x45CA7F: push    0
0x45CA81: push    ecx
0x45CA82: call    __memset
0x45CA87: movzx   eax, [esp+14Ch+var_115]
0x45CA8C: push    ebp
0x45CA8D: lea     edx, [esp+150h+var_114]
0x45CA91: push    edx
0x45CA92: mov     edx, [esi+4]
0x45CA95: push    eax
0x45CA96: lea     ecx, [esp+158h+ArgList]
0x45CA9A: push    ecx
0x45CA9B: push    esi
0x45CA9C: mov     [esp+160h+var_114], ebp
0x45CAA0: call    edx
0x45CAA2: xor     bl, bl
0x45CAA4: add     esp, 34h
0x45CAA7: cmp     [esp+12Ch+var_118], bl
0x45CAAB: jbe     loc_45CB2E
0x45CAB1: mov     ecx, ds:0B33A98h
0x45CAB7: movzx   eax, bl
0x45CABA: push    eax
0x45CABB: call    sub_446B20
0x45CAC0: mov     ebp, eax
0x45CAC2: lea     edi, [ebp+1Ch]
0x45CAC5: lea     ecx, [esp+12Ch+ArgList]
0x45CAC9: push    edi; Str2
0x45CACA: push    ecx; Str1
0x45CACB: call    __strcmp
0x45CAD0: add     esp, 8
0x45CAD3: test    eax, eax
0x45CAD5: jz      loc_45CB7C
0x45CADB: lea     edx, [esp+12Ch+ArgList]
0x45CADF: push    offset aOblivion_esm; "Oblivion.esm"
0x45CAE4: push    edx; Str1
0x45CAE5: call    __strcmp
0x45CAEA: add     esp, 8
0x45CAED: test    eax, eax
0x45CAEF: jnz     short loc_45CAF9
0x45CAF1: push    edi
0x45CAF2: push    offset aOblivionse_esm; "OblivionSE.esm"
0x45CAF7: jmp     short loc_45CB15
0x45CAF9: lea     eax, [esp+12Ch+ArgList]
0x45CAFD: push    offset aOblivionse_esm; "OblivionSE.esm"
0x45CB02: push    eax; Str1
0x45CB03: call    __strcmp
0x45CB08: add     esp, 8
0x45CB0B: test    eax, eax
0x45CB0D: jnz     short loc_45CB21
0x45CB0F: push    edi; Str2
0x45CB10: push    offset aOblivion_esm; "Oblivion.esm"
0x45CB15: call    __strcmp
0x45CB1A: add     esp, 8
0x45CB1D: test    eax, eax
0x45CB1F: jz      short loc_45CB7C
0x45CB21: add     bl, 1
0x45CB24: cmp     bl, [esp+12Ch+var_118]
0x45CB28: jb      short loc_45CAB1
0x45CB2A: mov     edi, [esp+12Ch+var_110]
0x45CB2E: movzx   ecx, [esp+12Ch+var_119]
0x45CB33: mov     edx, [edi+4Ch]
0x45CB36: lea     eax, [esp+12Ch+ArgList]
0x45CB3A: push    eax; ArgList
0x45CB3B: push    offset aCannotFindFile; "Cannot find file %s referenced in the s"...
0x45CB40: mov     [esp+134h+var_116], 1
0x45CB45: mov     byte ptr [ecx+edx], 0FFh
0x45CB49: call    PrintError
0x45CB4E: add     esp, 8
0x45CB51: mov     al, [esp+12Ch+var_119]
0x45CB55: add     al, 1
0x45CB57: cmp     al, [edi+48h]
0x45CB5A: mov     [esp+12Ch+var_119], al
0x45CB5E: mov     ebp, 1
0x45CB63: jb      loc_45CA60
0x45CB69: mov     ecx, [edi+40h]
0x45CB6C: test    ecx, ecx
0x45CB6E: jz      short loc_45CBB4
0x45CB70: mov     eax, [esi+30h]
0x45CB73: cmp     eax, 0FFFFFFFFh
0x45CB76: jz      short loc_45CB9F
0x45CB78: mov     esi, eax
0x45CB7A: jmp     short loc_45CBA5
0x45CB7C: mov     ecx, ebp
0x45CB7E: call    TESFile_GetIsMaster
0x45CB83: test    al, al
0x45CB85: jz      short loc_45CB8C
0x45CB87: mov     [esp+12Ch+var_117], 1
0x45CB8C: mov     edx, [esp+12Ch+var_110]
0x45CB90: movzx   ecx, [esp+12Ch+var_119]
0x45CB95: mov     eax, [edx+4Ch]
0x45CB98: mov     [ecx+eax], bl
0x45CB9B: mov     edi, edx
0x45CB9D: jmp     short loc_45CB51
0x45CB9F: mov     esi, [esi+148h]
0x45CBA5: sub     esi, [esp+12Ch+var_10C]
0x45CBA9: push    offset aPluginList; "Plugin List"
0x45CBAE: push    esi
0x45CBAF: call    sub_4531B0
0x45CBB4: cmp     [esp+12Ch+var_117], 0
0x45CBB9: jnz     short loc_45CBD9
0x45CBBB: mov     ecx, ds:0B38738h
0x45CBC1: push    0
0x45CBC3: push    offset EmptyString
0x45CBC8: push    0
0x45CBCA: push    0
0x45CBCC: push    ecx
0x45CBCD: call    ShowUIMessageBox
0x45CBD2: add     esp, 14h
0x45CBD5: xor     al, al
0x45CBD7: jmp     short loc_45CC44
0x45CBD9: cmp     [esp+12Ch+var_116], 0
0x45CBDE: jz      short loc_45CC42
0x45CBE0: cmp     byte ptr ds:0B05BBCh, 0
0x45CBE7: jz      short loc_45CC42
0x45CBE9: call    sub_578FE0
0x45CBEE: cmp     eax, 3
0x45CBF1: jz      short loc_45CC42
0x45CBF3: call    GetOpenedMenuCode
0x45CBF8: cmp     eax, 3
0x45CBFB: jz      short loc_45CC42
0x45CBFD: cmp     byte ptr [edi+0ABh], 0
0x45CC04: jnz     short loc_45CC42
0x45CC06: mov     eax, ds:0B33B00h
0x45CC0B: or      dword ptr [eax+18h], 10000h
0x45CC12: mov     edx, ds:0B38D00h
0x45CC18: mov     eax, ds:0B38CF8h
0x45CC1D: mov     ecx, ds:0B386C0h
0x45CC23: push    0
0x45CC25: push    edx
0x45CC26: push    eax
0x45CC27: push    ebp
0x45CC28: push    ecx
0x45CC29: call    sub_579CF0
0x45CC2E: mov     ecx, ds:0B33B00h
0x45CC34: and     dword ptr [ecx+18h], 0FFFEFFFFh
0x45CC3B: add     esp, 14h
0x45CC3E: cmp     al, 2
0x45CC40: jz      short loc_45CBD5
0x45CC42: mov     al, 1
0x45CC44: mov     ecx, [esp+12Ch+var_4]
0x45CC4B: pop     edi
0x45CC4C: pop     esi
0x45CC4D: pop     ebp
0x45CC4E: pop     ebx
0x45CC4F: xor     ecx, esp
0x45CC51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45CC56: add     esp, 11Ch
0x45CC5C: retn    4
