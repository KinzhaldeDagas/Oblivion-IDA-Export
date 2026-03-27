0x7AA7A0: push    0FFFFFFFFh
0x7AA7A2: push    offset ??1?$NiTPointerList@PAVShadowVolumeRPList@BSShaderAccumulator@@@@UAE@XZ_SEH
0x7AA7A7: mov     eax, large fs:0
0x7AA7AD: push    eax
0x7AA7AE: push    ecx
0x7AA7AF: push    esi
0x7AA7B0: mov     eax, ds:0B30AACh
0x7AA7B5: xor     eax, esp
0x7AA7B7: push    eax
0x7AA7B8: lea     eax, [esp+18h+var_C]
0x7AA7BC: mov     large fs:0, eax
0x7AA7C2: mov     esi, ecx
0x7AA7C4: mov     [esp+18h+var_10], esi
0x7AA7C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AA7CE: mov     [esp+18h+var_4], 0
0x7AA7D6: call    NiTPointerList__FreeAllNodes
0x7AA7DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7AA7E1: mov     ecx, [esp+18h+var_C]
0x7AA7E5: mov     large fs:0, ecx
0x7AA7EC: pop     ecx
0x7AA7ED: pop     esi
0x7AA7EE: add     esp, 10h
0x7AA7F1: retn
