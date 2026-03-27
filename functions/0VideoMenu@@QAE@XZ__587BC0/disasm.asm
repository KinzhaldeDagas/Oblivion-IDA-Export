0x587BC0: push    esi
0x587BC1: push    edi
0x587BC2: mov     esi, ecx
0x587BC4: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x587BC9: xor     edi, edi
0x587BCB: push    0C0h ; 'À'
0x587BD0: mov     dword ptr [esi], offset ??_7VideoMenu@@6B@; const VideoMenu::`vftable'
0x587BD6: lea     eax, [esi+28h]
0x587BD9: push    edi
0x587BDA: push    eax
0x587BDB: mov     [esi+10Ch], edi
0x587BE1: mov     [esi+104h], edi
0x587BE7: mov     [esi+108h], edi
0x587BED: mov     dword ptr [esi+100h], offset ??_7?$NiTList@UVideoRes@VideoMenu@@@@6B@; const NiTList<VideoMenu::VideoRes>::`vftable'
0x587BF7: call    __memset
0x587BFC: add     esp, 0Ch
0x587BFF: mov     [esi+0E8h], edi
0x587C05: pop     edi
0x587C06: mov     eax, esi
0x587C08: pop     esi
0x587C09: retn
