0x43E0F0: push    0FFFFFFFFh
0x43E0F2: push    offset SEH_43E0F0
0x43E0F7: mov     eax, large fs:0
0x43E0FD: push    eax
0x43E0FE: sub     esp, 38h
0x43E101: push    ebx
0x43E102: push    ebp
0x43E103: push    esi
0x43E104: push    edi
0x43E105: mov     eax, ___security_cookie
0x43E10A: xor     eax, esp
0x43E10C: push    eax
0x43E10D: lea     eax, [esp+58h+var_C]
0x43E111: mov     large fs:0, eax
0x43E117: mov     edi, ecx
0x43E119: mov     ecx, ioManager
0x43E11F: call    sub_432860
0x43E124: xor     ebx, ebx
0x43E126: mov     [esp+58h+var_3C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'
0x43E12E: mov     [esp+58h+var_38], ebx
0x43E132: mov     [esp+58h+var_34], ebx
0x43E136: mov     byte ptr [esp+58h+var_30], bl
0x43E13A: mov     ebp, ds:InterlockedDecrement
0x43E140: mov     [esp+58h+var_4], ebx
0x43E144: mov     [esp+58h+var_44], ebx
0x43E148: push    1
0x43E14A: lea     eax, [esp+5Ch+var_44]
0x43E14E: push    eax
0x43E14F: lea     ecx, [esp+60h+var_40]
0x43E153: push    ecx
0x43E154: mov     ecx, [edi+8]
0x43E157: lea     edx, [esp+64h+var_3C]
0x43E15B: push    edx
0x43E15C: mov     byte ptr [esp+68h+var_4], 1
0x43E161: call    sub_642D90
0x43E166: test    al, al
0x43E168: mov     esi, [esp+58h+var_44]
0x43E16C: jz      short loc_43E17A
0x43E16E: mov     ecx, ioManager
0x43E174: push    esi
0x43E175: call    sub_432130
0x43E17A: cmp     esi, ebx
0x43E17C: mov     byte ptr [esp+58h+var_4], bl
0x43E180: jz      short loc_43E196
0x43E182: lea     eax, [esi+8]
0x43E185: push    eax; lpAddend
0x43E186: call    ebp ; InterlockedDecrement
0x43E188: test    eax, eax
0x43E18A: jnz     short loc_43E196
0x43E18C: mov     edx, [esi]
0x43E18E: mov     eax, [edx]
0x43E190: push    1
0x43E192: mov     ecx, esi
0x43E194: call    eax
0x43E196: test    byte ptr [esp+58h+var_30], 2
0x43E19B: jz      short loc_43E144
0x43E19D: mov     [esp+58h+var_2C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVAnimIdle@@V?$NiPointer@VQueuedAnimIdle@@@@@@6B@; const LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::LockFreeMapIterator::`vftable'
0x43E1A5: mov     [esp+58h+var_28], ebx
0x43E1A9: mov     [esp+58h+var_24], ebx
0x43E1AD: mov     byte ptr [esp+58h+var_20], bl
0x43E1B1: mov     [esp+58h+var_44], ebx
0x43E1B5: push    1
0x43E1B7: lea     ecx, [esp+5Ch+var_44]
0x43E1BB: push    ecx
0x43E1BC: mov     ecx, [edi+0Ch]
0x43E1BF: lea     edx, [esp+60h+var_40]
0x43E1C3: push    edx
0x43E1C4: lea     eax, [esp+64h+var_2C]
0x43E1C8: push    eax
0x43E1C9: mov     byte ptr [esp+68h+var_4], 3
0x43E1CE: call    sub_642D90
0x43E1D3: test    al, al
0x43E1D5: mov     esi, [esp+58h+var_44]
0x43E1D9: jz      short loc_43E1E7
0x43E1DB: mov     ecx, ioManager
0x43E1E1: push    esi
0x43E1E2: call    sub_432130
0x43E1E7: cmp     esi, ebx
0x43E1E9: mov     byte ptr [esp+58h+var_4], 2
0x43E1EE: jz      short loc_43E204
0x43E1F0: lea     ecx, [esi+8]
0x43E1F3: push    ecx; lpAddend
0x43E1F4: call    ebp ; InterlockedDecrement
0x43E1F6: test    eax, eax
0x43E1F8: jnz     short loc_43E204
0x43E1FA: mov     edx, [esi]
0x43E1FC: mov     eax, [edx]
0x43E1FE: push    1
0x43E200: mov     ecx, esi
0x43E202: call    eax
0x43E204: test    byte ptr [esp+58h+var_20], 2
0x43E209: jz      short loc_43E1B1
0x43E20B: mov     [esp+58h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedHelmet@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::LockFreeMapIterator::`vftable'
0x43E213: mov     [esp+58h+var_18], ebx
0x43E217: mov     [esp+58h+var_14], ebx
0x43E21B: mov     [esp+58h+var_10], bl
0x43E21F: nop
0x43E220: mov     [esp+58h+var_44], ebx
0x43E224: push    1
0x43E226: lea     ecx, [esp+5Ch+var_44]
0x43E22A: push    ecx
0x43E22B: mov     ecx, [edi+10h]
0x43E22E: lea     edx, [esp+60h+var_40]
0x43E232: push    edx
0x43E233: lea     eax, [esp+64h+var_1C]
0x43E237: push    eax
0x43E238: mov     byte ptr [esp+68h+var_4], 5
0x43E23D: call    sub_642D90
0x43E242: test    al, al
0x43E244: mov     esi, [esp+58h+var_44]
0x43E248: jz      short loc_43E256
0x43E24A: mov     ecx, ioManager
0x43E250: push    esi
0x43E251: call    sub_432130
0x43E256: cmp     esi, ebx
0x43E258: mov     byte ptr [esp+58h+var_4], 4
0x43E25D: jz      short loc_43E273
0x43E25F: lea     ecx, [esi+8]
0x43E262: push    ecx; lpAddend
0x43E263: call    ebp ; InterlockedDecrement
0x43E265: test    eax, eax
0x43E267: jnz     short loc_43E273
0x43E269: mov     edx, [esi]
0x43E26B: mov     eax, [edx]
0x43E26D: push    1
0x43E26F: mov     ecx, esi
0x43E271: call    eax
0x43E273: test    [esp+58h+var_10], 2
0x43E278: jz      short loc_43E220
0x43E27A: mov     ecx, ioManager
0x43E280: mov     edx, [ecx]
0x43E282: mov     eax, [edx+48h]
0x43E285: call    eax
0x43E287: mov     ecx, ioManager
0x43E28D: call    sub_432890
0x43E292: mov     ecx, dword ptr [esp+58h+var_C]
0x43E296: mov     large fs:0, ecx
0x43E29D: pop     ecx
0x43E29E: pop     edi
0x43E29F: pop     esi
0x43E2A0: pop     ebp
0x43E2A1: pop     ebx
0x43E2A2: add     esp, 44h
0x43E2A5: retn
