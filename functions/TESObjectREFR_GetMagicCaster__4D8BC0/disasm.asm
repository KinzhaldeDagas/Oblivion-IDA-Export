0x4D8BC0: push    0FFFFFFFFh
0x4D8BC2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4D8BC7: mov     eax, large fs:0
0x4D8BCD: push    eax
0x4D8BCE: push    ecx
0x4D8BCF: push    ebx
0x4D8BD0: push    esi
0x4D8BD1: push    edi
0x4D8BD2: mov     eax, ds:0B30AACh
0x4D8BD7: xor     eax, esp
0x4D8BD9: push    eax
0x4D8BDA: lea     eax, [esp+20h+var_C]
0x4D8BDE: mov     large fs:0, eax
0x4D8BE4: mov     edi, ecx
0x4D8BE6: push    0; int
0x4D8BE8: push    offset ??_R0?AVNonActorMagicCaster@@@8; struct TypeDescriptor *
0x4D8BED: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4D8BF2: push    0; int
0x4D8BF4: lea     ebx, [edi+44h]
0x4D8BF7: push    39h ; '9'; a2
0x4D8BF9: mov     ecx, ebx; this
0x4D8BFB: call    BaseExtraList_GetExtraData
0x4D8C00: push    eax; void *
0x4D8C01: call    OblivionDynamicCast
0x4D8C06: mov     esi, eax
0x4D8C08: add     esp, 14h
0x4D8C0B: test    esi, esi
0x4D8C0D: jnz     short loc_4D8C55
0x4D8C0F: push    24h ; '$'; Size
0x4D8C11: call    FormHeapAlloc
0x4D8C16: add     esp, 4
0x4D8C19: mov     [esp+20h+var_10], eax
0x4D8C1D: test    eax, eax
0x4D8C1F: mov     [esp+20h+var_4], esi
0x4D8C23: jz      short loc_4D8C31
0x4D8C25: push    edi
0x4D8C26: mov     ecx, eax; this
0x4D8C28: call    ??0NonActorMagicCaster@@QAE@XZ; NonActorMagicCaster::NonActorMagicCaster(void)
0x4D8C2D: mov     esi, eax
0x4D8C2F: jmp     short loc_4D8C33
0x4D8C31: xor     esi, esi
0x4D8C33: push    esi; BSExtraData *
0x4D8C34: mov     ecx, ebx; ExtraDataList *
0x4D8C36: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4D8C3E: call    BaseExtraList_AddExtra
0x4D8C43: mov     eax, [edi]
0x4D8C45: mov     edx, [eax+40h]
0x4D8C48: push    200000h
0x4D8C4D: mov     ecx, edi
0x4D8C4F: call    edx
0x4D8C51: test    esi, esi
0x4D8C53: jz      short loc_4D8C6B
0x4D8C55: lea     eax, [esi+0Ch]
0x4D8C58: mov     ecx, dword ptr [esp+20h+var_C]
0x4D8C5C: mov     large fs:0, ecx
0x4D8C63: pop     ecx
0x4D8C64: pop     edi
0x4D8C65: pop     esi
0x4D8C66: pop     ebx
0x4D8C67: add     esp, 10h
0x4D8C6A: retn
0x4D8C6B: xor     eax, eax
0x4D8C6D: mov     ecx, dword ptr [esp+20h+var_C]
0x4D8C71: mov     large fs:0, ecx
0x4D8C78: pop     ecx
0x4D8C79: pop     edi
0x4D8C7A: pop     esi
0x4D8C7B: pop     ebx
0x4D8C7C: add     esp, 10h
0x4D8C7F: retn
