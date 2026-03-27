0x52EE30: sub     esp, 0Ch
0x52EE33: push    edi
0x52EE34: mov     edi, ecx
0x52EE36: mov     eax, [edi+8]
0x52EE39: shr     eax, 3
0x52EE3C: test    al, 1
0x52EE3E: mov     [esp+10h+var_4], edi
0x52EE42: jnz     loc_52EF98
0x52EE48: lea     eax, [edi+28h]
0x52EE4B: test    eax, eax
0x52EE4D: mov     [esp+10h+var_C], eax
0x52EE51: jz      loc_52EF8F
0x52EE57: push    ebx
0x52EE58: push    ebp
0x52EE59: push    esi
0x52EE5A: lea     ebx, [ebx+0]
0x52EE60: mov     ecx, [esp+1Ch+var_C]
0x52EE64: mov     esi, [ecx]
0x52EE66: test    esi, esi
0x52EE68: jz      loc_52EF8C
0x52EE6E: cmp     byte ptr [esi+20h], 0
0x52EE72: jnz     loc_52EF40
0x52EE78: mov     eax, [esi]
0x52EE7A: test    eax, eax
0x52EE7C: jz      short loc_52EEA5
0x52EE7E: push    0; int
0x52EE80: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x52EE85: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52EE8A: push    0; int
0x52EE8C: push    eax; a1
0x52EE8D: call    TESForm_LookupByFormID
0x52EE92: add     esp, 4
0x52EE95: push    eax; void *
0x52EE96: call    OblivionDynamicCast
0x52EE9B: add     esp, 14h
0x52EE9E: mov     [esi], eax
0x52EEA0: jmp     loc_52EF3C
0x52EEA5: mov     eax, [esi+1Ch]
0x52EEA8: test    eax, eax
0x52EEAA: jz      short loc_52EEF0
0x52EEAC: push    0FFFFFFFFh; a2
0x52EEAE: mov     ecx, edi; this
0x52EEB0: mov     [esp+20h+a1], eax
0x52EEB4: call    TESForm_GetOverrideFile
0x52EEB9: push    eax; a2
0x52EEBA: lea     edx, [esp+20h+a1]
0x52EEBE: push    edx; a1
0x52EEBF: call    TESForm_ResolveFormID
0x52EEC4: mov     eax, [esp+24h+a1]
0x52EEC8: add     esp, 8
0x52EECB: push    0; int
0x52EECD: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x52EED2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52EED7: push    0; int
0x52EED9: push    eax; a1
0x52EEDA: call    TESForm_LookupByFormID
0x52EEDF: add     esp, 4
0x52EEE2: push    eax; void *
0x52EEE3: call    OblivionDynamicCast
0x52EEE8: add     esp, 14h
0x52EEEB: mov     [esi+1Ch], eax
0x52EEEE: jmp     short loc_52EF3C
0x52EEF0: lea     edx, [esi+4]
0x52EEF3: xor     ecx, ecx
0x52EEF5: test    edx, edx
0x52EEF7: jz      short loc_52EEFC
0x52EEF9: mov     ecx, [esi+10h]
0x52EEFC: xor     ebp, ebp
0x52EEFE: test    ecx, ecx
0x52EF00: jle     short loc_52EF3C
0x52EF02: mov     eax, [esi+8]
0x52EF05: mov     edx, [eax]
0x52EF07: mov     edx, [edx+8]
0x52EF0A: shr     edx, 5
0x52EF0D: test    dl, 1
0x52EF10: jnz     short loc_52EF15
0x52EF12: add     ebp, 1
0x52EF15: add     eax, 4
0x52EF18: sub     ecx, 1
0x52EF1B: jnz     short loc_52EF05
0x52EF1D: test    ebp, ebp
0x52EF1F: jle     short loc_52EF3C
0x52EF21: mov     eax, [edi]
0x52EF23: mov     edx, [eax+0D4h]
0x52EF29: push    ebp
0x52EF2A: mov     ecx, edi
0x52EF2C: call    edx
0x52EF2E: push    eax; ArgList
0x52EF2F: push    offset aNoQuestReferen; "No Quest Reference on Topic \"%s\" (%d "...
0x52EF34: call    PrintError
0x52EF39: add     esp, 0Ch
0x52EF3C: mov     byte ptr [esi+20h], 1
0x52EF40: lea     ebp, [esi+4]
0x52EF43: test    ebp, ebp
0x52EF45: jz      short loc_52EF79
0x52EF47: mov     ecx, ebp
0x52EF49: call    sub_5A56F0
0x52EF4E: mov     ebx, [ebp+0Ch]
0x52EF51: xor     esi, esi
0x52EF53: test    ebx, ebx
0x52EF55: jbe     short loc_52EF79
0x52EF57: mov     eax, [ebp+4]
0x52EF5A: mov     edi, [eax+esi*4]
0x52EF5D: test    edi, edi
0x52EF5F: jz      short loc_52EF6E
0x52EF61: mov     edx, [edi]
0x52EF63: mov     eax, [edx+6Ch]
0x52EF66: mov     ecx, edi
0x52EF68: call    eax
0x52EF6A: mov     [edi+20h], si
0x52EF6E: add     esi, 1
0x52EF71: cmp     esi, ebx
0x52EF73: jb      short loc_52EF57
0x52EF75: mov     edi, [esp+1Ch+var_4]
0x52EF79: mov     ecx, [esp+1Ch+var_C]
0x52EF7D: mov     eax, [ecx+4]
0x52EF80: test    eax, eax
0x52EF82: mov     [esp+1Ch+var_C], eax
0x52EF86: jnz     loc_52EE60
0x52EF8C: pop     esi
0x52EF8D: pop     ebp
0x52EF8E: pop     ebx
0x52EF8F: push    1; a2
0x52EF91: mov     ecx, edi; this
0x52EF93: call    TESForm_SetIsLinked
0x52EF98: pop     edi
0x52EF99: add     esp, 0Ch
0x52EF9C: retn
