0x46F020: push    ecx
0x46F021: push    edi
0x46F022: mov     edi, ecx
0x46F024: cmp     byte ptr [edi+8], 0
0x46F028: jnz     loc_46F0F3
0x46F02E: mov     eax, [edi+4]
0x46F031: test    eax, eax
0x46F033: jz      loc_46F0EF
0x46F039: push    esi
0x46F03A: mov     esi, [esp+0Ch+arg_0]
0x46F03E: push    0FFFFFFFFh; a2
0x46F040: mov     ecx, esi; this
0x46F042: mov     dword ptr [esp+10h+ArgList], eax
0x46F046: call    TESForm_GetOverrideFile
0x46F04B: push    eax; a2
0x46F04C: lea     eax, [esp+10h+ArgList]
0x46F050: push    eax; a1
0x46F051: call    TESForm_ResolveFormID
0x46F056: mov     ecx, dword ptr [esp+14h+ArgList]
0x46F05A: add     esp, 8
0x46F05D: push    0; int
0x46F05F: push    offset ??_R0?AVScript@@@8; struct TypeDescriptor *
0x46F064: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46F069: push    0; int
0x46F06B: push    ecx; a1
0x46F06C: call    TESForm_LookupByFormID
0x46F071: add     esp, 4
0x46F074: push    eax; void *
0x46F075: call    OblivionDynamicCast
0x46F07A: add     esp, 14h
0x46F07D: test    eax, eax
0x46F07F: mov     [edi+4], eax
0x46F082: jnz     short loc_46F0EE
0x46F084: test    esi, esi
0x46F086: jz      short loc_46F0DC
0x46F088: mov     ecx, esi
0x46F08A: call    TESForm__GetEditorNameLen
0x46F08F: test    eax, eax
0x46F091: jz      short loc_46F0BC
0x46F093: mov     edx, [esi]
0x46F095: mov     eax, [edx+0D4h]
0x46F09B: mov     ecx, esi
0x46F09D: call    eax
0x46F09F: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46F0A3: push    eax
0x46F0A4: push    ecx; ArgList
0x46F0A5: push    offset aUnableToFindSc; "Unable to find script (%08X) on owner o"...
0x46F0AA: call    PrintError
0x46F0AF: add     esp, 0Ch
0x46F0B2: pop     esi
0x46F0B3: mov     byte ptr [edi+8], 1
0x46F0B7: pop     edi
0x46F0B8: pop     ecx
0x46F0B9: retn    4
0x46F0BC: mov     edx, [esi+0Ch]
0x46F0BF: mov     eax, dword ptr [esp+0Ch+ArgList]
0x46F0C3: push    edx
0x46F0C4: push    eax; ArgList
0x46F0C5: push    offset aUnableToFind_1; "Unable to find script (%08X) on owner o"...
0x46F0CA: call    PrintError
0x46F0CF: add     esp, 0Ch
0x46F0D2: pop     esi
0x46F0D3: mov     byte ptr [edi+8], 1
0x46F0D7: pop     edi
0x46F0D8: pop     ecx
0x46F0D9: retn    4
0x46F0DC: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46F0E0: push    ecx; ArgList
0x46F0E1: push    offset aUnableToFind_2; "Unable to find script (%08X) on unknown"...
0x46F0E6: call    PrintError
0x46F0EB: add     esp, 8
0x46F0EE: pop     esi
0x46F0EF: mov     byte ptr [edi+8], 1
0x46F0F3: pop     edi
0x46F0F4: pop     ecx
0x46F0F5: retn    4
