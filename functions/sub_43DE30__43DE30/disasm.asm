0x43DE30: push    0FFFFFFFFh
0x43DE32: push    offset SEH_43DE30
0x43DE37: mov     eax, large fs:0
0x43DE3D: push    eax
0x43DE3E: sub     esp, 14h
0x43DE41: push    ebx
0x43DE42: push    ebp
0x43DE43: push    esi
0x43DE44: push    edi
0x43DE45: mov     eax, ___security_cookie
0x43DE4A: xor     eax, esp
0x43DE4C: push    eax
0x43DE4D: lea     eax, [esp+34h+var_C]
0x43DE51: mov     large fs:0, eax
0x43DE57: mov     edi, ecx
0x43DE59: xor     ebx, ebx
0x43DE5B: mov     [esp+34h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'
0x43DE63: mov     [esp+34h+var_18], ebx
0x43DE67: mov     [esp+34h+var_14], ebx
0x43DE6B: mov     byte ptr [esp+34h+var_10], bl
0x43DE6F: mov     ebp, [esp+34h+arg_0]
0x43DE73: mov     [esp+34h+var_4], ebx
0x43DE77: jmp     short loc_43DE80
0x43DE79: align 10h
0x43DE80: mov     [esp+34h+arg_0], ebx
0x43DE84: mov     [esp+34h+var_20], ebx
0x43DE88: push    1
0x43DE8A: lea     eax, [esp+38h+var_20]
0x43DE8E: push    eax
0x43DE8F: lea     ecx, [esp+3Ch+arg_0]
0x43DE93: push    ecx
0x43DE94: mov     ecx, [edi+8]
0x43DE97: lea     edx, [esp+40h+var_1C]
0x43DE9B: push    edx
0x43DE9C: mov     byte ptr [esp+44h+var_4], 1
0x43DEA1: call    sub_642D90
0x43DEA6: test    al, al
0x43DEA8: jz      short loc_43DEC1
0x43DEAA: mov     esi, [esp+34h+arg_0]
0x43DEAE: mov     ecx, esi; this
0x43DEB0: call    TESObjectREFR_GetParentCell
0x43DEB5: cmp     eax, ebp
0x43DEB7: jnz     short loc_43DEC1
0x43DEB9: push    esi
0x43DEBA: mov     ecx, edi
0x43DEBC: call    sub_439DC0
0x43DEC1: mov     esi, [esp+34h+var_20]
0x43DEC5: cmp     esi, ebx
0x43DEC7: mov     byte ptr [esp+34h+var_4], bl
0x43DECB: jz      short loc_43DEE5
0x43DECD: lea     eax, [esi+8]
0x43DED0: push    eax; lpAddend
0x43DED1: call    ds:InterlockedDecrement
0x43DED7: test    eax, eax
0x43DED9: jnz     short loc_43DEE5
0x43DEDB: mov     edx, [esi]
0x43DEDD: mov     eax, [edx]
0x43DEDF: push    1
0x43DEE1: mov     ecx, esi
0x43DEE3: call    eax
0x43DEE5: test    byte ptr [esp+34h+var_10], 2
0x43DEEA: jz      short loc_43DE80
0x43DEEC: mov     ecx, dword ptr [esp+34h+var_C]
0x43DEF0: mov     large fs:0, ecx
0x43DEF7: pop     ecx
0x43DEF8: pop     edi
0x43DEF9: pop     esi
0x43DEFA: pop     ebp
0x43DEFB: pop     ebx
0x43DEFC: add     esp, 20h
0x43DEFF: retn    4
