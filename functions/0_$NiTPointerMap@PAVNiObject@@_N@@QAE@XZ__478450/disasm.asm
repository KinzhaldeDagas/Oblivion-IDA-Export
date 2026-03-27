0x478450: mov     eax, [esp+arg_0]
0x478454: push    esi
0x478455: mov     esi, ecx
0x478457: xor     ecx, ecx
0x478459: mov     [esi+4], eax
0x47845C: mov     edx, 4
0x478461: mul     edx
0x478463: seto    cl
0x478466: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,bool>::`vftable'
0x47846C: mov     dword ptr [esi+0Ch], 0
0x478473: neg     ecx
0x478475: or      ecx, eax
0x478477: push    ecx; Size
0x478478: call    FormHeapAlloc
0x47847D: mov     ecx, [esi+4]
0x478480: add     ecx, ecx
0x478482: add     ecx, ecx
0x478484: push    ecx
0x478485: push    0
0x478487: push    eax
0x478488: mov     [esi+8], eax
0x47848B: call    __memset
0x478490: add     esp, 10h
0x478493: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiObject@@_N@@6B@; const NiTPointerMap<NiObject *,bool>::`vftable'
0x478499: mov     eax, esi
0x47849B: pop     esi
0x47849C: retn    4
