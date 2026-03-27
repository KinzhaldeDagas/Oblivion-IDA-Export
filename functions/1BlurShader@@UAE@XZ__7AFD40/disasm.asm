0x7AFD40: push    0FFFFFFFFh
0x7AFD42: push    offset ??1BlurShader@@UAE@XZ_SEH
0x7AFD47: mov     eax, large fs:0
0x7AFD4D: push    eax
0x7AFD4E: push    ecx
0x7AFD4F: push    ebx
0x7AFD50: push    ebp
0x7AFD51: push    esi
0x7AFD52: push    edi
0x7AFD53: mov     eax, ds:0B30AACh
0x7AFD58: xor     eax, esp
0x7AFD5A: push    eax
0x7AFD5B: lea     eax, [esp+24h+var_C]
0x7AFD5F: mov     large fs:0, eax
0x7AFD65: mov     ebp, ecx
0x7AFD67: mov     [esp+24h+var_10], ebp
0x7AFD6B: mov     dword ptr [ebp+0], offset ??_7BlurShader@@6B@; const BlurShader::`vftable'
0x7AFD72: mov     esi, [ebp+0E0h]
0x7AFD78: test    esi, esi
0x7AFD7A: mov     ebx, 3
0x7AFD7F: mov     [esp+24h+var_4], ebx
0x7AFD83: jz      short loc_7AFDAB
0x7AFD85: lea     eax, [esi+4]
0x7AFD88: push    eax; lpAddend
0x7AFD89: call    dword ptr ds:0A2807Ch
0x7AFD8F: test    eax, eax
0x7AFD91: jnz     short loc_7AFDA1
0x7AFD93: test    esi, esi
0x7AFD95: jz      short loc_7AFDA1
0x7AFD97: mov     edx, [esi]
0x7AFD99: mov     eax, [edx]
0x7AFD9B: push    1
0x7AFD9D: mov     ecx, esi
0x7AFD9F: call    eax
0x7AFDA1: mov     dword ptr [ebp+0E0h], 0
0x7AFDAB: lea     edi, [ebp+0A0h]
0x7AFDB1: mov     esi, [edi-0Ch]
0x7AFDB4: test    esi, esi
0x7AFDB6: jz      short loc_7AFDDB
0x7AFDB8: lea     ecx, [esi+4]
0x7AFDBB: push    ecx; lpAddend
0x7AFDBC: call    dword ptr ds:0A2807Ch
0x7AFDC2: test    eax, eax
0x7AFDC4: jnz     short loc_7AFDD4
0x7AFDC6: test    esi, esi
0x7AFDC8: jz      short loc_7AFDD4
0x7AFDCA: mov     edx, [esi]
0x7AFDCC: mov     eax, [edx]
0x7AFDCE: push    1
0x7AFDD0: mov     ecx, esi
0x7AFDD2: call    eax
0x7AFDD4: mov     dword ptr [edi-0Ch], 0
0x7AFDDB: mov     esi, [edi]
0x7AFDDD: test    esi, esi
0x7AFDDF: jz      short loc_7AFE03
0x7AFDE1: lea     ecx, [esi+4]
0x7AFDE4: push    ecx; lpAddend
0x7AFDE5: call    dword ptr ds:0A2807Ch
0x7AFDEB: test    eax, eax
0x7AFDED: jnz     short loc_7AFDFD
0x7AFDEF: test    esi, esi
0x7AFDF1: jz      short loc_7AFDFD
0x7AFDF3: mov     edx, [esi]
0x7AFDF5: mov     eax, [edx]
0x7AFDF7: push    1
0x7AFDF9: mov     ecx, esi
0x7AFDFB: call    eax
0x7AFDFD: mov     dword ptr [edi], 0
0x7AFE03: add     edi, 4
0x7AFE06: sub     ebx, 1
0x7AFE09: jnz     short loc_7AFDB1
0x7AFE0B: mov     esi, [ebp+0E0h]
0x7AFE11: test    esi, esi
0x7AFE13: mov     byte ptr [esp+24h+var_4], 2
0x7AFE18: jz      short loc_7AFE36
0x7AFE1A: lea     ecx, [esi+4]
0x7AFE1D: push    ecx; lpAddend
0x7AFE1E: call    dword ptr ds:0A2807Ch
0x7AFE24: test    eax, eax
0x7AFE26: jnz     short loc_7AFE36
0x7AFE28: test    esi, esi
0x7AFE2A: jz      short loc_7AFE36
0x7AFE2C: mov     edx, [esi]
0x7AFE2E: mov     eax, [edx]
0x7AFE30: push    1
0x7AFE32: mov     ecx, esi
0x7AFE34: call    eax
0x7AFE36: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7AFE3B: push    3; int
0x7AFE3D: push    4; unsigned int
0x7AFE3F: lea     eax, [ebp+0A0h]
0x7AFE45: push    eax; void *
0x7AFE46: mov     byte ptr [esp+34h+var_4], 1
0x7AFE4B: call    $LN21
0x7AFE50: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7AFE55: push    3; int
0x7AFE57: push    4; unsigned int
0x7AFE59: lea     ecx, [ebp+94h]
0x7AFE5F: push    ecx; void *
0x7AFE60: mov     byte ptr [esp+34h+var_4], 0
0x7AFE65: call    $LN21
0x7AFE6A: mov     ecx, ebp; this
0x7AFE6C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7AFE74: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7AFE79: mov     ecx, dword ptr [esp+24h+var_C]
0x7AFE7D: mov     large fs:0, ecx
0x7AFE84: pop     ecx
0x7AFE85: pop     edi
0x7AFE86: pop     esi
0x7AFE87: pop     ebp
0x7AFE88: pop     ebx
0x7AFE89: add     esp, 10h
0x7AFE8C: retn
