0x45A620: push    0FFFFFFFFh
0x45A622: push    offset ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ_SEH
0x45A627: mov     eax, large fs:0
0x45A62D: push    eax
0x45A62E: push    ecx
0x45A62F: push    esi
0x45A630: mov     eax, ds:0B30AACh
0x45A635: xor     eax, esp
0x45A637: push    eax
0x45A638: lea     eax, [esp+18h+var_C]
0x45A63C: mov     large fs:0, eax
0x45A642: mov     esi, ecx
0x45A644: mov     [esp+18h+var_10], esi
0x45A648: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVChangeData@@@@6B@; const NiTPointerMap<uint,ChangeData *>::`vftable'
0x45A64E: mov     [esp+18h+var_4], 0
0x45A656: call    NiTMap_Clear
0x45A65B: mov     ecx, esi
0x45A65D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45A665: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVChangeData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,ChangeData *>::`vftable'
0x45A66B: call    NiTMap_Clear
0x45A670: mov     eax, [esi+8]
0x45A673: push    eax
0x45A674: call    FormHeapFree
0x45A679: add     esp, 4
0x45A67C: mov     ecx, [esp+18h+var_C]
0x45A680: mov     large fs:0, ecx
0x45A687: pop     ecx
0x45A688: pop     esi
0x45A689: add     esp, 10h
0x45A68C: retn
