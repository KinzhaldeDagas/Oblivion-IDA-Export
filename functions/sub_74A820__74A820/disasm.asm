0x74A820: mov     eax, [esp+arg_0]
0x74A824: test    ax, ax
0x74A827: push    edi
0x74A828: mov     edi, ecx
0x74A82A: mov     cx, [esp+4+arg_4]
0x74A82F: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiGeometry@@@@@@6B@; const NiTArray<NiPointer<NiGeometry>>::`vftable'
0x74A835: mov     [edi+8], ax
0x74A839: mov     [edi+0Eh], cx
0x74A83D: mov     word ptr [edi+0Ah], 0
0x74A843: mov     word ptr [edi+0Ch], 0
0x74A849: jbe     short loc_74A8A6
0x74A84B: push    ebx
0x74A84C: push    esi
0x74A84D: movzx   esi, ax
0x74A850: xor     ecx, ecx
0x74A852: mov     eax, esi
0x74A854: mov     edx, 4
0x74A859: mul     edx
0x74A85B: seto    cl
0x74A85E: neg     ecx
0x74A860: or      ecx, eax
0x74A862: xor     eax, eax
0x74A864: add     ecx, 4
0x74A867: setb    al
0x74A86A: neg     eax
0x74A86C: or      eax, ecx
0x74A86E: push    eax; Size
0x74A86F: call    FormHeapAlloc
0x74A874: add     esp, 4
0x74A877: test    eax, eax
0x74A879: jz      short loc_74A899
0x74A87B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x74A880: push    esi
0x74A881: lea     ebx, [eax+4]
0x74A884: push    4
0x74A886: push    ebx
0x74A887: mov     [eax], esi
0x74A889: call    sub_401080
0x74A88E: pop     esi
0x74A88F: mov     [edi+4], ebx
0x74A892: pop     ebx
0x74A893: mov     eax, edi
0x74A895: pop     edi
0x74A896: retn    8
0x74A899: xor     ebx, ebx
0x74A89B: pop     esi
0x74A89C: mov     [edi+4], ebx
0x74A89F: pop     ebx
0x74A8A0: mov     eax, edi
0x74A8A2: pop     edi
0x74A8A3: retn    8
0x74A8A6: mov     dword ptr [edi+4], 0
0x74A8AD: mov     eax, edi
0x74A8AF: pop     edi
0x74A8B0: retn    8
