0x69E4F0: push    0FFFFFFFFh
0x69E4F2: push    offset MagicModelHitEffect_constr_args_SEH
0x69E4F7: mov     eax, large fs:0
0x69E4FD: push    eax
0x69E4FE: push    ecx
0x69E4FF: push    ebx
0x69E500: push    ebp
0x69E501: push    esi
0x69E502: push    edi
0x69E503: mov     eax, ds:0B30AACh
0x69E508: xor     eax, esp
0x69E50A: push    eax
0x69E50B: lea     eax, [esp+24h+var_C]
0x69E50F: mov     large fs:0, eax
0x69E515: mov     esi, ecx
0x69E517: mov     [esp+24h+var_10], esi
0x69E51B: mov     eax, [esp+24h+arg_0]
0x69E51F: xor     ebx, ebx
0x69E521: push    ebx
0x69E522: push    eax
0x69E523: call    MagicHitEffect_constr_args
0x69E528: mov     dword ptr [esi], offset ??_7MagicModelHitEffect@@6B@; const MagicModelHitEffect::`vftable'
0x69E52E: mov     [esp+24h+var_4], ebx
0x69E532: mov     [esi+30h], ebx
0x69E535: mov     [esi+34h], ebx
0x69E538: mov     edi, [esi+30h]
0x69E53B: cmp     edi, ebx
0x69E53D: mov     ebp, ds:0A2807Ch
0x69E543: mov     byte ptr [esp+24h+var_4], 2
0x69E548: jz      short loc_69E565
0x69E54A: lea     ecx, [edi+4]
0x69E54D: push    ecx; lpAddend
0x69E54E: call    ebp ; InterlockedDecrement
0x69E550: test    eax, eax
0x69E552: jnz     short loc_69E562
0x69E554: cmp     edi, ebx
0x69E556: jz      short loc_69E562
0x69E558: mov     edx, [edi]
0x69E55A: mov     eax, [edx]
0x69E55C: push    1
0x69E55E: mov     ecx, edi
0x69E560: call    eax
0x69E562: mov     [esi+30h], ebx
0x69E565: mov     edi, [esi+34h]
0x69E568: cmp     edi, ebx
0x69E56A: jz      short loc_69E587
0x69E56C: lea     ecx, [edi+4]
0x69E56F: push    ecx; lpAddend
0x69E570: call    ebp ; InterlockedDecrement
0x69E572: test    eax, eax
0x69E574: jnz     short loc_69E584
0x69E576: cmp     edi, ebx
0x69E578: jz      short loc_69E584
0x69E57A: mov     edx, [edi]
0x69E57C: mov     eax, [edx]
0x69E57E: push    1
0x69E580: mov     ecx, edi
0x69E582: call    eax
0x69E584: mov     [esi+34h], ebx
0x69E587: fldz
0x69E589: mov     ecx, [esp+24h+arg_4]
0x69E58D: fld     [esp+24h+arg_8]
0x69E591: mov     [esi+29h], bl
0x69E594: fcom    st(1)
0x69E596: mov     [esi+2Ch], ecx
0x69E599: mov     [esi+28h], bl
0x69E59C: fnstsw  ax
0x69E59E: fstp    st(1)
0x69E5A0: test    ah, 5
0x69E5A3: mov     eax, esi
0x69E5A5: jp      short loc_69E5AF
0x69E5A7: fstp    st
0x69E5A9: fld     dword ptr ds:0A32048h
0x69E5AF: fstp    dword ptr [esi+8]
0x69E5B2: mov     ecx, dword ptr [esp+24h+var_C]
0x69E5B6: mov     large fs:0, ecx
0x69E5BD: pop     ecx
0x69E5BE: pop     edi
0x69E5BF: pop     esi
0x69E5C0: pop     ebp
0x69E5C1: pop     ebx
0x69E5C2: add     esp, 10h
0x69E5C5: retn    0Ch
