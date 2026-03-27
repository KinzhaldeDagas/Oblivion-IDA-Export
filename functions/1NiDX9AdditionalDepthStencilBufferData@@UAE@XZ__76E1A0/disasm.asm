0x76E1A0: push    ecx
0x76E1A1: push    esi
0x76E1A2: push    edi
0x76E1A3: mov     esi, ecx
0x76E1A5: push    offset stru_B42680; lpCriticalSection
0x76E1AA: mov     dword ptr [esi], offset ??_7NiDX9AdditionalDepthStencilBufferData@@6B@; const NiDX9AdditionalDepthStencilBufferData::`vftable'
0x76E1B0: call    dword ptr ds:0A2806Ch
0x76E1B6: call    dword ptr ds:0A2808Ch
0x76E1BC: mov     ds:0B426F8h, eax
0x76E1C1: lea     eax, [esp+0Ch+var_4]
0x76E1C5: mov     edi, 1
0x76E1CA: add     ds:0B426FCh, edi
0x76E1D0: push    eax
0x76E1D1: mov     ecx, offset off_B294F0
0x76E1D6: mov     [esp+10h+var_4], esi
0x76E1DA: call    sub_776690
0x76E1DF: sub     ds:0B426FCh, edi
0x76E1E5: mov     edi, 0
0x76E1EA: jnz     short loc_76E1F2
0x76E1EC: mov     ds:0B426F8h, edi
0x76E1F2: push    offset stru_B42680; lpCriticalSection
0x76E1F7: call    dword ptr ds:0A28074h
0x76E1FD: mov     eax, [esi+0Ch]
0x76E200: cmp     eax, edi
0x76E202: mov     dword ptr [esi], offset ??_7NiDX92DBufferData@@6B@; const NiDX92DBufferData::`vftable'
0x76E208: jz      short loc_76E215
0x76E20A: mov     ecx, [eax]
0x76E20C: mov     edx, [ecx+8]
0x76E20F: push    eax
0x76E210: call    edx
0x76E212: mov     [esi+0Ch], edi
0x76E215: mov     eax, [esi+10h]
0x76E218: push    eax
0x76E219: call    FormHeapFree
0x76E21E: add     esp, 4
0x76E221: push    offset NiRefObject_objcount; lpAddend
0x76E226: mov     [esi+10h], edi
0x76E229: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76E22F: call    dword ptr ds:0A2807Ch
0x76E235: pop     edi
0x76E236: pop     esi
0x76E237: pop     ecx
0x76E238: retn
