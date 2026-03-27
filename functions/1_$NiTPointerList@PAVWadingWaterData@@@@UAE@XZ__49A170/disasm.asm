0x49A170: push    0FFFFFFFFh
0x49A172: push    offset ??1?$NiTPointerList@PAVWadingWaterData@@@@UAE@XZ_SEH
0x49A177: mov     eax, large fs:0
0x49A17D: push    eax
0x49A17E: push    ecx
0x49A17F: push    esi
0x49A180: mov     eax, ds:0B30AACh
0x49A185: xor     eax, esp
0x49A187: push    eax
0x49A188: lea     eax, [esp+18h+var_C]
0x49A18C: mov     large fs:0, eax
0x49A192: mov     esi, ecx
0x49A194: mov     [esp+18h+var_10], esi
0x49A198: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x49A19E: mov     [esp+18h+var_4], 0
0x49A1A6: call    NiTPointerList__FreeAllNodes
0x49A1AB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x49A1B1: mov     ecx, [esp+18h+var_C]
0x49A1B5: mov     large fs:0, ecx
0x49A1BC: pop     ecx
0x49A1BD: pop     esi
0x49A1BE: add     esp, 10h
0x49A1C1: retn
