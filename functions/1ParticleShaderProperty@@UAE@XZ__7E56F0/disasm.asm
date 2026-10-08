0x7E56F0: push    0FFFFFFFFh
0x7E56F2: push    offset ??1ParticleShaderProperty@@UAE@XZ_SEH
0x7E56F7: mov     eax, large fs:0
0x7E56FD: push    eax
0x7E56FE: push    ecx
0x7E56FF: push    ebp
0x7E5700: push    esi
0x7E5701: push    edi
0x7E5702: mov     eax, ds:0B30AACh
0x7E5707: xor     eax, esp
0x7E5709: push    eax
0x7E570A: lea     eax, [esp+20h+var_C]
0x7E570E: mov     large fs:0, eax
0x7E5714: mov     esi, ecx
0x7E5716: mov     [esp+20h+var_10], esi
0x7E571A: mov     dword ptr [esi], offset ??_7ParticleShaderProperty@@6B@; const ParticleShaderProperty::`vftable'
0x7E5720: mov     edi, [esi+10Ch]
0x7E5726: test    edi, edi
0x7E5728: mov     [esp+20h+var_4], 2
0x7E5730: jz      short loc_7E5758
0x7E5732: lea     eax, [edi+4]
0x7E5735: push    eax; lpAddend
0x7E5736: call    dword ptr ds:0A2807Ch
0x7E573C: test    eax, eax
0x7E573E: jnz     short loc_7E574E
0x7E5740: test    edi, edi
0x7E5742: jz      short loc_7E574E
0x7E5744: mov     edx, [edi]
0x7E5746: mov     eax, [edx]
0x7E5748: push    1
0x7E574A: mov     ecx, edi
0x7E574C: call    eax
0x7E574E: mov     dword ptr [esi+10Ch], 0
0x7E5758: lea     edi, [esi+110h]
0x7E575E: mov     ecx, edi; this
0x7E5760: call    NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.
0x7E5765: mov     eax, [esi+6Ch]
0x7E5768: push    eax
0x7E5769: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E576E: add     esp, 4
0x7E5771: sub     dword ptr ds:0B46048h, 1
0x7E5778: jnz     short loc_7E5793
0x7E577A: mov     ecx, ds:0B46044h
0x7E5780: push    ecx
0x7E5781: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E5786: add     esp, 4
0x7E5789: mov     dword ptr ds:0B46044h, 0
0x7E5793: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x7E5799: mov     edi, [edi+4]
0x7E579C: test    edi, edi
0x7E579E: mov     byte ptr [esp+20h+var_4], 1
0x7E57A3: jz      short loc_7E57C2
0x7E57A5: mov     edx, [edi-4]
0x7E57A8: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x7E57AD: lea     ebp, [edi-4]
0x7E57B0: push    edx; int
0x7E57B1: push    4; unsigned int
0x7E57B3: push    edi; void *
0x7E57B4: call    $LN21
0x7E57B9: push    ebp
0x7E57BA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E57BF: add     esp, 4
0x7E57C2: mov     edi, [esi+10Ch]
0x7E57C8: test    edi, edi
0x7E57CA: mov     byte ptr [esp+20h+var_4], 0
0x7E57CF: jz      short loc_7E57ED
0x7E57D1: lea     eax, [edi+4]
0x7E57D4: push    eax; lpAddend
0x7E57D5: call    dword ptr ds:0A2807Ch
0x7E57DB: test    eax, eax
0x7E57DD: jnz     short loc_7E57ED
0x7E57DF: test    edi, edi
0x7E57E1: jz      short loc_7E57ED
0x7E57E3: mov     edx, [edi]
0x7E57E5: mov     eax, [edx]
0x7E57E7: push    1
0x7E57E9: mov     ecx, edi
0x7E57EB: call    eax
0x7E57ED: mov     ecx, esi; this
0x7E57EF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E57F7: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7E57FC: mov     ecx, [esp+20h+var_C]
0x7E5800: mov     large fs:0, ecx
0x7E5807: pop     ecx
0x7E5808: pop     edi
0x7E5809: pop     esi
0x7E580A: pop     ebp
0x7E580B: add     esp, 10h
0x7E580E: retn
0x4B2E30: mov     eax, [ecx+4]
0x4B2E33: test    eax, eax
0x4B2E35: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x4B2E3B: jz      short locret_4B2E5C
0x4B2E3D: mov     ecx, [eax-4]
0x4B2E40: push    esi
0x4B2E41: lea     esi, [eax-4]
0x4B2E44: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x4B2E49: push    ecx; int
0x4B2E4A: push    4; unsigned int
0x4B2E4C: push    eax; void *
0x4B2E4D: call    $LN21
0x4B2E52: push    esi
0x4B2E53: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B2E58: add     esp, 4
0x4B2E5B: pop     esi
0x4B2E5C: retn
0x9CF7C0: mov     ecx, [ebp-10h]; this
0x9CF7C3: jmp     ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x9CF7C8: mov     ecx, [ebp-10h]
0x9CF7CB: add     ecx, 10Ch; slot
0x9CF7D1: jmp     NiPointerSlot_Release
0x9CF7D6: mov     ecx, [ebp-10h]
0x9CF7D9: add     ecx, 110h
0x9CF7DF: jmp     loc_4B2E30
0x9CF7E4: mov     edx, [esp+arg_4]
0x9CF7E8: lea     eax, [edx-10h]
0x9CF7EB: mov     ecx, [edx-14h]
0x9CF7EE: xor     ecx, eax
0x9CF7F0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF7F5: mov     eax, offset stru_AF83E8
0x9CF7FA: jmp     ___CxxFrameHandler3
