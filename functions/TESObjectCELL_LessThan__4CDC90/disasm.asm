0x4CDC90: mov     eax, [esp+arg_0]
0x4CDC94: push    ebx
0x4CDC95: push    ebp
0x4CDC96: push    esi
0x4CDC97: mov     esi, ecx
0x4CDC99: movzx   ecx, byte ptr [eax+4]
0x4CDC9D: add     ecx, 0FFFFFFD0h; switch 9 cases
0x4CDCA0: xor     bl, bl
0x4CDCA2: cmp     ecx, 8
0x4CDCA5: push    edi
0x4CDCA6: ja      TESObjectCELL_LessThan___def_4CDCAC
0x4CDCAC: jmp     ds:jpt_4CDCAC[ecx*4]; switch jump
0x4CDCB3: push    0; jumptable 004CDCAC cases 49-52,54
0x4CDCB5: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4CDCBA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDCBF: push    0; int
0x4CDCC1: push    eax; void *
0x4CDCC2: call    OblivionDynamicCast
0x4CDCC7: mov     edi, eax
0x4CDCC9: mov     eax, [edi]
0x4CDCCB: mov     edx, [eax]
0x4CDCCD: add     esp, 14h
0x4CDCD0: mov     ecx, edi
0x4CDCD2: call    edx
0x4CDCD4: cmp     eax, esi
0x4CDCD6: jz      loc_4CDE75
0x4CDCDC: mov     eax, [edi]
0x4CDCDE: mov     edx, [eax]
0x4CDCE0: mov     ebx, [esi]
0x4CDCE2: mov     ecx, edi
0x4CDCE4: call    edx
0x4CDCE6: push    eax
0x4CDCE7: mov     eax, [ebx+34h]
0x4CDCEA: mov     ecx, esi
0x4CDCEC: call    eax
0x4CDCEE: pop     edi
0x4CDCEF: pop     esi
0x4CDCF0: pop     ebp
0x4CDCF1: mov     bl, al
0x4CDCF3: pop     ebx
0x4CDCF4: retn    4
0x4CDCF7: test    byte ptr [esi+24h], 1; jumptable 004CDCAC case 53
0x4CDCFB: jnz     loc_4CDE75
0x4CDD01: mov     ecx, [esi+50h]
0x4CDD04: mov     edx, [ecx]
0x4CDD06: push    eax
0x4CDD07: mov     eax, [edx+34h]
0x4CDD0A: call    eax
0x4CDD0C: pop     edi
0x4CDD0D: pop     esi
0x4CDD0E: pop     ebp
0x4CDD0F: mov     bl, al
0x4CDD11: pop     ebx
0x4CDD12: retn    4
0x4CDD15: push    0; jumptable 004CDCAC case 55
0x4CDD17: push    offset ??_R0?AVTESTerrainLODQuadRoot@@@8; struct TypeDescriptor *
0x4CDD1C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDD21: push    0; int
0x4CDD23: push    eax; void *
0x4CDD24: call    OblivionDynamicCast
0x4CDD29: add     esp, 14h
0x4CDD2C: test    byte ptr [esi+24h], 1
0x4CDD30: jnz     loc_4CDE75
0x4CDD36: mov     eax, [eax+4]
0x4CDD39: test    eax, eax
0x4CDD3B: jz      short loc_4CDD42
0x4CDD3D: mov     eax, [eax+10h]
0x4CDD40: jmp     short loc_4CDD44
0x4CDD42: xor     eax, eax
0x4CDD44: mov     ecx, [esi+50h]
0x4CDD47: cmp     eax, ecx
0x4CDD49: jnz     short loc_4CDD04
0x4CDD4B: pop     edi
0x4CDD4C: pop     esi
0x4CDD4D: xor     bl, bl
0x4CDD4F: pop     ebp
0x4CDD50: mov     al, bl
0x4CDD52: pop     ebx
0x4CDD53: retn    4
0x4CDD56: push    0; jumptable 004CDCAC case 56
0x4CDD58: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4CDD5D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDD62: push    0; int
0x4CDD64: push    eax; void *
0x4CDD65: call    OblivionDynamicCast
0x4CDD6A: add     esp, 14h
0x4CDD6D: test    byte ptr [esi+24h], 1
0x4CDD71: jnz     loc_4CDE75
0x4CDD77: mov     eax, [eax+2Ch]
0x4CDD7A: mov     ecx, [esi+50h]
0x4CDD7D: cmp     eax, ecx
0x4CDD7F: jz      short loc_4CDD4B
0x4CDD81: mov     edx, [ecx]
0x4CDD83: push    eax
0x4CDD84: mov     eax, [edx+34h]
0x4CDD87: call    eax
0x4CDD89: pop     edi
0x4CDD8A: pop     esi
0x4CDD8B: pop     ebp
0x4CDD8C: mov     bl, al
0x4CDD8E: pop     ebx
0x4CDD8F: retn    4
0x4CDD92: push    0; jumptable 004CDCAC case 48
0x4CDD94: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4CDD99: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CDD9E: push    0; int
0x4CDDA0: push    eax; void *
0x4CDDA1: call    OblivionDynamicCast
0x4CDDA6: mov     edi, eax
0x4CDDA8: add     esp, 14h
0x4CDDAB: test    edi, edi
0x4CDDAD: jz      loc_4CDE8A
0x4CDDB3: mov     cl, [esi+24h]
0x4CDDB6: and     cl, 1
0x4CDDB9: jz      short loc_4CDDC5
0x4CDDBB: test    byte ptr [edi+24h], 1
0x4CDDBF: jz      loc_4CDE75
0x4CDDC5: mov     al, [edi+24h]
0x4CDDC8: and     al, 1
0x4CDDCA: cmp     cl, al
0x4CDDCC: jnz     loc_4CDE8A
0x4CDDD2: test    cl, cl
0x4CDDD4: jnz     short loc_4CDE1D
0x4CDDD6: mov     ecx, [esi+50h]
0x4CDDD9: xor     edx, edx
0x4CDDDB: test    al, al
0x4CDDDD: jnz     short loc_4CDDE2
0x4CDDDF: mov     edx, [edi+50h]
0x4CDDE2: cmp     ecx, edx
0x4CDDE4: jz      short loc_4CDDF7
0x4CDDE6: mov     eax, [ecx]
0x4CDDE8: push    edx
0x4CDDE9: mov     edx, [eax+34h]
0x4CDDEC: call    edx
0x4CDDEE: pop     edi
0x4CDDEF: pop     esi
0x4CDDF0: pop     ebp
0x4CDDF1: mov     bl, al
0x4CDDF3: pop     ebx
0x4CDDF4: retn    4
0x4CDDF7: mov     ebp, [esi+8]
0x4CDDFA: mov     eax, [edi+8]
0x4CDDFD: and     ebp, 400h
0x4CDE03: setnz   cl
0x4CDE06: shr     eax, 0Ah
0x4CDE09: and     al, 1
0x4CDE0B: cmp     cl, al
0x4CDE0D: jz      short loc_4CDE1D
0x4CDE0F: pop     edi
0x4CDE10: test    ebp, ebp
0x4CDE12: pop     esi
0x4CDE13: setnz   bl
0x4CDE16: pop     ebp
0x4CDE17: mov     al, bl
0x4CDE19: pop     ebx
0x4CDE1A: retn    4
0x4CDE1D: mov     ecx, edi
0x4CDE1F: call    sub_4CA5F0
0x4CDE24: mov     ecx, esi
0x4CDE26: mov     ebp, eax
0x4CDE28: call    sub_4CA5F0
0x4CDE2D: cmp     eax, ebp
0x4CDE2F: jb      short loc_4CDE75
0x4CDE31: mov     ecx, edi
0x4CDE33: call    sub_4CA5F0
0x4CDE38: mov     ecx, esi
0x4CDE3A: mov     ebp, eax
0x4CDE3C: call    sub_4CA5F0
0x4CDE41: cmp     eax, ebp
0x4CDE43: jnz     short loc_4CDE8A
0x4CDE45: mov     ecx, edi
0x4CDE47: call    sub_4CA640
0x4CDE4C: mov     ecx, esi
0x4CDE4E: mov     ebp, eax
0x4CDE50: call    sub_4CA640
0x4CDE55: cmp     eax, ebp
0x4CDE57: jb      short loc_4CDE75
0x4CDE59: mov     ecx, edi
0x4CDE5B: call    sub_4CA640
0x4CDE60: mov     ecx, esi
0x4CDE62: mov     ebp, eax
0x4CDE64: call    sub_4CA640
0x4CDE69: cmp     eax, ebp
0x4CDE6B: jnz     short loc_4CDE8A
0x4CDE6D: mov     eax, [esi+0Ch]
0x4CDE70: cmp     eax, [edi+0Ch]
0x4CDE73: jnb     short loc_4CDE8A
0x4CDE75: pop     edi
0x4CDE76: pop     esi
0x4CDE77: mov     bl, 1
0x4CDE79: pop     ebp
0x4CDE7A: mov     al, bl
0x4CDE7C: pop     ebx
0x4CDE7D: retn    4
