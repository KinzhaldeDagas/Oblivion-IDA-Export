0x44E720: push    ebp
0x44E721: mov     ebp, esp
0x44E723: and     esp, 0FFFFFFC0h
0x44E726: push    0FFFFFFFFh
0x44E728: push    offset SEH_44E720
0x44E72D: mov     eax, large fs:0
0x44E733: push    eax
0x44E734: sub     esp, 6A8h
0x44E73A: mov     eax, ds:0B30AACh
0x44E73F: xor     eax, esp
0x44E741: mov     [esp+6B4h+var_44], eax
0x44E748: push    ebx
0x44E749: push    esi
0x44E74A: push    edi
0x44E74B: mov     eax, ds:0B30AACh
0x44E750: xor     eax, esp
0x44E752: push    eax
0x44E753: lea     eax, [esp+6C4h+var_C]
0x44E75A: mov     large fs:0, eax
0x44E760: xor     ebx, ebx
0x44E762: cmp     ds:0B05584h, bl
0x44E768: mov     edi, ecx
0x44E76A: mov     [esp+6C4h+var_67C], edi
0x44E76E: jnz     loc_44E815
0x44E774: mov     byte ptr [edi+0CD6h], 1
0x44E77B: cmp     ds:0B055A4h, bl
0x44E781: jz      short loc_44E78E
0x44E783: mov     ecx, ds:0B33398h
0x44E789: call    sub_40D160
0x44E78E: cmp     ds:0B0558Ch, bl
0x44E794: jz      short loc_44E7A8
0x44E796: push    offset aModelModelBoun; "Model\tModel Bound\tDisplay Triangle Co"...
0x44E79B: push    offset aTestmodelsColl; "TestModels - Collision Info.xls"
0x44E7A0: call    nullsub_return0_0arg
0x44E7A5: add     esp, 8
0x44E7A8: mov     ecx, [edi]
0x44E7AA: call    TESHealthForm_GetHealth
0x44E7AF: mov     esi, eax
0x44E7B1: cmp     esi, ebx
0x44E7B3: mov     [esp+6C4h+var_680], esi
0x44E7B7: mov     [esp+6C4h+var_670], ebx
0x44E7BB: jz      short loc_44E80F
0x44E7BD: mov     eax, [esi+8]
0x44E7C0: shr     eax, 5
0x44E7C3: test    al, 1
0x44E7C5: jnz     short loc_44E7FA
0x44E7C7: mov     al, [esi+4]
0x44E7CA: xor     ecx, ecx
0x44E7CC: lea     esp, [esp+0]
0x44E7D0: cmp     ds:byte_B081AC[ecx], al
0x44E7D6: jz      short loc_44E83B
0x44E7D8: add     ecx, 1
0x44E7DB: cmp     ecx, 24h ; '$'
0x44E7DE: jl      short loc_44E7D0
0x44E7E0: mov     eax, [esi]
0x44E7E2: mov     edx, [eax+0D4h]
0x44E7E8: mov     ecx, esi
0x44E7EA: call    edx
0x44E7EC: push    eax; ArgList
0x44E7ED: push    offset aObjectSInvalid; "Object \"%s\" invalid type."
0x44E7F2: call    PrintError
0x44E7F7: add     esp, 8
0x44E7FA: mov     ecx, esi
0x44E7FC: call    TESObject_GetNextObject
0x44E801: mov     esi, eax
0x44E803: cmp     esi, ebx
0x44E805: mov     [esp+6C4h+var_680], esi
0x44E809: jnz     short loc_44E7BD
0x44E80B: mov     edi, [esp+6C4h+var_67C]
0x44E80F: mov     [edi+0CD6h], bl
0x44E815: mov     ecx, [esp+6C4h+var_C]
0x44E81C: mov     large fs:0, ecx
0x44E823: pop     ecx
0x44E824: pop     edi
0x44E825: pop     esi
0x44E826: pop     ebx
0x44E827: mov     ecx, [esp+6B4h+var_44]
0x44E82E: xor     ecx, esp
0x44E830: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44E835: mov     esp, ebp
0x44E837: pop     ebp
0x44E838: retn    4
0x44E83B: cmp     ecx, 24h ; '$'
0x44E83E: mov     [esp+6C4h+var_698], ecx
0x44E842: jge     short loc_44E7E0
0x44E844: mov     edx, [esi]
0x44E846: mov     eax, [edx+0F4h]
0x44E84C: mov     ecx, esi
0x44E84E: mov     [esp+6C4h+var_699], bl
0x44E852: call    eax
0x44E854: test    al, al
0x44E856: jz      short loc_44E85D
0x44E858: mov     [esp+6C4h+var_699], 1
0x44E85D: push    ebx; int
0x44E85E: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x44E863: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44E868: push    ebx; int
0x44E869: push    esi; void *
0x44E86A: call    OblivionDynamicCast
0x44E86F: push    ebx; int
0x44E870: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x44E875: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44E87A: push    ebx; int
0x44E87B: push    esi; void *
0x44E87C: mov     edi, eax
0x44E87E: call    OblivionDynamicCast
0x44E883: push    ebx; int
0x44E884: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x44E889: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44E88E: push    ebx; int
0x44E88F: push    esi; void *
0x44E890: mov     [esp+700h+var_690], eax
0x44E894: call    OblivionDynamicCast
0x44E899: add     esp, 3Ch
0x44E89C: cmp     edi, ebx
0x44E89E: mov     [esp+6C4h+var_694], eax
0x44E8A2: jz      short loc_44E8AE
0x44E8A4: mov     [esp+6C4h+var_688], 1
0x44E8AC: jmp     short loc_44E8C3
0x44E8AE: mov     eax, [esp+6C4h+var_694]
0x44E8B2: neg     eax
0x44E8B4: sbb     eax, eax
0x44E8B6: and     eax, 4
0x44E8B9: mov     [esp+6C4h+var_688], eax
0x44E8BD: jz      loc_44E7FA
0x44E8C3: cmp     [esp+6C4h+var_694], ebx
0x44E8C7: jz      short def_44E8D5
0x44E8C9: mov     eax, [esp+6C4h+var_688]
0x44E8CD: add     eax, 0FFFFFFFFh; switch 4 cases
0x44E8D0: cmp     eax, 3
0x44E8D3: ja      short def_44E8D5
0x44E8D5: jmp     ds:jpt_44E8D5[eax*4]; switch jump
0x44E8DC: mov     ecx, [esp+6C4h+var_694]; jumptable 0044E8D5 case 1
0x44E8E0: push    ebx
0x44E8E1: call    TESBipedModelForm_GetWorldModel
0x44E8E6: jmp     short loc_44E903
0x44E8E8: mov     ecx, [esp+6C4h+var_694]; jumptable 0044E8D5 case 2
0x44E8EC: push    1
0x44E8EE: call    TESBipedModelForm_GetWorldModel
0x44E8F3: jmp     short loc_44E903
0x44E8F5: push    ebx; jumptable 0044E8D5 case 3
0x44E8F6: jmp     short loc_44E8FA
0x44E8F8: push    1; jumptable 0044E8D5 case 4
0x44E8FA: mov     ecx, [esp+6C8h+var_694]
0x44E8FE: call    TESBipedModelForm_GetBipedModel
0x44E903: mov     edi, eax
