0x4FB460: push    0FFFFFFFFh
0x4FB462: push    offset ??1?$NiTPointerList@PAVScript@@@@UAE@XZ_SEH
0x4FB467: mov     eax, large fs:0
0x4FB46D: push    eax
0x4FB46E: push    ecx
0x4FB46F: push    esi
0x4FB470: mov     eax, ds:0B30AACh
0x4FB475: xor     eax, esp
0x4FB477: push    eax
0x4FB478: lea     eax, [esp+18h+var_C]
0x4FB47C: mov     large fs:0, eax
0x4FB482: mov     esi, ecx
0x4FB484: mov     [esp+18h+var_10], esi
0x4FB488: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVScript@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,Script *>::`vftable'
0x4FB48E: mov     [esp+18h+var_4], 0
0x4FB496: call    NiTPointerList__FreeAllNodes
0x4FB49B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVScript@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,Script *>::`vftable'
0x4FB4A1: mov     ecx, [esp+18h+var_C]
0x4FB4A5: mov     large fs:0, ecx
0x4FB4AC: pop     ecx
0x4FB4AD: pop     esi
0x4FB4AE: add     esp, 10h
0x4FB4B1: retn
