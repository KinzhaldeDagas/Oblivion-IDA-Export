0x75D340: push    esi
0x75D341: push    edi
0x75D342: push    48h ; 'H'; Size
0x75D344: mov     edi, ecx
0x75D346: call    FormHeapAlloc
0x75D34B: mov     esi, eax
0x75D34D: add     esp, 4
0x75D350: test    esi, esi
0x75D352: jz      short loc_75D375
0x75D354: mov     ecx, esi
0x75D356: call    sub_75F510
0x75D35B: mov     eax, [esp+8+arg_0]
0x75D35F: push    eax
0x75D360: push    esi
0x75D361: mov     ecx, edi
0x75D363: mov     dword ptr [esi], offset ??_7NiPSysAirFieldInheritVelocityCtlr@@6B@; const NiPSysAirFieldInheritVelocityCtlr::`vftable'
0x75D369: call    sub_75F5A0
0x75D36E: pop     edi
0x75D36F: mov     eax, esi
0x75D371: pop     esi
0x75D372: retn    4
0x75D375: mov     eax, [esp+8+arg_0]
0x75D379: push    eax
0x75D37A: xor     esi, esi
0x75D37C: push    esi
0x75D37D: mov     ecx, edi
0x75D37F: call    sub_75F5A0
0x75D384: pop     edi
0x75D385: mov     eax, esi
0x75D387: pop     esi
0x75D388: retn    4
