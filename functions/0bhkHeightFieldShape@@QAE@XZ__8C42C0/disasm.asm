0x8C42C0: push    0FFFFFFFFh
0x8C42C2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x8C42C7: mov     eax, large fs:0
0x8C42CD: push    eax
0x8C42CE: push    ecx
0x8C42CF: push    ebx
0x8C42D0: push    ebp
0x8C42D1: push    esi
0x8C42D2: push    edi
0x8C42D3: mov     eax, ds:0B30AACh
0x8C42D8: xor     eax, esp
0x8C42DA: push    eax
0x8C42DB: lea     eax, [esp+24h+var_C]
0x8C42DF: mov     large fs:0, eax
0x8C42E5: mov     edi, ecx
0x8C42E7: push    offset stru_BA7C80; lpCriticalSection
0x8C42EC: call    dword ptr ds:0A2806Ch
0x8C42F2: call    dword ptr ds:0A2808Ch
0x8C42F8: mov     ebp, 1
0x8C42FD: add     ds:0BA7CFCh, ebp
0x8C4303: push    14h; Size
0x8C4305: mov     ds:0BA7CF8h, eax
0x8C430A: call    FormHeapAlloc
0x8C430F: mov     esi, eax
0x8C4311: add     esp, 4
0x8C4314: mov     [esp+24h+var_10], esi
0x8C4318: xor     ebx, ebx
0x8C431A: cmp     esi, ebx
0x8C431C: mov     [esp+24h+var_4], ebx
0x8C4320: jz      short loc_8C4355
0x8C4322: mov     ecx, esi; this
0x8C4324: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C4329: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C432F: mov     [esi+0Ch], ebx
0x8C4332: mov     [esi+10h], ebx
0x8C4335: add     ds:0BA7D70h, ebp
0x8C433B: mov     dword ptr [esi], offset ??_7bhkHeightFieldShape@@6B@; const bhkHeightFieldShape::`vftable'
0x8C4341: add     ds:0BA8400h, ebp
0x8C4347: mov     dword ptr [esi], offset ??_7bhkPlaneShape@@6B@; const bhkPlaneShape::`vftable'
0x8C434D: add     ds:0BA810Ch, ebp
0x8C4353: jmp     short loc_8C4357
0x8C4355: xor     esi, esi
0x8C4357: mov     ecx, [esp+24h+arg_0]
0x8C435B: mov     eax, [edi]
0x8C435D: mov     edx, [eax+80h]
0x8C4363: push    ecx
0x8C4364: push    esi
0x8C4365: mov     ecx, edi
0x8C4367: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8C436F: call    edx
0x8C4371: sub     ds:0BA7CFCh, ebp
0x8C4377: jnz     short loc_8C437F
0x8C4379: mov     ds:0BA7CF8h, ebx
0x8C437F: push    offset stru_BA7C80; lpCriticalSection
0x8C4384: call    dword ptr ds:0A28074h
0x8C438A: mov     eax, esi
0x8C438C: mov     ecx, dword ptr [esp+24h+var_C]
0x8C4390: mov     large fs:0, ecx
0x8C4397: pop     ecx
0x8C4398: pop     edi
0x8C4399: pop     esi
0x8C439A: pop     ebp
0x8C439B: pop     ebx
0x8C439C: add     esp, 10h
0x8C439F: retn    4
