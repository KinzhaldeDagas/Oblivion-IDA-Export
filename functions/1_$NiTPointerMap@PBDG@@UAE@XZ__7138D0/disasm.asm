0x7138D0: push    0FFFFFFFFh
0x7138D2: push    offset ??1?$NiTPointerMap@PBDG@@UAE@XZ_SEH
0x7138D7: mov     eax, large fs:0
0x7138DD: push    eax
0x7138DE: push    ecx
0x7138DF: push    esi
0x7138E0: mov     eax, ds:0B30AACh
0x7138E5: xor     eax, esp
0x7138E7: push    eax
0x7138E8: lea     eax, [esp+18h+var_C]
0x7138EC: mov     large fs:0, eax
0x7138F2: mov     esi, ecx
0x7138F4: mov     [esp+18h+var_10], esi
0x7138F8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDG@@6B@; const NiTPointerMap<char const *,ushort>::`vftable'
0x7138FE: mov     [esp+18h+var_4], 0
0x713906: call    NiTMap_Clear
0x71390B: mov     ecx, esi
0x71390D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x713915: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDG@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ushort>::`vftable'
0x71391B: call    NiTMap_Clear
0x713920: mov     eax, [esi+8]
0x713923: push    eax
0x713924: call    FormHeapFree
0x713929: add     esp, 4
0x71392C: mov     ecx, [esp+18h+var_C]
0x713930: mov     large fs:0, ecx
0x713937: pop     ecx
0x713938: pop     esi
0x713939: add     esp, 10h
0x71393C: retn
