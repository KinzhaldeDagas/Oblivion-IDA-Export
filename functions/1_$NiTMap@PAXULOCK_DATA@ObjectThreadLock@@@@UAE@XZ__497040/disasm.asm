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
0x497094: call    FormHeapFree
0x497099: add     esp, 4
0x49709C: mov     ecx, [esp+18h+var_C]
0x4970A0: mov     large fs:0, ecx
0x4970A7: pop     ecx
0x4970A8: pop     esi
0x4970A9: add     esp, 10h
0x4970AC: retn
