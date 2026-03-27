0x45CEE0: sub     esp, 10h
0x45CEE3: push    esi
0x45CEE4: mov     esi, ecx
0x45CEE6: mov     ecx, [esi+58h]
0x45CEE9: mov     edx, [ecx+4]
0x45CEEC: xor     eax, eax
0x45CEEE: test    edx, edx
0x45CEF0: push    edi
0x45CEF1: jbe     short loc_45CF13
0x45CEF3: mov     edi, [ecx+8]
0x45CEF6: mov     ecx, edi
0x45CEF8: jmp     short loc_45CF00
0x45CEFA: align 10h
0x45CF00: cmp     dword ptr [ecx], 0
0x45CF03: jnz     loc_45CF8F
0x45CF09: add     eax, 1
0x45CF0C: add     ecx, 4
0x45CF0F: cmp     eax, edx
0x45CF11: jb      short loc_45CF00
0x45CF13: xor     eax, eax
0x45CF15: test    eax, eax
0x45CF17: mov     [esp+18h+var_8], eax
0x45CF1B: jz      loc_45D006
0x45CF21: push    ebx
0x45CF22: push    ebp
0x45CF23: lea     eax, [esp+20h+var_10]
0x45CF27: push    eax
0x45CF28: lea     ecx, [esp+24h+a1]
0x45CF2C: push    ecx
0x45CF2D: mov     ecx, [esi+58h]
0x45CF30: lea     edx, [esp+28h+var_8]
0x45CF34: push    edx
0x45CF35: call    sub_452600
0x45CF3A: mov     ebp, [esp+20h+a1]
0x45CF3E: push    0; int
0x45CF40: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45CF45: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45CF4A: push    0; int
0x45CF4C: push    ebp; a1
0x45CF4D: call    TESForm_LookupByFormID
0x45CF52: add     esp, 4
0x45CF55: push    eax; void *
0x45CF56: call    OblivionDynamicCast
0x45CF5B: mov     ebx, [esp+34h+var_10]
0x45CF5F: mov     edi, eax
0x45CF61: add     esp, 14h
0x45CF64: test    edi, edi
0x45CF66: jz      short loc_45CFE5
0x45CF68: cmp     dword ptr [edi+3Ch], 0
0x45CF6C: jnz     short loc_45CF97
0x45CF6E: mov     eax, ebx
0x45CF70: push    eax
0x45CF71: lea     ecx, [edi+44h]
0x45CF74: call    sub_4210E0
0x45CF79: mov     ecx, [esi+4]
0x45CF7C: test    ecx, ecx
0x45CF7E: push    1000000h
0x45CF83: push    edi
0x45CF84: jnz     short loc_45CF88
0x45CF86: mov     ecx, [esi]
0x45CF88: call    sub_452C20
0x45CF8D: jmp     short loc_45CFF0
0x45CF8F: mov     eax, [edi+eax*4]
0x45CF92: jmp     loc_45CF15
0x45CF97: mov     ecx, [esi+14h]
0x45CF9A: mov     [esi+14h], ebx
0x45CF9D: mov     [esp+20h+var_4], ecx
0x45CFA1: mov     ecx, ds:0B33B00h
0x45CFA7: mov     eax, [ecx+14h]
0x45CFAA: mov     bp, [eax]
0x45CFAD: add     eax, 2
0x45CFB0: mov     [ecx+14h], eax
0x45CFB3: push    0
0x45CFB5: mov     ecx, edi
0x45CFB7: call    sub_4E2F70
0x45CFBC: movzx   edx, bp
0x45CFBF: lea     eax, [edx+ebx+2]
0x45CFC3: cmp     eax, [esi+14h]
0x45CFC6: jz      short loc_45CFDA
0x45CFC8: mov     ecx, ds:0B34D90h
0x45CFCE: mov     edx, [ecx]
0x45CFD0: mov     eax, [edx+18h]
0x45CFD3: push    offset aLoadattachedan; "LoadAttachedAnimations() call did not p"...
0x45CFD8: call    eax
0x45CFDA: mov     ecx, [esp+20h+var_4]
0x45CFDE: mov     ebp, [esp+20h+a1]
0x45CFE2: mov     [esi+14h], ecx
0x45CFE5: push    ebx; void *
0x45CFE6: mov     ecx, offset FormHeap
0x45CFEB: call    MemoryHeap_Free_checked
0x45CFF0: mov     ecx, [esi+58h]
0x45CFF3: push    ebp
0x45CFF4: call    NiTMap_RemoveAt
0x45CFF9: cmp     [esp+20h+var_8], 0
0x45CFFE: jnz     loc_45CF23
0x45D004: pop     ebp
0x45D005: pop     ebx
0x45D006: mov     edx, [esi+58h]
0x45D009: cmp     dword ptr [edx+0Ch], 0
0x45D00D: pop     edi
0x45D00E: pop     esi
0x45D00F: jz      short loc_45D023
0x45D011: mov     ecx, ds:0B34D90h
0x45D017: mov     eax, [ecx]
0x45D019: mov     edx, [eax+18h]
0x45D01C: push    offset aLoadattached_0; "LoadAttachedAnimations() call finished,"...
0x45D021: call    edx
0x45D023: add     esp, 10h
0x45D026: retn
