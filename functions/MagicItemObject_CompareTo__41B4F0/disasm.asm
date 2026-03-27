0x41B4F0: push    ebx
0x41B4F1: mov     ebx, [esp+4+a2]
0x41B4F5: push    esi
0x41B4F6: push    edi
0x41B4F7: push    0; int
0x41B4F9: push    offset ??_R0?AVMagicItemObject@@@8; struct TypeDescriptor *
0x41B4FE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41B503: push    0; int
0x41B505: push    ebx; void *
0x41B506: mov     edi, ecx
0x41B508: call    OblivionDynamicCast
0x41B50D: mov     esi, eax
0x41B50F: add     esp, 14h
0x41B512: test    esi, esi
0x41B514: jnz     short loc_41B51E
0x41B516: pop     edi
0x41B517: pop     esi
0x41B518: mov     al, 1
0x41B51A: pop     ebx
0x41B51B: retn    4
0x41B51E: push    ebx; a2
0x41B51F: mov     ecx, edi; this
0x41B521: call    TESForm_CompareAllComponentsTo
0x41B526: test    al, al
0x41B528: jnz     short loc_41B516
0x41B52A: mov     eax, [edi+24h]
0x41B52D: mov     eax, [eax+30h]
0x41B530: lea     ecx, [edi+24h]
0x41B533: lea     edx, [esi+24h]
0x41B536: push    edx
0x41B537: call    eax
0x41B539: test    al, al
0x41B53B: jnz     short loc_41B516
0x41B53D: add     esi, 30h ; '0'
0x41B540: push    esi
0x41B541: lea     ecx, [edi+30h]
0x41B544: call    EffectItemList_CompareTo
0x41B549: pop     edi
0x41B54A: test    al, al
0x41B54C: pop     esi
0x41B54D: setnz   al
0x41B550: pop     ebx
0x41B551: retn    4
