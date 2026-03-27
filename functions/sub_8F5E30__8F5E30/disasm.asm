0x8F5E30: push    esi
0x8F5E31: mov     esi, ecx
0x8F5E33: mov     ecx, [esi+8]
0x8F5E36: mov     eax, [ecx]
0x8F5E38: call    dword ptr [eax+1Ch]
0x8F5E3B: mov     ecx, eax
0x8F5E3D: test    ecx, ecx
0x8F5E3F: jl      short loc_8F5E48
0x8F5E41: mov     eax, [esi+10h]
0x8F5E44: add     eax, ecx
0x8F5E46: pop     esi
0x8F5E47: retn
0x8F5E48: or      eax, 0FFFFFFFFh
0x8F5E4B: pop     esi
0x8F5E4C: retn
