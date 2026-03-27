0x55A010: push    0FFFFFFFFh
0x55A012: push    offset SEH_55A010
0x55A017: mov     eax, large fs:0
0x55A01D: push    eax
0x55A01E: push    ecx
0x55A01F: push    esi
0x55A020: mov     eax, ds:0B30AACh
0x55A025: xor     eax, esp
0x55A027: push    eax
0x55A028: lea     eax, [esp+18h+var_C]
0x55A02C: mov     large fs:0, eax
0x55A032: mov     esi, ecx
0x55A034: mov     [esp+18h+var_10], esi
0x55A038: mov     eax, [esp+18h+arg_0]
0x55A03C: mov     edx, [esp+18h+arg_4]
0x55A040: xor     ecx, ecx
0x55A042: cmp     eax, ecx
0x55A044: mov     [esp+18h+var_4], ecx
0x55A048: mov     dword ptr [esi], offset ??_7BSFaceGenMorphStatistical@@6B@; const BSFaceGenMorphStatistical::`vftable'
0x55A04E: mov     [esi+8], eax
0x55A051: mov     [esi+0Ch], edx
0x55A054: jz      short loc_55A085
0x55A056: mov     edx, 4
0x55A05B: mul     edx
0x55A05D: seto    cl
0x55A060: neg     ecx
0x55A062: or      ecx, eax
0x55A064: push    ecx; Size
0x55A065: call    FormHeapAlloc
0x55A06A: mov     [esi+4], eax
0x55A06D: add     esp, 4
0x55A070: mov     eax, esi
0x55A072: mov     ecx, [esp+18h+var_C]
0x55A076: mov     large fs:0, ecx
0x55A07D: pop     ecx
0x55A07E: pop     esi
0x55A07F: add     esp, 10h
0x55A082: retn    8
0x55A085: mov     [esi+4], ecx
0x55A088: mov     eax, esi
0x55A08A: mov     ecx, [esp+18h+var_C]
0x55A08E: mov     large fs:0, ecx
0x55A095: pop     ecx
0x55A096: pop     esi
0x55A097: add     esp, 10h
0x55A09A: retn    8
