0x707C10: push    0FFFFFFFFh
0x707C12: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiProperty@@@@@@UAE@XZ_SEH
0x707C17: mov     eax, large fs:0
0x707C1D: push    eax
0x707C1E: push    ecx
0x707C1F: push    esi
0x707C20: mov     eax, ds:0B30AACh
0x707C25: xor     eax, esp
0x707C27: push    eax
0x707C28: lea     eax, [esp+18h+var_C]
0x707C2C: mov     large fs:0, eax
0x707C32: mov     esi, ecx
0x707C34: mov     [esp+18h+var_10], esi
0x707C38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x707C3E: mov     [esp+18h+var_4], 0
0x707C46: call    NiTPointerList__FreeAllNodes
0x707C4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiProperty@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiProperty>>::`vftable'
0x707C51: mov     ecx, [esp+18h+var_C]
0x707C55: mov     large fs:0, ecx
0x707C5C: pop     ecx
0x707C5D: pop     esi
0x707C5E: add     esp, 10h
0x707C61: retn
