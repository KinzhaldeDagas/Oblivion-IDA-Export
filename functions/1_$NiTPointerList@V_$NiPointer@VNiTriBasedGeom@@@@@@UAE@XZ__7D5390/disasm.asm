0x7D5390: push    0FFFFFFFFh
0x7D5392: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiTriBasedGeom@@@@@@UAE@XZ_SEH
0x7D5397: mov     eax, large fs:0
0x7D539D: push    eax
0x7D539E: push    ecx
0x7D539F: push    esi
0x7D53A0: mov     eax, ds:0B30AACh
0x7D53A5: xor     eax, esp
0x7D53A7: push    eax
0x7D53A8: lea     eax, [esp+18h+var_C]
0x7D53AC: mov     large fs:0, eax
0x7D53B2: mov     esi, ecx
0x7D53B4: mov     [esp+18h+var_10], esi
0x7D53B8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiTriBasedGeom@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiTriBasedGeom>>::`vftable'
0x7D53BE: mov     [esp+18h+var_4], 0
0x7D53C6: call    NiTPointerList__FreeAllNodes
0x7D53CB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiTriBasedGeom@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiTriBasedGeom>>::`vftable'
0x7D53D1: mov     ecx, [esp+18h+var_C]
0x7D53D5: mov     large fs:0, ecx
0x7D53DC: pop     ecx
0x7D53DD: pop     esi
0x7D53DE: add     esp, 10h
0x7D53E1: retn
