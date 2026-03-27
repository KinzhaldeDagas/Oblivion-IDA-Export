0x75FE30: mov     eax, [esp+arg_0]
0x75FE34: test    ax, ax
0x75FE37: push    edi
0x75FE38: mov     edi, ecx
0x75FE3A: mov     cx, [esp+4+arg_4]
0x75FE3F: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DTextureStage@@@@@@6B@; const NiTArray<NiPointer<NiD3DTextureStage>>::`vftable'
0x75FE45: mov     [edi+8], ax
0x75FE49: mov     [edi+0Eh], cx
0x75FE4D: mov     word ptr [edi+0Ah], 0
0x75FE53: mov     word ptr [edi+0Ch], 0
0x75FE59: jbe     short loc_75FEB6
0x75FE5B: push    ebx
0x75FE5C: push    esi
0x75FE5D: movzx   esi, ax
0x75FE60: xor     ecx, ecx
0x75FE62: mov     eax, esi
0x75FE64: mov     edx, 4
0x75FE69: mul     edx
0x75FE6B: seto    cl
0x75FE6E: neg     ecx
0x75FE70: or      ecx, eax
0x75FE72: xor     eax, eax
0x75FE74: add     ecx, 4
0x75FE77: setb    al
0x75FE7A: neg     eax
0x75FE7C: or      eax, ecx
0x75FE7E: push    eax; Size
0x75FE7F: call    FormHeapAlloc
0x75FE84: add     esp, 4
0x75FE87: test    eax, eax
0x75FE89: jz      short loc_75FEA9
0x75FE8B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x75FE90: push    esi
0x75FE91: lea     ebx, [eax+4]
0x75FE94: push    4
0x75FE96: push    ebx
0x75FE97: mov     [eax], esi
0x75FE99: call    sub_401080
0x75FE9E: pop     esi
0x75FE9F: mov     [edi+4], ebx
0x75FEA2: pop     ebx
0x75FEA3: mov     eax, edi
0x75FEA5: pop     edi
0x75FEA6: retn    8
0x75FEA9: xor     ebx, ebx
0x75FEAB: pop     esi
0x75FEAC: mov     [edi+4], ebx
0x75FEAF: pop     ebx
0x75FEB0: mov     eax, edi
0x75FEB2: pop     edi
0x75FEB3: retn    8
0x75FEB6: mov     dword ptr [edi+4], 0
0x75FEBD: mov     eax, edi
0x75FEBF: pop     edi
0x75FEC0: retn    8
