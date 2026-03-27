0x54BC50: push    0FFFFFFFFh
0x54BC52: push    offset ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ_SEH
0x54BC57: mov     eax, large fs:0
0x54BC5D: push    eax
0x54BC5E: push    ecx
0x54BC5F: push    esi
0x54BC60: mov     eax, ds:0B30AACh
0x54BC65: xor     eax, esp
0x54BC67: push    eax
0x54BC68: lea     eax, [esp+18h+var_C]
0x54BC6C: mov     large fs:0, eax
0x54BC72: mov     esi, ecx
0x54BC74: mov     [esp+18h+var_10], esi
0x54BC78: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54BC7E: mov     [esp+18h+var_4], 0
0x54BC86: call    NiTPointerList__FreeAllNodes
0x54BC8B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54BC91: mov     ecx, [esp+18h+var_C]
0x54BC95: mov     large fs:0, ecx
0x54BC9C: pop     ecx
0x54BC9D: pop     esi
0x54BC9E: add     esp, 10h
0x54BCA1: retn
