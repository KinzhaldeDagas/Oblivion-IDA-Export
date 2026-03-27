0x589690: push    0FFFFFFFFh
0x589692: push    offset ??1?$NiTList@M@@UAE@XZ_SEH
0x589697: mov     eax, large fs:0
0x58969D: push    eax
0x58969E: push    ecx
0x58969F: push    esi
0x5896A0: mov     eax, ds:0B30AACh
0x5896A5: xor     eax, esp
0x5896A7: push    eax
0x5896A8: lea     eax, [esp+18h+var_C]
0x5896AC: mov     large fs:0, eax
0x5896B2: mov     esi, ecx
0x5896B4: mov     [esp+18h+var_10], esi
0x5896B8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@M@@M@@6B@; const NiTPointerListBase<DFALL<float>,float>::`vftable'
0x5896BE: mov     [esp+18h+var_4], 0
0x5896C6: call    NiTPointerList__FreeAllNodes
0x5896CB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@M@@M@@6B@; const NiTListBase<DFALL<float>,float>::`vftable'
0x5896D1: mov     ecx, [esp+18h+var_C]
0x5896D5: mov     large fs:0, ecx
0x5896DC: pop     ecx
0x5896DD: pop     esi
0x5896DE: add     esp, 10h
0x5896E1: retn
