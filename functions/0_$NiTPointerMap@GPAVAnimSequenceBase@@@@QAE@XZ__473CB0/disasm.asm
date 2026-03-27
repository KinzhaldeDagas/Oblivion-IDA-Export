0x473CB0: mov     eax, [esp+arg_0]
0x473CB4: push    esi
0x473CB5: mov     esi, ecx
0x473CB7: xor     ecx, ecx
0x473CB9: mov     [esi+4], eax
0x473CBC: mov     edx, 4
0x473CC1: mul     edx
0x473CC3: seto    cl
0x473CC6: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@GPAVAnimSequenceBase@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ushort,AnimSequenceBase *>::`vftable'
0x473CCC: mov     dword ptr [esi+0Ch], 0
0x473CD3: neg     ecx
0x473CD5: or      ecx, eax
0x473CD7: push    ecx; Size
0x473CD8: call    FormHeapAlloc
0x473CDD: mov     ecx, [esi+4]
0x473CE0: add     ecx, ecx
0x473CE2: add     ecx, ecx
0x473CE4: push    ecx
0x473CE5: push    0
0x473CE7: push    eax
0x473CE8: mov     [esi+8], eax
0x473CEB: call    __memset
0x473CF0: add     esp, 10h
0x473CF3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@GPAVAnimSequenceBase@@@@6B@; const NiTPointerMap<ushort,AnimSequenceBase *>::`vftable'
0x473CF9: mov     eax, esi
0x473CFB: pop     esi
0x473CFC: retn    4
