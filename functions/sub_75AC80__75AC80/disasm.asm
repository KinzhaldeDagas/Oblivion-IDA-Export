0x75AC80: push    esi
0x75AC81: push    edi
0x75AC82: push    20h ; ' '; Size
0x75AC84: mov     edi, ecx
0x75AC86: call    FormHeapAlloc
0x75AC8B: mov     esi, eax
0x75AC8D: add     esp, 4
0x75AC90: test    esi, esi
0x75AC92: jz      short loc_75ACB6
0x75AC94: mov     ecx, esi
0x75AC96: call    sub_752BF0
0x75AC9B: mov     dword ptr [esi], offset ??_7NiPSysBoundUpdateModifier@@6B@; const NiPSysBoundUpdateModifier::`vftable'
0x75ACA1: mov     word ptr [esi+18h], 0
0x75ACA7: mov     word ptr [esi+1Ah], 0
0x75ACAD: mov     dword ptr [esi+1Ch], 0
0x75ACB4: jmp     short loc_75ACB8
0x75ACB6: xor     esi, esi
0x75ACB8: mov     eax, [esp+8+arg_0]
0x75ACBC: push    eax
0x75ACBD: push    esi
0x75ACBE: mov     ecx, edi
0x75ACC0: call    sub_752C40
0x75ACC5: movzx   ecx, word ptr [edi+18h]
0x75ACC9: push    ecx
0x75ACCA: mov     ecx, esi
0x75ACCC: call    sub_75A870
0x75ACD1: pop     edi
0x75ACD2: mov     eax, esi
0x75ACD4: pop     esi
0x75ACD5: retn    4
