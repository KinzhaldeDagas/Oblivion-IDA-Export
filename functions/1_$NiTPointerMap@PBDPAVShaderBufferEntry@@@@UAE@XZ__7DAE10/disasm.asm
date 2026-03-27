0x7DAE10: push    0FFFFFFFFh
0x7DAE12: push    offset ??1?$NiTPointerMap@PBDPAVShaderBufferEntry@@@@UAE@XZ_SEH
0x7DAE17: mov     eax, large fs:0
0x7DAE1D: push    eax
0x7DAE1E: push    ecx
0x7DAE1F: push    esi
0x7DAE20: mov     eax, ds:0B30AACh
0x7DAE25: xor     eax, esp
0x7DAE27: push    eax
0x7DAE28: lea     eax, [esp+18h+var_C]
0x7DAE2C: mov     large fs:0, eax
0x7DAE32: mov     esi, ecx
0x7DAE34: mov     [esp+18h+var_10], esi
0x7DAE38: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVShaderBufferEntry@@@@6B@; const NiTPointerMap<char const *,ShaderBufferEntry *>::`vftable'
0x7DAE3E: mov     [esp+18h+var_4], 0
0x7DAE46: call    NiTMap_Clear
0x7DAE4B: mov     ecx, esi
0x7DAE4D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7DAE55: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVShaderBufferEntry@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ShaderBufferEntry *>::`vftable'
0x7DAE5B: call    NiTMap_Clear
0x7DAE60: mov     eax, [esi+8]
0x7DAE63: push    eax
0x7DAE64: call    FormHeapFree
0x7DAE69: add     esp, 4
0x7DAE6C: mov     ecx, [esp+18h+var_C]
0x7DAE70: mov     large fs:0, ecx
0x7DAE77: pop     ecx
0x7DAE78: pop     esi
0x7DAE79: add     esp, 10h
0x7DAE7C: retn
