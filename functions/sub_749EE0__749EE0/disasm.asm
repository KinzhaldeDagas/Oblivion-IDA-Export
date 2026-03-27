0x749EE0: push    ebx
0x749EE1: push    esi
0x749EE2: mov     esi, ecx
0x749EE4: call    sub_741FA0
0x749EE9: mov     dword ptr [esi], offset ??_7NiParticleSystem@@6B@; const NiParticleSystem::`vftable'
0x749EEF: mov     byte ptr [esi+0C0h], 1
0x749EF6: xor     ebx, ebx
0x749EF8: mov     [esi+0D0h], ebx
0x749EFE: mov     [esi+0C8h], ebx
0x749F04: mov     [esi+0CCh], ebx
0x749F0A: mov     dword ptr [esi+0C4h], offset ??_7?$NiTPointerList@V?$NiPointer@VNiPSysModifier@@@@@@6B@; const NiTPointerList<NiPointer<NiPSysModifier>>::`vftable'
0x749F14: xor     ecx, ecx
0x749F16: mov     eax, 25h ; '%'
0x749F1B: mov     [esi+0D8h], eax
0x749F21: mov     edx, 4
0x749F26: mul     edx
0x749F28: seto    cl
0x749F2B: mov     dword ptr [esi+0D4h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiPSysModifier@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPSysModifier *>::`vftable'
0x749F35: mov     [esi+0E0h], ebx
0x749F3B: neg     ecx
0x749F3D: or      ecx, eax
0x749F3F: push    ecx; Size
0x749F40: call    FormHeapAlloc
0x749F45: mov     ecx, [esi+0D8h]
0x749F4B: add     ecx, ecx
0x749F4D: add     ecx, ecx
0x749F4F: push    ecx
0x749F50: push    ebx
0x749F51: push    eax
0x749F52: mov     [esi+0DCh], eax
0x749F58: call    __memset
0x749F5D: mov     byte ptr [esi+0E4h], 1
0x749F64: mov     dword ptr [esi+0D4h], offset ??_7?$NiTStringPointerMap@PAVNiPSysModifier@@@@6B@; const NiTStringPointerMap<NiPSysModifier *>::`vftable'
0x749F6E: fld     dword ptr ds:0A7DEB4h
0x749F74: add     esp, 10h
0x749F77: fchs
0x749F79: mov     [esi+0ECh], bl
0x749F7F: fstp    dword ptr [esi+0E8h]
0x749F85: mov     eax, esi
0x749F87: pop     esi
0x749F88: pop     ebx
0x749F89: retn
