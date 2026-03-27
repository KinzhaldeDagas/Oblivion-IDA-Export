0x70E7B0: push    0FFFFFFFFh
0x70E7B2: push    offset ??1NiPixelData@@UAE@XZ_SEH
0x70E7B7: mov     eax, large fs:0
0x70E7BD: push    eax
0x70E7BE: push    ecx
0x70E7BF: push    ebp
0x70E7C0: push    esi
0x70E7C1: push    edi
0x70E7C2: mov     eax, ds:0B30AACh
0x70E7C7: xor     eax, esp
0x70E7C9: push    eax
0x70E7CA: lea     eax, [esp+20h+var_C]
0x70E7CE: mov     large fs:0, eax
0x70E7D4: mov     esi, ecx
0x70E7D6: mov     [esp+20h+var_10], esi
0x70E7DA: mov     dword ptr [esi], offset ??_7NiPixelData@@6B@; const NiPixelData::`vftable'
0x70E7E0: mov     edi, [esi+4Ch]
0x70E7E3: test    edi, edi
0x70E7E5: mov     ebp, ds:0A2807Ch
0x70E7EB: mov     [esp+20h+var_4], 1
0x70E7F3: jz      short loc_70E814
0x70E7F5: lea     eax, [edi+4]
0x70E7F8: push    eax; lpAddend
0x70E7F9: call    ebp ; InterlockedDecrement
0x70E7FB: test    eax, eax
0x70E7FD: jnz     short loc_70E80D
0x70E7FF: test    edi, edi
0x70E801: jz      short loc_70E80D
0x70E803: mov     edx, [edi]
0x70E805: mov     eax, [edx]
0x70E807: push    1
0x70E809: mov     ecx, edi
0x70E80B: call    eax
0x70E80D: mov     dword ptr [esi+4Ch], 0
0x70E814: mov     ecx, esi
0x70E816: call    sub_7322D0
0x70E81B: mov     edi, [esi+4Ch]
0x70E81E: test    edi, edi
0x70E820: mov     byte ptr [esp+20h+var_4], 0
0x70E825: jz      short loc_70E83F
0x70E827: lea     ecx, [edi+4]
0x70E82A: push    ecx; lpAddend
0x70E82B: call    ebp ; InterlockedDecrement
0x70E82D: test    eax, eax
0x70E82F: jnz     short loc_70E83F
0x70E831: test    edi, edi
0x70E833: jz      short loc_70E83F
0x70E835: mov     edx, [edi]
0x70E837: mov     eax, [edx]
0x70E839: push    1
0x70E83B: mov     ecx, edi
0x70E83D: call    eax
0x70E83F: mov     ecx, esi
0x70E841: mov     [esp+20h+var_4], 0FFFFFFFFh
0x70E849: call    NiRefObject_destr
0x70E84E: mov     ecx, [esp+20h+var_C]
0x70E852: mov     large fs:0, ecx
0x70E859: pop     ecx
0x70E85A: pop     edi
0x70E85B: pop     esi
0x70E85C: pop     ebp
0x70E85D: add     esp, 10h
0x70E860: retn
