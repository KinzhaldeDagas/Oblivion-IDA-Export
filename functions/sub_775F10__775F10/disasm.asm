0x775F10: push    esi
0x775F11: push    edi
0x775F12: mov     edi, ecx
0x775F14: xor     esi, esi
0x775F16: cmp     [edi+0Eh], si
0x775F1A: jbe     short loc_775F46
0x775F1C: push    ebx
0x775F1D: lea     ecx, [ecx+0]
0x775F20: mov     eax, [edi+8]
0x775F23: mov     ebx, [eax+esi*4]
0x775F26: test    ebx, ebx
0x775F28: jz      short loc_775F3A
0x775F2A: mov     ecx, ebx
0x775F2C: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@I@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,uint>::NiTPointerListBase<NiTPointerAllocator<uint>,uint>(void)
0x775F31: push    ebx
0x775F32: call    FormHeapFree
0x775F37: add     esp, 4
0x775F3A: movzx   ecx, word ptr [edi+0Eh]
0x775F3E: add     esi, 1
0x775F41: cmp     esi, ecx
0x775F43: jb      short loc_775F20
0x775F45: pop     ebx
0x775F46: mov     edx, [edi+8]
0x775F49: push    edx
0x775F4A: mov     dword ptr [edi+4], offset ??_7?$NiTArray@PAVNiDX9AdapterDesc@@@@6B@; const NiTArray<NiDX9AdapterDesc *>::`vftable'
0x775F51: call    FormHeapFree
0x775F56: add     esp, 4
0x775F59: pop     edi
0x775F5A: pop     esi
0x775F5B: retn
