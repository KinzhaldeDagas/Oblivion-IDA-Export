0x713810: push    0FFFFFFFFh
0x713812: push    offset ??1?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@UAE@XZ_SEH
0x713817: mov     eax, large fs:0
0x71381D: push    eax
0x71381E: push    ecx
0x71381F: push    esi
0x713820: mov     eax, ds:0B30AACh
0x713825: xor     eax, esp
0x713827: push    eax
0x713828: lea     eax, [esp+18h+var_C]
0x71382C: mov     large fs:0, eax
0x713832: mov     esi, ecx
0x713834: mov     [esp+18h+var_10], esi
0x713838: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@6B@; const NiTPointerMap<char const *,NiObject * (*)(void)>::`vftable'
0x71383E: mov     [esp+18h+var_4], 0
0x713846: call    NiTMap_Clear
0x71384B: mov     ecx, esi
0x71384D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x713855: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDP6APAVNiObject@@XZ@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiObject * (*)(void)>::`vftable'
0x71385B: call    NiTMap_Clear
0x713860: mov     eax, [esi+8]
0x713863: push    eax
0x713864: call    FormHeapFree
0x713869: add     esp, 4
0x71386C: mov     ecx, [esp+18h+var_C]
0x713870: mov     large fs:0, ecx
0x713877: pop     ecx
0x713878: pop     esi
0x713879: add     esp, 10h
0x71387C: retn
