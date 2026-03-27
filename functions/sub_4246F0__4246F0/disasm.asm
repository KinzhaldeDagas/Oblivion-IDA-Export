0x4246F0: push    esi
0x4246F1: push    edi
0x4246F2: push    20h ; ' '; a2
0x4246F4: mov     edi, ecx
0x4246F6: call    BaseExtraList_GetExtraData
0x4246FB: mov     esi, eax
0x4246FD: test    esi, esi
0x4246FF: jz      short loc_42475E
0x424701: mov     ecx, [esi+0Ch]
0x424704: push    1
0x424706: call    sub_566830
0x42470B: mov     ecx, SaveLoad_CurrentSavegame
0x424711: call    sub_45A500
0x424716: test    al, al
0x424718: jz      short loc_42473D
0x42471A: mov     eax, [esi+0Ch]
0x42471D: mov     ecx, SaveLoad_CurrentSavegame
0x424723: push    eax
0x424724: call    sub_45C7A0
0x424729: push    1
0x42472B: push    esi
0x42472C: mov     ecx, edi
0x42472E: mov     dword ptr [esi+0Ch], 0
0x424735: call    BaseExtraList_RemoveExtraByPtr
0x42473A: pop     edi
0x42473B: pop     esi
0x42473C: retn
0x42473D: mov     ecx, [esi+0Ch]
0x424740: test    ecx, ecx
0x424742: jz      short loc_42474D
0x424744: mov     edx, [ecx]
0x424746: mov     eax, [edx+10h]
0x424749: push    1
0x42474B: call    eax
0x42474D: push    1
0x42474F: push    esi
0x424750: mov     ecx, edi
0x424752: mov     dword ptr [esi+0Ch], 0
0x424759: call    BaseExtraList_RemoveExtraByPtr
0x42475E: pop     edi
0x42475F: pop     esi
0x424760: retn
