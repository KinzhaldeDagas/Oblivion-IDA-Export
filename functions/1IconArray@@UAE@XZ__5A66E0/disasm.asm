0x5A66E0: push    0FFFFFFFFh
0x5A66E2: push    offset ??1IconArray@@UAE@XZ_SEH
0x5A66E7: mov     eax, large fs:0
0x5A66ED: push    eax
0x5A66EE: push    ecx
0x5A66EF: push    esi
0x5A66F0: push    edi
0x5A66F1: mov     eax, ds:0B30AACh
0x5A66F6: xor     eax, esp
0x5A66F8: push    eax
0x5A66F9: lea     eax, [esp+1Ch+var_C]
0x5A66FD: mov     large fs:0, eax
0x5A6703: mov     edi, ecx
0x5A6705: mov     [esp+1Ch+var_10], edi
0x5A6709: mov     dword ptr [edi], offset ??_7IconArray@@6B@; const IconArray::`vftable'
0x5A670F: xor     esi, esi
0x5A6711: cmp     [edi+0Ch], esi
0x5A6714: mov     [esp+1Ch+var_4], esi
0x5A6718: jbe     short loc_5A6739
0x5A671A: lea     ebx, [ebx+0]
0x5A6720: push    esi
0x5A6721: mov     ecx, edi
0x5A6723: call    sub_5A5810
0x5A6728: push    eax
0x5A6729: add     esi, 1
0x5A672C: call    FormHeapFree
0x5A6731: add     esp, 4
0x5A6734: cmp     esi, [edi+0Ch]
0x5A6737: jb      short loc_5A6720
0x5A6739: mov     eax, [edi+4]
0x5A673C: push    eax
0x5A673D: mov     dword ptr [edi], offset ??_7?$NiTLargeArray@PAUHUDEffectIcon@@@@6B@; const NiTLargeArray<HUDEffectIcon *>::`vftable'
0x5A6743: call    FormHeapFree
0x5A6748: add     esp, 4
0x5A674B: mov     ecx, [esp+1Ch+var_C]
0x5A674F: mov     large fs:0, ecx
0x5A6756: pop     ecx
0x5A6757: pop     edi
0x5A6758: pop     esi
0x5A6759: add     esp, 10h
0x5A675C: retn
