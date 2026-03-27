0x4D8C80: push    0FFFFFFFFh
0x4D8C82: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4D8C87: mov     eax, large fs:0
0x4D8C8D: push    eax
0x4D8C8E: push    ecx
0x4D8C8F: push    ebx
0x4D8C90: push    esi
0x4D8C91: push    edi
0x4D8C92: mov     eax, ds:0B30AACh
0x4D8C97: xor     eax, esp
0x4D8C99: push    eax
0x4D8C9A: lea     eax, [esp+20h+var_C]
0x4D8C9E: mov     large fs:0, eax
0x4D8CA4: mov     esi, ecx
0x4D8CA6: mov     eax, [esi]
0x4D8CA8: mov     edx, [eax+170h]
0x4D8CAE: call    edx
0x4D8CB0: push    0; int
0x4D8CB2: push    offset ??_R0?AVTESMagicTargetForm@@@8; struct TypeDescriptor *
0x4D8CB7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D8CBC: push    0; int
0x4D8CBE: push    eax; void *
0x4D8CBF: call    OblivionDynamicCast
0x4D8CC4: add     esp, 14h
0x4D8CC7: test    eax, eax
0x4D8CC9: jz      loc_4D8D54
0x4D8CCF: push    0; int
0x4D8CD1: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x4D8CD6: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4D8CDB: push    0; int
0x4D8CDD: lea     ebx, [esi+44h]
0x4D8CE0: push    3Ah ; ':'; a2
0x4D8CE2: mov     ecx, ebx; this
0x4D8CE4: call    BaseExtraList_GetExtraData
0x4D8CE9: push    eax; void *
0x4D8CEA: call    OblivionDynamicCast
0x4D8CEF: mov     edi, eax
0x4D8CF1: add     esp, 14h
0x4D8CF4: test    edi, edi
0x4D8CF6: jnz     short loc_4D8D3E
0x4D8CF8: push    20h ; ' '; Size
0x4D8CFA: call    FormHeapAlloc
0x4D8CFF: add     esp, 4
0x4D8D02: mov     [esp+20h+var_10], eax
0x4D8D06: test    eax, eax
0x4D8D08: mov     [esp+20h+var_4], edi
0x4D8D0C: jz      short loc_4D8D1A
0x4D8D0E: push    esi
0x4D8D0F: mov     ecx, eax
0x4D8D11: call    NonActorMagicTarget_constr
0x4D8D16: mov     edi, eax
0x4D8D18: jmp     short loc_4D8D1C
0x4D8D1A: xor     edi, edi
0x4D8D1C: push    edi; BSExtraData *
0x4D8D1D: mov     ecx, ebx; ExtraDataList *
0x4D8D1F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4D8D27: call    BaseExtraList_AddExtra
0x4D8D2C: mov     eax, [esi]
0x4D8D2E: mov     edx, [eax+40h]
0x4D8D31: push    200000h
0x4D8D36: mov     ecx, esi
0x4D8D38: call    edx
0x4D8D3A: test    edi, edi
0x4D8D3C: jz      short loc_4D8D54
0x4D8D3E: lea     eax, [edi+0Ch]
0x4D8D41: mov     ecx, [esp+20h+var_C]
0x4D8D45: mov     large fs:0, ecx
0x4D8D4C: pop     ecx
0x4D8D4D: pop     edi
0x4D8D4E: pop     esi
0x4D8D4F: pop     ebx
0x4D8D50: add     esp, 10h
0x4D8D53: retn
0x4D8D54: xor     eax, eax
0x4D8D56: mov     ecx, [esp+20h+var_C]
0x4D8D5A: mov     large fs:0, ecx
0x4D8D61: pop     ecx
0x4D8D62: pop     edi
0x4D8D63: pop     esi
0x4D8D64: pop     ebx
0x4D8D65: add     esp, 10h
0x4D8D68: retn
