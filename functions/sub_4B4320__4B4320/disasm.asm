0x4B4320: push    ecx
0x4B4321: push    edi
0x4B4322: mov     edi, ecx
0x4B4324: mov     eax, [edi+8]
0x4B4327: shr     eax, 3
0x4B432A: test    al, 1
0x4B432C: jnz     short loc_4B4399
0x4B432E: cmp     dword ptr [edi+30h], 0
0x4B4332: push    esi
0x4B4333: lea     esi, [edi+30h]
0x4B4336: jz      short loc_4B438F
0x4B4338: push    0FFFFFFFFh; a2
0x4B433A: call    TESForm_GetOverrideFile
0x4B433F: push    eax; a2
0x4B4340: push    esi; a1
0x4B4341: call    TESForm_ResolveFormID
0x4B4346: mov     edx, [esi]
0x4B4348: add     esp, 8
0x4B434B: lea     ecx, [esp+0Ch+var_4]
0x4B434F: push    ecx
0x4B4350: push    edx
0x4B4351: mov     ecx, offset TESForm_FormIDMap
0x4B4356: call    NiTMap_GetAt
0x4B435B: test    al, al
0x4B435D: jz      short loc_4B4389
0x4B435F: mov     eax, [esp+0Ch+var_4]
0x4B4363: push    0; int
0x4B4365: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x4B436A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B436F: push    0; int
0x4B4371: push    eax; void *
0x4B4372: call    OblivionDynamicCast
0x4B4377: add     esp, 14h
0x4B437A: push    1; a2
0x4B437C: mov     ecx, edi; this
0x4B437E: mov     [esi], eax
0x4B4380: call    TESForm_SetIsLinked
0x4B4385: pop     esi
0x4B4386: pop     edi
0x4B4387: pop     ecx
0x4B4388: retn
0x4B4389: mov     dword ptr [esi], 0
0x4B438F: push    1; a2
0x4B4391: mov     ecx, edi; this
0x4B4393: call    TESForm_SetIsLinked
0x4B4398: pop     esi
0x4B4399: pop     edi
0x4B439A: pop     ecx
0x4B439B: retn
