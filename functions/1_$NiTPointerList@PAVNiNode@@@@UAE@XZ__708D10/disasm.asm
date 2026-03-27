0x708D10: push    0FFFFFFFFh
0x708D12: push    offset ??1?$NiTPointerList@PAVNiNode@@@@UAE@XZ_SEH
0x708D17: mov     eax, large fs:0
0x708D1D: push    eax
0x708D1E: push    ecx
0x708D1F: push    esi
0x708D20: mov     eax, ds:0B30AACh
0x708D25: xor     eax, esp
0x708D27: push    eax
0x708D28: lea     eax, [esp+18h+var_C]
0x708D2C: mov     large fs:0, eax
0x708D32: mov     esi, ecx
0x708D34: mov     [esp+18h+var_10], esi
0x708D38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708D3E: mov     [esp+18h+var_4], 0
0x708D46: call    NiTPointerList__FreeAllNodes
0x708D4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiNode@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiNode *>::`vftable'
0x708D51: mov     ecx, [esp+18h+var_C]
0x708D55: mov     large fs:0, ecx
0x708D5C: pop     ecx
0x708D5D: pop     esi
0x708D5E: add     esp, 10h
0x708D61: retn
