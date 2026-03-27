0x88ED20: push    0FFFFFFFFh
0x88ED22: push    offset SEH_8C62B0
0x88ED27: mov     eax, large fs:0
0x88ED2D: push    eax
0x88ED2E: push    ecx
0x88ED2F: push    esi
0x88ED30: mov     eax, ds:0B30AACh
0x88ED35: xor     eax, esp
0x88ED37: push    eax
0x88ED38: lea     eax, [esp+18h+var_C]
0x88ED3C: mov     large fs:0, eax
0x88ED42: push    28h ; '('; Size
0x88ED44: call    FormHeapAlloc
0x88ED49: mov     esi, eax
0x88ED4B: add     esp, 4
0x88ED4E: mov     [esp+18h+var_10], esi
0x88ED52: test    esi, esi
0x88ED54: mov     [esp+18h+var_4], 0
0x88ED5C: jz      short loc_88EDAA
0x88ED5E: mov     ecx, esi
0x88ED60: call    sub_897600
0x88ED65: fldz
0x88ED67: mov     dword ptr [esi], offset ??_7bhkBlendCollisionObject@@6B@; const bhkBlendCollisionObject::`vftable'
0x88ED6D: add     dword ptr ds:0BA7A1Ch, 1
0x88ED74: fstp    dword ptr [esi+14h]
0x88ED77: fld1
0x88ED79: and     word ptr [esi+0Ch], 0FEFFh
0x88ED7F: fstp    dword ptr [esi+18h]
0x88ED82: mov     dword ptr [esi+1Ch], 8
0x88ED89: mov     dword ptr [esi+20h], 0
0x88ED90: mov     dword ptr [esi+24h], 0
0x88ED97: mov     eax, esi
0x88ED99: mov     ecx, [esp+18h+var_C]
0x88ED9D: mov     large fs:0, ecx
0x88EDA4: pop     ecx
0x88EDA5: pop     esi
0x88EDA6: add     esp, 10h
0x88EDA9: retn
0x88EDAA: xor     eax, eax
0x88EDAC: mov     ecx, [esp+18h+var_C]
0x88EDB0: mov     large fs:0, ecx
0x88EDB7: pop     ecx
0x88EDB8: pop     esi
0x88EDB9: add     esp, 10h
0x88EDBC: retn
