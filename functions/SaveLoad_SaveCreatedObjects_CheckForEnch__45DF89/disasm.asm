0x45DF89: push    0; int
0x45DF8B: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x45DF90: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DF95: push    0; int
0x45DF97: push    edi; void *
0x45DF98: call    OblivionDynamicCast
0x45DF9D: add     esp, 14h
0x45DFA0: test    eax, eax
0x45DFA2: jz      SaveLoad_SaveCreatedObjects___SaveLoop_SaveForm
0x45DFA8: mov     esi, [eax+4]
0x45DFAB: test    esi, esi
0x45DFAD: jnz     short loc_45DFCD
0x45DFAF: push    ebp; ArgList
0x45DFB0: push    offset aEnchantableIte; "Enchantable item %08X with no enchantme"...
0x45DFB5: call    PrintError
0x45DFBA: mov     edx, [esp+8+arg_10]
0x45DFBE: mov     eax, [edx+4]
0x45DFC1: add     esp, 8
0x45DFC4: mov     [esp+arg_10], eax
0x45DFC8: jmp     SaveLoad_SaveCreatedObjects___SaveLoop_Check
0x45DFCD: mov     eax, [esi+0Ch]
0x45DFD0: mov     ecx, ds:0B33A98h
0x45DFD6: push    eax; _DWORD
0x45DFD7: call    TESDataHandler_IsFormIDCreated?
0x45DFDC: test    al, al
0x45DFDE: jz      short SaveLoad_SaveCreatedObjects___SaveLoop_SaveForm
