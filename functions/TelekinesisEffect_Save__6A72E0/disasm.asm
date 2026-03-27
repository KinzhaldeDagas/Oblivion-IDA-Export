0x6A72E0: mov     eax, [esp+arg_0]
0x6A72E4: push    esi
0x6A72E5: push    eax
0x6A72E6: mov     esi, ecx
0x6A72E8: call    ActiveEffect_Base_SaveEffect
0x6A72ED: mov     eax, [esi+48h]
0x6A72F0: test    eax, eax
0x6A72F2: mov     [esp+4+arg_0], 0
0x6A72FA: jz      short loc_6A7303
0x6A72FC: mov     ecx, [eax+0Ch]
0x6A72FF: mov     [esp+4+arg_0], ecx
0x6A7303: mov     ecx, ds:0B33B00h
0x6A7309: push    4
0x6A730B: lea     edx, [esp+8+arg_0]
0x6A730F: push    edx
0x6A7310: call    SaveLoad_SaveFormID
0x6A7315: mov     ecx, ds:0B33B00h
0x6A731B: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x6A731F: jb      short loc_6A733D
0x6A7321: push    4; Size
0x6A7323: lea     eax, [esi+40h]
0x6A7326: push    eax; Src
0x6A7327: call    SaveLoad_SaveData
0x6A732C: mov     ecx, ds:0B33B00h
0x6A7332: push    4; Size
0x6A7334: add     esi, 44h ; 'D'
0x6A7337: push    esi; Src
0x6A7338: call    SaveLoad_SaveData
0x6A733D: pop     esi
0x6A733E: retn    4
