0x682EF0: push    0FFFFFFFFh
0x682EF2: push    offset ??0PathBuilder@@QAE@XZ_SEH
0x682EF7: mov     eax, large fs:0
0x682EFD: push    eax
0x682EFE: push    ecx
0x682EFF: push    esi
0x682F00: push    edi
0x682F01: mov     eax, ds:0B30AACh
0x682F06: xor     eax, esp
0x682F08: push    eax
0x682F09: lea     eax, [esp+1Ch+var_C]
0x682F0D: mov     large fs:0, eax
0x682F13: mov     esi, ecx
0x682F15: mov     [esp+1Ch+var_10], esi
0x682F19: push    1
0x682F1B: xor     edi, edi
0x682F1D: push    edi
0x682F1E: push    1
0x682F20: push    edi
0x682F21: push    1
0x682F23: call    ??0BackgroundLoader@@QAE@XZ; BackgroundLoader::BackgroundLoader(void)
0x682F28: xor     ecx, ecx
0x682F2A: mov     eax, 25h ; '%'
0x682F2F: mov     edx, 4
0x682F34: mul     edx
0x682F36: seto    cl
0x682F39: mov     dword ptr [esi], offset ??_7PathBuilder@@6B@; const PathBuilder::`vftable'
0x682F3F: mov     [esp+1Ch+var_4], edi
0x682F43: mov     dword ptr [esi+10h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682F4A: mov     dword ptr [esi+14h], 25h ; '%'
0x682F51: mov     [esi+1Ch], edi
0x682F54: neg     ecx
0x682F56: or      ecx, eax
0x682F58: push    ecx; Size
0x682F59: call    FormHeapAlloc
0x682F5E: mov     ecx, [esi+14h]
0x682F61: add     ecx, ecx
0x682F63: add     ecx, ecx
0x682F65: push    ecx
0x682F66: push    edi
0x682F67: push    eax
0x682F68: mov     [esi+18h], eax
0x682F6B: call    __memset
0x682F70: mov     dword ptr [esi+10h], offset ??_7?$NiTPointerMap@PAVActor@@PAUPathingData@@@@6B@; const NiTPointerMap<Actor *,PathingData *>::`vftable'
0x682F77: xor     ecx, ecx
0x682F79: mov     eax, 25h ; '%'
0x682F7E: mov     edx, 4
0x682F83: mul     edx
0x682F85: seto    cl
0x682F88: mov     byte ptr [esp+2Ch+var_4], 1
0x682F8D: mov     dword ptr [esi+20h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682F94: mov     dword ptr [esi+24h], 25h ; '%'
0x682F9B: mov     [esi+2Ch], edi
0x682F9E: neg     ecx
0x682FA0: or      ecx, eax
0x682FA2: push    ecx; Size
0x682FA3: call    FormHeapAlloc
0x682FA8: mov     ecx, [esi+24h]
0x682FAB: add     ecx, ecx
0x682FAD: add     ecx, ecx
0x682FAF: push    ecx
0x682FB0: push    edi
0x682FB1: push    eax
0x682FB2: mov     [esi+28h], eax
0x682FB5: call    __memset
0x682FBA: mov     dword ptr [esi+20h], offset ??_7?$NiTPointerMap@PAVActor@@PAUPathingData@@@@6B@; const NiTPointerMap<Actor *,PathingData *>::`vftable'
0x682FC1: xor     ecx, ecx
0x682FC3: mov     eax, 25h ; '%'
0x682FC8: mov     edx, 4
0x682FCD: mul     edx
0x682FCF: seto    cl
0x682FD2: mov     byte ptr [esp+3Ch+var_4], 2
0x682FD7: mov     dword ptr [esi+30h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682FDE: mov     dword ptr [esi+34h], 25h ; '%'
0x682FE5: mov     [esi+3Ch], edi
0x682FE8: neg     ecx
0x682FEA: or      ecx, eax
0x682FEC: push    ecx; Size
0x682FED: call    FormHeapAlloc
0x682FF2: mov     ecx, [esi+34h]
0x682FF5: add     ecx, ecx
0x682FF7: add     ecx, ecx
0x682FF9: push    ecx
0x682FFA: push    edi
0x682FFB: push    eax
0x682FFC: mov     [esi+38h], eax
0x682FFF: call    __memset
0x683004: mov     dword ptr [esi+30h], offset ??_7?$NiTPointerMap@PAVActor@@PAUPathingData@@@@6B@; const NiTPointerMap<Actor *,PathingData *>::`vftable'
0x68300B: add     esp, 30h
0x68300E: mov     [esi+40h], edi
0x683011: mov     [esi+44h], edi
0x683014: mov     eax, esi
0x683016: mov     ecx, [esp+1Ch+var_C]
0x68301A: mov     large fs:0, ecx
0x683021: pop     ecx
0x683022: pop     edi
0x683023: pop     esi
0x683024: add     esp, 10h
0x683027: retn
