0x66A5E0: push    esi
0x66A5E1: mov     esi, ecx
0x66A5E3: cmp     dword ptr [esi+1F0h], 0
0x66A5EA: jz      short loc_66A668
0x66A5EC: call    TESObjectREFR_GetParentCell
0x66A5F1: test    eax, eax
0x66A5F3: jz      short loc_66A668
0x66A5F5: push    edi
0x66A5F6: mov     ecx, esi; this
0x66A5F8: call    TESObjectREFR_GetParentCell
0x66A5FD: mov     edi, eax
0x66A5FF: mov     ecx, edi; this
0x66A601: call    TESObjectCELL_IsInterior
0x66A606: test    al, al
0x66A608: jz      short loc_66A616
0x66A60A: lea     ecx, [edi+28h]
0x66A60D: call    sub_424180
0x66A612: mov     edi, eax
0x66A614: jmp     short loc_66A61C
0x66A616: mov     edi, ds:0B35C24h
0x66A61C: mov     ecx, [esi+1F0h]
0x66A622: call    sub_531F10
0x66A627: cmp     eax, edi
0x66A629: jz      short loc_66A667
0x66A62B: mov     ecx, esi; this
0x66A62D: call    TESObjectREFR_GetParentCell
0x66A632: mov     edi, eax
0x66A634: mov     ecx, edi; this
0x66A636: call    TESObjectCELL_IsInterior
0x66A63B: test    al, al
0x66A63D: jz      short loc_66A656
0x66A63F: lea     ecx, [edi+28h]
0x66A642: call    sub_424180
0x66A647: mov     ecx, [esi+1F0h]
0x66A64D: push    eax
0x66A64E: call    sub_531E90
0x66A653: pop     edi
0x66A654: pop     esi
0x66A655: retn
0x66A656: mov     eax, ds:0B35C24h
0x66A65B: mov     ecx, [esi+1F0h]
0x66A661: push    eax
0x66A662: call    sub_531E90
0x66A667: pop     edi
0x66A668: pop     esi
0x66A669: retn
