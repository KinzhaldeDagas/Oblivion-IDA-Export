0x719E00: push    0FFFFFFFFh
0x719E02: push    offset SEH_8C8970
0x719E07: mov     eax, large fs:0
0x719E0D: push    eax
0x719E0E: push    ecx
0x719E0F: push    esi
0x719E10: push    edi
0x719E11: mov     eax, ds:0B30AACh
0x719E16: xor     eax, esp
0x719E18: push    eax
0x719E19: lea     eax, [esp+1Ch+var_C]
0x719E1D: mov     large fs:0, eax
0x719E23: push    50h ; 'P'; Size
0x719E25: call    FormHeapAlloc
0x719E2A: mov     esi, eax
0x719E2C: add     esp, 4
0x719E2F: mov     [esp+1Ch+var_10], esi
0x719E33: xor     edi, edi
0x719E35: cmp     esi, edi
0x719E37: mov     [esp+1Ch+var_4], edi
0x719E3B: jz      short loc_719E68
0x719E3D: mov     ecx, esi
0x719E3F: call    sub_732DD0
0x719E44: mov     dword ptr [esi], offset ??_7NiTriStripsData@@6B@; const NiTriStripsData::`vftable'
0x719E4A: mov     [esi+44h], di
0x719E4E: mov     [esi+48h], edi
0x719E51: mov     [esi+4Ch], edi
0x719E54: mov     eax, esi
0x719E56: mov     ecx, [esp+1Ch+var_C]
0x719E5A: mov     large fs:0, ecx
0x719E61: pop     ecx
0x719E62: pop     edi
0x719E63: pop     esi
0x719E64: add     esp, 10h
0x719E67: retn
0x719E68: xor     eax, eax
0x719E6A: mov     ecx, [esp+1Ch+var_C]
0x719E6E: mov     large fs:0, ecx
0x719E75: pop     ecx
0x719E76: pop     edi
0x719E77: pop     esi
0x719E78: add     esp, 10h
0x719E7B: retn
