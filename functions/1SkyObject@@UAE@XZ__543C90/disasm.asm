0x543C90: push    0FFFFFFFFh
0x543C92: push    offset ??1SkyObject@@UAE@XZ_SEH
0x543C97: mov     eax, large fs:0
0x543C9D: push    eax
0x543C9E: push    ecx
0x543C9F: push    ebp
0x543CA0: push    esi
0x543CA1: push    edi
0x543CA2: mov     eax, ds:0B30AACh
0x543CA7: xor     eax, esp
0x543CA9: push    eax
0x543CAA: lea     eax, [esp+20h+var_C]
0x543CAE: mov     large fs:0, eax
0x543CB4: mov     edi, ecx
0x543CB6: mov     [esp+20h+var_10], edi
0x543CBA: mov     dword ptr [edi], offset ??_7SkyObject@@6B@; const SkyObject::`vftable'
0x543CC0: mov     esi, [edi+4]
0x543CC3: test    esi, esi
0x543CC5: mov     ebp, ds:0A2807Ch
0x543CCB: mov     [esp+20h+var_4], 0
0x543CD3: jz      short loc_543CF4
0x543CD5: lea     eax, [esi+4]
0x543CD8: push    eax; lpAddend
0x543CD9: call    ebp ; InterlockedDecrement
0x543CDB: test    eax, eax
0x543CDD: jnz     short loc_543CED
0x543CDF: test    esi, esi
0x543CE1: jz      short loc_543CED
0x543CE3: mov     edx, [esi]
0x543CE5: mov     eax, [edx]
0x543CE7: push    1
0x543CE9: mov     ecx, esi
0x543CEB: call    eax
0x543CED: mov     dword ptr [edi+4], 0
0x543CF4: mov     edi, [edi+4]
0x543CF7: test    edi, edi
0x543CF9: mov     [esp+20h+var_4], 0FFFFFFFFh
0x543D01: jz      short loc_543D1B
0x543D03: lea     ecx, [edi+4]
0x543D06: push    ecx; lpAddend
0x543D07: call    ebp ; InterlockedDecrement
0x543D09: test    eax, eax
0x543D0B: jnz     short loc_543D1B
0x543D0D: test    edi, edi
0x543D0F: jz      short loc_543D1B
0x543D11: mov     edx, [edi]
0x543D13: mov     eax, [edx]
0x543D15: push    1
0x543D17: mov     ecx, edi
0x543D19: call    eax
0x543D1B: mov     ecx, dword ptr [esp+20h+var_C]
0x543D1F: mov     large fs:0, ecx
0x543D26: pop     ecx
0x543D27: pop     edi
0x543D28: pop     esi
0x543D29: pop     ebp
0x543D2A: add     esp, 10h
0x543D2D: retn
