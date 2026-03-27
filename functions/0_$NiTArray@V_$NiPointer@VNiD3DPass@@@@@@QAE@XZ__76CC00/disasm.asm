0x76CC00: mov     eax, [esp+arg_0]
0x76CC04: test    ax, ax
0x76CC07: push    edi
0x76CC08: mov     edi, ecx
0x76CC0A: mov     cx, [esp+4+arg_4]
0x76CC0F: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@6B@; const NiTArray<NiPointer<NiD3DPass>>::`vftable'
0x76CC15: mov     [edi+8], ax
0x76CC19: mov     [edi+0Eh], cx
0x76CC1D: mov     word ptr [edi+0Ah], 0
0x76CC23: mov     word ptr [edi+0Ch], 0
0x76CC29: jbe     short loc_76CC86
0x76CC2B: push    ebx
0x76CC2C: push    esi
0x76CC2D: movzx   esi, ax
0x76CC30: xor     ecx, ecx
0x76CC32: mov     eax, esi
0x76CC34: mov     edx, 4
0x76CC39: mul     edx
0x76CC3B: seto    cl
0x76CC3E: neg     ecx
0x76CC40: or      ecx, eax
0x76CC42: xor     eax, eax
0x76CC44: add     ecx, 4
0x76CC47: setb    al
0x76CC4A: neg     eax
0x76CC4C: or      eax, ecx
0x76CC4E: push    eax; Size
0x76CC4F: call    FormHeapAlloc
0x76CC54: add     esp, 4
0x76CC57: test    eax, eax
0x76CC59: jz      short loc_76CC79
0x76CC5B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x76CC60: push    esi
0x76CC61: lea     ebx, [eax+4]
0x76CC64: push    4
0x76CC66: push    ebx
0x76CC67: mov     [eax], esi
0x76CC69: call    sub_401080
0x76CC6E: pop     esi
0x76CC6F: mov     [edi+4], ebx
0x76CC72: pop     ebx
0x76CC73: mov     eax, edi
0x76CC75: pop     edi
0x76CC76: retn    8
0x76CC79: xor     ebx, ebx
0x76CC7B: pop     esi
0x76CC7C: mov     [edi+4], ebx
0x76CC7F: pop     ebx
0x76CC80: mov     eax, edi
0x76CC82: pop     edi
0x76CC83: retn    8
0x76CC86: mov     dword ptr [edi+4], 0
0x76CC8D: mov     eax, edi
0x76CC8F: pop     edi
0x76CC90: retn    8
