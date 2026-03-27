0x738600: push    esi
0x738601: mov     esi, ecx
0x738603: mov     eax, [esi+8]
0x738606: push    eax
0x738607: mov     dword ptr [esi], offset ??_7NiShader@@6B@; const NiShader::`vftable'
0x73860D: call    FormHeapFree
0x738612: add     esp, 4
0x738615: push    offset NiRefObject_objcount; lpAddend
0x73861A: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x738620: call    dword ptr ds:0A2807Ch
0x738626: pop     esi
0x738627: retn
