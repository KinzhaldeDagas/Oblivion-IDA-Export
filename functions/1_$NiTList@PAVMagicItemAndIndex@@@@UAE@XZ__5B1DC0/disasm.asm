0x5B1DC0: push    0FFFFFFFFh
0x5B1DC2: push    offset ??1?$NiTList@PAVMagicItemAndIndex@@@@UAE@XZ_SEH
0x5B1DC7: mov     eax, large fs:0
0x5B1DCD: push    eax
0x5B1DCE: push    ecx
0x5B1DCF: push    esi
0x5B1DD0: mov     eax, ds:0B30AACh
0x5B1DD5: xor     eax, esp
0x5B1DD7: push    eax
0x5B1DD8: lea     eax, [esp+18h+var_C]
0x5B1DDC: mov     large fs:0, eax
0x5B1DE2: mov     esi, ecx
0x5B1DE4: mov     [esp+18h+var_10], esi
0x5B1DE8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVMagicItemAndIndex@@@@PAVMagicItemAndIndex@@@@6B@; const NiTPointerListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable'
0x5B1DEE: mov     [esp+18h+var_4], 0
0x5B1DF6: call    NiTPointerList__FreeAllNodes
0x5B1DFB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVMagicItemAndIndex@@@@PAVMagicItemAndIndex@@@@6B@; const NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable'
0x5B1E01: mov     ecx, [esp+18h+var_C]
0x5B1E05: mov     large fs:0, ecx
0x5B1E0C: pop     ecx
0x5B1E0D: pop     esi
0x5B1E0E: add     esp, 10h
0x5B1E11: retn
