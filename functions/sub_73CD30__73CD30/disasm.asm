0x73CD30: push    0FFFFFFFFh
0x73CD32: push    offset SEH_8C62B0
0x73CD37: mov     eax, large fs:0
0x73CD3D: push    eax
0x73CD3E: push    ecx
0x73CD3F: push    esi
0x73CD40: mov     eax, ds:0B30AACh
0x73CD45: xor     eax, esp
0x73CD47: push    eax
0x73CD48: lea     eax, [esp+18h+var_C]
0x73CD4C: mov     large fs:0, eax
0x73CD52: push    14h; Size
0x73CD54: call    FormHeapAlloc
0x73CD59: mov     esi, eax
0x73CD5B: add     esp, 4
0x73CD5E: mov     [esp+18h+var_10], esi
0x73CD62: test    esi, esi
0x73CD64: mov     [esp+18h+var_4], 0
0x73CD6C: jz      short loc_73CD9C
0x73CD6E: mov     ecx, esi
0x73CD70: call    sub_721350
0x73CD75: mov     dword ptr [esi], offset ??_7NiStringsExtraData@@6B@; const NiStringsExtraData::`vftable'
0x73CD7B: mov     dword ptr [esi+10h], 0
0x73CD82: mov     dword ptr [esi+0Ch], 0
0x73CD89: mov     eax, esi
0x73CD8B: mov     ecx, [esp+18h+var_C]
0x73CD8F: mov     large fs:0, ecx
0x73CD96: pop     ecx
0x73CD97: pop     esi
0x73CD98: add     esp, 10h
0x73CD9B: retn
0x73CD9C: xor     eax, eax
0x73CD9E: mov     ecx, [esp+18h+var_C]
0x73CDA2: mov     large fs:0, ecx
0x73CDA9: pop     ecx
0x73CDAA: pop     esi
0x73CDAB: add     esp, 10h
0x73CDAE: retn
