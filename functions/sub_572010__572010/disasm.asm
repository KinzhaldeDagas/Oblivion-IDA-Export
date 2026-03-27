0x572010: push    0FFFFFFFFh
0x572012: push    offset SEH_572010
0x572017: mov     eax, large fs:0
0x57201D: push    eax
0x57201E: sub     esp, 0Ch
0x572021: push    ebp
0x572022: push    esi
0x572023: push    edi
0x572024: mov     eax, ds:0B30AACh
0x572029: xor     eax, esp
0x57202B: push    eax
0x57202C: lea     eax, [esp+28h+var_C]
0x572030: mov     large fs:0, eax
0x572036: mov     edi, ecx
0x572038: mov     [esp+28h+var_18], edi
0x57203C: mov     [esp+28h+var_4], 1
0x572044: call    sub_571820
0x572049: mov     ebp, [edi+15E4h]
0x57204F: test    ebp, ebp
0x572051: jz      loc_572128
0x572057: mov     esi, [ebp+8]
0x57205A: lea     eax, [ebp+8]
0x57205D: mov     eax, [esi+0Ch]
0x572060: cmp     dword ptr [eax+4], 2
0x572064: mov     ebp, [ebp+0]
0x572067: jbe     short loc_5720D0
0x572069: mov     ecx, [eax+1Ch]
0x57206C: mov     edx, [ecx]
0x57206E: mov     edx, [edx+88h]
0x572074: push    eax
0x572075: lea     eax, [esp+2Ch+var_14]
0x572079: push    eax
0x57207A: call    edx
0x57207C: mov     eax, [esp+28h+var_14]
0x572080: test    eax, eax
0x572082: jz      short loc_5720A2
0x572084: mov     edi, eax
0x572086: add     eax, 4
0x572089: push    eax; lpAddend
0x57208A: call    dword ptr ds:0A2807Ch
0x572090: test    eax, eax
0x572092: jnz     short loc_5720A2
0x572094: test    edi, edi
0x572096: jz      short loc_5720A2
0x572098: mov     eax, [edi]
0x57209A: mov     edx, [eax]
0x57209C: push    1
0x57209E: mov     ecx, edi
0x5720A0: call    edx
0x5720A2: mov     edi, [esi+0Ch]
0x5720A5: test    edi, edi
0x5720A7: jz      short loc_5720CC
0x5720A9: lea     eax, [edi+4]
0x5720AC: push    eax; lpAddend
0x5720AD: call    dword ptr ds:0A2807Ch
0x5720B3: test    eax, eax
0x5720B5: jnz     short loc_5720C5
0x5720B7: test    edi, edi
0x5720B9: jz      short loc_5720C5
0x5720BB: mov     edx, [edi]
0x5720BD: mov     eax, [edx]
0x5720BF: push    1
0x5720C1: mov     ecx, edi
0x5720C3: call    eax
0x5720C5: mov     dword ptr [esi+0Ch], 0
0x5720CC: mov     edi, [esp+28h+var_18]
0x5720D0: mov     eax, [edi+15E4h]
0x5720D6: test    eax, eax
0x5720D8: jz      short loc_5720F0
0x5720DA: lea     ebx, [ebx+0]
0x5720E0: cmp     esi, [eax+8]
0x5720E3: lea     ecx, [eax+8]
0x5720E6: mov     edx, eax
0x5720E8: mov     eax, [eax]
0x5720EA: jz      short loc_5720F2
0x5720EC: test    eax, eax
0x5720EE: jnz     short loc_5720E0
0x5720F0: xor     edx, edx
0x5720F2: test    edx, edx
0x5720F4: mov     [esp+28h+var_10], edx
0x5720F8: jz      short loc_57210C
0x5720FA: lea     ecx, [esp+28h+var_10]
0x5720FE: push    ecx
0x5720FF: lea     ecx, [edi+15E0h]
0x572105: call    sub_7AA860
0x57210A: mov     esi, eax
0x57210C: test    esi, esi
0x57210E: jz      short loc_572120
0x572110: mov     ecx, esi; void *
0x572112: call    sub_571DF0
0x572117: push    esi
0x572118: call    FormHeapFree
0x57211D: add     esp, 4
0x572120: test    ebp, ebp
0x572122: jnz     loc_572057
0x572128: lea     ecx, [edi+15E0h]
0x57212E: mov     byte ptr [esp+28h+var_4], 0
0x572133: call    ??1?$NiTList@PAUDebugTextData@DebugText@@@@UAE@XZ; NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(void)
0x572138: push    offset sub_571DF0; void (__thiscall *)(void *)
0x57213D: push    0C8h ; 'È'; int
0x572142: push    1Ch; unsigned int
0x572144: push    edi; void *
0x572145: mov     [esp+38h+var_4], 0FFFFFFFFh
0x57214D: call    $LN21
0x572152: mov     ecx, dword ptr [esp+28h+var_C]
0x572156: mov     large fs:0, ecx
0x57215D: pop     ecx
0x57215E: pop     edi
0x57215F: pop     esi
0x572160: pop     ebp
0x572161: add     esp, 18h
0x572164: retn
