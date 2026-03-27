0x4C9340: push    0FFFFFFFFh
0x4C9342: push    offset ??1?$NiTMap@PAVNiSourceTexture@@I@@UAE@XZ_SEH
0x4C9347: mov     eax, large fs:0
0x4C934D: push    eax
0x4C934E: push    ecx
0x4C934F: push    esi
0x4C9350: mov     eax, ds:0B30AACh
0x4C9355: xor     eax, esp
0x4C9357: push    eax
0x4C9358: lea     eax, [esp+18h+var_C]
0x4C935C: mov     large fs:0, eax
0x4C9362: mov     esi, ecx
0x4C9364: mov     [esp+18h+var_10], esi
0x4C9368: mov     dword ptr [esi], offset ??_7?$NiTMap@PAVNiSourceTexture@@I@@6B@; const NiTMap<NiSourceTexture *,uint>::`vftable'
0x4C936E: mov     [esp+18h+var_4], 0
0x4C9376: call    NiTMap_Clear
0x4C937B: mov     ecx, esi
0x4C937D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4C9385: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@I@@PAVNiSourceTexture@@I@@6B@; const NiTMapBase<DFALL<uint>,NiSourceTexture *,uint>::`vftable'
0x4C938B: call    NiTMap_Clear
0x4C9390: mov     eax, [esi+8]
0x4C9393: push    eax
0x4C9394: call    FormHeapFree
0x4C9399: add     esp, 4
0x4C939C: mov     ecx, [esp+18h+var_C]
0x4C93A0: mov     large fs:0, ecx
0x4C93A7: pop     ecx
0x4C93A8: pop     esi
0x4C93A9: add     esp, 10h
0x4C93AC: retn
