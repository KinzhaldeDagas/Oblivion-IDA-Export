0x4BDC50: push    0FFFFFFFFh
0x4BDC52: push    offset SEH_4BDC50
0x4BDC57: mov     eax, large fs:0
0x4BDC5D: push    eax
0x4BDC5E: push    ecx
0x4BDC5F: push    esi
0x4BDC60: mov     eax, ds:0B30AACh
0x4BDC65: xor     eax, esp
0x4BDC67: push    eax
0x4BDC68: lea     eax, [esp+18h+var_C]
0x4BDC6C: mov     large fs:0, eax
0x4BDC72: mov     esi, ecx
0x4BDC74: mov     [esp+18h+var_10], esi
0x4BDC78: mov     [esp+18h+var_4], 0
0x4BDC80: call    sub_4BD8C0
0x4BDC85: push    1
0x4BDC87: mov     ecx, esi
0x4BDC89: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BDC91: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VDistantLODLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<DistantLODLoaderTask>>::`vftable'
0x4BDC97: call    sub_642E50
0x4BDC9C: mov     eax, [esi+0Ch]
0x4BDC9F: push    eax
0x4BDCA0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BDCA5: mov     ecx, [esi+4]
0x4BDCA8: mov     [esp+1Ch+var_10], ecx
0x4BDCAC: mov     edx, [esp+1Ch+var_10]
0x4BDCB0: push    edx
0x4BDCB1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BDCB6: add     esp, 8
0x4BDCB9: mov     ecx, [esp+18h+var_C]
0x4BDCBD: mov     large fs:0, ecx
0x4BDCC4: pop     ecx
0x4BDCC5: pop     esi
0x4BDCC6: add     esp, 10h
0x4BDCC9: retn
0x4BDC10: push    ecx
0x4BDC11: push    esi
0x4BDC12: mov     esi, ecx
0x4BDC14: push    1
0x4BDC16: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VDistantLODLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<DistantLODLoaderTask>>::`vftable'
0x4BDC1C: call    sub_642E50
0x4BDC21: mov     eax, [esi+0Ch]
0x4BDC24: push    eax
0x4BDC25: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BDC2A: mov     ecx, [esi+4]
0x4BDC2D: mov     [esp+0Ch+var_4], ecx
0x4BDC31: mov     edx, [esp+0Ch+var_4]
0x4BDC35: push    edx
0x4BDC36: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BDC3B: add     esp, 8
0x4BDC3E: pop     esi
0x4BDC3F: pop     ecx
0x4BDC40: retn
0x9B4440: mov     ecx, [ebp-10h]
0x9B4443: jmp     loc_4BDC10
0x9B4448: mov     edx, [esp+arg_4]
0x9B444C: lea     eax, [edx-8]
0x9B444F: mov     ecx, [edx-0Ch]
0x9B4452: xor     ecx, eax
0x9B4454: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4459: mov     eax, offset stru_ADFB0C
0x9B445E: jmp     ___CxxFrameHandler3
