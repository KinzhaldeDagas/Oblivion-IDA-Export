0x8B7520: push    0FFFFFFFFh
0x8B7522: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8B7527: mov     eax, large fs:0
0x8B752D: push    eax
0x8B752E: push    ecx
0x8B752F: push    ebx
0x8B7530: push    ebp
0x8B7531: push    esi
0x8B7532: push    edi
0x8B7533: mov     eax, ds:0B30AACh
0x8B7538: xor     eax, esp
0x8B753A: push    eax
0x8B753B: lea     eax, [esp+24h+var_C]
0x8B753F: mov     large fs:0, eax
0x8B7545: mov     edi, ecx
0x8B7547: push    offset stru_BA7C80; lpCriticalSection
0x8B754C: call    dword ptr ds:0A2806Ch
0x8B7552: call    dword ptr ds:0A2808Ch
0x8B7558: mov     ebp, 1
0x8B755D: add     ds:0BA7CFCh, ebp
0x8B7563: push    14h; Size
0x8B7565: mov     ds:0BA7CF8h, eax
0x8B756A: call    FormHeapAlloc
0x8B756F: mov     esi, eax
0x8B7571: add     esp, 4
0x8B7574: mov     [esp+24h+var_10], esi
0x8B7578: xor     ebx, ebx
0x8B757A: cmp     esi, ebx
0x8B757C: mov     [esp+24h+var_4], ebx
0x8B7580: jz      short loc_8B75B5
0x8B7582: mov     ecx, esi; this
0x8B7584: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B7589: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B758F: mov     [esi+0Ch], ebx
0x8B7592: mov     [esi+10h], ebx
0x8B7595: add     ds:0BA7D70h, ebp
0x8B759B: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8B75A1: add     ds:0BA7F44h, ebp
0x8B75A7: mov     dword ptr [esi], offset ??_7bhkMultiSphereShape@@6B@; const bhkMultiSphereShape::`vftable'
0x8B75AD: add     ds:0BA7FE8h, ebp
0x8B75B3: jmp     short loc_8B75B7
0x8B75B5: xor     esi, esi
0x8B75B7: mov     ecx, [esp+24h+arg_0]
0x8B75BB: mov     eax, [edi]
0x8B75BD: mov     edx, [eax+80h]
0x8B75C3: push    ecx
0x8B75C4: push    esi
0x8B75C5: mov     ecx, edi
0x8B75C7: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8B75CF: call    edx
0x8B75D1: sub     ds:0BA7CFCh, ebp
0x8B75D7: jnz     short loc_8B75DF
0x8B75D9: mov     ds:0BA7CF8h, ebx
0x8B75DF: push    offset stru_BA7C80; lpCriticalSection
0x8B75E4: call    dword ptr ds:0A28074h
0x8B75EA: mov     eax, esi
0x8B75EC: mov     ecx, dword ptr [esp+24h+var_C]
0x8B75F0: mov     large fs:0, ecx
0x8B75F7: pop     ecx
0x8B75F8: pop     edi
0x8B75F9: pop     esi
0x8B75FA: pop     ebp
0x8B75FB: pop     ebx
0x8B75FC: add     esp, 10h
0x8B75FF: retn    4
