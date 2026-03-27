0x6ED1B0: push    0FFFFFFFFh
0x6ED1B2: push    offset ??1NiBSplineInterpolator@@UAE@XZ_SEH
0x6ED1B7: mov     eax, large fs:0
0x6ED1BD: push    eax
0x6ED1BE: push    ecx
0x6ED1BF: push    ebx
0x6ED1C0: push    esi
0x6ED1C1: push    edi
0x6ED1C2: mov     eax, ds:0B30AACh
0x6ED1C7: xor     eax, esp
0x6ED1C9: push    eax
0x6ED1CA: lea     eax, [esp+20h+var_C]
0x6ED1CE: mov     large fs:0, eax
0x6ED1D4: mov     edi, ecx
0x6ED1D6: mov     [esp+20h+var_10], edi
0x6ED1DA: mov     dword ptr [edi], offset ??_7NiBSplineInterpolator@@6B@; const NiBSplineInterpolator::`vftable'
0x6ED1E0: mov     esi, [edi+18h]
0x6ED1E3: test    esi, esi
0x6ED1E5: mov     ebx, ds:0A2807Ch
0x6ED1EB: mov     [esp+20h+var_4], 1
0x6ED1F3: jz      short loc_6ED20D
0x6ED1F5: lea     eax, [esi+4]
0x6ED1F8: push    eax; lpAddend
0x6ED1F9: call    ebx ; InterlockedDecrement
0x6ED1FB: test    eax, eax
0x6ED1FD: jnz     short loc_6ED20D
0x6ED1FF: test    esi, esi
0x6ED201: jz      short loc_6ED20D
0x6ED203: mov     edx, [esi]
0x6ED205: mov     eax, [edx]
0x6ED207: push    1
0x6ED209: mov     ecx, esi
0x6ED20B: call    eax
0x6ED20D: mov     esi, [edi+14h]
0x6ED210: test    esi, esi
0x6ED212: mov     byte ptr [esp+20h+var_4], 0
0x6ED217: jz      short loc_6ED231
0x6ED219: lea     ecx, [esi+4]
0x6ED21C: push    ecx; lpAddend
0x6ED21D: call    ebx ; InterlockedDecrement
0x6ED21F: test    eax, eax
0x6ED221: jnz     short loc_6ED231
0x6ED223: test    esi, esi
0x6ED225: jz      short loc_6ED231
0x6ED227: mov     edx, [esi]
0x6ED229: mov     eax, [edx]
0x6ED22B: push    1
0x6ED22D: mov     ecx, esi
0x6ED22F: call    eax
0x6ED231: mov     ecx, edi
0x6ED233: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6ED23B: call    sub_6EBA30
0x6ED240: mov     ecx, [esp+20h+var_C]
0x6ED244: mov     large fs:0, ecx
0x6ED24B: pop     ecx
0x6ED24C: pop     edi
0x6ED24D: pop     esi
0x6ED24E: pop     ebx
0x6ED24F: add     esp, 10h
0x6ED252: retn
