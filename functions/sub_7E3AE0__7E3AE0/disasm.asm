0x7E3AE0: push    0FFFFFFFFh
0x7E3AE2: push    offset SEH_53D930
0x7E3AE7: mov     eax, large fs:0
0x7E3AED: push    eax
0x7E3AEE: push    ecx
0x7E3AEF: push    ebx
0x7E3AF0: push    ebp
0x7E3AF1: push    esi
0x7E3AF2: push    edi
0x7E3AF3: mov     eax, ds:0B30AACh
0x7E3AF8: xor     eax, esp
0x7E3AFA: push    eax
0x7E3AFB: lea     eax, [esp+24h+var_C]
0x7E3AFF: mov     large fs:0, eax
0x7E3B05: mov     esi, ecx
0x7E3B07: mov     [esp+24h+var_10], esi
0x7E3B0B: call    NiObject_constr
0x7E3B10: xor     ebp, ebp
0x7E3B12: mov     dword ptr [esi], offset ??_7NiAdditionalGeometryData@@6B@; const NiAdditionalGeometryData::`vftable'
0x7E3B18: mov     [esp+24h+var_4], ebp
0x7E3B1C: mov     dword ptr [esi+1Ch], offset ??_7?$NiTArray@PAVNiAGDDataBlock@NiAdditionalGeometryData@@@@6B@; const NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'
0x7E3B23: mov     [esi+24h], bp
0x7E3B27: mov     word ptr [esi+2Ah], 1
0x7E3B2D: mov     [esi+26h], bp
0x7E3B31: mov     [esi+28h], bp
0x7E3B35: mov     [esi+20h], ebp
0x7E3B38: mov     ax, word ptr [esp+24h+arg_0]
0x7E3B3D: mov     ebx, [esp+24h+arg_4]
0x7E3B41: mov     [esi+0Ch], ax
0x7E3B45: xor     ecx, ecx
0x7E3B47: mov     eax, ebx
0x7E3B49: mov     edx, 1Ch
0x7E3B4E: mul     edx
0x7E3B50: seto    cl
0x7E3B53: mov     byte ptr [esp+24h+var_4], 1
0x7E3B58: mov     [esi+8], ebp
0x7E3B5B: mov     [esi+10h], ebx
0x7E3B5E: neg     ecx
0x7E3B60: or      ecx, eax
0x7E3B62: push    ecx; Size
0x7E3B63: call    FormHeapAlloc
0x7E3B68: mov     edi, eax
0x7E3B6A: add     esp, 4
0x7E3B6D: mov     [esp+24h+arg_0], edi
0x7E3B71: cmp     edi, ebp
0x7E3B73: mov     byte ptr [esp+24h+var_4], 2
0x7E3B78: jz      short loc_7E3B8A
0x7E3B7A: push    offset sub_53D910
0x7E3B7F: push    ebx
0x7E3B80: push    1Ch
0x7E3B82: push    edi
0x7E3B83: call    sub_401080
0x7E3B88: jmp     short loc_7E3B8C
0x7E3B8A: xor     edi, edi
0x7E3B8C: mov     [esi+14h], edi
0x7E3B8F: xor     eax, eax
0x7E3B91: cmp     [esi+26h], bp
0x7E3B95: jbe     short loc_7E3BA9
0x7E3B97: mov     edx, [esi+20h]
0x7E3B9A: movzx   ecx, ax
0x7E3B9D: add     eax, 1
0x7E3BA0: mov     [edx+ecx*4], ebp
0x7E3BA3: cmp     ax, [esi+26h]
0x7E3BA7: jb      short loc_7E3B97
0x7E3BA9: mov     [esi+26h], bp
0x7E3BAD: mov     [esi+28h], bp
0x7E3BB1: mov     [esi+18h], ebp
0x7E3BB4: mov     eax, esi
0x7E3BB6: mov     ecx, [esp+24h+var_C]
0x7E3BBA: mov     large fs:0, ecx
0x7E3BC1: pop     ecx
0x7E3BC2: pop     edi
0x7E3BC3: pop     esi
0x7E3BC4: pop     ebp
0x7E3BC5: pop     ebx
0x7E3BC6: add     esp, 10h
0x7E3BC9: retn    8
