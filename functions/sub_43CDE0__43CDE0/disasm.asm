0x43CDE0: sub     esp, 120h
0x43CDE6: mov     eax, ___security_cookie
0x43CDEB: xor     eax, esp
0x43CDED: mov     [esp+120h+var_4], eax
0x43CDF4: push    ebx
0x43CDF5: mov     ebx, [esp+124h+a1]
0x43CDFC: push    ebp
0x43CDFD: mov     ebp, [esp+128h+arg_8]
0x43CE04: push    esi
0x43CE05: push    edi
0x43CE06: mov     edi, [esp+130h+arg_0]
0x43CE0D: push    0; int
0x43CE0F: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x43CE14: push    offset ??_R0?AVTESModel@@@8; struct _s_RTTICompleteObjectLocator *
0x43CE19: push    0; int
0x43CE1B: push    edi; void *
0x43CE1C: mov     [esp+144h+var_118], ecx
0x43CE20: mov     [esp+144h+var_110], ebp
0x43CE24: call    OblivionDynamicCast
0x43CE29: mov     esi, eax
0x43CE2B: add     esp, 14h
0x43CE2E: test    esi, esi
0x43CE30: jz      loc_43CFE5
0x43CE36: lea     ecx, [esi+0ECh]
0x43CE3C: call    sub_6899C0
0x43CE41: mov     [esp+130h+var_11C], eax
0x43CE45: mov     eax, [edi]
0x43CE47: mov     edx, [eax+14h]
0x43CE4A: mov     ecx, edi
0x43CE4C: call    edx
0x43CE4E: lea     edx, [esp+130h+Str]
0x43CE52: mov     cl, [eax]
0x43CE54: mov     [edx], cl
0x43CE56: add     eax, 1
0x43CE59: add     edx, 1
0x43CE5C: test    cl, cl
0x43CE5E: jnz     short loc_43CE52
0x43CE60: lea     eax, [esp+130h+Str]
0x43CE64: push    5Ch ; '\'; Ch
0x43CE66: push    eax; Str
0x43CE67: call    _strrchr
0x43CE6C: add     esp, 8
0x43CE6F: test    eax, eax
0x43CE71: jz      short loc_43CE77
0x43CE73: mov     byte ptr [eax+1], 0
0x43CE77: mov     eax, [esp+130h+var_11C]
0x43CE7B: lea     ecx, [esp+130h+Str]
0x43CE7F: push    ecx
0x43CE80: mov     ecx, [esp+134h+var_118]
0x43CE84: push    ebp
0x43CE85: mov     ebp, [esp+138h+arg_4]
0x43CE8C: push    ebp
0x43CE8D: lea     edx, [esi+0F8h]
0x43CE93: push    edx
0x43CE94: push    eax
0x43CE95: call    sub_43BC20
0x43CE9A: test    ebx, ebx
0x43CE9C: jz      loc_43CFE5
0x43CEA2: lea     eax, [esi+44h]
0x43CEA5: push    eax
0x43CEA6: push    ebx; a1
0x43CEA7: call    ContainerExtraData_GetContainerExtraDataForRef
0x43CEAC: add     esp, 8
0x43CEAF: push    0
0x43CEB1: push    0Dh
0x43CEB3: push    esi
0x43CEB4: mov     ecx, eax
0x43CEB6: mov     [esp+13Ch+var_11C], eax
0x43CEBA: call    sub_48C870
0x43CEBF: mov     edi, eax
0x43CEC1: test    edi, edi
0x43CEC3: jz      short loc_43CF18
0x43CEC5: mov     ecx, [esp+130h+var_110]
0x43CEC9: mov     edx, [edi+8]
0x43CECC: push    ebx
0x43CECD: push    ecx
0x43CECE: mov     ecx, [esp+138h+var_118]
0x43CED2: push    ebp
0x43CED3: push    edx
0x43CED4: lea     eax, [esp+140h+var_114]
0x43CED8: push    eax
0x43CED9: call    sub_43B990
0x43CEDE: mov     eax, [esp+130h+var_114]
0x43CEE2: test    eax, eax
0x43CEE4: jz      short loc_43CF08
0x43CEE6: mov     [esp+130h+var_120], eax
0x43CEEA: add     eax, 8
0x43CEED: push    eax; lpAddend
0x43CEEE: call    ds:InterlockedDecrement
0x43CEF4: test    eax, eax
0x43CEF6: jnz     short loc_43CF08
0x43CEF8: mov     ecx, [esp+130h+var_120]
0x43CEFC: test    ecx, ecx
0x43CEFE: jz      short loc_43CF08
0x43CF00: mov     edx, [ecx]
0x43CF02: mov     eax, [edx]
0x43CF04: push    1
0x43CF06: call    eax
0x43CF08: mov     ecx, edi
0x43CF0A: call    ContainerEntryExtraData_DestroyDataTable
0x43CF0F: push    edi
0x43CF10: call    FormHeapFree
0x43CF15: add     esp, 4
0x43CF18: push    0
0x43CF1A: push    0FFFFFFFFh
0x43CF1C: lea     ecx, [esp+138h+var_10C]
0x43CF20: push    ecx
0x43CF21: mov     ecx, [esp+13Ch+var_11C]
0x43CF25: push    esi
0x43CF26: call    sub_48BDA0
0x43CF2B: mov     edi, eax
0x43CF2D: test    edi, edi
0x43CF2F: jz      short loc_43CF84
0x43CF31: mov     edx, [esp+130h+var_110]
0x43CF35: mov     eax, [edi+8]
0x43CF38: push    ebx
0x43CF39: push    edx
0x43CF3A: push    ebp
0x43CF3B: push    eax
0x43CF3C: lea     ecx, [esp+140h+var_120]
0x43CF40: push    ecx
0x43CF41: mov     ecx, [esp+144h+var_118]
0x43CF45: call    sub_43B990
0x43CF4A: mov     eax, [esp+130h+var_120]
0x43CF4E: test    eax, eax
0x43CF50: jz      short loc_43CF74
0x43CF52: mov     [esp+130h+var_114], eax
0x43CF56: add     eax, 8
0x43CF59: push    eax; lpAddend
0x43CF5A: call    ds:InterlockedDecrement
0x43CF60: test    eax, eax
0x43CF62: jnz     short loc_43CF74
0x43CF64: mov     ecx, [esp+130h+var_114]
0x43CF68: test    ecx, ecx
0x43CF6A: jz      short loc_43CF74
0x43CF6C: mov     edx, [ecx]
0x43CF6E: mov     eax, [edx]
0x43CF70: push    1
0x43CF72: call    eax
0x43CF74: mov     ecx, edi
0x43CF76: call    ContainerEntryExtraData_DestroyDataTable
0x43CF7B: push    edi
0x43CF7C: call    FormHeapFree
0x43CF81: add     esp, 4
0x43CF84: mov     ecx, [esp+130h+var_11C]
0x43CF88: push    0
0x43CF8A: push    esi
0x43CF8B: call    sub_48B9C0
0x43CF90: mov     esi, eax
0x43CF92: test    esi, esi
0x43CF94: jz      short loc_43CFE5
0x43CF96: mov     ecx, [esp+130h+var_110]
0x43CF9A: mov     edx, [esi+8]
0x43CF9D: push    ebx
0x43CF9E: push    ecx
0x43CF9F: mov     ecx, [esp+138h+var_118]
0x43CFA3: push    ebp
0x43CFA4: push    edx
0x43CFA5: lea     eax, [esp+140h+var_120]
0x43CFA9: push    eax
0x43CFAA: call    sub_43B990
0x43CFAF: mov     eax, [esp+130h+var_120]
0x43CFB3: test    eax, eax
0x43CFB5: jz      short loc_43CFD5
0x43CFB7: mov     edi, eax
0x43CFB9: add     eax, 8
0x43CFBC: push    eax; lpAddend
0x43CFBD: call    ds:InterlockedDecrement
0x43CFC3: test    eax, eax
0x43CFC5: jnz     short loc_43CFD5
0x43CFC7: test    edi, edi
0x43CFC9: jz      short loc_43CFD5
0x43CFCB: mov     edx, [edi]
0x43CFCD: mov     eax, [edx]
0x43CFCF: push    1
0x43CFD1: mov     ecx, edi
0x43CFD3: call    eax
0x43CFD5: mov     ecx, esi
0x43CFD7: call    ContainerEntryExtraData_DestroyDataTable
0x43CFDC: push    esi
0x43CFDD: call    FormHeapFree
0x43CFE2: add     esp, 4
0x43CFE5: mov     ecx, [esp+130h+var_4]
0x43CFEC: pop     edi
0x43CFED: pop     esi
0x43CFEE: pop     ebp
0x43CFEF: pop     ebx
0x43CFF0: xor     ecx, esp
0x43CFF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43CFF7: add     esp, 120h
0x43CFFD: retn    10h
