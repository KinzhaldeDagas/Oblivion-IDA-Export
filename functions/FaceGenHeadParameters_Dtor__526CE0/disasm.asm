0x526CE0: push    0FFFFFFFFh; Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
0x526CE2: push    offset FaceGenHeadParameters_Dtor_SEH
0x526CE7: mov     eax, large fs:0
0x526CED: push    eax
0x526CEE: push    ecx
0x526CEF: push    esi
0x526CF0: push    edi
0x526CF1: mov     eax, ds:0B30AACh
0x526CF6: xor     eax, esp
0x526CF8: push    eax
0x526CF9: lea     eax, [esp+1Ch+var_C]
0x526CFD: mov     large fs:0, eax
0x526D03: mov     esi, ecx
0x526D05: mov     [esp+1Ch+var_10], esi
0x526D09: mov     eax, [esi+0A8h]
0x526D0F: test    eax, eax
0x526D11: mov     [esp+1Ch+var_4], 3
0x526D19: mov     dword ptr [esi+0A4h], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x526D23: jz      short loc_526D42
0x526D25: mov     ecx, [eax-4]
0x526D28: lea     edi, [eax-4]
0x526D2B: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x526D30: push    ecx; int
0x526D31: push    4; unsigned int
0x526D33: push    eax; void *
0x526D34: call    $LN21
0x526D39: push    edi
0x526D3A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x526D3F: add     esp, 4
0x526D42: mov     eax, [esi+98h]
0x526D48: push    eax
0x526D49: mov     dword ptr [esi+94h], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x526D53: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x526D58: mov     eax, [esi+88h]
0x526D5E: push    eax
0x526D5F: mov     dword ptr [esi+84h], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x526D69: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x526D6E: mov     eax, [esi+78h]
0x526D71: push    eax
0x526D72: mov     dword ptr [esi+74h], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x526D79: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x526D7E: add     esp, 0Ch
0x526D81: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x526D86: push    4; int
0x526D88: push    18h; unsigned int
0x526D8A: push    esi; void *
0x526D8B: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x526D93: call    $LN21
0x526D98: mov     ecx, [esp+1Ch+var_C]
0x526D9C: mov     large fs:0, ecx
0x526DA3: pop     ecx
0x526DA4: pop     edi
0x526DA5: pop     esi
0x526DA6: add     esp, 10h
0x526DA9: retn
0x431320: mov     eax, [ecx+4]
0x431323: push    eax
0x431324: mov     dword ptr [ecx], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x43132A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43132F: pop     ecx
0x431330: retn
0x521CB0: mov     eax, [ecx+4]
0x521CB3: push    eax
0x521CB4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVTESModel@@@@6B@; const NiTArray<TESModel *>::`vftable'
0x521CBA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CBF: pop     ecx
0x521CC0: retn
0x521CD0: mov     eax, [ecx+4]
0x521CD3: push    eax
0x521CD4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAVTESTexture@@@@6B@; const NiTArray<TESTexture *>::`vftable'
0x521CDA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CDF: pop     ecx
0x521CE0: retn
0x9B80A0: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B80A5: push    4; int
0x9B80A7: push    18h; unsigned int
0x9B80A9: mov     eax, [ebp-10h]
0x9B80AC: push    eax; void *
0x9B80AD: call    $LN21
0x9B80B2: retn
0x9B80B3: mov     ecx, [ebp-10h]
0x9B80B6: add     ecx, 74h ; 't'
0x9B80B9: jmp     loc_521CB0
0x9B80BE: mov     ecx, [ebp-10h]
0x9B80C1: add     ecx, 84h ; '„'
0x9B80C7: jmp     loc_521CD0
0x9B80CC: mov     ecx, [ebp-10h]
0x9B80CF: add     ecx, 94h ; '”'
0x9B80D5: jmp     loc_431320
0x9B80DA: mov     edx, [esp+arg_4]
0x9B80DE: lea     eax, [edx-0Ch]
0x9B80E1: mov     ecx, [edx-10h]
0x9B80E4: xor     ecx, eax
0x9B80E6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B80EB: mov     eax, offset stru_AE286C
0x9B80F0: jmp     ___CxxFrameHandler3
