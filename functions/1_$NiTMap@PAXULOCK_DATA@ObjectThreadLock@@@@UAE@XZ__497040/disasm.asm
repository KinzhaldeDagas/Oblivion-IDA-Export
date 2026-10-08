0x497040: push    0FFFFFFFFh
0x497042: push    offset ??1?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@UAE@XZ_SEH
0x497047: mov     eax, large fs:0
0x49704D: push    eax
0x49704E: push    ecx
0x49704F: push    esi
0x497050: mov     eax, ds:0B30AACh
0x497055: xor     eax, esp
0x497057: push    eax
0x497058: lea     eax, [esp+18h+var_C]
0x49705C: mov     large fs:0, eax
0x497062: mov     esi, ecx
0x497064: mov     [esp+18h+var_10], esi
0x497068: mov     dword ptr [esi], offset ??_7?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x49706E: mov     [esp+18h+var_4], 0
0x497076: call    NiTMap_Clear
0x49707B: mov     ecx, esi
0x49707D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x497085: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULOCK_DATA@ObjectThreadLock@@@@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x49708B: call    NiTMap_Clear
0x497090: mov     eax, [esi+8]
0x497093: push    eax
0x497094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x497099: add     esp, 4
0x49709C: mov     ecx, [esp+18h+var_C]
0x4970A0: mov     large fs:0, ecx
0x4970A7: pop     ecx
0x4970A8: pop     esi
0x4970A9: add     esp, 10h
0x4970AC: retn
0x496E50: push    esi
0x496E51: mov     esi, ecx
0x496E53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULOCK_DATA@ObjectThreadLock@@@@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x496E59: call    NiTMap_Clear
0x496E5E: mov     eax, [esi+8]
0x496E61: push    eax
0x496E62: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x496E67: add     esp, 4
0x496E6A: pop     esi
0x496E6B: retn
0x9B0340: mov     ecx, [ebp-10h]
0x9B0343: jmp     loc_496E50
0x9B0348: mov     edx, [esp+arg_4]
0x9B034C: lea     eax, [edx-8]
0x9B034F: mov     ecx, [edx-0Ch]
0x9B0352: xor     ecx, eax
0x9B0354: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0359: mov     eax, offset stru_ADC6A4
0x9B035E: jmp     ___CxxFrameHandler3
