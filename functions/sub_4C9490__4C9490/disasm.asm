0x4C9490: push    0FFFFFFFFh
0x4C9492: push    offset SEH_4C9490
0x4C9497: mov     eax, large fs:0
0x4C949D: push    eax
0x4C949E: sub     esp, 8
0x4C94A1: push    ebx
0x4C94A2: push    esi
0x4C94A3: push    edi
0x4C94A4: mov     eax, ds:0B30AACh
0x4C94A9: xor     eax, esp
0x4C94AB: push    eax
0x4C94AC: lea     eax, [esp+24h+var_C]
0x4C94B0: mov     large fs:0, eax
0x4C94B6: mov     esi, ecx
0x4C94B8: mov     [esp+24h+var_10], esi
0x4C94BC: lea     ebx, [esi+18h]
0x4C94BF: mov     dword ptr [esi], offset ??_7TESLandTexture@@6BTESLandTexture@@@; const TESLandTexture::`vftable'{for `TESLandTexture'}
0x4C94C5: mov     dword ptr [ebx], offset ??_7TESLandTexture@@6BTESTexture@@@; const TESLandTexture::`vftable'{for `TESTexture'}
0x4C94CB: mov     [esp+24h+var_4], 2
0x4C94D3: call    sub_4C8DD0
0x4C94D8: mov     edi, [esi+24h]
0x4C94DB: test    edi, edi
0x4C94DD: mov     byte ptr [esp+24h+var_4], 1
0x4C94E2: jz      short loc_4C9500
0x4C94E4: lea     eax, [edi+4]
0x4C94E7: push    eax; lpAddend
0x4C94E8: call    dword ptr ds:0A2807Ch
0x4C94EE: test    eax, eax
0x4C94F0: jnz     short loc_4C9500
0x4C94F2: test    edi, edi
0x4C94F4: jz      short loc_4C9500
0x4C94F6: mov     edx, [edi]
0x4C94F8: mov     eax, [edx]
0x4C94FA: push    1
0x4C94FC: mov     ecx, edi
0x4C94FE: call    eax
0x4C9500: mov     ecx, ebx; void *
0x4C9502: mov     byte ptr [esp+24h+var_4], 0
0x4C9507: call    TESTexture_destr
0x4C950C: mov     ecx, esi; this
0x4C950E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4C9516: call    TESForm_destr
0x4C951B: mov     ecx, dword ptr [esp+24h+var_C]
0x4C951F: mov     large fs:0, ecx
0x4C9526: pop     ecx
0x4C9527: pop     edi
0x4C9528: pop     esi
0x4C9529: pop     ebx
0x4C952A: add     esp, 14h
0x4C952D: retn
