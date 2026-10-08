0x643230: push    0FFFFFFFFh
0x643232: push    offset SEH_643230
0x643237: mov     eax, large fs:0
0x64323D: push    eax
0x64323E: sub     esp, 1Ch
0x643241: push    ebx
0x643242: push    ebp
0x643243: push    esi
0x643244: push    edi
0x643245: mov     eax, ds:0B30AACh
0x64324A: xor     eax, esp
0x64324C: push    eax
0x64324D: lea     eax, [esp+3Ch+var_C]
0x643251: mov     large fs:0, eax
0x643257: mov     esi, ecx
0x643259: mov     [esp+3Ch+var_20], esi
0x64325D: xor     ebx, ebx
0x64325F: mov     [esp+3Ch+var_4], ebx
0x643263: mov     [esp+3Ch+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'
0x64326B: mov     [esp+3Ch+var_18], ebx
0x64326F: mov     [esp+3Ch+var_14], ebx
0x643273: mov     [esp+3Ch+var_10], bl
0x643277: mov     ebp, ds:0A2807Ch
0x64327D: lea     ecx, [ecx+0]
0x643280: mov     [esp+3Ch+var_24], ebx
0x643284: mov     [esp+3Ch+task], ebx
0x643288: push    1
0x64328A: lea     eax, [esp+40h+task]
0x64328E: push    eax
0x64328F: lea     ecx, [esp+44h+var_24]
0x643293: push    ecx
0x643294: lea     edx, [esp+48h+var_1C]
0x643298: push    edx
0x643299: mov     ecx, esi
0x64329B: mov     byte ptr [esp+4Ch+var_4], 2
0x6432A0: call    sub_642D90
0x6432A5: test    al, al
0x6432A7: mov     edi, [esp+3Ch+task]
0x6432AB: jz      short loc_6432C7
0x6432AD: mov     ecx, [esp+3Ch+var_24]
0x6432B1: mov     eax, [esi]
0x6432B3: mov     edx, [eax+10h]
0x6432B6: push    ecx
0x6432B7: mov     ecx, esi
0x6432B9: call    edx
0x6432BB: mov     ecx, ds:0B33A10h
0x6432C1: push    edi; task
0x6432C2: call    IOTask_Cancel; Verified generic IOTask cancellation state machine: previous states 0/1/2 atomically transition to 6 and invoke vtable +0x0C with status 0; state 5 transitions to 6 and invokes it with status 1; states 3/4 wait for the worker's state change. Verified local role: state 6 is the cancellation/terminal marker written by IOTask_Cancel. Its canonical enum label remains Unknown.
0x6432C7: cmp     edi, ebx
0x6432C9: mov     byte ptr [esp+3Ch+var_4], 1
0x6432CE: jz      short loc_6432E4
0x6432D0: lea     eax, [edi+8]
0x6432D3: push    eax; lpAddend
0x6432D4: call    ebp ; InterlockedDecrement
0x6432D6: test    eax, eax
0x6432D8: jnz     short loc_6432E4
0x6432DA: mov     edx, [edi]
0x6432DC: mov     eax, [edx]
0x6432DE: push    1
0x6432E0: mov     ecx, edi
0x6432E2: call    eax
0x6432E4: test    [esp+3Ch+var_10], 2
0x6432E9: jz      short loc_643280
0x6432EB: push    1
0x6432ED: mov     ecx, esi
0x6432EF: mov     [esp+40h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'
0x6432F7: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6432FF: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'
0x643305: call    sub_642E50
0x64330A: mov     ecx, [esi+0Ch]
0x64330D: push    ecx
0x64330E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x643313: mov     edx, [esi+4]
0x643316: mov     [esp+40h+var_20], edx
0x64331A: mov     eax, [esp+40h+var_20]
0x64331E: push    eax
0x64331F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x643324: add     esp, 8
0x643327: mov     ecx, [esp+3Ch+var_C]
0x64332B: mov     large fs:0, ecx
0x643332: pop     ecx
0x643333: pop     edi
0x643334: pop     esi
0x643335: pop     ebp
0x643336: pop     ebx
0x643337: add     esp, 28h
0x64333A: retn
0x642B30: mov     dword ptr [ecx], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'
0x642B36: retn
0x642FB0: push    ecx
0x642FB1: push    esi
0x642FB2: mov     esi, ecx
0x642FB4: push    1
0x642FB6: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'
0x642FBC: call    sub_642E50
0x642FC1: mov     eax, [esi+0Ch]
0x642FC4: push    eax
0x642FC5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x642FCA: mov     ecx, [esi+4]
0x642FCD: mov     [esp+48h+var_40], ecx
0x642FD1: mov     edx, [esp+48h+var_40]
0x642FD5: push    edx
0x642FD6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x642FDB: add     esp, 8
0x642FDE: pop     esi
0x642FDF: pop     ecx
0x642FE0: retn
0x9C3980: mov     ecx, [ebp-20h]
0x9C3983: jmp     loc_642FB0
0x9C3988: lea     ecx, [ebp-1Ch]
0x9C398B: jmp     loc_642B30
0x9C3990: lea     ecx, [ebp-28h]; void *
0x9C3993: jmp     sub_4BDDC0
0x9C3998: mov     edx, [esp+arg_4]
0x9C399C: lea     eax, [edx-2Ch]
0x9C399F: mov     ecx, [edx-30h]
0x9C39A2: xor     ecx, eax
0x9C39A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C39A9: mov     eax, offset stru_AEC504
0x9C39AE: jmp     ___CxxFrameHandler3
