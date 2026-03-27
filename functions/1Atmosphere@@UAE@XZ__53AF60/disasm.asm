0x53AF60: push    0FFFFFFFFh
0x53AF62: push    offset ??1Atmosphere@@UAE@XZ_SEH
0x53AF67: mov     eax, large fs:0
0x53AF6D: push    eax
0x53AF6E: push    ecx
0x53AF6F: push    ebx
0x53AF70: push    ebp
0x53AF71: push    esi
0x53AF72: push    edi
0x53AF73: mov     eax, ds:0B30AACh
0x53AF78: xor     eax, esp
0x53AF7A: push    eax
0x53AF7B: lea     eax, [esp+24h+var_C]
0x53AF7F: mov     large fs:0, eax
0x53AF85: mov     esi, ecx
0x53AF87: mov     [esp+24h+var_10], esi
0x53AF8B: mov     dword ptr [esi], offset ??_7Atmosphere@@6B@; const Atmosphere::`vftable'
0x53AF91: mov     edi, [esi+0Ch]
0x53AF94: mov     ebp, ds:0A2807Ch
0x53AF9A: xor     ebx, ebx
0x53AF9C: cmp     edi, ebx
0x53AF9E: mov     [esp+24h+var_4], 4
0x53AFA6: jz      short loc_53AFC3
0x53AFA8: lea     eax, [edi+4]
0x53AFAB: push    eax; lpAddend
0x53AFAC: call    ebp ; InterlockedDecrement
0x53AFAE: test    eax, eax
0x53AFB0: jnz     short loc_53AFC0
0x53AFB2: cmp     edi, ebx
0x53AFB4: jz      short loc_53AFC0
0x53AFB6: mov     edx, [edi]
0x53AFB8: mov     eax, [edx]
0x53AFBA: push    1
0x53AFBC: mov     ecx, edi
0x53AFBE: call    eax
0x53AFC0: mov     [esi+0Ch], ebx
0x53AFC3: mov     edi, [esi+8]
0x53AFC6: cmp     edi, ebx
0x53AFC8: jz      short loc_53AFE5
0x53AFCA: lea     ecx, [edi+4]
0x53AFCD: push    ecx; lpAddend
0x53AFCE: call    ebp ; InterlockedDecrement
0x53AFD0: test    eax, eax
0x53AFD2: jnz     short loc_53AFE2
0x53AFD4: cmp     edi, ebx
0x53AFD6: jz      short loc_53AFE2
0x53AFD8: mov     edx, [edi]
0x53AFDA: mov     eax, [edx]
0x53AFDC: push    1
0x53AFDE: mov     ecx, edi
0x53AFE0: call    eax
0x53AFE2: mov     [esi+8], ebx
0x53AFE5: mov     edi, [esi+14h]
0x53AFE8: cmp     edi, ebx
0x53AFEA: jz      short loc_53B007
0x53AFEC: lea     ecx, [edi+4]
0x53AFEF: push    ecx; lpAddend
0x53AFF0: call    ebp ; InterlockedDecrement
0x53AFF2: test    eax, eax
0x53AFF4: jnz     short loc_53B004
0x53AFF6: cmp     edi, ebx
0x53AFF8: jz      short loc_53B004
0x53AFFA: mov     edx, [edi]
0x53AFFC: mov     eax, [edx]
0x53AFFE: push    1
0x53B000: mov     ecx, edi
0x53B002: call    eax
0x53B004: mov     [esi+14h], ebx
0x53B007: mov     edi, [esi+10h]
0x53B00A: cmp     edi, ebx
0x53B00C: jz      short loc_53B029
0x53B00E: lea     ecx, [edi+4]
0x53B011: push    ecx; lpAddend
0x53B012: call    ebp ; InterlockedDecrement
0x53B014: test    eax, eax
0x53B016: jnz     short loc_53B026
0x53B018: cmp     edi, ebx
0x53B01A: jz      short loc_53B026
0x53B01C: mov     edx, [edi]
0x53B01E: mov     eax, [edx]
0x53B020: push    1
0x53B022: mov     ecx, edi
0x53B024: call    eax
0x53B026: mov     [esi+10h], ebx
0x53B029: mov     edi, [esi+14h]
0x53B02C: cmp     edi, ebx
0x53B02E: mov     byte ptr [esp+24h+var_4], 3
0x53B033: jz      short loc_53B04D
0x53B035: lea     ecx, [edi+4]
0x53B038: push    ecx; lpAddend
0x53B039: call    ebp ; InterlockedDecrement
0x53B03B: test    eax, eax
0x53B03D: jnz     short loc_53B04D
0x53B03F: cmp     edi, ebx
0x53B041: jz      short loc_53B04D
0x53B043: mov     edx, [edi]
0x53B045: mov     eax, [edx]
0x53B047: push    1
0x53B049: mov     ecx, edi
0x53B04B: call    eax
0x53B04D: mov     edi, [esi+10h]
0x53B050: cmp     edi, ebx
0x53B052: mov     byte ptr [esp+24h+var_4], 2
0x53B057: jz      short loc_53B071
0x53B059: lea     ecx, [edi+4]
0x53B05C: push    ecx; lpAddend
0x53B05D: call    ebp ; InterlockedDecrement
0x53B05F: test    eax, eax
0x53B061: jnz     short loc_53B071
0x53B063: cmp     edi, ebx
0x53B065: jz      short loc_53B071
0x53B067: mov     edx, [edi]
0x53B069: mov     eax, [edx]
0x53B06B: push    1
0x53B06D: mov     ecx, edi
0x53B06F: call    eax
0x53B071: mov     edi, [esi+0Ch]
0x53B074: cmp     edi, ebx
0x53B076: mov     byte ptr [esp+24h+var_4], 1
0x53B07B: jz      short loc_53B095
0x53B07D: lea     ecx, [edi+4]
0x53B080: push    ecx; lpAddend
0x53B081: call    ebp ; InterlockedDecrement
0x53B083: test    eax, eax
0x53B085: jnz     short loc_53B095
0x53B087: cmp     edi, ebx
0x53B089: jz      short loc_53B095
0x53B08B: mov     edx, [edi]
0x53B08D: mov     eax, [edx]
0x53B08F: push    1
0x53B091: mov     ecx, edi
0x53B093: call    eax
0x53B095: mov     edi, [esi+8]
0x53B098: cmp     edi, ebx
0x53B09A: mov     byte ptr [esp+24h+var_4], bl
0x53B09E: jz      short loc_53B0B8
0x53B0A0: lea     ecx, [edi+4]
0x53B0A3: push    ecx; lpAddend
0x53B0A4: call    ebp ; InterlockedDecrement
0x53B0A6: test    eax, eax
0x53B0A8: jnz     short loc_53B0B8
0x53B0AA: cmp     edi, ebx
0x53B0AC: jz      short loc_53B0B8
0x53B0AE: mov     edx, [edi]
0x53B0B0: mov     eax, [edx]
0x53B0B2: push    1
0x53B0B4: mov     ecx, edi
0x53B0B6: call    eax
0x53B0B8: mov     ecx, esi; this
0x53B0BA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x53B0C2: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x53B0C7: mov     ecx, dword ptr [esp+24h+var_C]
0x53B0CB: mov     large fs:0, ecx
0x53B0D2: pop     ecx
0x53B0D3: pop     edi
0x53B0D4: pop     esi
0x53B0D5: pop     ebp
0x53B0D6: pop     ebx
0x53B0D7: add     esp, 10h
0x53B0DA: retn
