0x42EC70: sub     esp, 11Ch
0x42EC76: mov     eax, ___security_cookie
0x42EC7B: xor     eax, esp
0x42EC7D: mov     [esp+11Ch+var_4], eax
0x42EC84: cmp     ArchiveList, 0
0x42EC8B: mov     eax, [esp+11Ch+arg_0]
0x42EC92: push    esi
0x42EC93: mov     esi, [esp+120h+Str1]
0x42EC9A: mov     [esp+120h+var_11C], eax
0x42EC9E: jz      loc_42EDD6
0x42ECA4: cmp     byte ptr [esi], 5Ch ; '\'
0x42ECA7: jnz     short loc_42ECAC
0x42ECA9: add     esi, 1
0x42ECAC: push    5; MaxCount
0x42ECAE: push    offset aData; "Data\\"
0x42ECB3: push    esi; Str1
0x42ECB4: call    _strncmp
0x42ECB9: add     esp, 0Ch
0x42ECBC: test    eax, eax
0x42ECBE: jz      short loc_42ECD4
0x42ECC0: push    5; MaxCount
0x42ECC2: push    offset Str2; "data\\"
0x42ECC7: push    esi; Str1
0x42ECC8: call    _strncmp
0x42ECCD: add     esp, 0Ch
0x42ECD0: test    eax, eax
0x42ECD2: jnz     short loc_42ECD7
0x42ECD4: add     esi, 5
0x42ECD7: mov     eax, [esp+120h+arg_8]
0x42ECDE: lea     edx, [esp+120h+Str]
0x42ECE2: sub     edx, eax
0x42ECE4: mov     cl, [eax]
0x42ECE6: mov     [edx+eax], cl
0x42ECE9: add     eax, 1
0x42ECEC: test    cl, cl
0x42ECEE: jnz     short loc_42ECE4
0x42ECF0: lea     ecx, [esp+120h+Str]
0x42ECF4: push    5Ch ; '\'; Ch
0x42ECF6: push    ecx; Str
0x42ECF7: call    _strrchr
0x42ECFC: add     esp, 8
0x42ECFF: test    eax, eax
0x42ED01: jz      short loc_42ED07
0x42ED03: mov     byte ptr [eax+1], 0
0x42ED07: push    ebp
0x42ED08: mov     ebp, [esp+124h+arg_C]
0x42ED0F: cmp     ebp, 0FFFFh
0x42ED15: jnz     short loc_42ED3A
0x42ED17: mov     eax, esi
0x42ED19: lea     edx, [eax+1]
0x42ED1C: lea     esp, [esp+0]
0x42ED20: mov     cl, [eax]
0x42ED22: add     eax, 1
0x42ED25: test    cl, cl
0x42ED27: jnz     short loc_42ED20
0x42ED29: sub     eax, edx
0x42ED2B: lea     edx, [eax+esi-3]
0x42ED2F: push    edx
0x42ED30: call    ArchiveManager_GetFileTypemask
0x42ED35: add     esp, 4
0x42ED38: mov     ebp, eax
0x42ED3A: push    ebx
0x42ED3B: push    edi
0x42ED3C: lea     eax, [esp+12Ch+var_118]
0x42ED40: push    eax; int
0x42ED41: lea     ecx, [esp+130h+var_110]
0x42ED45: push    ecx; int
0x42ED46: push    esi; FullPath
0x42ED47: xor     edi, edi
0x42ED49: call    HashFilePAth
0x42ED4E: mov     ecx, [esp+138h+var_11C]
0x42ED52: add     esp, 0Ch
0x42ED55: xor     ebx, ebx
0x42ED57: test    ecx, ecx
0x42ED59: mov     eax, ecx
0x42ED5B: jz      short loc_42ED6E
0x42ED5D: lea     ecx, [ecx+0]
0x42ED60: cmp     [eax], edi
0x42ED62: jz      short loc_42ED67
0x42ED64: add     ebx, 1
0x42ED67: mov     eax, [eax+4]
0x42ED6A: test    eax, eax
0x42ED6C: jnz     short loc_42ED60
0x42ED6E: mov     esi, ArchiveList
0x42ED74: test    esi, esi
0x42ED76: jz      short loc_42EDD3
0x42ED78: mov     eax, [esi]
0x42ED7A: test    eax, eax
0x42ED7C: jz      short loc_42EDA8
0x42ED7E: test    [eax+174h], bp
0x42ED85: jz      short loc_42EDA8
0x42ED87: lea     edx, [esp+12Ch+Str]
0x42ED8B: push    edx
0x42ED8C: push    ecx
0x42ED8D: lea     ecx, [esp+134h+var_118]
0x42ED91: push    ecx
0x42ED92: lea     edx, [esp+138h+var_110]
0x42ED96: push    edx
0x42ED97: push    edi
0x42ED98: push    ebx
0x42ED99: push    eax
0x42ED9A: call    sub_42DB50
0x42ED9F: mov     ecx, [esp+148h+var_11C]
0x42EDA3: add     esp, 1Ch
0x42EDA6: mov     edi, eax
0x42EDA8: mov     esi, [esi+4]
0x42EDAB: test    esi, esi
0x42EDAD: jnz     short loc_42ED78
0x42EDAF: test    edi, edi
0x42EDB1: jz      short loc_42EDD3
0x42EDB3: test    ebx, ebx
0x42EDB5: jbe     short loc_42EDCA
0x42EDB7: mov     eax, [edi+esi*4]
0x42EDBA: push    eax
0x42EDBB: call    FormHeapFree
0x42EDC0: add     esi, 1
0x42EDC3: add     esp, 4
0x42EDC6: cmp     esi, ebx
0x42EDC8: jb      short loc_42EDB7
0x42EDCA: push    edi
0x42EDCB: call    FormHeapFree
0x42EDD0: add     esp, 4
0x42EDD3: pop     edi
0x42EDD4: pop     ebx
0x42EDD5: pop     ebp
0x42EDD6: mov     ecx, [esp+120h+var_4]
0x42EDDD: pop     esi
0x42EDDE: xor     ecx, esp
0x42EDE0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42EDE5: add     esp, 11Ch
0x42EDEB: retn
