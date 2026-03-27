0x4BCE00: push    0FFFFFFFFh
0x4BCE02: push    offset ??0?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@QAE@XZ_SEH
0x4BCE07: mov     eax, large fs:0
0x4BCE0D: push    eax
0x4BCE0E: push    ecx
0x4BCE0F: push    ebx
0x4BCE10: push    ebp
0x4BCE11: push    esi
0x4BCE12: push    edi
0x4BCE13: mov     eax, ds:0B30AACh
0x4BCE18: xor     eax, esp
0x4BCE1A: push    eax
0x4BCE1B: lea     eax, [esp+24h+var_C]
0x4BCE1F: mov     large fs:0, eax
0x4BCE25: mov     esi, ecx
0x4BCE27: mov     [esp+24h+var_10], esi
0x4BCE2B: xor     ecx, ecx
0x4BCE2D: mov     eax, 25h ; '%'
0x4BCE32: mov     [esi+10h], eax
0x4BCE35: xor     ebx, ebx
0x4BCE37: mov     edx, 4
0x4BCE3C: mul     edx
0x4BCE3E: seto    cl
0x4BCE41: mov     dword ptr [esi+0Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCE48: mov     [esi+18h], ebx
0x4BCE4B: neg     ecx
0x4BCE4D: or      ecx, eax
0x4BCE4F: push    ecx; Size
0x4BCE50: call    FormHeapAlloc
0x4BCE55: mov     ecx, [esi+10h]
0x4BCE58: add     ecx, ecx
0x4BCE5A: add     ecx, ecx
0x4BCE5C: push    ecx
0x4BCE5D: push    ebx
0x4BCE5E: push    eax
0x4BCE5F: mov     [esi+14h], eax
0x4BCE62: call    __memset
0x4BCE67: add     esp, 10h
0x4BCE6A: mov     dword ptr [esi+0Ch], offset ??_7?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCE71: mov     [esp+24h+var_4], ebx
0x4BCE75: mov     [esi+1Ch], ebx
0x4BCE78: mov     [esi+20h], ebx
0x4BCE7B: mov     ebp, ds:0A2807Ch
0x4BCE81: mov     [esi+28h], bl
0x4BCE84: mov     [esi], ebx
0x4BCE86: mov     [esi+4], ebx
0x4BCE89: mov     [esi+8], ebx
0x4BCE8C: mov     edi, [esi+20h]
0x4BCE8F: cmp     edi, ebx
0x4BCE91: mov     byte ptr [esp+24h+var_4], 2
0x4BCE96: jz      short loc_4BCEB3
0x4BCE98: lea     edx, [edi+4]
0x4BCE9B: push    edx; lpAddend
0x4BCE9C: call    ebp ; InterlockedDecrement
0x4BCE9E: test    eax, eax
0x4BCEA0: jnz     short loc_4BCEB0
0x4BCEA2: cmp     edi, ebx
0x4BCEA4: jz      short loc_4BCEB0
0x4BCEA6: mov     eax, [edi]
0x4BCEA8: mov     edx, [eax]
0x4BCEAA: push    1
0x4BCEAC: mov     ecx, edi
0x4BCEAE: call    edx
0x4BCEB0: mov     [esi+20h], ebx
0x4BCEB3: mov     edi, [esi+1Ch]
0x4BCEB6: cmp     edi, ebx
0x4BCEB8: jz      short loc_4BCED5
0x4BCEBA: lea     eax, [edi+4]
0x4BCEBD: push    eax; lpAddend
0x4BCEBE: call    ebp ; InterlockedDecrement
0x4BCEC0: test    eax, eax
0x4BCEC2: jnz     short loc_4BCED2
0x4BCEC4: cmp     edi, ebx
0x4BCEC6: jz      short loc_4BCED2
0x4BCEC8: mov     edx, [edi]
0x4BCECA: mov     eax, [edx]
0x4BCECC: push    1
0x4BCECE: mov     ecx, edi
0x4BCED0: call    eax
0x4BCED2: mov     [esi+1Ch], ebx
0x4BCED5: mov     eax, esi
0x4BCED7: mov     ecx, dword ptr [esp+24h+var_C]
0x4BCEDB: mov     large fs:0, ecx
0x4BCEE2: pop     ecx
0x4BCEE3: pop     edi
0x4BCEE4: pop     esi
0x4BCEE5: pop     ebp
0x4BCEE6: pop     ebx
0x4BCEE7: add     esp, 10h
0x4BCEEA: retn
