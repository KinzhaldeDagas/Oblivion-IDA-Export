0x733440: push    0FFFFFFFFh
0x733442: push    offset ??1?$NiTPointerList@PAVNiGeometry@@@@UAE@XZ_SEH
0x733447: mov     eax, large fs:0
0x73344D: push    eax
0x73344E: push    ecx
0x73344F: push    esi
0x733450: mov     eax, ds:0B30AACh
0x733455: xor     eax, esp
0x733457: push    eax
0x733458: lea     eax, [esp+18h+var_C]
0x73345C: mov     large fs:0, eax
0x733462: mov     esi, ecx
0x733464: mov     [esp+18h+var_10], esi
0x733468: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x73346E: mov     [esp+18h+var_4], 0
0x733476: call    NiTPointerList__FreeAllNodes
0x73347B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x733481: mov     ecx, [esp+18h+var_C]
0x733485: mov     large fs:0, ecx
0x73348C: pop     ecx
0x73348D: pop     esi
0x73348E: add     esp, 10h
0x733491: retn
