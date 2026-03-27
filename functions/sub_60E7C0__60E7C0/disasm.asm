0x60E7C0: push    ecx
0x60E7C1: push    ebx
0x60E7C2: push    esi
0x60E7C3: mov     esi, ecx
0x60E7C5: push    edi
0x60E7C6: lea     ecx, [esi+44h]; this
0x60E7C9: xor     ebx, ebx
0x60E7CB: call    ExtraDataList_GetContainerChanges
0x60E7D0: fldz
0x60E7D2: mov     edi, eax
0x60E7D4: fstp    [esp+10h+var_4]
0x60E7D8: test    edi, edi
0x60E7DA: jz      short loc_60E7F9
0x60E7DC: mov     eax, [esp+10h+arg_0]
0x60E7E0: push    ebx
0x60E7E1: push    eax
0x60E7E2: lea     ecx, [esp+18h+var_4]
0x60E7E6: push    ecx
0x60E7E7: push    ebx; a2
0x60E7E8: mov     ecx, esi; this
0x60E7EA: call    Actor_GetActorBaseForm
0x60E7EF: push    eax
0x60E7F0: mov     ecx, edi
0x60E7F2: call    sub_48BDA0
0x60E7F7: mov     ebx, eax
0x60E7F9: cmp     dword ptr [esi+58h], 0
0x60E7FD: jz      short loc_60E814
0x60E7FF: mov     ecx, [esi+58h]
0x60E802: fld     [esp+10h+var_4]
0x60E806: mov     edx, [ecx]
0x60E808: mov     eax, [edx+328h]
0x60E80E: push    ecx
0x60E80F: fstp    [esp+14h+var_14]
0x60E812: call    eax
0x60E814: test    ebx, ebx
0x60E816: jz      short loc_60E894
0x60E818: cmp     esi, ds:0B333C4h
0x60E81E: jz      short loc_60E894
0x60E820: mov     eax, [ebx+8]
0x60E823: push    0; int
0x60E825: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x60E82A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60E82F: push    0; int
0x60E831: push    eax; void *
0x60E832: call    OblivionDynamicCast
0x60E837: add     esp, 14h
0x60E83A: test    eax, eax
0x60E83C: jz      short loc_60E894
0x60E83E: cmp     byte ptr [eax+90h], 5
0x60E845: jnz     short loc_60E894
0x60E847: mov     ecx, [esi+58h]
0x60E84A: mov     edx, [ecx]
0x60E84C: mov     eax, [edx+0F4h]
0x60E852: push    1
0x60E854: call    eax
0x60E856: test    eax, eax
0x60E858: jnz     short loc_60E894
0x60E85A: mov     edx, [esi]
0x60E85C: mov     eax, [edx+2BCh]
0x60E862: mov     ecx, esi
0x60E864: call    eax
0x60E866: mov     edi, eax
0x60E868: test    edi, edi
0x60E86A: jz      short loc_60E894
0x60E86C: mov     ecx, edi
0x60E86E: call    TESHealthForm_GetHealth
0x60E873: test    eax, eax
0x60E875: jge     short loc_60E879
0x60E877: neg     eax
0x60E879: mov     edx, [edi]
0x60E87B: xor     ecx, ecx
0x60E87D: test    edx, edx
0x60E87F: jz      short loc_60E883
0x60E881: mov     ecx, [edx]
0x60E883: push    0
0x60E885: push    1
0x60E887: push    ecx
0x60E888: mov     ecx, [edi+8]
0x60E88B: push    eax
0x60E88C: push    ecx
0x60E88D: mov     ecx, esi
0x60E88F: call    Actor_EquipItem
0x60E894: pop     edi
0x60E895: pop     esi
0x60E896: mov     eax, ebx
0x60E898: pop     ebx
0x60E899: pop     ecx
0x60E89A: retn    4
