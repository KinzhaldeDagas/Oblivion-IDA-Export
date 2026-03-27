0x6904B0: push    0FFFFFFFFh
0x6904B2: push    offset ??1BoundItemEffect@@UAE@XZ_SEH
0x6904B7: mov     eax, large fs:0
0x6904BD: push    eax
0x6904BE: push    ecx
0x6904BF: push    ebx
0x6904C0: push    ebp
0x6904C1: push    esi
0x6904C2: push    edi
0x6904C3: mov     eax, ds:0B30AACh
0x6904C8: xor     eax, esp
0x6904CA: push    eax
0x6904CB: lea     eax, [esp+24h+var_C]
0x6904CF: mov     large fs:0, eax
0x6904D5: mov     esi, ecx
0x6904D7: mov     [esp+24h+var_10], esi
0x6904DB: mov     dword ptr [esi], offset ??_7BoundItemEffect@@6B@; const BoundItemEffect::`vftable'
0x6904E1: mov     eax, [esi+3Ch]
0x6904E4: xor     ebx, ebx
0x6904E6: cmp     eax, ebx
0x6904E8: mov     [esp+24h+var_4], ebx
0x6904EC: jz      short loc_690550
0x6904EE: cmp     [esi+86h], bl
0x6904F4: jz      short loc_690550
0x6904F6: mov     eax, [eax+8]
0x6904F9: push    ebx; int
0x6904FA: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x6904FF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690504: push    ebx; int
0x690505: push    eax; void *
0x690506: call    OblivionDynamicCast
0x69050B: add     esp, 14h
0x69050E: cmp     eax, ebx
0x690510: jz      short loc_690550
0x690512: movzx   ecx, word ptr [eax+38h]
0x690516: cmp     cx, 0FFFFh
0x69051B: jnz     short loc_690530
0x69051D: mov     ecx, [eax+34h]
0x690520: lea     edi, [ecx+1]
0x690523: mov     dl, [ecx]
0x690525: add     ecx, 1
0x690528: test    dl, dl
0x69052A: jnz     short loc_690523
0x69052C: sub     ecx, edi
0x69052E: jmp     short loc_690533
0x690530: movzx   ecx, cx
0x690533: cmp     ecx, ebx
0x690535: jbe     short loc_690550
0x690537: lea     ecx, [eax+30h]
0x69053A: mov     eax, [ecx]
0x69053C: mov     edx, [eax+14h]
0x69053F: push    1
0x690541: push    ebx
0x690542: call    edx
0x690544: mov     ecx, ds:0B33A1Ch
0x69054A: push    eax
0x69054B: call    QueuedModelLoader_RemoveModel
0x690550: cmp     [esi+87h], bl
0x690556: jz      loc_6905FF
0x69055C: mov     ecx, [esi+20h]
0x69055F: cmp     ecx, ebx
0x690561: jz      short loc_6905A6
0x690563: mov     eax, [ecx]
0x690565: mov     edx, [eax+4]
0x690568: call    edx
0x69056A: test    eax, eax
0x69056C: jz      short loc_6905A6
0x69056E: mov     ecx, [esi+20h]
0x690571: mov     eax, [ecx]
0x690573: mov     edx, [eax+4]
0x690576: call    edx
0x690578: mov     edx, [eax]
0x69057A: push    ebx; int
0x69057B: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x690580: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x690585: mov     ecx, eax
0x690587: mov     eax, [edx+170h]
0x69058D: push    ebx; int
0x69058E: call    eax
0x690590: push    eax; void *
0x690591: call    OblivionDynamicCast
0x690596: add     esp, 14h
0x690599: cmp     eax, ebx
0x69059B: jz      short loc_6905A6
0x69059D: mov     ecx, eax
0x69059F: call    TESActorBase_IsFemale
0x6905A4: mov     ebx, eax
0x6905A6: lea     edi, [esi+40h]
0x6905A9: mov     ebp, 10h
0x6905AE: mov     edi, edi
0x6905B0: mov     eax, [edi]
0x6905B2: test    eax, eax
0x6905B4: jz      short loc_6905F7
0x6905B6: mov     eax, [eax+8]
0x6905B9: test    eax, eax
0x6905BB: jz      short loc_6905F7
0x6905BD: push    0; int
0x6905BF: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x6905C4: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6905C9: push    0; int
0x6905CB: push    eax; void *
0x6905CC: call    OblivionDynamicCast
0x6905D1: add     esp, 14h
0x6905D4: test    eax, eax
0x6905D6: jz      short loc_6905F7
0x6905D8: push    1
0x6905DA: push    0
0x6905DC: push    ebx
0x6905DD: mov     ecx, eax
0x6905DF: mov     byte ptr [esi+87h], 1
0x6905E6: call    TESBipedModelForm_GetModelPath
0x6905EB: mov     ecx, ds:0B33A1Ch
0x6905F1: push    eax
0x6905F2: call    QueuedModelLoader_RemoveModel
0x6905F7: add     edi, 4
0x6905FA: sub     ebp, 1
0x6905FD: jnz     short loc_6905B0
0x6905FF: mov     eax, [esi+3Ch]
0x690602: test    eax, eax
0x690604: jz      short loc_69063B
0x690606: cmp     dword ptr [eax], 0
0x690609: jz      short loc_690611
0x69060B: mov     eax, [eax]
0x69060D: mov     ecx, [eax]
0x69060F: jmp     short loc_690613
0x690611: xor     ecx, ecx
0x690613: test    ecx, ecx
0x690615: jz      short loc_69061C
0x690617: call    sub_41F670
0x69061C: mov     ecx, [esi+3Ch]
0x69061F: call    ContainerEntryExtraData_ClearDataTable
0x690624: mov     edi, [esi+3Ch]
0x690627: test    edi, edi
0x690629: jz      short loc_69063B
0x69062B: mov     ecx, edi
0x69062D: call    ContainerEntryExtraData_DestroyDataTable
0x690632: push    edi
0x690633: call    FormHeapFree
0x690638: add     esp, 4
0x69063B: lea     edi, [esi+40h]
0x69063E: mov     ebx, 10h
0x690643: mov     eax, [edi]
0x690645: test    eax, eax
0x690647: jz      short loc_69067C
0x690649: cmp     dword ptr [eax], 0
0x69064C: jz      short loc_690654
0x69064E: mov     eax, [eax]
0x690650: mov     ecx, [eax]
0x690652: jmp     short loc_690656
0x690654: xor     ecx, ecx
0x690656: test    ecx, ecx
0x690658: jz      short loc_69065F
0x69065A: call    sub_41F670
0x69065F: mov     ecx, [edi]
0x690661: call    ContainerEntryExtraData_ClearDataTable
0x690666: mov     ebp, [edi]
0x690668: test    ebp, ebp
0x69066A: jz      short loc_69067C
0x69066C: mov     ecx, ebp
0x69066E: call    ContainerEntryExtraData_DestroyDataTable
0x690673: push    ebp
0x690674: call    FormHeapFree
0x690679: add     esp, 4
0x69067C: add     edi, 4
0x69067F: sub     ebx, 1
0x690682: jnz     short loc_690643
0x690684: cmp     byte ptr [esi+85h], 0
0x69068B: jz      short loc_690703
0x69068D: mov     ecx, [esi+8]
0x690690: test    ecx, ecx
0x690692: jz      short loc_690703
0x690694: cmp     dword ptr [esi+0Ch], 0
0x690698: jz      short loc_690703
0x69069A: push    0
0x69069C: call    MagicItem_GetFXEffect
0x6906A1: mov     ecx, [esi+8]
0x6906A4: mov     edi, eax
0x6906A6: mov     eax, [esi+0Ch]
0x6906A9: mov     eax, [eax+10h]
0x6906AC: push    0
0x6906AE: push    eax
0x6906AF: add     ecx, 0Ch
0x6906B2: call    EffectItemList_GetStrongestItem
0x6906B7: movzx   ecx, word ptr [edi+20h]
0x6906BB: cmp     cx, 0FFFFh
0x6906C0: jnz     short loc_6906D5
0x6906C2: mov     ecx, [edi+1Ch]
0x6906C5: lea     ebp, [ecx+1]
0x6906C8: mov     dl, [ecx]
0x6906CA: add     ecx, 1
0x6906CD: test    dl, dl
0x6906CF: jnz     short loc_6906C8
0x6906D1: sub     ecx, ebp
0x6906D3: jmp     short loc_6906D8
0x6906D5: movzx   ecx, cx
0x6906D8: test    ecx, ecx
0x6906DA: jbe     short loc_6906FC
0x6906DC: cmp     [esi+0Ch], eax
0x6906DF: jnz     short loc_6906FC
0x6906E1: mov     edx, [edi+18h]
0x6906E4: mov     eax, [edx+14h]
0x6906E7: lea     ecx, [edi+18h]
0x6906EA: push    1
0x6906EC: push    0
0x6906EE: call    eax
0x6906F0: mov     ecx, ds:0B33A1Ch
0x6906F6: push    eax
0x6906F7: call    QueuedModelLoader_RemoveModel
0x6906FC: mov     byte ptr [esi+85h], 0
0x690703: mov     ecx, esi; this
0x690705: mov     [esp+24h+var_4], 0FFFFFFFFh
0x69070D: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x690712: mov     ecx, dword ptr [esp+24h+var_C]
0x690716: mov     large fs:0, ecx
0x69071D: pop     ecx
0x69071E: pop     edi
0x69071F: pop     esi
0x690720: pop     ebp
0x690721: pop     ebx
0x690722: add     esp, 10h
0x690725: retn
