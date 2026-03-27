0x4B84E0: push    0FFFFFFFFh
0x4B84E2: push    offset ??1?$NiTPointerMap@H_N@@UAE@XZ_SEH
0x4B84E7: mov     eax, large fs:0
0x4B84ED: push    eax
0x4B84EE: push    ecx
0x4B84EF: push    esi
0x4B84F0: mov     eax, ds:0B30AACh
0x4B84F5: xor     eax, esp
0x4B84F7: push    eax
0x4B84F8: lea     eax, [esp+18h+var_C]
0x4B84FC: mov     large fs:0, eax
0x4B8502: mov     esi, ecx
0x4B8504: mov     [esp+18h+var_10], esi
0x4B8508: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@H_N@@6B@; const NiTPointerMap<int,bool>::`vftable'
0x4B850E: mov     [esp+18h+var_4], 0
0x4B8516: call    NiTMap_Clear
0x4B851B: mov     ecx, esi
0x4B851D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4B8525: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@H_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,bool>::`vftable'
0x4B852B: call    NiTMap_Clear
0x4B8530: mov     eax, [esi+8]
0x4B8533: push    eax
0x4B8534: call    FormHeapFree
0x4B8539: add     esp, 4
0x4B853C: mov     ecx, [esp+18h+var_C]
0x4B8540: mov     large fs:0, ecx
0x4B8547: pop     ecx
0x4B8548: pop     esi
0x4B8549: add     esp, 10h
0x4B854C: retn
