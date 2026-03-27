0x55E660: mov     eax, [esp+arg_0]
0x55E664: push    esi
0x55E665: mov     esi, ecx
0x55E667: xor     ecx, ecx
0x55E669: mov     [esi+4], eax
0x55E66C: mov     edx, 4
0x55E671: mul     edx
0x55E673: seto    cl
0x55E676: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E67C: mov     dword ptr [esi+0Ch], 0
0x55E683: neg     ecx
0x55E685: or      ecx, eax
0x55E687: push    ecx; Size
0x55E688: call    FormHeapAlloc
0x55E68D: mov     ecx, [esi+4]
0x55E690: add     ecx, ecx
0x55E692: add     ecx, ecx
0x55E694: push    ecx
0x55E695: push    0
0x55E697: push    eax
0x55E698: mov     [esi+8], eax
0x55E69B: call    __memset
0x55E6A0: add     esp, 10h
0x55E6A3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@6B@; const NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'
0x55E6A9: mov     eax, esi
0x55E6AB: pop     esi
0x55E6AC: retn    4
