0x9A22E0: push    0FFFFFFFFh
0x9A22E2: push    offset SEH_9A22E0
0x9A22E7: mov     eax, large fs:0
0x9A22ED: push    eax
0x9A22EE: push    ecx
0x9A22EF: push    esi
0x9A22F0: push    edi
0x9A22F1: mov     eax, ___security_cookie
0x9A22F6: xor     eax, esp
0x9A22F8: push    eax
0x9A22F9: lea     eax, [esp+1Ch+var_C]
0x9A22FD: mov     large fs:0, eax
0x9A2303: mov     esi, ecx
0x9A2305: mov     [esp+1Ch+var_10], esi
0x9A2309: call    sub_721350
0x9A230E: mov     eax, [esp+1Ch+Src]
0x9A2312: xor     edi, edi
0x9A2314: push    eax; Src
0x9A2315: mov     ecx, esi
0x9A2317: mov     [esp+20h+var_4], edi
0x9A231B: mov     dword ptr [esi], offset ??_7NiSCMExtraData@@6B@; const NiSCMExtraData::`vftable'
0x9A2321: call    sub_721440
0x9A2326: mov     eax, [esp+1Ch+arg_4]
0x9A232A: cmp     eax, edi
0x9A232C: mov     [esi+0Ch], eax
0x9A232F: mov     [esi+14h], edi
0x9A2332: jz      short loc_9A2352
0x9A2334: xor     ecx, ecx
0x9A2336: mov     edx, 8
0x9A233B: mul     edx
0x9A233D: seto    cl
0x9A2340: neg     ecx
0x9A2342: or      ecx, eax
0x9A2344: push    ecx; Size
0x9A2345: call    FormHeapAlloc
0x9A234A: add     esp, 4
0x9A234D: mov     [esi+1Ch], eax
0x9A2350: jmp     short loc_9A2355
0x9A2352: mov     [esi+1Ch], edi
0x9A2355: mov     eax, [esp+1Ch+arg_8]
0x9A2359: cmp     eax, edi
0x9A235B: mov     [esi+10h], eax
0x9A235E: mov     [esi+18h], edi
0x9A2361: jz      short loc_9A2381
0x9A2363: xor     ecx, ecx
0x9A2365: mov     edx, 8
0x9A236A: mul     edx
0x9A236C: seto    cl
0x9A236F: neg     ecx
0x9A2371: or      ecx, eax
0x9A2373: push    ecx; Size
0x9A2374: call    FormHeapAlloc
0x9A2379: add     esp, 4
0x9A237C: mov     [esi+20h], eax
0x9A237F: jmp     short loc_9A2384
0x9A2381: mov     [esi+20h], edi
0x9A2384: mov     eax, esi
0x9A2386: mov     ecx, [esp+1Ch+var_C]
0x9A238A: mov     large fs:0, ecx
0x9A2391: pop     ecx
0x9A2392: pop     edi
0x9A2393: pop     esi
0x9A2394: add     esp, 10h
0x9A2397: retn    0Ch
