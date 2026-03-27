0x88F040: push    esi
0x88F041: push    edi
0x88F042: mov     edi, ecx
0x88F044: mov     esi, [edi+10h]
0x88F047: test    esi, esi
0x88F049: jz      short loc_88F093
0x88F04B: cmp     dword ptr [edi+1Ch], 6
0x88F04F: jnz     short loc_88F067
0x88F051: mov     eax, [esi+8]
0x88F054: test    eax, eax
0x88F056: jz      short loc_88F083
0x88F058: mov     ecx, [eax+50h]
0x88F05B: mov     eax, [ecx]
0x88F05D: mov     edx, [eax+8]
0x88F060: call    edx
0x88F062: cmp     eax, 6
0x88F065: jnz     short loc_88F083
0x88F067: cmp     dword ptr [edi+1Ch], 1
0x88F06B: jnz     short loc_88F093
0x88F06D: mov     eax, [esi+8]
0x88F070: test    eax, eax
0x88F072: jz      short loc_88F083
0x88F074: mov     ecx, [eax+50h]
0x88F077: mov     eax, [ecx]
0x88F079: mov     edx, [eax+8]
0x88F07C: call    edx
0x88F07E: cmp     eax, 6
0x88F081: jl      short loc_88F093
0x88F083: mov     ecx, [edi+1Ch]
0x88F086: mov     eax, [esi]
0x88F088: mov     edx, [eax+9Ch]
0x88F08E: push    ecx
0x88F08F: mov     ecx, esi
0x88F091: call    edx
0x88F093: pop     edi
0x88F094: pop     esi
0x88F095: retn
