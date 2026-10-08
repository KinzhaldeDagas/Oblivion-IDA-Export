0x70B810: push    0FFFFFFFFh
0x70B812: push    offset ??1NiBSPNode@@UAE@XZ_SEH
0x70B817: mov     eax, large fs:0
0x70B81D: push    eax
0x70B81E: sub     esp, 8
0x70B821: push    ebx
0x70B822: push    ebp
0x70B823: push    esi
0x70B824: push    edi
0x70B825: mov     eax, ds:0B30AACh
0x70B82A: xor     eax, esp
0x70B82C: push    eax
0x70B82D: lea     eax, [esp+28h+var_C]
0x70B831: mov     large fs:0, eax
0x70B837: mov     ebp, ecx
0x70B839: mov     [esp+28h+var_10], ebp
0x70B83D: mov     dword ptr [ebp+0], offset ??_7NiNode@@6B@;
0x70B844: mov     [esp+28h+var_4], 2
0x70B84C: call    sub_708B80
0x70B851: xor     ebx, ebx
0x70B853: xor     edi, edi
0x70B855: cmp     [ebp+0B6h], bx
0x70B85C: jbe     short loc_70B89B
0x70B85E: mov     edi, edi
0x70B860: push    edi
0x70B861: lea     eax, [esp+2Ch+var_14]
0x70B865: push    eax
0x70B866: mov     ecx, ebp
0x70B868: call    NiNode__RemoveObjectAt
0x70B86D: mov     esi, [esp+28h+var_14]
0x70B871: cmp     esi, ebx
0x70B873: jz      short loc_70B88D
0x70B875: lea     ecx, [esi+4]
0x70B878: push    ecx; lpAddend
0x70B879: call    dword ptr ds:0A2807Ch
0x70B87F: test    eax, eax
0x70B881: jnz     short loc_70B88D
0x70B883: mov     edx, [esi]
0x70B885: mov     eax, [edx]
0x70B887: push    1
0x70B889: mov     ecx, esi
0x70B88B: call    eax
0x70B88D: movzx   ecx, word ptr [ebp+0B6h]
0x70B894: add     edi, 1
0x70B897: cmp     edi, ecx
0x70B899: jb      short loc_70B860
0x70B89B: lea     esi, [ebp+0BCh]
0x70B8A1: mov     [esp+28h+var_14], esi
0x70B8A5: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x70B8AB: mov     edi, [esi+4]
0x70B8AE: cmp     edi, ebx
0x70B8B0: mov     byte ptr [esp+28h+var_4], 3
0x70B8B5: jz      short loc_70B8C9
0x70B8B7: mov     edx, [esi]
0x70B8B9: mov     eax, edi
0x70B8BB: mov     edi, [edi]
0x70B8BD: push    eax
0x70B8BE: mov     eax, [edx+8]
0x70B8C1: mov     ecx, esi
0x70B8C3: call    eax
0x70B8C5: cmp     edi, ebx
0x70B8C7: jnz     short loc_70B8B7
0x70B8C9: mov     [esi+0Ch], ebx
0x70B8CC: mov     [esi+4], ebx
0x70B8CF: mov     [esi+8], ebx
0x70B8D2: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x70B8D8: mov     eax, [ebp+0B0h]
0x70B8DE: cmp     eax, ebx
0x70B8E0: mov     byte ptr [esp+28h+var_4], bl
0x70B8E4: mov     dword ptr [ebp+0ACh], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x70B8EE: jz      short loc_70B90D
0x70B8F0: mov     ecx, [eax-4]
0x70B8F3: lea     esi, [eax-4]
0x70B8F6: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x70B8FB: push    ecx; int
0x70B8FC: push    4; unsigned int
0x70B8FE: push    eax; void *
0x70B8FF: call    $LN21
0x70B904: push    esi
0x70B905: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x70B90A: add     esp, 4
0x70B90D: mov     ecx, ebp; this
0x70B90F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x70B917: call    ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x70B91C: mov     ecx, [esp+28h+var_C]
0x70B920: mov     large fs:0, ecx
0x70B927: pop     ecx
0x70B928: pop     edi
0x70B929: pop     esi
0x70B92A: pop     ebp
0x70B92B: pop     ebx
0x70B92C: add     esp, 14h
0x70B92F: retn
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
0x709F10: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x709F16: retn
0x9C9A30: mov     ecx, [ebp-10h]; this
0x9C9A33: jmp     ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x9C9A38: mov     ecx, [ebp-10h]
0x9C9A3B: add     ecx, 0ACh ; '¬'
0x9C9A41: jmp     loc_4B2E30
0x9C9A46: mov     ecx, [ebp-10h]
0x9C9A49: add     ecx, 0BCh ; '¼'
0x9C9A4F: jmp     j_??1?$NiTPointerList@PAVNiDynamicEffect@@@@UAE@XZ; NiTPointerList<NiDynamicEffect *>::~NiTPointerList<NiDynamicEffect *>(void)
0x9C9A54: mov     ecx, [ebp-14h]
0x9C9A57: jmp     loc_709F10
0x9C9A5C: mov     edx, [esp+arg_4]
0x9C9A60: lea     eax, [edx-18h]
0x9C9A63: mov     ecx, [edx-1Ch]
0x9C9A66: xor     ecx, eax
0x9C9A68: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9A6D: mov     eax, offset stru_AF2294
0x9C9A72: jmp     ___CxxFrameHandler3
