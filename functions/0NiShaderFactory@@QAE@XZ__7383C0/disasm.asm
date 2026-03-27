0x7383C0: push    esi
0x7383C1: push    edi
0x7383C2: mov     esi, ecx
0x7383C4: xor     edi, edi
0x7383C6: push    offset NiRefObject_objcount; lpAddend
0x7383CB: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7383D1: mov     [esi+4], edi
0x7383D4: call    dword ptr ds:0A28078h
0x7383DA: mov     [esi+8], edi
0x7383DD: mov     [esi+0Ch], edi
0x7383E0: mov     [esi+10h], edi
0x7383E3: pop     edi
0x7383E4: mov     dword ptr [esi], offset ??_7NiShaderFactory@@6B@; const NiShaderFactory::`vftable'
0x7383EA: mov     eax, esi
0x7383EC: pop     esi
0x7383ED: retn
