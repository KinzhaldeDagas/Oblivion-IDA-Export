0x6A5240: push    0FFFFFFFFh
0x6A5242: push    offset ??1SummonCreatureEffect@@UAE@XZ_SEH
0x6A5247: mov     eax, large fs:0
0x6A524D: push    eax
0x6A524E: push    ecx
0x6A524F: push    esi
0x6A5250: mov     eax, ds:0B30AACh
0x6A5255: xor     eax, esp
0x6A5257: push    eax
0x6A5258: lea     eax, [esp+18h+var_C]
0x6A525C: mov     large fs:0, eax
0x6A5262: mov     esi, ecx
0x6A5264: mov     [esp+18h+var_10], esi
0x6A5268: mov     dword ptr [esi], offset ??_7SummonCreatureEffect@@6B@; const SummonCreatureEffect::`vftable'
0x6A526E: cmp     byte ptr [esi+61h], 0
0x6A5272: mov     [esp+18h+var_4], 0
0x6A527A: jz      short loc_6A528A
0x6A527C: mov     ecx, [esi+8]
0x6A527F: test    ecx, ecx
0x6A5281: jz      short loc_6A528A
0x6A5283: push    1
0x6A5285: call    sub_419F10
0x6A528A: mov     ecx, esi; this
0x6A528C: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6A5294: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x6A5299: mov     ecx, [esp+18h+var_C]
0x6A529D: mov     large fs:0, ecx
0x6A52A4: pop     ecx
0x6A52A5: pop     esi
0x6A52A6: add     esp, 10h
0x6A52A9: retn
