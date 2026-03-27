0x4A2100: mov     eax, [esp+arg_0]
0x4A2104: push    esi
0x4A2105: mov     esi, ecx
0x4A2107: xor     ecx, ecx
0x4A2109: mov     [esi+4], eax
0x4A210C: mov     edx, 4
0x4A2111: mul     edx
0x4A2113: seto    cl
0x4A2116: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A211C: mov     dword ptr [esi+0Ch], 0
0x4A2123: neg     ecx
0x4A2125: or      ecx, eax
0x4A2127: push    ecx; Size
0x4A2128: call    FormHeapAlloc
0x4A212D: mov     ecx, [esi+4]
0x4A2130: add     ecx, ecx
0x4A2132: add     ecx, ecx
0x4A2134: push    ecx
0x4A2135: push    0
0x4A2137: push    eax
0x4A2138: mov     [esi+8], eax
0x4A213B: call    __memset
0x4A2140: add     esp, 10h
0x4A2143: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A2149: mov     eax, esi
0x4A214B: pop     esi
0x4A214C: retn    4
