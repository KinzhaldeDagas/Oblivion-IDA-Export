0x4BCC30: push    esi
0x4BCC31: mov     esi, ecx
0x4BCC33: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCC39: call    NiTMap_Clear
0x4BCC3E: mov     eax, [esi+8]
0x4BCC41: push    eax
0x4BCC42: call    FormHeapFree
0x4BCC47: add     esp, 4
0x4BCC4A: test    [esp+4+arg_0], 1
0x4BCC4F: jz      short loc_4BCC5A
0x4BCC51: push    esi
0x4BCC52: call    FormHeapFree
0x4BCC57: add     esp, 4
0x4BCC5A: mov     eax, esi
0x4BCC5C: pop     esi
0x4BCC5D: retn    4
