0x4CD200: push    0FFFFFFFFh
0x4CD202: push    offset ??1?$NiTList@PAVTESObjectREFR@@@@UAE@XZ_SEH
0x4CD207: mov     eax, large fs:0
0x4CD20D: push    eax
0x4CD20E: push    ecx
0x4CD20F: push    esi
0x4CD210: mov     eax, ds:0B30AACh
0x4CD215: xor     eax, esp
0x4CD217: push    eax
0x4CD218: lea     eax, [esp+18h+var_C]
0x4CD21C: mov     large fs:0, eax
0x4CD222: mov     esi, ecx
0x4CD224: mov     [esp+18h+var_10], esi
0x4CD228: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTESObjectREFR@@@@PAVTESObjectREFR@@@@6B@; const NiTPointerListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'
0x4CD22E: mov     [esp+18h+var_4], 0
0x4CD236: call    NiTPointerList__FreeAllNodes
0x4CD23B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectREFR@@@@PAVTESObjectREFR@@@@6B@; const NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'
0x4CD241: mov     ecx, [esp+18h+var_C]
0x4CD245: mov     large fs:0, ecx
0x4CD24C: pop     ecx
0x4CD24D: pop     esi
0x4CD24E: add     esp, 10h
0x4CD251: retn
