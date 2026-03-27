0x51D0D0: push    ebx
0x51D0D1: mov     ebx, [esp+4+arg_0]
0x51D0D5: push    esi
0x51D0D6: push    edi
0x51D0D7: push    0; int
0x51D0D9: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x51D0DE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51D0E3: push    0; int
0x51D0E5: push    ebx; void *
0x51D0E6: mov     esi, ecx
0x51D0E8: call    OblivionDynamicCast
0x51D0ED: mov     edi, eax
0x51D0EF: add     esp, 14h
0x51D0F2: test    edi, edi
0x51D0F4: jz      loc_51D268
0x51D0FA: mov     eax, [esi+28h]
0x51D0FD: shr     eax, 8
0x51D100: test    al, 1
0x51D102: jz      short loc_51D120
0x51D104: push    ebp
0x51D105: mov     ebp, [esi+100h]
0x51D10B: test    ebp, ebp
0x51D10D: jz      short loc_51D11F
0x51D10F: mov     ecx, ebp
0x51D111: call    CreatureSoundArray_ClearAllSounds
0x51D116: push    ebp
0x51D117: call    FormHeapFree
0x51D11C: add     esp, 4
0x51D11F: pop     ebp
0x51D120: push    ebx
0x51D121: lea     ecx, [esi+54h]
0x51D124: mov     dword ptr [esi+100h], 0
0x51D12E: call    TESSpellList_CopyFrom
0x51D133: push    ebx
0x51D134: lea     ecx, [esi+24h]
0x51D137: call    TESActorBaseData_CopyFrom
0x51D13C: push    ebx
0x51D13D: lea     ecx, [esi+80h]
0x51D143: call    TESHealthForm_CopyFrom
0x51D148: push    ebx
0x51D149: lea     ecx, [esi+88h]
0x51D14F: call    TESAttributes_CopyFrom
0x51D154: push    ebx
0x51D155: lea     ecx, [esi+0A0h]
0x51D15B: call    TESFullName_CopyFrom
0x51D160: push    ebx
0x51D161: lea     ecx, [esi+0ACh]
0x51D167: call    TESModel_CopyFrom
0x51D16C: push    ebx
0x51D16D: lea     ecx, [esi+0ECh]
0x51D173: call    sub_46DDC0
0x51D178: mov     ecx, [edi+104h]
0x51D17E: mov     [esi+104h], ecx
0x51D184: mov     dx, [edi+108h]
0x51D18B: mov     [esi+108h], dx
0x51D192: mov     eax, [edi+28h]
0x51D195: mov     edx, [esi+11Ch]
0x51D19B: mov     edx, [edx+8]
0x51D19E: mov     [esi+28h], eax
0x51D1A1: mov     cl, [edi+10Ah]
0x51D1A7: mov     [esi+10Ah], cl
0x51D1AD: fld     dword ptr [edi+10Ch]
0x51D1B3: fstp    dword ptr [esi+10Ch]
0x51D1B9: lea     ecx, [esi+11Ch]
0x51D1BF: fld     dword ptr [edi+114h]
0x51D1C5: lea     eax, [edi+11Ch]
0x51D1CB: fstp    dword ptr [esi+114h]
0x51D1D1: push    eax
0x51D1D2: fld     dword ptr [edi+110h]
0x51D1D8: fstp    dword ptr [esi+110h]
0x51D1DE: call    edx
0x51D1E0: mov     eax, [esi+134h]
0x51D1E6: mov     eax, [eax+8]
0x51D1E9: lea     ecx, [esi+134h]
0x51D1EF: lea     edx, [edi+134h]
0x51D1F5: push    edx
0x51D1F6: call    eax
0x51D1F8: mov     eax, [edi+28h]
0x51D1FB: shr     eax, 8
0x51D1FE: and     al, 1
0x51D200: jz      short loc_51D239
0x51D202: cmp     dword ptr [edi+100h], 0
0x51D209: jz      short loc_51D239
0x51D20B: mov     ecx, esi
0x51D20D: call    TESCreature_GetCreatureSoundArray
0x51D212: mov     ecx, [edi+28h]
0x51D215: shr     ecx, 8
0x51D218: test    cl, 1
0x51D21B: jz      short loc_51D22D
0x51D21D: mov     edx, [edi+100h]
0x51D223: push    edx
0x51D224: mov     ecx, eax
0x51D226: call    CreatureSoundArray_CopyFrom
0x51D22B: jmp     short loc_51D24F
0x51D22D: xor     edx, edx
0x51D22F: push    edx
0x51D230: mov     ecx, eax
0x51D232: call    CreatureSoundArray_CopyFrom
0x51D237: jmp     short loc_51D24F
0x51D239: test    al, al
0x51D23B: jz      short loc_51D241
0x51D23D: xor     eax, eax
0x51D23F: jmp     short loc_51D247
0x51D241: mov     eax, [edi+100h]
0x51D247: push    eax
0x51D248: mov     ecx, esi
0x51D24A: call    TESCreature_SetInheritedSoundSource
0x51D24F: mov     edx, [edi]
0x51D251: mov     eax, [edx+120h]
0x51D257: mov     ebx, [esi]
0x51D259: mov     ecx, edi
0x51D25B: call    eax
0x51D25D: mov     edx, [ebx+124h]
0x51D263: push    eax
0x51D264: mov     ecx, esi
0x51D266: call    edx
0x51D268: pop     edi
0x51D269: pop     esi
0x51D26A: pop     ebx
0x51D26B: retn    4
