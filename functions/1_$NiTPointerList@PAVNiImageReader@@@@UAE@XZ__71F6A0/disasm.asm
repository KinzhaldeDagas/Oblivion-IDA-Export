0x71F6A0: push    0FFFFFFFFh
0x71F6A2: push    offset ??1?$NiTPointerList@PAVNiImageReader@@@@UAE@XZ_SEH
0x71F6A7: mov     eax, large fs:0
0x71F6AD: push    eax
0x71F6AE: push    ecx
0x71F6AF: push    esi
0x71F6B0: mov     eax, ds:0B30AACh
0x71F6B5: xor     eax, esp
0x71F6B7: push    eax
0x71F6B8: lea     eax, [esp+18h+var_C]
0x71F6BC: mov     large fs:0, eax
0x71F6C2: mov     esi, ecx
0x71F6C4: mov     [esp+18h+var_10], esi
0x71F6C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71F6CE: mov     [esp+18h+var_4], 0
0x71F6D6: call    NiTPointerList__FreeAllNodes
0x71F6DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiImageReader@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiImageReader *>::`vftable'
0x71F6E1: mov     ecx, [esp+18h+var_C]
0x71F6E5: mov     large fs:0, ecx
0x71F6EC: pop     ecx
0x71F6ED: pop     esi
0x71F6EE: add     esp, 10h
0x71F6F1: retn
