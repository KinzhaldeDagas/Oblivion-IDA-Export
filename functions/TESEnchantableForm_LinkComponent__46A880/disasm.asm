0x46A880: push    ecx
0x46A881: push    edi
0x46A882: mov     edi, ecx
0x46A884: mov     eax, [edi+4]
0x46A887: test    eax, eax
0x46A889: jz      loc_46A995
0x46A88F: push    esi
0x46A890: mov     esi, [esp+0Ch+arg_0]
0x46A894: test    esi, esi
0x46A896: mov     dword ptr [esp+0Ch+ArgList], eax
0x46A89A: jz      short loc_46A8B3
0x46A89C: push    0FFFFFFFFh; a2
0x46A89E: mov     ecx, esi; this
0x46A8A0: call    TESForm_GetOverrideFile
0x46A8A5: push    eax; a2
0x46A8A6: lea     eax, [esp+10h+ArgList]
0x46A8AA: push    eax; a1
0x46A8AB: call    TESForm_ResolveFormID
0x46A8B0: add     esp, 8
0x46A8B3: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46A8B7: push    0; int
0x46A8B9: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x46A8BE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46A8C3: push    0; int
0x46A8C5: push    ecx; a1
0x46A8C6: call    TESForm_LookupByFormID
0x46A8CB: add     esp, 4
0x46A8CE: push    eax; void *
0x46A8CF: call    OblivionDynamicCast
0x46A8D4: add     esp, 14h
0x46A8D7: test    eax, eax
0x46A8D9: mov     [edi+4], eax
0x46A8DC: jnz     short loc_46A938
0x46A8DE: test    esi, esi
0x46A8E0: jz      short loc_46A926
0x46A8E2: mov     ecx, esi
0x46A8E4: call    TESForm__GetEditorNameLen
0x46A8E9: test    eax, eax
0x46A8EB: jz      short loc_46A90E
0x46A8ED: mov     edx, [esi]
0x46A8EF: mov     eax, [edx+0D4h]
0x46A8F5: mov     ecx, esi
0x46A8F7: call    eax
0x46A8F9: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46A8FD: push    eax
0x46A8FE: push    ecx; ArgList
0x46A8FF: push    offset aUnableToFin_11; "Unable to find enchanting (%08X) on own"...
0x46A904: call    PrintError
0x46A909: add     esp, 0Ch
0x46A90C: jmp     short loc_46A938
0x46A90E: mov     edx, [esi+0Ch]
0x46A911: mov     eax, dword ptr [esp+0Ch+ArgList]
0x46A915: push    edx
0x46A916: push    eax; ArgList
0x46A917: push    offset aUnableToFin_12; "Unable to find enchanting (%08X) on own"...
0x46A91C: call    PrintError
0x46A921: add     esp, 0Ch
0x46A924: jmp     short loc_46A938
0x46A926: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46A92A: push    ecx; ArgList
0x46A92B: push    offset aUnableToFin_13; "Unable to find enchanting (%08X) on unk"...
0x46A930: call    PrintError
0x46A935: add     esp, 8
0x46A938: mov     ecx, [edi+4]
0x46A93B: test    ecx, ecx
0x46A93D: jz      short loc_46A994
0x46A93F: test    esi, esi
0x46A941: jz      short loc_46A994
0x46A943: push    esi
0x46A944: call    sub_4190C0
0x46A949: test    al, al
0x46A94B: jnz     short loc_46A994
0x46A94D: mov     edx, [edi+4]
0x46A950: mov     eax, [edx+0Ch]
0x46A953: push    ebx
0x46A954: mov     ebx, edx
0x46A956: mov     edx, [esi]
0x46A958: mov     [esp+10h+arg_0], eax
0x46A95C: mov     eax, [edx+0D4h]
0x46A962: push    ebp
0x46A963: mov     ebp, [esi+0Ch]
0x46A966: mov     ecx, esi
0x46A968: call    eax
0x46A96A: mov     edx, [ebx]
0x46A96C: push    eax
0x46A96D: mov     eax, [edx+0D4h]
0x46A973: push    ebp
0x46A974: mov     ecx, ebx
0x46A976: call    eax
0x46A978: mov     ecx, [esp+1Ch+arg_0]
0x46A97C: push    eax
0x46A97D: push    ecx; ArgList
0x46A97E: push    offset aEnchanting08xS; "Enchanting (%08X) '%s' has invalid cast"...
0x46A983: call    PrintError
0x46A988: add     esp, 14h
0x46A98B: pop     ebp
0x46A98C: mov     dword ptr [edi+4], 0
0x46A993: pop     ebx
0x46A994: pop     esi
0x46A995: pop     edi
0x46A996: pop     ecx
0x46A997: retn    4
