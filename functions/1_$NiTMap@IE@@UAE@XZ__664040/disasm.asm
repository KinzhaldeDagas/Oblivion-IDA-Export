0x664040: push    0FFFFFFFFh
0x664042: push    offset ??1?$NiTMap@IE@@UAE@XZ_SEH
0x664047: mov     eax, large fs:0
0x66404D: push    eax
0x66404E: push    ecx
0x66404F: push    esi
0x664050: mov     eax, ds:0B30AACh
0x664055: xor     eax, esp
0x664057: push    eax
0x664058: lea     eax, [esp+18h+var_C]
0x66405C: mov     large fs:0, eax
0x664062: mov     esi, ecx
0x664064: mov     [esp+18h+var_10], esi
0x664068: mov     dword ptr [esi], offset ??_7?$NiTMap@IE@@6B@; const NiTMap<uint,uchar>::`vftable'
0x66406E: mov     [esp+18h+var_4], 0
0x664076: call    NiTMap_Clear
0x66407B: mov     ecx, esi
0x66407D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x664085: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@E@@IE@@6B@; const NiTMapBase<DFALL<uchar>,uint,uchar>::`vftable'
0x66408B: call    NiTMap_Clear
0x664090: mov     eax, [esi+8]
0x664093: push    eax
0x664094: call    FormHeapFree
0x664099: add     esp, 4
0x66409C: mov     ecx, [esp+18h+var_C]
0x6640A0: mov     large fs:0, ecx
0x6640A7: pop     ecx
0x6640A8: pop     esi
0x6640A9: add     esp, 10h
0x6640AC: retn
