0x4970D0: push    0FFFFFFFFh
0x4970D2: push    offset ??0?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@QAE@XZ_SEH
0x4970D7: mov     eax, large fs:0
0x4970DD: push    eax
0x4970DE: push    ecx
0x4970DF: push    esi
0x4970E0: mov     eax, ds:0B30AACh
0x4970E5: xor     eax, esp
0x4970E7: push    eax
0x4970E8: lea     eax, [esp+18h+var_C]
0x4970EC: mov     large fs:0, eax
0x4970F2: mov     esi, ecx
0x4970F4: mov     [esp+18h+var_10], esi
0x4970F8: xor     ecx, ecx
0x4970FA: mov     eax, 25h ; '%'
0x4970FF: mov     [esi+4], eax
0x497102: mov     edx, 4
0x497107: mul     edx
0x497109: seto    cl
0x49710C: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@ULOCK_DATA@ObjectThreadLock@@@@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x497112: mov     dword ptr [esi+0Ch], 0
0x497119: neg     ecx
0x49711B: or      ecx, eax
0x49711D: push    ecx; Size
0x49711E: call    FormHeapAlloc
0x497123: mov     ecx, [esi+4]
0x497126: add     ecx, ecx
0x497128: add     ecx, ecx
0x49712A: push    ecx
0x49712B: push    0
0x49712D: push    eax
0x49712E: mov     [esi+8], eax
0x497131: call    __memset
0x497136: add     esp, 10h
0x497139: mov     dword ptr [esi], offset ??_7?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@6B@; const NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable'
0x49713F: lea     ecx, [esi+80h]; lpCriticalSection
0x497145: mov     [esp+18h+var_4], 0
0x49714D: call    NiInitalizeCriticalSection
0x497152: mov     dword ptr [esi+100h], 0Ah
0x49715C: mov     eax, esi
0x49715E: mov     ecx, [esp+18h+var_C]
0x497162: mov     large fs:0, ecx
0x497169: pop     ecx
0x49716A: pop     esi
0x49716B: add     esp, 10h
0x49716E: retn
