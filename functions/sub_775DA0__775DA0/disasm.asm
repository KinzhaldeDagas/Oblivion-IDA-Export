0x775DA0: push    ebx
0x775DA1: mov     ebx, ecx
0x775DA3: push    esi
0x775DA4: mov     esi, [ebx+138h]
0x775DAA: test    esi, esi
0x775DAC: jz      short loc_775DD1
0x775DAE: push    edi
0x775DAF: nop
0x775DB0: mov     edi, [esi+8]
0x775DB3: test    edi, edi
0x775DB5: lea     eax, [esi+8]
0x775DB8: mov     esi, [esi]
0x775DBA: jz      short loc_775DCC
0x775DBC: mov     ecx, edi
0x775DBE: call    sub_7756F0
0x775DC3: push    edi
0x775DC4: call    FormHeapFree
0x775DC9: add     esp, 4
0x775DCC: test    esi, esi
0x775DCE: jnz     short loc_775DB0
0x775DD0: pop     edi
0x775DD1: lea     esi, [ebx+134h]
0x775DD7: mov     ecx, esi
0x775DD9: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x775DDF: call    NiTPointerList__FreeAllNodes
0x775DE4: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVDisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'
0x775DEA: pop     esi
0x775DEB: pop     ebx
0x775DEC: retn
