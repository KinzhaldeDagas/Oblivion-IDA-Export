0x69E890: sub     esp, 8
0x69E893: push    ebx
0x69E894: push    esi
0x69E895: push    edi
0x69E896: push    4; Size
0x69E898: lea     eax, [esp+18h+var_4]
0x69E89C: mov     esi, ecx
0x69E89E: mov     ecx, ds:0B33B00h
0x69E8A4: push    eax; Dst
0x69E8A5: mov     bl, 1
0x69E8A7: call    SaveLoad_LoadFormID
0x69E8AC: mov     ecx, [esp+1Ch+a1]
0x69E8B0: push    0; int
0x69E8B2: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x69E8B7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x69E8BC: push    0; int
0x69E8BE: push    ecx; a1
0x69E8BF: call    TESForm_LookupByFormID
0x69E8C4: add     esp, 4
0x69E8C7: push    eax; void *
0x69E8C8: call    OblivionDynamicCast
0x69E8CD: add     esp, 14h
0x69E8D0: test    eax, eax
0x69E8D2: mov     [esi+1Ch], eax
0x69E8D5: jz      short loc_69E8F0
0x69E8D7: mov     ecx, eax; this
0x69E8D9: call    TESObjectREFR_GetParentCell
0x69E8DE: test    eax, eax
0x69E8E0: jz      short loc_69E8F0
0x69E8E2: mov     ecx, [esi+1Ch]; this
0x69E8E5: call    TESObjectREFR_GetParentCell
0x69E8EA: cmp     byte ptr [eax+26h], 6
0x69E8EE: jz      short loc_69E8F2
0x69E8F0: xor     bl, bl
0x69E8F2: mov     ecx, ds:0B33B00h
0x69E8F8: push    1; Size
0x69E8FA: lea     edx, [esp+20h+var_D]
0x69E8FE: push    edx; Dst
0x69E8FF: call    SaveLoad_LoadData
0x69E904: movzx   eax, [esp+1Ch+var_D]
0x69E909: add     eax, 1
0x69E90C: push    eax; Size
0x69E90D: call    FormHeapAlloc
0x69E912: movzx   ecx, [esp+20h+var_D]
0x69E917: add     ecx, 1
0x69E91A: push    ecx
0x69E91B: mov     edi, eax
0x69E91D: push    0
0x69E91F: push    edi
0x69E920: call    __memset
0x69E925: movzx   edx, [esp+2Ch+var_D]
0x69E92A: mov     ecx, ds:0B33B00h
0x69E930: add     esp, 10h
0x69E933: push    edx; Size
0x69E934: push    edi; Dst
0x69E935: call    SaveLoad_LoadData
0x69E93A: mov     ecx, [esi+1Ch]
0x69E93D: mov     eax, [esi]
0x69E93F: mov     edx, [eax+7Ch]
0x69E942: push    ecx
0x69E943: push    0
0x69E945: mov     ecx, esi
0x69E947: mov     byte ptr [esi+28h], 1
0x69E94B: call    edx
0x69E94D: test    bl, bl
0x69E94F: jz      short loc_69E976
0x69E951: mov     ecx, [esi+1Ch]
0x69E954: mov     eax, [esi]
0x69E956: mov     edx, [eax+80h]
0x69E95C: push    ecx
0x69E95D: push    0
0x69E95F: mov     ecx, esi
0x69E961: call    edx
0x69E963: mov     ecx, [esi+1Ch]
0x69E966: mov     eax, [esi]
0x69E968: mov     edx, [eax+84h]
0x69E96E: push    edi
0x69E96F: push    ecx
0x69E970: push    0
0x69E972: mov     ecx, esi
0x69E974: call    edx
0x69E976: pop     edi
0x69E977: pop     esi
0x69E978: mov     al, bl
0x69E97A: pop     ebx
0x69E97B: add     esp, 8
0x69E97E: retn
