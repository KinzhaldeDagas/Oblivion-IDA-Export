0x77DC20: push    esi
0x77DC21: mov     esi, ecx
0x77DC23: push    edi
0x77DC24: mov     dword ptr [esi], offset ??_7NiStaticGeometryGroup@@6B@; const NiStaticGeometryGroup::`vftable'
0x77DC2A: call    sub_77D980
0x77DC2F: lea     edi, [esi+0Ch]
0x77DC32: mov     ecx, edi
0x77DC34: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiVBSet@@@@6B@; const NiTPointerMap<uint,NiVBSet *>::`vftable'
0x77DC3A: call    NiTMap_Clear
0x77DC3F: mov     ecx, edi
0x77DC41: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBSet *>::`vftable'
0x77DC47: call    NiTMap_Clear
0x77DC4C: mov     eax, [edi+8]
0x77DC4F: push    eax
0x77DC50: call    FormHeapFree
0x77DC55: add     esp, 4
0x77DC58: mov     ecx, esi
0x77DC5A: call    sub_7828F0
0x77DC5F: test    [esp+8+arg_0], 1
0x77DC64: jz      short loc_77DC6F
0x77DC66: push    esi
0x77DC67: call    FormHeapFree
0x77DC6C: add     esp, 4
0x77DC6F: pop     edi
0x77DC70: mov     eax, esi
0x77DC72: pop     esi
0x77DC73: retn    4
