0x6D56A0: push    0FFFFFFFFh
0x6D56A2: push    offset SEH_8C8970
0x6D56A7: mov     eax, large fs:0
0x6D56AD: push    eax
0x6D56AE: push    ecx
0x6D56AF: push    ebx
0x6D56B0: push    esi
0x6D56B1: mov     eax, ds:0B30AACh
0x6D56B6: xor     eax, esp
0x6D56B8: push    eax
0x6D56B9: lea     eax, [esp+1Ch+var_C]
0x6D56BD: mov     large fs:0, eax
0x6D56C3: push    58h ; 'X'; Size
0x6D56C5: call    FormHeapAlloc
0x6D56CA: mov     esi, eax
0x6D56CC: add     esp, 4
0x6D56CF: mov     [esp+1Ch+var_10], esi
0x6D56D3: xor     ebx, ebx
0x6D56D5: cmp     esi, ebx
0x6D56D7: mov     [esp+1Ch+var_4], ebx
0x6D56DB: jz      short loc_6D5714
0x6D56DD: mov     ecx, esi; this
0x6D56DF: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6D56E4: mov     dword ptr [esi], offset ??_7NiUVController@@6B@; const NiUVController::`vftable'
0x6D56EA: mov     [esi+50h], ebx
0x6D56ED: mov     [esi+4Ch], bx
0x6D56F1: mov     [esi+3Ch], ebx
0x6D56F4: mov     [esi+44h], ebx
0x6D56F7: mov     [esi+40h], ebx
0x6D56FA: mov     [esi+48h], ebx
0x6D56FD: mov     [esi+54h], bl
0x6D5700: mov     eax, esi
0x6D5702: mov     ecx, [esp+1Ch+var_C]
0x6D5706: mov     large fs:0, ecx
0x6D570D: pop     ecx
0x6D570E: pop     esi
0x6D570F: pop     ebx
0x6D5710: add     esp, 10h
0x6D5713: retn
0x6D5714: xor     eax, eax
0x6D5716: mov     ecx, [esp+1Ch+var_C]
0x6D571A: mov     large fs:0, ecx
0x6D5721: pop     ecx
0x6D5722: pop     esi
0x6D5723: pop     ebx
0x6D5724: add     esp, 10h
0x6D5727: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
