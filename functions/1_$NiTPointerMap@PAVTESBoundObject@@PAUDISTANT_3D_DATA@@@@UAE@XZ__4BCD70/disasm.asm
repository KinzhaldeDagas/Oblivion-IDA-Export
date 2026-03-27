0x4BCD70: push    0FFFFFFFFh
0x4BCD72: push    offset ??1?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@UAE@XZ_SEH
0x4BCD77: mov     eax, large fs:0
0x4BCD7D: push    eax
0x4BCD7E: push    ecx
0x4BCD7F: push    esi
0x4BCD80: mov     eax, ds:0B30AACh
0x4BCD85: xor     eax, esp
0x4BCD87: push    eax
0x4BCD88: lea     eax, [esp+18h+var_C]
0x4BCD8C: mov     large fs:0, eax
0x4BCD92: mov     esi, ecx
0x4BCD94: mov     [esp+18h+var_10], esi
0x4BCD98: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCD9E: mov     [esp+18h+var_4], 0
0x4BCDA6: call    NiTMap_Clear
0x4BCDAB: mov     ecx, esi
0x4BCDAD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BCDB5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCDBB: call    NiTMap_Clear
0x4BCDC0: mov     eax, [esi+8]
0x4BCDC3: push    eax
0x4BCDC4: call    FormHeapFree
0x4BCDC9: add     esp, 4
0x4BCDCC: mov     ecx, [esp+18h+var_C]
0x4BCDD0: mov     large fs:0, ecx
0x4BCDD7: pop     ecx
0x4BCDD8: pop     esi
0x4BCDD9: add     esp, 10h
0x4BCDDC: retn
