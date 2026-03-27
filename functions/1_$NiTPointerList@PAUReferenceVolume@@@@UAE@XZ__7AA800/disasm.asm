0x7AA800: push    0FFFFFFFFh
0x7AA802: push    offset ??1?$NiTPointerList@PAUReferenceVolume@@@@UAE@XZ_SEH
0x7AA807: mov     eax, large fs:0
0x7AA80D: push    eax
0x7AA80E: push    ecx
0x7AA80F: push    esi
0x7AA810: mov     eax, ds:0B30AACh
0x7AA815: xor     eax, esp
0x7AA817: push    eax
0x7AA818: lea     eax, [esp+18h+var_C]
0x7AA81C: mov     large fs:0, eax
0x7AA822: mov     esi, ecx
0x7AA824: mov     [esp+18h+var_10], esi
0x7AA828: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUReferenceVolume@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,ReferenceVolume *>::`vftable'
0x7AA82E: mov     [esp+18h+var_4], 0
0x7AA836: call    NiTPointerList__FreeAllNodes
0x7AA83B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUReferenceVolume@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,ReferenceVolume *>::`vftable'
0x7AA841: mov     ecx, [esp+18h+var_C]
0x7AA845: mov     large fs:0, ecx
0x7AA84C: pop     ecx
0x7AA84D: pop     esi
0x7AA84E: add     esp, 10h
0x7AA851: retn
