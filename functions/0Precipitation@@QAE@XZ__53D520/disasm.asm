0x53D520: push    0FFFFFFFFh
0x53D522: push    offset ??1Sky@@UAE@XZ_SEH
0x53D527: mov     eax, large fs:0
0x53D52D: push    eax
0x53D52E: push    ecx
0x53D52F: push    ebx
0x53D530: push    ebp
0x53D531: push    esi
0x53D532: push    edi
0x53D533: mov     eax, ds:0B30AACh
0x53D538: xor     eax, esp
0x53D53A: push    eax
0x53D53B: lea     eax, [esp+24h+var_C]
0x53D53F: mov     large fs:0, eax
0x53D545: mov     esi, ecx
0x53D547: mov     [esp+24h+var_10], esi
0x53D54B: xor     ebx, ebx
0x53D54D: mov     dword ptr [esi], offset ??_7Precipitation@@6B@; const Precipitation::`vftable'
0x53D553: mov     [esi+4], ebx
0x53D556: mov     [esp+24h+var_4], ebx
0x53D55A: mov     [esi+8], ebx
0x53D55D: mov     edi, [esi+4]
0x53D560: cmp     edi, ebx
0x53D562: mov     ebp, ds:0A2807Ch
0x53D568: mov     byte ptr [esp+24h+var_4], 1
0x53D56D: jz      short loc_53D58A
0x53D56F: lea     eax, [edi+4]
0x53D572: push    eax; lpAddend
0x53D573: call    ebp ; InterlockedDecrement
0x53D575: test    eax, eax
0x53D577: jnz     short loc_53D587
0x53D579: cmp     edi, ebx
0x53D57B: jz      short loc_53D587
0x53D57D: mov     edx, [edi]
0x53D57F: mov     eax, [edx]
0x53D581: push    1
0x53D583: mov     ecx, edi
0x53D585: call    eax
0x53D587: mov     [esi+4], ebx
0x53D58A: mov     edi, [esi+8]
0x53D58D: cmp     edi, ebx
0x53D58F: jz      short loc_53D5AC
0x53D591: lea     ecx, [edi+4]
0x53D594: push    ecx; lpAddend
0x53D595: call    ebp ; InterlockedDecrement
0x53D597: test    eax, eax
0x53D599: jnz     short loc_53D5A9
0x53D59B: cmp     edi, ebx
0x53D59D: jz      short loc_53D5A9
0x53D59F: mov     edx, [edi]
0x53D5A1: mov     eax, [edx]
0x53D5A3: push    1
0x53D5A5: mov     ecx, edi
0x53D5A7: call    eax
0x53D5A9: mov     [esi+8], ebx
0x53D5AC: fldz
0x53D5AE: mov     [esi+14h], ebx
0x53D5B1: fstp    dword ptr [esi+10h]
0x53D5B4: mov     [esi+0Ch], ebx
0x53D5B7: mov     eax, esi
0x53D5B9: mov     ecx, dword ptr [esp+24h+var_C]
0x53D5BD: mov     large fs:0, ecx
0x53D5C4: pop     ecx
0x53D5C5: pop     edi
0x53D5C6: pop     esi
0x53D5C7: pop     ebp
0x53D5C8: pop     ebx
0x53D5C9: add     esp, 10h
0x53D5CC: retn
