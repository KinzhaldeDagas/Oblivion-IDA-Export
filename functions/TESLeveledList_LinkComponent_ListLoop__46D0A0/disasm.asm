0x46D0A0: mov     esi, [edi]
0x46D0A2: test    esi, esi
0x46D0A4: jz      loc_46D19A
0x46D0AA: mov     ecx, [esp+a2]
0x46D0AE: mov     eax, [esi+4]
0x46D0B1: push    ecx; a2
0x46D0B2: lea     edx, [esp+4+ArgList]
0x46D0B6: push    edx; a1
0x46D0B7: mov     [esp+8+ArgList], eax
0x46D0BB: call    TESForm_ResolveFormID
0x46D0C0: mov     eax, [esp+8+ArgList]
0x46D0C4: push    eax; a1
0x46D0C5: call    TESForm_LookupByFormID
0x46D0CA: add     esp, 0Ch
0x46D0CD: test    eax, eax
0x46D0CF: mov     [esi+4], eax
0x46D0D2: jnz     TESLeveledList_LinkComponent___ListLoop_next
0x46D0D8: mov     eax, [edi+4]
0x46D0DB: test    eax, eax
0x46D0DD: jz      short loc_46D0F4
0x46D0DF: mov     ecx, [eax+4]
0x46D0E2: mov     [edi+4], ecx
0x46D0E5: mov     edx, [eax]
0x46D0E7: push    eax
0x46D0E8: mov     [edi], edx
0x46D0EA: call    FormHeapFree
0x46D0EF: add     esp, 4
0x46D0F2: jmp     short loc_46D0FA
0x46D0F4: mov     dword ptr [edi], 0
0x46D0FA: push    esi
0x46D0FB: call    FormHeapFree
0x46D100: add     esp, 4
0x46D103: test    ebp, ebp
0x46D105: jz      short loc_46D17B
0x46D107: cmp     byte ptr ds:0B333F4h, 0
0x46D10E: jnz     short loc_46D163
0x46D110: mov     byte ptr ds:0B333F4h, 1
0x46D117: mov     eax, [ebp+0]
0x46D11A: mov     edx, [eax+0D4h]
0x46D120: mov     ecx, ebp
0x46D122: call    edx
0x46D124: test    eax, eax
0x46D126: mov     byte ptr ds:0B333F4h, 0
0x46D12D: jz      short loc_46D163
0x46D12F: lea     edx, [eax+1]
0x46D132: mov     cl, [eax]
0x46D134: add     eax, 1
0x46D137: test    cl, cl
0x46D139: jnz     short loc_46D132
0x46D13B: sub     eax, edx
0x46D13D: test    eax, eax
0x46D13F: jz      short loc_46D163
0x46D141: mov     eax, [ebp+0]
0x46D144: mov     edx, [eax+0D4h]
0x46D14A: mov     ecx, ebp
0x46D14C: call    edx
0x46D14E: push    eax
0x46D14F: mov     eax, [esp+4+ArgList]
0x46D153: push    eax; ArgList
0x46D154: push    offset aUnableToFindLe; "Unable to find Leveled Object Form (%08"...
0x46D159: call    PrintError
0x46D15E: add     esp, 0Ch
0x46D161: jmp     short loc_46D192
0x46D163: mov     ecx, [ebp+0Ch]
0x46D166: mov     edx, [esp+ArgList]
0x46D16A: push    ecx
0x46D16B: push    edx; ArgList
0x46D16C: push    offset aUnableToFin_14; "Unable to find Leveled Object Form (%08"...
0x46D171: call    PrintError
0x46D176: add     esp, 0Ch
0x46D179: jmp     short loc_46D192
0x46D17B: mov     eax, [esp+ArgList]
0x46D17F: push    eax; ArgList
0x46D180: push    offset aUnableToFin_15; "Unable to find Leveled Object Form (%08"...
0x46D185: call    PrintError
0x46D18A: add     esp, 8
0x46D18D: jmp     short loc_46D192
