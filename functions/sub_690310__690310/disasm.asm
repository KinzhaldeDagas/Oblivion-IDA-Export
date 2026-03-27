0x690310: push    0FFFFFFFFh
0x690312: push    offset SEH_690310
0x690317: mov     eax, large fs:0
0x69031D: push    eax
0x69031E: push    ecx
0x69031F: push    ebx
0x690320: push    ebp
0x690321: push    esi
0x690322: push    edi
0x690323: mov     eax, ds:0B30AACh
0x690328: xor     eax, esp
0x69032A: push    eax
0x69032B: lea     eax, [esp+24h+var_C]
0x69032F: mov     large fs:0, eax
0x690335: mov     eax, [esp+24h+arg_4]
0x690339: test    eax, eax
0x69033B: jz      short loc_69035D
0x69033D: mov     eax, [eax+8]
0x690340: push    0; int
0x690342: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x690347: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x69034C: push    0; int
0x69034E: push    eax; void *
0x69034F: call    OblivionDynamicCast
0x690354: add     esp, 14h
0x690357: mov     [esp+24h+var_10], eax
0x69035B: jmp     short loc_690365
0x69035D: mov     [esp+24h+var_10], 0
0x690365: mov     eax, [esp+24h+arg_0]
0x690369: test    eax, eax
0x69036B: jz      loc_69048F
0x690371: cmp     [esp+24h+var_10], 0
0x690376: jz      loc_69048F
0x69037C: lea     ecx, [eax+68h]
0x69037F: mov     eax, [ecx]
0x690381: mov     edx, [eax+8]
0x690384: call    edx
0x690386: mov     esi, eax
0x690388: test    esi, esi
0x69038A: mov     [esp+24h+arg_0], eax
0x69038E: jz      loc_69048F
0x690394: cmp     dword ptr [esi+4], 0
0x690398: jnz     short loc_6903A3
0x69039A: cmp     dword ptr [esi], 0
0x69039D: jz      loc_69048F
0x6903A3: mov     eax, [esi]
0x6903A5: push    0; int
0x6903A7: push    offset ??_R0?AVBoundItemEffect@@@8; struct TypeDescriptor *
0x6903AC: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6903B1: push    0; int
0x6903B3: push    eax; void *
0x6903B4: call    OblivionDynamicCast
0x6903B9: mov     ebx, eax
0x6903BB: add     esp, 14h
0x6903BE: test    ebx, ebx
0x6903C0: jz      short loc_690423
0x6903C2: cmp     ebx, [esp+24h+arg_8]
0x6903C6: jz      short loc_690423
0x6903C8: mov     eax, [ebx+38h]
0x6903CB: push    0; int
0x6903CD: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x6903D2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6903D7: push    0; int
0x6903D9: push    eax; void *
0x6903DA: call    OblivionDynamicCast
0x6903DF: mov     ebp, eax
0x6903E1: add     esp, 14h
0x6903E4: test    ebp, ebp
0x6903E6: jz      short loc_690423
0x6903E8: xor     esi, esi
0x6903EA: lea     edi, [ebx+40h]
0x6903ED: lea     ecx, [ecx+0]
0x6903F0: mov     ecx, [esp+24h+var_10]
0x6903F4: push    0
0x6903F6: push    esi
0x6903F7: call    TESBipedModelForm_CoversSlot
0x6903FC: test    al, al
0x6903FE: jz      short loc_690414
0x690400: push    0
0x690402: push    esi
0x690403: lea     ecx, [ebp+64h]
0x690406: call    TESBipedModelForm_CoversSlot
0x69040B: test    al, al
0x69040D: jz      short loc_690414
0x69040F: cmp     dword ptr [edi], 0
0x690412: jz      short loc_690433
0x690414: add     esi, 1
0x690417: add     edi, 4
0x69041A: cmp     esi, 10h
0x69041D: jl      short loc_6903F0
0x69041F: mov     esi, [esp+24h+arg_0]
0x690423: mov     esi, [esi+4]
0x690426: test    esi, esi
0x690428: mov     [esp+24h+arg_0], esi
0x69042C: jz      short loc_69048F
0x69042E: jmp     loc_690394
0x690433: push    0Ch; Size
0x690435: call    FormHeapAlloc
0x69043A: add     esp, 4
0x69043D: mov     [esp+24h+arg_0], eax
0x690441: test    eax, eax
0x690443: mov     [esp+24h+var_4], 0
0x69044B: jz      short loc_690473
0x69044D: mov     ecx, [esp+24h+arg_4]
0x690451: push    ecx
0x690452: mov     ecx, eax
0x690454: call    sub_4844A0
0x690459: mov     [ebx+esi*4+40h], eax
0x69045D: mov     al, 1
0x69045F: mov     ecx, [esp+24h+var_C]
0x690463: mov     large fs:0, ecx
0x69046A: pop     ecx
0x69046B: pop     edi
0x69046C: pop     esi
0x69046D: pop     ebp
0x69046E: pop     ebx
0x69046F: add     esp, 10h
0x690472: retn
0x690473: xor     eax, eax
0x690475: mov     [ebx+esi*4+40h], eax
0x690479: mov     al, 1
0x69047B: mov     ecx, [esp+24h+var_C]
0x69047F: mov     large fs:0, ecx
0x690486: pop     ecx
0x690487: pop     edi
0x690488: pop     esi
0x690489: pop     ebp
0x69048A: pop     ebx
0x69048B: add     esp, 10h
0x69048E: retn
0x69048F: xor     al, al
0x690491: mov     ecx, [esp+24h+var_C]
0x690495: mov     large fs:0, ecx
0x69049C: pop     ecx
0x69049D: pop     edi
0x69049E: pop     esi
0x69049F: pop     ebp
0x6904A0: pop     ebx
0x6904A1: add     esp, 10h
0x6904A4: retn
