0x4FB630: mov     eax, [ecx+0Ch]
0x4FB633: test    eax, eax
0x4FB635: push    ebp
0x4FB636: mov     ebp, [esp+4+ArgList]
0x4FB63A: jz      short loc_4FB651
0x4FB63C: lea     esp, [esp+0]
0x4FB640: mov     edx, [eax]
0x4FB642: test    edx, edx
0x4FB644: jz      short loc_4FB651
0x4FB646: cmp     [edx], ebp
0x4FB648: mov     eax, [eax+4]
0x4FB64B: jz      short loc_4FB674
0x4FB64D: test    eax, eax
0x4FB64F: jnz     short loc_4FB640
0x4FB651: mov     ecx, [ecx]
0x4FB653: test    ecx, ecx
0x4FB655: jz      short loc_4FB67F
0x4FB657: mov     eax, [ecx]
0x4FB659: mov     edx, [eax+0D4h]
0x4FB65F: call    edx
0x4FB661: push    eax
0x4FB662: push    ebp; ArgList
0x4FB663: push    offset aTryingToSetVar; "Trying to set variableID %d in script '"...
0x4FB668: call    PrintError
0x4FB66D: add     esp, 0Ch
0x4FB670: pop     ebp
0x4FB671: retn    0Ch
0x4FB674: fld     [esp+4+arg_4]
0x4FB678: pop     ebp
0x4FB679: fstp    qword ptr [edx+8]
0x4FB67C: retn    0Ch
0x4FB67F: mov     ecx, ds:0B33B00h
0x4FB685: push    edi
0x4FB686: call    sub_45A500
0x4FB68B: test    al, al
0x4FB68D: jz      loc_4FB74A
0x4FB693: mov     eax, ds:0B33B00h
0x4FB698: mov     edi, [eax+80h]
0x4FB69E: test    edi, edi
0x4FB6A0: jz      loc_4FB74A
0x4FB6A6: mov     ecx, [edi]
0x4FB6A8: push    ebx
0x4FB6A9: push    esi
0x4FB6AA: push    ecx; a1
0x4FB6AB: call    TESForm_LookupByFormID
0x4FB6B0: push    0; int
0x4FB6B2: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FB6B7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FB6BC: mov     esi, eax
0x4FB6BE: push    0; int
0x4FB6C0: push    esi; void *
0x4FB6C1: call    OblivionDynamicCast
0x4FB6C6: mov     ebx, eax
0x4FB6C8: add     esp, 18h
0x4FB6CB: test    ebx, ebx
0x4FB6CD: jz      short loc_4FB6D8
0x4FB6CF: mov     ecx, ebx; this
0x4FB6D1: call    TESObjectREFR_GetName
0x4FB6D6: jmp     short loc_4FB6E1
0x4FB6D8: push    esi; a1
0x4FB6D9: call    TESFullName_GetNameForForm
0x4FB6DE: add     esp, 4
0x4FB6E1: test    esi, esi
0x4FB6E3: jz      short loc_4FB726
0x4FB6E5: test    eax, eax
0x4FB6E7: jz      short loc_4FB726
0x4FB6E9: test    ebx, ebx
0x4FB6EB: mov     edx, [edi]
0x4FB6ED: push    edx
0x4FB6EE: push    eax
0x4FB6EF: mov     eax, ds:0B33B00h
0x4FB6F4: mov     ecx, [eax+1C0h]
0x4FB6FA: push    ebp
0x4FB6FB: push    ecx; ArgList
0x4FB6FC: jz      short loc_4FB712
0x4FB6FE: push    offset aLoadgameSTryin; "LoadGame '%s': Trying to set variableID"...
0x4FB703: call    PrintError
0x4FB708: add     esp, 14h
0x4FB70B: pop     esi
0x4FB70C: pop     ebx
0x4FB70D: pop     edi
0x4FB70E: pop     ebp
0x4FB70F: retn    0Ch
0x4FB712: push    offset aLoadgameSTry_0; "LoadGame '%s': Trying to set variableID"...
0x4FB717: call    PrintError
0x4FB71C: add     esp, 14h
0x4FB71F: pop     esi
0x4FB720: pop     ebx
0x4FB721: pop     edi
0x4FB722: pop     ebp
0x4FB723: retn    0Ch
0x4FB726: mov     edx, [edi]
0x4FB728: mov     eax, ds:0B33B00h
0x4FB72D: mov     ecx, [eax+1C0h]
0x4FB733: push    edx
0x4FB734: push    ebp
0x4FB735: push    ecx; ArgList
0x4FB736: push    offset aLoadgameSTry_1; "LoadGame '%s': Trying to set variableID"...
0x4FB73B: call    PrintError
0x4FB740: add     esp, 10h
0x4FB743: pop     esi
0x4FB744: pop     ebx
0x4FB745: pop     edi
0x4FB746: pop     ebp
0x4FB747: retn    0Ch
0x4FB74A: push    ebp; ArgList
0x4FB74B: push    offset aTryingToSetV_0; "Trying to set variableID %d -- variable"...
0x4FB750: call    PrintError
0x4FB755: add     esp, 8
0x4FB758: pop     edi
0x4FB759: pop     ebp
0x4FB75A: retn    0Ch
