0x587940: push    0FFFFFFFFh
0x587942: push    offset ??1?$NiTList@UVideoRes@VideoMenu@@@@UAE@XZ_SEH
0x587947: mov     eax, large fs:0
0x58794D: push    eax
0x58794E: push    ecx
0x58794F: push    esi
0x587950: mov     eax, ds:0B30AACh
0x587955: xor     eax, esp
0x587957: push    eax
0x587958: lea     eax, [esp+18h+var_C]
0x58795C: mov     large fs:0, eax
0x587962: mov     esi, ecx
0x587964: mov     [esp+18h+var_10], esi
0x587968: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@UVideoRes@VideoMenu@@@@UVideoRes@VideoMenu@@@@6B@; const NiTPointerListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable'
0x58796E: mov     [esp+18h+var_4], 0
0x587976: call    NiTPointerList__FreeAllNodes
0x58797B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@UVideoRes@VideoMenu@@@@UVideoRes@VideoMenu@@@@6B@; const NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable'
0x587981: mov     ecx, [esp+18h+var_C]
0x587985: mov     large fs:0, ecx
0x58798C: pop     ecx
0x58798D: pop     esi
0x58798E: add     esp, 10h
0x587991: retn
