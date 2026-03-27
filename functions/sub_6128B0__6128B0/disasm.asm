0x6128B0: sub     esp, 8
0x6128B3: push    esi
0x6128B4: mov     esi, ecx
0x6128B6: cmp     dword ptr [esi+4], 0
0x6128BA: push    1; Size
0x6128BC: lea     ecx, [esp+10h+Src]
0x6128C0: setnz   al
0x6128C3: push    ecx; Src
0x6128C4: mov     ecx, ds:0B33B00h
0x6128CA: mov     [esp+14h+Src], al
0x6128CE: call    SaveLoad_SaveData
0x6128D3: mov     ecx, [esi+4]
0x6128D6: test    ecx, ecx
0x6128D8: jz      short loc_6128DF
0x6128DA: call    SaveGame
0x6128DF: mov     ecx, [esi]; int
0x6128E1: test    ecx, ecx
0x6128E3: mov     [esp+0Ch+var_4], 0
0x6128EB: pop     esi
0x6128EC: jz      short loc_6128F7
0x6128EE: call    MagicItem_GetFormID
0x6128F3: mov     [esp+8+var_4], eax
0x6128F7: mov     ecx, ds:0B33B00h
0x6128FD: push    4
0x6128FF: lea     edx, [esp+0Ch+var_4]
0x612903: push    edx
0x612904: call    SaveLoad_SaveFormID
0x612909: add     esp, 8
0x61290C: retn
