0x44D720: mov     eax, [esp+arg_0]
0x44D724: push    esi
0x44D725: mov     esi, ecx
0x44D727: xor     ecx, ecx
0x44D729: mov     [esi+4], eax
0x44D72C: mov     edx, 4
0x44D731: mul     edx
0x44D733: seto    cl
0x44D736: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESForm@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESForm *,bool>::`vftable'
0x44D73C: mov     dword ptr [esi+0Ch], 0
0x44D743: neg     ecx
0x44D745: or      ecx, eax
0x44D747: push    ecx; Size
0x44D748: call    FormHeapAlloc
0x44D74D: mov     ecx, [esi+4]
0x44D750: add     ecx, ecx
0x44D752: add     ecx, ecx
0x44D754: push    ecx
0x44D755: push    0
0x44D757: push    eax
0x44D758: mov     [esi+8], eax
0x44D75B: call    __memset
0x44D760: add     esp, 10h
0x44D763: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESForm@@_N@@6B@; const NiTPointerMap<TESForm *,bool>::`vftable'
0x44D769: mov     eax, esi
0x44D76B: pop     esi
0x44D76C: retn    4
