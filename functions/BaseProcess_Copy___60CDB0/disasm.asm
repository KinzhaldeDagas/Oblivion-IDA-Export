0x60CDB0: sub     esp, 0Ch
0x60CDB3: push    esi
0x60CDB4: push    edi
0x60CDB5: mov     edi, [esp+14h+a4]
0x60CDB9: test    edi, edi
0x60CDBB: mov     esi, ecx
0x60CDBD: jz      loc_60CF3F
0x60CDC3: push    ebx
0x60CDC4: push    ebp
0x60CDC5: push    0; int
0x60CDC7: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x60CDCC: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CDD1: push    0; int
0x60CDD3: push    edi; void *
0x60CDD4: call    OblivionDynamicCast
0x60CDD9: push    0; int
0x60CDDB: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x60CDE0: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CDE5: push    0; int
0x60CDE7: push    edi; void *
0x60CDE8: mov     ebx, eax
0x60CDEA: call    OblivionDynamicCast
0x60CDEF: push    0; int
0x60CDF1: push    offset ??_R0?AVMiddleLowProcess@@@8; struct TypeDescriptor *
0x60CDF6: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CDFB: push    0; int
0x60CDFD: push    edi; void *
0x60CDFE: mov     ebp, eax
0x60CE00: call    OblivionDynamicCast
0x60CE05: push    0; int
0x60CE07: push    offset ??_R0?AVLowProcess@@@8; struct TypeDescriptor *
0x60CE0C: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CE11: push    0; int
0x60CE13: push    edi; void *
0x60CE14: mov     [esp+6Ch+var_8], eax
0x60CE18: call    OblivionDynamicCast
0x60CE1D: add     esp, 50h
0x60CE20: push    0; int
0x60CE22: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x60CE27: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CE2C: push    0; int
0x60CE2E: push    esi; void *
0x60CE2F: mov     [esp+30h+a3], eax
0x60CE33: call    OblivionDynamicCast
0x60CE38: push    0; int
0x60CE3A: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x60CE3F: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CE44: push    0; int
0x60CE46: push    esi; void *
0x60CE47: mov     edi, eax
0x60CE49: call    OblivionDynamicCast
0x60CE4E: push    0; int
0x60CE50: push    offset ??_R0?AVMiddleLowProcess@@@8; struct TypeDescriptor *
0x60CE55: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CE5A: push    0; int
0x60CE5C: push    esi; void *
0x60CE5D: mov     [esp+58h+a4], eax
0x60CE61: call    OblivionDynamicCast
0x60CE66: push    0; int
0x60CE68: push    offset ??_R0?AVLowProcess@@@8; struct TypeDescriptor *
0x60CE6D: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x60CE72: push    0; int
0x60CE74: push    esi; void *
0x60CE75: mov     [esp+6Ch+var_C], eax
0x60CE79: call    OblivionDynamicCast
0x60CE7E: add     esp, 50h
0x60CE81: test    ebx, ebx
0x60CE83: mov     esi, eax
0x60CE85: jz      short loc_60CEBC
0x60CE87: mov     eax, [ebx]
0x60CE89: mov     edx, [eax+15Ch]
0x60CE8F: mov     ecx, ebx
0x60CE91: call    edx
0x60CE93: fcomp   dword ptr ds:0A2FAA8h
0x60CE99: fnstsw  ax
0x60CE9B: test    ah, 41h
0x60CE9E: jnz     short loc_60CEBC
0x60CEA0: mov     eax, [ebx]
0x60CEA2: mov     edx, [eax+178h]
0x60CEA8: push    0
0x60CEAA: mov     ecx, ebx
0x60CEAC: call    edx
0x60CEAE: mov     eax, [ebx]
0x60CEB0: mov     edx, [eax+0D0h]
0x60CEB6: push    0
0x60CEB8: mov     ecx, ebx
0x60CEBA: call    edx
0x60CEBC: test    edi, edi
0x60CEBE: jz      short loc_60CF01
0x60CEC0: mov     eax, [edi]
0x60CEC2: mov     edx, [eax+15Ch]
0x60CEC8: mov     ecx, edi
0x60CECA: call    edx
0x60CECC: fcomp   dword ptr ds:0A2FAA8h
0x60CED2: fnstsw  ax
0x60CED4: test    ah, 41h
0x60CED7: jnz     short loc_60CEF5
0x60CED9: mov     eax, [edi]
0x60CEDB: mov     edx, [eax+178h]
0x60CEE1: push    0
0x60CEE3: mov     ecx, edi
0x60CEE5: call    edx
0x60CEE7: mov     eax, [edi]
0x60CEE9: mov     edx, [eax+0D0h]
0x60CEEF: push    0
0x60CEF1: mov     ecx, edi
0x60CEF3: call    edx
0x60CEF5: test    ebx, ebx
0x60CEF7: jz      short loc_60CF01
0x60CEF9: push    ebx
0x60CEFA: mov     ecx, edi
0x60CEFC: call    HighProcess__CopyFrom
0x60CF01: mov     ecx, [esp+1Ch+a4]
0x60CF05: test    ecx, ecx
0x60CF07: jz      short loc_60CF13
0x60CF09: test    ebp, ebp
0x60CF0B: jz      short loc_60CF13
0x60CF0D: push    ebp
0x60CF0E: call    MiddleHighProcess_CopyFrom
0x60CF13: mov     ecx, [esp+1Ch+var_C]
0x60CF17: test    ecx, ecx
0x60CF19: pop     ebp
0x60CF1A: pop     ebx
0x60CF1B: jz      short loc_60CF2B
0x60CF1D: mov     eax, [esp+14h+var_8]
0x60CF21: test    eax, eax
0x60CF23: jz      short loc_60CF2B
0x60CF25: push    eax
0x60CF26: call    MiddleLowProcess__CloneFrom
0x60CF2B: test    esi, esi
0x60CF2D: jz      short loc_60CF3F
0x60CF2F: mov     eax, [esp+14h+a3]
0x60CF33: test    eax, eax
0x60CF35: jz      short loc_60CF3F
0x60CF37: push    eax; a3
0x60CF38: mov     ecx, esi; a1
0x60CF3A: call    LowProcess__CopyFrom
0x60CF3F: pop     edi
0x60CF40: pop     esi
0x60CF41: add     esp, 0Ch
0x60CF44: retn    4
