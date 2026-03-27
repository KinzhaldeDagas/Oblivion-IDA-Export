0x42CE40: sub     esp, 120h
0x42CE46: mov     eax, ___security_cookie
0x42CE4B: xor     eax, esp
0x42CE4D: mov     [esp+120h+var_4], eax
0x42CE54: mov     eax, [esp+120h+arg_4]
0x42CE5B: push    edi
0x42CE5C: mov     edi, ecx
0x42CE5E: test    byte ptr [edi+194h], 1
0x42CE65: mov     ecx, [esp+124h+arg_8]
0x42CE6C: mov     [esp+124h+var_11C], eax
0x42CE70: mov     [esp+124h+FullPath], ecx
0x42CE74: jz      short loc_42CE90
0x42CE76: xor     al, al
0x42CE78: pop     edi
0x42CE79: mov     ecx, [esp+120h+var_4]
0x42CE80: xor     ecx, esp
0x42CE82: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42CE87: add     esp, 120h
0x42CE8D: retn    0Ch
0x42CE90: push    ebx
0x42CE91: mov     ebx, [edi+18Ch]
0x42CE97: push    ebp
0x42CE98: mov     ebp, [esp+12Ch+arg_0]
0x42CE9F: push    esi
0x42CEA0: mov     esi, [edi+164h]
0x42CEA6: cmp     ebx, esi
0x42CEA8: mov     [esp+130h+var_11D], 0
0x42CEAD: jnb     short loc_42CED6
0x42CEAF: mov     edx, ebx
0x42CEB1: shl     edx, 4
0x42CEB4: add     edx, [edi+178h]
0x42CEBA: mov     ecx, ebp
0x42CEBC: push    edx
0x42CEBD: call    sub_42BC10
0x42CEC2: test    eax, eax
0x42CEC4: jnz     short loc_42CED6
0x42CEC6: mov     eax, [esp+130h+var_11C]
0x42CECA: mov     [eax], ebx
0x42CECC: mov     [esp+130h+var_11D], 1
0x42CED1: jmp     loc_42CFB3
0x42CED6: test    esi, esi
0x42CED8: mov     dword ptr [edi+190h], 0FFFFFFFFh
0x42CEE2: jz      loc_42CFB3
0x42CEE8: mov     ecx, [ebp+0]
0x42CEEB: mov     eax, [ebp+4]
0x42CEEE: xor     edx, edx
0x42CEF0: mov     [esp+130h+var_110], esi
0x42CEF4: mov     [esp+130h+var_118], ecx
0x42CEF8: mov     [esp+130h+var_114], eax
0x42CEFC: lea     esp, [esp+0]
0x42CF00: mov     ecx, [esp+130h+var_110]
0x42CF04: sub     ecx, edx
0x42CF06: shr     ecx, 1
0x42CF08: lea     esi, [ecx+edx]
0x42CF0B: mov     eax, esi
0x42CF0D: shl     eax, 4
0x42CF10: add     eax, [edi+178h]
0x42CF16: mov     ebx, [eax]
0x42CF18: mov     eax, [eax+4]
0x42CF1B: cmp     [esp+130h+var_114], eax
0x42CF1F: ja      loc_42CFE8
0x42CF25: jb      short loc_42CF31
0x42CF27: cmp     [esp+130h+var_118], ebx
0x42CF2B: jnb     loc_42CFD2
0x42CF31: or      eax, 0FFFFFFFFh
0x42CF34: mov     [esp+130h+var_110], esi
0x42CF38: test    ecx, ecx
0x42CF3A: jnz     short loc_42CF00
0x42CF3C: test    eax, eax
0x42CF3E: jnz     short loc_42CFB3
0x42CF40: mov     ecx, [esp+130h+var_11C]
0x42CF44: mov     eax, [esp+130h+FullPath]
0x42CF48: test    eax, eax
0x42CF4A: mov     [ecx], esi
0x42CF4C: mov     [edi+18Ch], esi
0x42CF52: mov     [esp+130h+var_11D], 1
0x42CF57: jz      short loc_42CFB3
0x42CF59: cmp     bCheckRuntimeCollisions_Archive, 0
0x42CF60: jz      short loc_42CFB3
0x42CF62: test    byte ptr [edi+160h], 1
0x42CF69: jz      short loc_42CFB3
0x42CF6B: push    0; Ext
0x42CF6D: push    0; Filename
0x42CF6F: lea     edx, [esp+138h+Dir]
0x42CF73: push    edx; Dir
0x42CF74: push    0; Drive
0x42CF76: push    eax; FullPath
0x42CF77: call    __splitpath
0x42CF7C: add     esp, 14h
0x42CF7F: push    esi
0x42CF80: mov     ecx, edi
0x42CF82: call    Archive_LoadFolderNames
0x42CF87: mov     esi, eax
0x42CF89: lea     eax, [esp+130h+Dir]
0x42CF8D: push    eax; Str2
0x42CF8E: push    esi; Str1
0x42CF8F: call    __strcmp
0x42CF94: add     esp, 8
0x42CF97: test    eax, eax
0x42CF99: jz      short loc_42CFB3
0x42CF9B: lea     ecx, [esp+130h+Dir]
0x42CF9F: push    ecx
0x42CFA0: push    esi; ArgList
0x42CFA1: push    offset aHashmapCollisi; "HashMap Collision between %s and %s"
0x42CFA6: call    PrintError
0x42CFAB: add     esp, 0Ch
0x42CFAE: mov     [esp+130h+var_11D], 0
0x42CFB3: mov     ecx, [esp+130h+var_4]
0x42CFBA: mov     al, [esp+130h+var_11D]
0x42CFBE: pop     esi
0x42CFBF: pop     ebp
0x42CFC0: pop     ebx
0x42CFC1: pop     edi
0x42CFC2: xor     ecx, esp
0x42CFC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42CFC9: add     esp, 120h
0x42CFCF: retn    0Ch
0x42CFD2: cmp     [esp+130h+var_114], eax
0x42CFD6: jb      loc_42CF40
0x42CFDC: ja      short loc_42CFE8
0x42CFDE: cmp     [esp+130h+var_118], ebx
0x42CFE2: jbe     loc_42CF40
0x42CFE8: mov     eax, 1
0x42CFED: mov     edx, esi
0x42CFEF: jmp     loc_42CF38
