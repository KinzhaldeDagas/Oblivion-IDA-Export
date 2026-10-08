0xA1BA90: mov     ecx, offset unk_B35C80
0xA1BA95: jmp     loc_497170
0x497170: push    0FFFFFFFFh
0x497172: push    offset loc_9B03B6
0x497177: mov     eax, large fs:0
0x49717D: push    eax
0x49717E: push    ecx
0x49717F: push    esi
0x497180: mov     eax, ds:0B30AACh
0x497185: xor     eax, esp
0x497187: push    eax
0x497188: lea     eax, [esp+18h+var_C]
0x49718C: mov     large fs:0, eax
0x497192: mov     esi, ecx
0x497194: mov     [esp+18h+var_10], esi
0x497198: mov     [esp+18h+var_4], 1
0x4971A0: call    NiTMap_Clear
0x4971A5: lea     ecx, [esi+80h]; lpCriticalSection
0x4971AB: mov     byte ptr [esp+18h+var_4], 0
0x4971B0: call    NiDeleteCriticalSection
0x4971B5: mov     ecx, esi
0x4971B7: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4971BF: call    ??1?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@UAE@XZ; NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(void)
0x4971C4: mov     ecx, [esp+18h+var_C]
0x4971C8: mov     large fs:0, ecx
0x4971CF: pop     ecx
0x4971D0: pop     esi
0x4971D1: add     esp, 10h
0x4971D4: retn
0x9B03A0: mov     ecx, [ebp-10h]
0x9B03A3: jmp     ??1?$NiTMap@PAXULOCK_DATA@ObjectThreadLock@@@@UAE@XZ; NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(void)
0x9B03A8: mov     ecx, [ebp-10h]
0x9B03AB: add     ecx, 80h ; '€'; lpCriticalSection
0x9B03B1: jmp     NiDeleteCriticalSection
0x9B03B6: mov     edx, [esp+arg_4]
0x9B03BA: lea     eax, [edx-8]
0x9B03BD: mov     ecx, [edx-0Ch]
0x9B03C0: xor     ecx, eax
0x9B03C2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B03C7: mov     eax, offset stru_ADC704
0x9B03CC: jmp     ___CxxFrameHandler3
