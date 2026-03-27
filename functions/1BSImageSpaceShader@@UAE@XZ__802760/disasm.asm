0x802760: push    0FFFFFFFFh
0x802762: push    offset ??1BSImageSpaceShader@@UAE@XZ_SEH
0x802767: mov     eax, large fs:0
0x80276D: push    eax
0x80276E: push    ecx
0x80276F: push    ebp
0x802770: push    esi
0x802771: push    edi
0x802772: mov     eax, ds:0B30AACh
0x802777: xor     eax, esp
0x802779: push    eax
0x80277A: lea     eax, [esp+20h+var_C]
0x80277E: mov     large fs:0, eax
0x802784: mov     esi, ecx
0x802786: mov     [esp+20h+var_10], esi
0x80278A: mov     dword ptr [esi], offset ??_7BSImageSpaceShader@@6B@; const BSImageSpaceShader::`vftable'
0x802790: mov     edi, [esi+7Ch]
0x802793: test    edi, edi
0x802795: mov     ebp, ds:0A2807Ch
0x80279B: mov     [esp+20h+var_4], 1
0x8027A3: jz      short loc_8027C4
0x8027A5: lea     eax, [edi+4]
0x8027A8: push    eax; lpAddend
0x8027A9: call    ebp ; InterlockedDecrement
0x8027AB: test    eax, eax
0x8027AD: jnz     short loc_8027BD
0x8027AF: test    edi, edi
0x8027B1: jz      short loc_8027BD
0x8027B3: mov     edx, [edi]
0x8027B5: mov     eax, [edx]
0x8027B7: push    1
0x8027B9: mov     ecx, edi
0x8027BB: call    eax
0x8027BD: mov     dword ptr [esi+7Ch], 0
0x8027C4: xor     eax, eax
0x8027C6: mov     [esi+80h], eax
0x8027CC: mov     [esi+84h], eax
0x8027D2: mov     [esi+88h], eax
0x8027D8: mov     [esi+8Ch], eax
0x8027DE: mov     edi, [esi+7Ch]
0x8027E1: test    edi, edi
0x8027E3: mov     byte ptr [esp+20h+var_4], al
0x8027E7: jz      short loc_802801
0x8027E9: lea     ecx, [edi+4]
0x8027EC: push    ecx; lpAddend
0x8027ED: call    ebp ; InterlockedDecrement
0x8027EF: test    eax, eax
0x8027F1: jnz     short loc_802801
0x8027F3: test    edi, edi
0x8027F5: jz      short loc_802801
0x8027F7: mov     edx, [edi]
0x8027F9: mov     eax, [edx]
0x8027FB: push    1
0x8027FD: mov     ecx, edi
0x8027FF: call    eax
0x802801: mov     ecx, esi; this
0x802803: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80280B: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x802810: mov     ecx, [esp+20h+var_C]
0x802814: mov     large fs:0, ecx
0x80281B: pop     ecx
0x80281C: pop     edi
0x80281D: pop     esi
0x80281E: pop     ebp
0x80281F: add     esp, 10h
0x802822: retn
