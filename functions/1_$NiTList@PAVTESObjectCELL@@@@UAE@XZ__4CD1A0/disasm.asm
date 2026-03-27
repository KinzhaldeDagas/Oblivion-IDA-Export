0x4CD1A0: push    0FFFFFFFFh
0x4CD1A2: push    offset ??1?$NiTList@PAVTESObjectCELL@@@@UAE@XZ_SEH
0x4CD1A7: mov     eax, large fs:0
0x4CD1AD: push    eax
0x4CD1AE: push    ecx
0x4CD1AF: push    esi
0x4CD1B0: mov     eax, ds:0B30AACh
0x4CD1B5: xor     eax, esp
0x4CD1B7: push    eax
0x4CD1B8: lea     eax, [esp+18h+var_C]
0x4CD1BC: mov     large fs:0, eax
0x4CD1C2: mov     esi, ecx
0x4CD1C4: mov     [esp+18h+var_10], esi
0x4CD1C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTPointerListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CD1CE: mov     [esp+18h+var_4], 0
0x4CD1D6: call    NiTPointerList__FreeAllNodes
0x4CD1DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CD1E1: mov     ecx, [esp+18h+var_C]
0x4CD1E5: mov     large fs:0, ecx
0x4CD1EC: pop     ecx
0x4CD1ED: pop     esi
0x4CD1EE: add     esp, 10h
0x4CD1F1: retn
