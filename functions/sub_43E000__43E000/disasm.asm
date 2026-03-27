0x43E000: push    0FFFFFFFFh
0x43E002: push    offset SEH_43E000
0x43E007: mov     eax, large fs:0
0x43E00D: push    eax
0x43E00E: sub     esp, 18h
0x43E011: push    ebx
0x43E012: push    ebp
0x43E013: push    esi
0x43E014: push    edi
0x43E015: mov     eax, ___security_cookie
0x43E01A: xor     eax, esp
0x43E01C: push    eax
0x43E01D: lea     eax, [esp+38h+var_C]
0x43E021: mov     large fs:0, eax
0x43E027: mov     edi, ecx
0x43E029: xor     ebx, ebx
0x43E02B: mov     [esp+38h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'
0x43E033: mov     [esp+38h+var_18], ebx
0x43E037: mov     [esp+38h+var_14], ebx
0x43E03B: mov     byte ptr [esp+38h+var_10], bl
0x43E03F: mov     ebp, ds:InterlockedDecrement
0x43E045: mov     [esp+38h+var_4], ebx
0x43E049: lea     esp, [esp+0]
0x43E050: mov     [esp+38h+var_20], ebx
0x43E054: mov     [esp+38h+var_24], ebx
0x43E058: push    1
0x43E05A: lea     eax, [esp+3Ch+var_24]
0x43E05E: push    eax
0x43E05F: lea     ecx, [esp+40h+var_20]
0x43E063: push    ecx
0x43E064: mov     ecx, [edi+8]
0x43E067: lea     edx, [esp+44h+var_1C]
0x43E06B: push    edx
0x43E06C: mov     byte ptr [esp+48h+var_4], 1
0x43E071: call    sub_642D90
0x43E076: test    al, al
0x43E078: jz      short loc_43E089
0x43E07A: mov     ecx, [esp+38h+var_20]; this
0x43E07E: call    TESObjectREFR_GetParentCell
0x43E083: cmp     eax, [esp+38h+arg_0]
0x43E087: jz      short loc_43E0C8
0x43E089: mov     esi, [esp+38h+var_24]
0x43E08D: cmp     esi, ebx
0x43E08F: mov     byte ptr [esp+38h+var_4], bl
0x43E093: jz      short loc_43E0A9
0x43E095: lea     eax, [esi+8]
0x43E098: push    eax; lpAddend
0x43E099: call    ebp ; InterlockedDecrement
0x43E09B: test    eax, eax
0x43E09D: jnz     short loc_43E0A9
0x43E09F: mov     edx, [esi]
0x43E0A1: mov     eax, [edx]
0x43E0A3: push    1
0x43E0A5: mov     ecx, esi
0x43E0A7: call    eax
0x43E0A9: test    byte ptr [esp+38h+var_10], 2
0x43E0AE: jz      short loc_43E050
0x43E0B0: xor     al, al
0x43E0B2: mov     ecx, dword ptr [esp+38h+var_C]
0x43E0B6: mov     large fs:0, ecx
0x43E0BD: pop     ecx
0x43E0BE: pop     edi
0x43E0BF: pop     esi
0x43E0C0: pop     ebp
0x43E0C1: pop     ebx
0x43E0C2: add     esp, 24h
0x43E0C5: retn    4
0x43E0C8: mov     esi, [esp+38h+var_24]
0x43E0CC: cmp     esi, ebx
0x43E0CE: mov     byte ptr [esp+38h+var_4], bl
0x43E0D2: jz      short loc_43E0E8
0x43E0D4: lea     ecx, [esi+8]
0x43E0D7: push    ecx; lpAddend
0x43E0D8: call    ebp ; InterlockedDecrement
0x43E0DA: test    eax, eax
0x43E0DC: jnz     short loc_43E0E8
0x43E0DE: mov     edx, [esi]
0x43E0E0: mov     eax, [edx]
0x43E0E2: push    1
0x43E0E4: mov     ecx, esi
0x43E0E6: call    eax
0x43E0E8: mov     al, 1
0x43E0EA: jmp     short loc_43E0B2
