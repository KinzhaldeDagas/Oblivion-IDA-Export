0x56A140: push    ecx
0x56A141: push    esi
0x56A142: push    edi
0x56A143: mov     edi, [esp+0Ch+arg_0]
0x56A147: mov     esi, ecx
0x56A149: mov     eax, [esi+4]
0x56A14C: push    0FFFFFFFFh; a2
0x56A14E: mov     ecx, edi; this
0x56A150: mov     dword ptr [esp+10h+ArgList], eax
0x56A154: call    TESForm_GetOverrideFile
0x56A159: push    eax; a2
0x56A15A: lea     ecx, [esp+10h+ArgList]
0x56A15E: push    ecx; a1
0x56A15F: call    TESForm_ResolveFormID
0x56A164: movzx   eax, byte ptr [esi]
0x56A167: add     esp, 8
0x56A16A: sub     eax, 0
0x56A16D: jz      loc_56A1FC
0x56A173: sub     eax, 1
0x56A176: jnz     loc_56A289
0x56A17C: mov     edx, dword ptr [esp+0Ch+ArgList]
0x56A180: push    edx; a1
0x56A181: call    TESForm_LookupByFormID
0x56A186: add     esp, 4
0x56A189: test    eax, eax
0x56A18B: mov     [esi+4], eax
0x56A18E: jnz     loc_56A289
0x56A194: test    edi, edi
0x56A196: jz      short loc_56A1E4
0x56A198: mov     ecx, edi
0x56A19A: call    TESForm__GetEditorNameLen
0x56A19F: test    eax, eax
0x56A1A1: jz      short loc_56A1C8
0x56A1A3: mov     eax, [edi]
0x56A1A5: mov     edx, [eax+0D4h]
0x56A1AB: mov     ecx, edi
0x56A1AD: call    edx
0x56A1AF: push    eax
0x56A1B0: mov     eax, dword ptr [esp+10h+ArgList]
0x56A1B4: push    eax; ArgList
0x56A1B5: push    offset aUnableToFin_34; "Unable to find Package Target Object (%"...
0x56A1BA: call    PrintError
0x56A1BF: add     esp, 0Ch
0x56A1C2: pop     edi
0x56A1C3: pop     esi
0x56A1C4: pop     ecx
0x56A1C5: retn    4
0x56A1C8: mov     ecx, [edi+0Ch]
0x56A1CB: mov     edx, dword ptr [esp+0Ch+ArgList]
0x56A1CF: push    ecx
0x56A1D0: push    edx; ArgList
0x56A1D1: push    offset aUnableToFin_35; "Unable to find Package Target Object (%"...
0x56A1D6: call    PrintError
0x56A1DB: add     esp, 0Ch
0x56A1DE: pop     edi
0x56A1DF: pop     esi
0x56A1E0: pop     ecx
0x56A1E1: retn    4
0x56A1E4: mov     eax, dword ptr [esp+0Ch+ArgList]
0x56A1E8: push    eax; ArgList
0x56A1E9: push    offset aUnableToFin_36; "Unable to find Package Target Object (%"...
0x56A1EE: call    PrintError
0x56A1F3: add     esp, 8
0x56A1F6: pop     edi
0x56A1F7: pop     esi
0x56A1F8: pop     ecx
0x56A1F9: retn    4
0x56A1FC: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x56A200: push    0; int
0x56A202: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56A207: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56A20C: push    0; int
0x56A20E: push    ecx; a1
0x56A20F: call    TESForm_LookupByFormID
0x56A214: add     esp, 4
0x56A217: push    eax; void *
0x56A218: call    OblivionDynamicCast
0x56A21D: add     esp, 14h
0x56A220: test    eax, eax
0x56A222: mov     [esi+4], eax
0x56A225: jnz     short loc_56A289
0x56A227: test    edi, edi
0x56A229: jz      short loc_56A277
0x56A22B: mov     ecx, edi
0x56A22D: call    TESForm__GetEditorNameLen
0x56A232: test    eax, eax
0x56A234: jz      short loc_56A25B
0x56A236: mov     edx, [edi]
0x56A238: mov     eax, [edx+0D4h]
0x56A23E: mov     ecx, edi
0x56A240: call    eax
0x56A242: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x56A246: push    eax
0x56A247: push    ecx; ArgList
0x56A248: push    offset aUnableToFin_37; "Unable to find Package Target Reference"...
0x56A24D: call    PrintError
0x56A252: add     esp, 0Ch
0x56A255: pop     edi
0x56A256: pop     esi
0x56A257: pop     ecx
0x56A258: retn    4
0x56A25B: mov     edx, [edi+0Ch]
0x56A25E: mov     eax, dword ptr [esp+0Ch+ArgList]
0x56A262: push    edx
0x56A263: push    eax; ArgList
0x56A264: push    offset aUnableToFin_38; "Unable to find Package Target Reference"...
0x56A269: call    PrintError
0x56A26E: add     esp, 0Ch
0x56A271: pop     edi
0x56A272: pop     esi
0x56A273: pop     ecx
0x56A274: retn    4
0x56A277: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x56A27B: push    ecx; ArgList
0x56A27C: push    offset aUnableToFin_39; "Unable to find Package Target Reference"...
0x56A281: call    PrintError
0x56A286: add     esp, 8
0x56A289: pop     edi
0x56A28A: pop     esi
0x56A28B: pop     ecx
0x56A28C: retn    4
