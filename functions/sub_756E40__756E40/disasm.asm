0x756E40: push    esi
0x756E41: push    edi
0x756E42: push    28h ; '('; Size
0x756E44: mov     edi, ecx
0x756E46: call    FormHeapAlloc
0x756E4B: mov     esi, eax
0x756E4D: add     esp, 4
0x756E50: test    esi, esi
0x756E52: jz      short loc_756E77
0x756E54: mov     ecx, esi
0x756E56: call    sub_752BF0
0x756E5B: fldz
0x756E5D: fst     dword ptr [esi+18h]
0x756E60: mov     dword ptr [esi], offset ??_7NiPSysGrowFadeModifier@@6B@; const NiPSysGrowFadeModifier::`vftable'
0x756E66: fstp    dword ptr [esi+20h]
0x756E69: mov     word ptr [esi+1Ch], 0
0x756E6F: mov     word ptr [esi+24h], 0
0x756E75: jmp     short loc_756E79
0x756E77: xor     esi, esi
0x756E79: mov     eax, [esp+8+arg_0]
0x756E7D: push    eax
0x756E7E: push    esi
0x756E7F: mov     ecx, edi
0x756E81: call    sub_752C40
0x756E86: fld     dword ptr [edi+18h]
0x756E89: fstp    dword ptr [esi+18h]
0x756E8C: mov     cx, [edi+1Ch]
0x756E90: mov     [esi+1Ch], cx
0x756E94: fld     dword ptr [edi+20h]
0x756E97: fstp    dword ptr [esi+20h]
0x756E9A: mov     dx, [edi+24h]
0x756E9E: pop     edi
0x756E9F: mov     [esi+24h], dx
0x756EA3: mov     eax, esi
0x756EA5: pop     esi
0x756EA6: retn    4
