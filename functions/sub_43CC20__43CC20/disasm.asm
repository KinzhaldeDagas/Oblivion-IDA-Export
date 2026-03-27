0x43CC20: push    0FFFFFFFFh
0x43CC22: push    offset SEH_43CC20
0x43CC27: mov     eax, large fs:0
0x43CC2D: push    eax
0x43CC2E: sub     esp, 0Ch
0x43CC31: push    ebx
0x43CC32: push    ebp
0x43CC33: push    esi
0x43CC34: push    edi
0x43CC35: mov     eax, ___security_cookie
0x43CC3A: xor     eax, esp
0x43CC3C: push    eax
0x43CC3D: lea     eax, [esp+2Ch+var_C]
0x43CC41: mov     large fs:0, eax
0x43CC47: mov     [esp+2Ch+var_14], ecx
0x43CC4B: mov     ebx, ds:InterlockedDecrement
0x43CC51: lea     esi, [ecx+18h]
0x43CC54: mov     ebp, [esp+2Ch+var_14]
0x43CC58: mov     eax, [ebp+14h]
0x43CC5B: mov     edi, ds:WaitForSingleObject
0x43CC61: add     ebp, 0Ch
0x43CC64: push    0FFFFFFFFh; dwMilliseconds
0x43CC66: push    eax; hHandle
0x43CC67: call    edi ; WaitForSingleObject
0x43CC69: cmp     eax, 102h
0x43CC6E: jz      short loc_43CC73
0x43CC70: push    ebp; lpAddend
0x43CC71: call    ebx ; InterlockedDecrement
0x43CC73: mov     ebp, [esp+2Ch+var_14]
0x43CC77: lea     eax, [ebp+24h]
0x43CC7A: push    eax; lpAddend
0x43CC7B: call    ds:InterlockedIncrement
0x43CC81: lea     ecx, [esp+2Ch+a2]
0x43CC85: push    ecx; a2
0x43CC86: mov     ecx, [ebp+28h]; this
0x43CC89: call    IOManager_43C030
0x43CC8E: cmp     [esp+2Ch+a2], 0
0x43CC93: mov     [esp+2Ch+var_4], 0
0x43CC9B: jnz     short loc_43CD16
0x43CC9D: mov     eax, [esi+8]
0x43CCA0: push    0FFFFFFFFh; dwMilliseconds
0x43CCA2: push    eax; hHandle
0x43CCA3: call    edi ; WaitForSingleObject
0x43CCA5: cmp     eax, 102h
0x43CCAA: jz      short loc_43CCAF
0x43CCAC: push    esi; lpAddend
0x43CCAD: call    ebx ; InterlockedDecrement
0x43CCAF: push    esi; lpAddend
0x43CCB0: call    ds:InterlockedIncrement
0x43CCB6: mov     ecx, [esi+8]
0x43CCB9: push    0; lpPreviousCount
0x43CCBB: push    1; lReleaseCount
0x43CCBD: push    ecx; hSemaphore
0x43CCBE: call    ds:ReleaseSemaphore
0x43CCC4: mov     edx, [esi]
0x43CCC6: lea     eax, [ebp+24h]
0x43CCC9: push    eax; lpAddend
0x43CCCA: call    ebx ; InterlockedDecrement
0x43CCCC: mov     eax, [esp+2Ch+a2]
0x43CCD0: test    eax, eax
0x43CCD2: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x43CCDA: jz      loc_43CC54
0x43CCE0: mov     edi, eax
0x43CCE2: add     eax, 8
0x43CCE5: push    eax; lpAddend
0x43CCE6: call    ebx ; InterlockedDecrement
0x43CCE8: test    eax, eax
0x43CCEA: jnz     loc_43CC54
0x43CCF0: test    edi, edi
0x43CCF2: jz      loc_43CC54
0x43CCF8: mov     eax, [edi]
0x43CCFA: mov     edx, [eax]
0x43CCFC: push    1
0x43CCFE: mov     ecx, edi
0x43CD00: call    edx
0x43CD02: jmp     loc_43CC54
0x43CD07: jmp     short loc_43CD10
0x43CD09: align 10h
0x43CD10: mov     edi, ds:WaitForSingleObject
0x43CD16: mov     edx, [esi+8]
0x43CD19: push    0FFFFFFFFh; dwMilliseconds
0x43CD1B: push    edx; hHandle
0x43CD1C: call    edi ; WaitForSingleObject
0x43CD1E: cmp     eax, 102h
0x43CD23: jz      short loc_43CD28
0x43CD25: push    esi; lpAddend
0x43CD26: call    ebx ; InterlockedDecrement
0x43CD28: mov     ecx, [esp+2Ch+a2]
0x43CD2C: cmp     dword ptr [ecx+0Ch], 6
0x43CD30: jz      short loc_43CD37
0x43CD32: call    sub_43AF30
0x43CD37: mov     ecx, [ebp+28h]; this
0x43CD3A: lea     eax, [esp+2Ch+var_10]
0x43CD3E: push    eax; a2
0x43CD3F: call    IOManager_43C030
0x43CD44: mov     ebp, eax
0x43CD46: mov     eax, [esp+2Ch+a2]
0x43CD4A: cmp     eax, [ebp+0]
0x43CD4D: mov     byte ptr [esp+2Ch+var_4], 1
0x43CD52: jz      short loc_43CD87
0x43CD54: test    eax, eax
0x43CD56: jz      short loc_43CD72
0x43CD58: mov     edi, eax
0x43CD5A: add     eax, 8
0x43CD5D: push    eax; lpAddend
0x43CD5E: call    ebx ; InterlockedDecrement
0x43CD60: test    eax, eax
0x43CD62: jnz     short loc_43CD72
0x43CD64: test    edi, edi
0x43CD66: jz      short loc_43CD72
0x43CD68: mov     edx, [edi]
0x43CD6A: mov     eax, [edx]
0x43CD6C: push    1
0x43CD6E: mov     ecx, edi
0x43CD70: call    eax
0x43CD72: mov     eax, [ebp+0]
0x43CD75: test    eax, eax
0x43CD77: mov     [esp+2Ch+a2], eax
0x43CD7B: jz      short loc_43CD87
0x43CD7D: add     eax, 8
0x43CD80: push    eax; lpAddend
0x43CD81: call    ds:InterlockedIncrement
0x43CD87: mov     edi, [esp+2Ch+var_10]
0x43CD8B: test    edi, edi
0x43CD8D: mov     byte ptr [esp+2Ch+var_4], 0
0x43CD92: jz      short loc_43CDAC
0x43CD94: lea     ecx, [edi+8]
0x43CD97: push    ecx; lpAddend
0x43CD98: call    ebx ; InterlockedDecrement
0x43CD9A: test    eax, eax
0x43CD9C: jnz     short loc_43CDAC
0x43CD9E: test    edi, edi
0x43CDA0: jz      short loc_43CDAC
0x43CDA2: mov     edx, [edi]
0x43CDA4: mov     eax, [edx]
0x43CDA6: push    1
0x43CDA8: mov     ecx, edi
0x43CDAA: call    eax
0x43CDAC: push    esi; lpAddend
0x43CDAD: call    ds:InterlockedIncrement
0x43CDB3: mov     ecx, [esi+8]
0x43CDB6: push    0; lpPreviousCount
0x43CDB8: push    1; lReleaseCount
0x43CDBA: push    ecx; hSemaphore
0x43CDBB: call    ds:ReleaseSemaphore
0x43CDC1: mov     edx, [esi]
0x43CDC3: cmp     [esp+2Ch+a2], 0
0x43CDC8: mov     ebp, [esp+2Ch+var_14]
0x43CDCC: jnz     loc_43CD10
0x43CDD2: jmp     loc_43CCC6
