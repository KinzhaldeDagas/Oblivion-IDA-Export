0x5513A0: push    0FFFFFFFFh
0x5513A2: push    offset ??1BSFaceGenModelMap@@UAE@XZ_SEH
0x5513A7: mov     eax, large fs:0
0x5513AD: push    eax
0x5513AE: push    ecx
0x5513AF: push    esi
0x5513B0: mov     eax, ds:0B30AACh
0x5513B5: xor     eax, esp
0x5513B7: push    eax
0x5513B8: lea     eax, [esp+18h+var_C]
0x5513BC: mov     large fs:0, eax
0x5513C2: mov     esi, ecx
0x5513C4: mov     [esp+18h+var_10], esi
0x5513C8: mov     dword ptr [esi], offset ??_7BSFaceGenModelMap@@6B@; const BSFaceGenModelMap::`vftable'
0x5513CE: push    offset stru_B39C00; lpCriticalSection
0x5513D3: mov     [esp+1Ch+var_4], 0
0x5513DB: call    dword ptr ds:0A2806Ch
0x5513E1: call    dword ptr ds:0A2808Ch
0x5513E7: add     dword ptr ds:0B39C7Ch, 1
0x5513EE: add     esi, 4
0x5513F1: mov     ecx, esi
0x5513F3: mov     ds:0B39C78h, eax
0x5513F8: call    NiTMap_Clear
0x5513FD: sub     dword ptr ds:0B39C7Ch, 1
0x551404: jnz     short loc_551410
0x551406: mov     dword ptr ds:0B39C78h, 0
0x551410: push    offset stru_B39C00; lpCriticalSection
0x551415: call    dword ptr ds:0A28074h
0x55141B: mov     ecx, esi
0x55141D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x551425: mov     dword ptr [esi], offset ??_7?$BSTCaseInsensitiveStringMap@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x55142B: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(void)
0x551430: mov     ecx, [esp+18h+var_C]
0x551434: mov     large fs:0, ecx
0x55143B: pop     ecx
0x55143C: pop     esi
0x55143D: add     esp, 10h
0x551440: retn
