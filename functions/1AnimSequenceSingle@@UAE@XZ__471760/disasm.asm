0x471760: push    0FFFFFFFFh
0x471762: push    offset ??1AnimSequenceSingle@@UAE@XZ_SEH
0x471767: mov     eax, large fs:0
0x47176D: push    eax
0x47176E: sub     esp, 0Ch
0x471771: push    ebx
0x471772: push    esi
0x471773: push    edi
0x471774: mov     eax, ds:0B30AACh
0x471779: xor     eax, esp
0x47177B: push    eax
0x47177C: lea     eax, [esp+28h+var_C]
0x471780: mov     large fs:0, eax
0x471786: mov     edi, ecx
0x471788: mov     [esp+28h+var_18], edi
0x47178C: mov     dword ptr [edi], offset ??_7AnimSequenceSingle@@6B@; const AnimSequenceSingle::`vftable'
0x471792: mov     eax, [edi+4]
0x471795: xor     ebx, ebx
0x471797: cmp     eax, ebx
0x471799: mov     [esp+28h+var_4], ebx
0x47179D: jz      short loc_4717FA
0x47179F: mov     [esp+28h+var_14.m_data], ebx
0x4717A3: mov     [esp+28h+var_14.m_dataLen], bx
0x4717A8: mov     [esp+28h+var_14.m_bufLen], bx
0x4717AD: mov     eax, [eax+8]
0x4717B0: push    ebx; a3
0x4717B1: push    eax; a2
0x4717B2: lea     ecx, [esp+30h+var_14]; this
0x4717B6: mov     byte ptr [esp+30h+var_4], 1
0x4717BB: call    BSStringT_Set
0x4717C0: mov     esi, [edi+4]
0x4717C3: lea     eax, [esi+4]
0x4717C6: push    eax; lpAddend
0x4717C7: call    dword ptr ds:0A2807Ch
0x4717CD: test    eax, eax
0x4717CF: jnz     short loc_4717DF
0x4717D1: cmp     esi, ebx
0x4717D3: jz      short loc_4717DF
0x4717D5: mov     edx, [esi]
0x4717D7: mov     eax, [edx]
0x4717D9: push    1
0x4717DB: mov     ecx, esi
0x4717DD: call    eax
0x4717DF: mov     esi, [esp+28h+var_14.m_data]
0x4717E3: mov     ecx, ds:0B33A1Ch
0x4717E9: push    1
0x4717EB: push    esi
0x4717EC: call    ModelLoader_ReleaseModelPath; Releases a model-loader path reference. Used by AnimIdle/queued-loader cleanup when a KF/model reference is no longer needed.
0x4717F1: push    esi
0x4717F2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4717F7: add     esp, 4
0x4717FA: mov     dword ptr [edi], offset ??_7AnimSequenceBase@@6B@; const AnimSequenceBase::`vftable'
0x471800: mov     ecx, dword ptr [esp+28h+var_C]
0x471804: mov     large fs:0, ecx
0x47180B: pop     ecx
0x47180C: pop     edi
0x47180D: pop     esi
0x47180E: pop     ebx
0x47180F: add     esp, 18h
0x471812: retn
0x470B70: mov     dword ptr [ecx], offset ??_7AnimSequenceBase@@6B@; const AnimSequenceBase::`vftable'
0x470B76: retn
0x9AEBF0: mov     ecx, [ebp-18h]
0x9AEBF3: jmp     loc_470B70
0x9AEBF8: lea     ecx, [ebp-14h]; void *
0x9AEBFB: jmp     BSStringT_Clear
0x9AEC00: mov     edx, [esp+arg_4]
0x9AEC04: lea     eax, [edx-18h]
0x9AEC07: mov     ecx, [edx-1Ch]
0x9AEC0A: xor     ecx, eax
0x9AEC0C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEC11: mov     eax, offset stru_ADB2F8
0x9AEC16: jmp     ___CxxFrameHandler3
