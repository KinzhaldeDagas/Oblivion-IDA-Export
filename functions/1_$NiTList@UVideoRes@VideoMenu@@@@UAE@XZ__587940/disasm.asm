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
0x587976: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x58797B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@UVideoRes@VideoMenu@@@@UVideoRes@VideoMenu@@@@6B@; const NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable'
0x587981: mov     ecx, [esp+18h+var_C]
0x587985: mov     large fs:0, ecx
0x58798C: pop     ecx
0x58798D: pop     esi
0x58798E: add     esp, 10h
0x587991: retn
0x587470: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@UVideoRes@VideoMenu@@@@UVideoRes@VideoMenu@@@@6B@; const NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable'
0x587476: retn
0x9BF490: mov     ecx, [ebp-10h]
0x9BF493: jmp     loc_587470
0x9BF498: mov     edx, [esp+arg_4]
0x9BF49C: lea     eax, [edx-8]
0x9BF49F: mov     ecx, [edx-0Ch]
0x9BF4A2: xor     ecx, eax
0x9BF4A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF4A9: mov     eax, offset stru_AE8A24
0x9BF4AE: jmp     ___CxxFrameHandler3
