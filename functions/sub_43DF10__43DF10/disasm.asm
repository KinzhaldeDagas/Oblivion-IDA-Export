0x43DF10: push    0FFFFFFFFh
0x43DF12: push    offset SEH_43DF10
0x43DF17: mov     eax, large fs:0
0x43DF1D: push    eax
0x43DF1E: sub     esp, 1Ch
0x43DF21: push    ebx
0x43DF22: push    ebp
0x43DF23: push    esi
0x43DF24: push    edi
0x43DF25: mov     eax, ___security_cookie
0x43DF2A: xor     eax, esp
0x43DF2C: push    eax
0x43DF2D: lea     eax, [esp+3Ch+var_C]
0x43DF31: mov     large fs:0, eax
0x43DF37: mov     [esp+3Ch+var_20], ecx
0x43DF3B: xor     ebx, ebx
0x43DF3D: mov     [esp+3Ch+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable'
0x43DF45: mov     [esp+3Ch+var_18], ebx
0x43DF49: mov     [esp+3Ch+var_14], ebx
0x43DF4D: mov     [esp+3Ch+var_10], bl
0x43DF51: mov     [esp+3Ch+var_4], ebx
0x43DF55: mov     [esp+3Ch+var_24], ebx
0x43DF59: mov     [esp+3Ch+var_28], ebx
0x43DF5D: push    1
0x43DF5F: lea     eax, [esp+40h+var_28]
0x43DF63: push    eax
0x43DF64: mov     eax, [esp+44h+var_20]
0x43DF68: lea     ecx, [esp+44h+var_24]
0x43DF6C: push    ecx
0x43DF6D: mov     ecx, [eax+8]
0x43DF70: lea     edx, [esp+48h+var_1C]
0x43DF74: push    edx
0x43DF75: mov     byte ptr [esp+4Ch+var_4], 1
0x43DF7A: call    sub_642D90
0x43DF7F: test    al, al
0x43DF81: mov     esi, [esp+3Ch+var_28]
0x43DF85: jz      short loc_43DFC1
0x43DF87: mov     ecx, [esp+3Ch+var_24]; this
0x43DF8B: call    TESObjectREFR_GetParentCell
0x43DF90: mov     ebp, eax
0x43DF92: cmp     ebp, ebx
0x43DF94: jz      short loc_43DFC1
0x43DF96: mov     eax, [esi+10h]
0x43DF99: mov     edx, [esi+14h]
0x43DF9C: mov     cl, 10h
0x43DF9E: call    __allshr
0x43DFA3: mov     ecx, TES
0x43DFA9: push    ebx
0x43DFAA: push    ebp
0x43DFAB: movzx   edi, al
0x43DFAE: call    sub_440C80
0x43DFB3: cmp     edi, eax
0x43DFB5: jz      short loc_43DFC1
0x43DFB7: mov     edx, [esi]
0x43DFB9: push    eax
0x43DFBA: mov     eax, [edx+1Ch]
0x43DFBD: mov     ecx, esi
0x43DFBF: call    eax
0x43DFC1: cmp     esi, ebx
0x43DFC3: mov     byte ptr [esp+3Ch+var_4], bl
0x43DFC7: jz      short loc_43DFE1
0x43DFC9: lea     ecx, [esi+8]
0x43DFCC: push    ecx; lpAddend
0x43DFCD: call    ds:InterlockedDecrement
0x43DFD3: test    eax, eax
0x43DFD5: jnz     short loc_43DFE1
0x43DFD7: mov     edx, [esi]
0x43DFD9: mov     eax, [edx]
0x43DFDB: push    1
0x43DFDD: mov     ecx, esi
0x43DFDF: call    eax
0x43DFE1: test    [esp+3Ch+var_10], 2
0x43DFE6: jz      loc_43DF55
0x43DFEC: mov     ecx, dword ptr [esp+3Ch+var_C]
0x43DFF0: mov     large fs:0, ecx
0x43DFF7: pop     ecx
0x43DFF8: pop     edi
0x43DFF9: pop     esi
0x43DFFA: pop     ebp
0x43DFFB: pop     ebx
0x43DFFC: add     esp, 28h
0x43DFFF: retn
