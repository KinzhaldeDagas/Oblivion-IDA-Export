0x6A5460: mov     eax, [esp+arg_0]
0x6A5464: push    esi
0x6A5465: push    eax
0x6A5466: mov     esi, ecx
0x6A5468: call    AssociatedItemEffect_Save
0x6A546D: mov     eax, [esi+3Ch]
0x6A5470: test    eax, eax
0x6A5472: mov     [esp+4+arg_0], 0
0x6A547A: jz      short loc_6A5483
0x6A547C: mov     ecx, [eax+0Ch]
0x6A547F: mov     [esp+4+arg_0], ecx
0x6A5483: mov     ecx, ds:0B33B00h
0x6A5489: push    4
0x6A548B: lea     edx, [esp+8+arg_0]
0x6A548F: push    edx
0x6A5490: call    SaveLoad_SaveFormID
0x6A5495: mov     ecx, ds:0B33B00h
0x6A549B: push    1; Size
0x6A549D: lea     eax, [esi+40h]
0x6A54A0: push    eax; Src
0x6A54A1: call    SaveLoad_SaveData
0x6A54A6: cmp     dword ptr [esi+3Ch], 0
0x6A54AA: jnz     short loc_6A54DF
0x6A54AC: push    4; Size
0x6A54AE: lea     ecx, [esi+44h]
0x6A54B1: push    ecx; Src
0x6A54B2: mov     ecx, ds:0B33B00h
0x6A54B8: call    SaveLoad_SaveData
0x6A54BD: mov     ecx, ds:0B33B00h
0x6A54C3: push    0Ch; Size
0x6A54C5: lea     edx, [esi+48h]
0x6A54C8: push    edx; Src
0x6A54C9: call    SaveLoad_SaveData
0x6A54CE: mov     ecx, ds:0B33B00h
0x6A54D4: push    0Ch; Size
0x6A54D6: add     esi, 54h ; 'T'
0x6A54D9: push    esi; Src
0x6A54DA: call    SaveLoad_SaveData
0x6A54DF: pop     esi
0x6A54E0: retn    4
