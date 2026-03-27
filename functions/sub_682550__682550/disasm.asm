0x682550: push    esi
0x682551: mov     esi, ecx
0x682553: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682559: call    NiTMap_Clear
0x68255E: mov     eax, [esi+8]
0x682561: push    eax
0x682562: call    FormHeapFree
0x682567: add     esp, 4
0x68256A: test    [esp+4+arg_0], 1
0x68256F: jz      short loc_68257A
0x682571: push    esi
0x682572: call    FormHeapFree
0x682577: add     esp, 4
0x68257A: mov     eax, esi
0x68257C: pop     esi
0x68257D: retn    4
