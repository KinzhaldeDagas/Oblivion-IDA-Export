0x41B210: push    ebx
0x41B211: mov     ebx, [esp+4+a2]
0x41B215: push    esi
0x41B216: push    edi
0x41B217: push    0; int
0x41B219: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x41B21E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41B223: push    0; int
0x41B225: push    ebx; void *
0x41B226: mov     edi, ecx
0x41B228: call    OblivionDynamicCast
0x41B22D: mov     esi, eax
0x41B22F: add     esp, 14h
0x41B232: test    esi, esi
0x41B234: jnz     short loc_41B23E
0x41B236: pop     edi
0x41B237: pop     esi
0x41B238: mov     al, 1
0x41B23A: pop     ebx
0x41B23B: retn    4
0x41B23E: push    ebx; a2
0x41B23F: mov     ecx, edi; this
0x41B241: call    TESForm_CompareAllComponentsTo
0x41B246: test    al, al
0x41B248: jnz     short loc_41B236
0x41B24A: mov     eax, [edi+18h]
0x41B24D: mov     eax, [eax+30h]
0x41B250: lea     ecx, [edi+18h]
0x41B253: lea     edx, [esi+18h]
0x41B256: push    edx
0x41B257: call    eax
0x41B259: test    al, al
0x41B25B: jnz     short loc_41B236
0x41B25D: add     esi, 24h ; '$'
0x41B260: push    esi
0x41B261: lea     ecx, [edi+24h]
0x41B264: call    EffectItemList_CompareTo
0x41B269: pop     edi
0x41B26A: test    al, al
0x41B26C: pop     esi
0x41B26D: setnz   al
0x41B270: pop     ebx
0x41B271: retn    4
