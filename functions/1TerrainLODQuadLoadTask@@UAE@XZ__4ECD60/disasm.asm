0x4ECD60: push    0FFFFFFFFh
0x4ECD62: push    offset ??1TerrainLODQuadLoadTask@@UAE@XZ_SEH
0x4ECD67: mov     eax, large fs:0
0x4ECD6D: push    eax
0x4ECD6E: push    ecx
0x4ECD6F: push    ebx
0x4ECD70: push    ebp
0x4ECD71: push    esi
0x4ECD72: push    edi
0x4ECD73: mov     eax, ds:0B30AACh
0x4ECD78: xor     eax, esp
0x4ECD7A: push    eax
0x4ECD7B: lea     eax, [esp+24h+var_C]
0x4ECD7F: mov     large fs:0, eax
0x4ECD85: mov     esi, ecx
0x4ECD87: mov     [esp+24h+var_10], esi
0x4ECD8B: mov     dword ptr [esi], offset ??_7TerrainLODQuadLoadTask@@6B@; const TerrainLODQuadLoadTask::`vftable'
0x4ECD91: mov     edi, [esi+3Ch]
0x4ECD94: mov     ebp, ds:0A2807Ch
0x4ECD9A: xor     ebx, ebx
0x4ECD9C: cmp     edi, ebx
0x4ECD9E: mov     [esp+24h+var_4], 3
0x4ECDA6: jz      short loc_4ECDC3
0x4ECDA8: lea     eax, [edi+4]
0x4ECDAB: push    eax; lpAddend
0x4ECDAC: call    ebp ; InterlockedDecrement
0x4ECDAE: test    eax, eax
0x4ECDB0: jnz     short loc_4ECDC0
0x4ECDB2: cmp     edi, ebx
0x4ECDB4: jz      short loc_4ECDC0
0x4ECDB6: mov     edx, [edi]
0x4ECDB8: mov     eax, [edx]
0x4ECDBA: push    1
0x4ECDBC: mov     ecx, edi
0x4ECDBE: call    eax
0x4ECDC0: mov     [esi+3Ch], ebx
0x4ECDC3: mov     edi, [esi+40h]
0x4ECDC6: cmp     edi, ebx
0x4ECDC8: jz      short loc_4ECDE5
0x4ECDCA: lea     ecx, [edi+4]
0x4ECDCD: push    ecx; lpAddend
0x4ECDCE: call    ebp ; InterlockedDecrement
0x4ECDD0: test    eax, eax
0x4ECDD2: jnz     short loc_4ECDE2
0x4ECDD4: cmp     edi, ebx
0x4ECDD6: jz      short loc_4ECDE2
0x4ECDD8: mov     edx, [edi]
0x4ECDDA: mov     eax, [edx]
0x4ECDDC: push    1
0x4ECDDE: mov     ecx, edi
0x4ECDE0: call    eax
0x4ECDE2: mov     [esi+40h], ebx
0x4ECDE5: mov     edi, [esi+44h]
0x4ECDE8: cmp     edi, ebx
0x4ECDEA: jz      short loc_4ECE07
0x4ECDEC: lea     ecx, [edi+4]
0x4ECDEF: push    ecx; lpAddend
0x4ECDF0: call    ebp ; InterlockedDecrement
0x4ECDF2: test    eax, eax
0x4ECDF4: jnz     short loc_4ECE04
0x4ECDF6: cmp     edi, ebx
0x4ECDF8: jz      short loc_4ECE04
0x4ECDFA: mov     edx, [edi]
0x4ECDFC: mov     eax, [edx]
0x4ECDFE: push    1
0x4ECE00: mov     ecx, edi
0x4ECE02: call    eax
0x4ECE04: mov     [esi+44h], ebx
0x4ECE07: mov     edi, [esi+44h]
0x4ECE0A: cmp     edi, ebx
0x4ECE0C: mov     byte ptr [esp+24h+var_4], 2
0x4ECE11: jz      short loc_4ECE2B
0x4ECE13: lea     ecx, [edi+4]
0x4ECE16: push    ecx; lpAddend
0x4ECE17: call    ebp ; InterlockedDecrement
0x4ECE19: test    eax, eax
0x4ECE1B: jnz     short loc_4ECE2B
0x4ECE1D: cmp     edi, ebx
0x4ECE1F: jz      short loc_4ECE2B
0x4ECE21: mov     edx, [edi]
0x4ECE23: mov     eax, [edx]
0x4ECE25: push    1
0x4ECE27: mov     ecx, edi
0x4ECE29: call    eax
0x4ECE2B: mov     edi, [esi+40h]
0x4ECE2E: cmp     edi, ebx
0x4ECE30: mov     byte ptr [esp+24h+var_4], 1
0x4ECE35: jz      short loc_4ECE4F
0x4ECE37: lea     ecx, [edi+4]
0x4ECE3A: push    ecx; lpAddend
0x4ECE3B: call    ebp ; InterlockedDecrement
0x4ECE3D: test    eax, eax
0x4ECE3F: jnz     short loc_4ECE4F
0x4ECE41: cmp     edi, ebx
0x4ECE43: jz      short loc_4ECE4F
0x4ECE45: mov     edx, [edi]
0x4ECE47: mov     eax, [edx]
0x4ECE49: push    1
0x4ECE4B: mov     ecx, edi
0x4ECE4D: call    eax
0x4ECE4F: mov     edi, [esi+3Ch]
0x4ECE52: cmp     edi, ebx
0x4ECE54: mov     byte ptr [esp+24h+var_4], bl
0x4ECE58: jz      short loc_4ECE72
0x4ECE5A: lea     ecx, [edi+4]
0x4ECE5D: push    ecx; lpAddend
0x4ECE5E: call    ebp ; InterlockedDecrement
0x4ECE60: test    eax, eax
0x4ECE62: jnz     short loc_4ECE72
0x4ECE64: cmp     edi, ebx
0x4ECE66: jz      short loc_4ECE72
0x4ECE68: mov     edx, [edi]
0x4ECE6A: mov     eax, [edx]
0x4ECE6C: push    1
0x4ECE6E: mov     ecx, edi
0x4ECE70: call    eax
0x4ECE72: mov     ecx, esi; this
0x4ECE74: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4ECE7C: call    ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x4ECE81: mov     ecx, dword ptr [esp+24h+var_C]
0x4ECE85: mov     large fs:0, ecx
0x4ECE8C: pop     ecx
0x4ECE8D: pop     edi
0x4ECE8E: pop     esi
0x4ECE8F: pop     ebp
0x4ECE90: pop     ebx
0x4ECE91: add     esp, 10h
0x4ECE94: retn
