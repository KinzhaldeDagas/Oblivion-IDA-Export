0x6A50F0: mov     eax, [esp+Dst]
0x6A50F4: push    ebx
0x6A50F5: push    esi
0x6A50F6: push    eax; Dst
0x6A50F7: mov     esi, ecx
0x6A50F9: call    AssociatedItemEffect_Load
0x6A50FE: push    4; Size
0x6A5100: lea     ecx, [esp+0Ch+Dst]
0x6A5104: push    ecx; Dst
0x6A5105: mov     ecx, ds:0B33B00h
0x6A510B: call    SaveLoad_LoadFormID
0x6A5110: mov     edx, [esp+10h+var_4]
0x6A5114: mov     bl, al
0x6A5116: push    1; Size
0x6A5118: lea     eax, [esi+40h]
0x6A511B: mov     [esi+3Ch], edx
0x6A511E: mov     ecx, ds:0B33B00h
0x6A5124: push    eax; Dst
0x6A5125: call    SaveLoad_LoadData
0x6A512A: cmp     [esp+10h+var_4], 0
0x6A512F: jnz     short loc_6A5170
0x6A5131: test    bl, bl
0x6A5133: jnz     short loc_6A5170
0x6A5135: push    4; Size
0x6A5137: lea     ecx, [esi+44h]
0x6A513A: push    ecx; Dst
0x6A513B: mov     ecx, ds:0B33B00h
0x6A5141: call    SaveLoad_LoadData
0x6A5146: mov     ecx, ds:0B33B00h
0x6A514C: push    0Ch; Size
0x6A514E: lea     edx, [esi+48h]
0x6A5151: push    edx; Dst
0x6A5152: call    SaveLoad_LoadData
0x6A5157: mov     ecx, ds:0B33B00h
0x6A515D: push    0Ch; Size
0x6A515F: lea     eax, [esi+54h]
0x6A5162: push    eax; Dst
0x6A5163: call    SaveLoad_LoadData
0x6A5168: mov     [esi+60h], bl
0x6A516B: pop     esi
0x6A516C: pop     ebx
0x6A516D: retn    4
0x6A5170: mov     byte ptr [esi+60h], 1
0x6A5174: pop     esi
0x6A5175: pop     ebx
0x6A5176: retn    4
