0x9131D0: push    esi
0x9131D1: mov     esi, ecx
0x9131D3: mov     eax, [esi+44h]
0x9131D6: push    edi
0x9131D7: xor     edi, edi
0x9131D9: test    eax, eax
0x9131DB: mov     dword ptr [esi], offset off_A9CD6C
0x9131E1: jle     short loc_913209
0x9131E3: mov     eax, [esi+40h]
0x9131E6: mov     ecx, [eax+edi*4]
0x9131E9: cmp     word ptr [ecx+4], 0
0x9131EE: jz      short loc_913201
0x9131F0: dec     word ptr [ecx+6]
0x9131F4: cmp     word ptr [ecx+6], 0
0x9131F9: jnz     short loc_913201
0x9131FB: mov     edx, [ecx]
0x9131FD: push    1
0x9131FF: call    dword ptr [edx]
0x913201: mov     eax, [esi+44h]
0x913204: inc     edi
0x913205: cmp     edi, eax
0x913207: jl      short loc_9131E3
0x913209: lea     ecx, [esi+0Ch]
0x91320C: call    sub_9130B0
0x913211: pop     edi
0x913212: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x913218: pop     esi
0x913219: retn
