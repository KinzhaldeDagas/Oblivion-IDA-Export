0x6ECD50: push    0FFFFFFFFh
0x6ECD52: push    offset ??1NiExtraDataController@@UAE@XZ_SEH
0x6ECD57: mov     eax, large fs:0
0x6ECD5D: push    eax
0x6ECD5E: push    ecx
0x6ECD5F: push    esi
0x6ECD60: push    edi
0x6ECD61: mov     eax, ds:0B30AACh
0x6ECD66: xor     eax, esp
0x6ECD68: push    eax
0x6ECD69: lea     eax, [esp+1Ch+var_C]
0x6ECD6D: mov     large fs:0, eax
0x6ECD73: mov     esi, ecx
0x6ECD75: mov     [esp+1Ch+var_10], esi
0x6ECD79: mov     dword ptr [esi], offset ??_7NiExtraDataController@@6B@; const NiExtraDataController::`vftable'
0x6ECD7F: mov     eax, [esi+40h]
0x6ECD82: push    eax
0x6ECD83: mov     [esp+20h+var_4], 0
0x6ECD8B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6ECD90: mov     edi, [esi+44h]
0x6ECD93: add     esp, 4
0x6ECD96: test    edi, edi
0x6ECD98: jz      short loc_6ECDB6
0x6ECD9A: lea     eax, [edi+4]
0x6ECD9D: push    eax; lpAddend
0x6ECD9E: call    dword ptr ds:0A2807Ch
0x6ECDA4: test    eax, eax
0x6ECDA6: jnz     short loc_6ECDB6
0x6ECDA8: test    edi, edi
0x6ECDAA: jz      short loc_6ECDB6
0x6ECDAC: mov     edx, [edi]
0x6ECDAE: mov     eax, [edx]
0x6ECDB0: push    1
0x6ECDB2: mov     ecx, edi
0x6ECDB4: call    eax
0x6ECDB6: mov     ecx, esi; this
0x6ECDB8: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6ECDC0: call    ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x6ECDC5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6ECDC9: mov     large fs:0, ecx
0x6ECDD0: pop     ecx
0x6ECDD1: pop     edi
0x6ECDD2: pop     esi
0x6ECDD3: add     esp, 10h
0x6ECDD6: retn
0x9C8320: mov     ecx, [ebp-10h]; this
0x9C8323: jmp     ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x9C8328: mov     edx, [esp+arg_4]
0x9C832C: lea     eax, [edx-0Ch]
0x9C832F: mov     ecx, [edx-10h]
0x9C8332: xor     ecx, eax
0x9C8334: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8339: mov     eax, offset stru_AF05E0
0x9C833E: jmp     ___CxxFrameHandler3
