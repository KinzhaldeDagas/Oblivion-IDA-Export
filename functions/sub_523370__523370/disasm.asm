0x523370: push    esi
0x523371: push    edi
0x523372: mov     edi, [esp+8+arg_0]
0x523376: push    edi
0x523377: mov     esi, ecx
0x523379: call    TESActorBase_SaveModified
0x52337E: test    edi, 200h
0x523384: jz      short loc_523396
0x523386: push    15h; a2
0x523388: lea     eax, [esi+0ECh]
0x52338E: push    eax; a1
0x52338F: mov     ecx, esi
0x523391: call    TESForm_SaveDataToCurrentSaveGame
0x523396: test    edi, 400h
0x52339C: jz      short loc_5233C5
0x52339E: mov     eax, [esi+1E4h]
0x5233A4: test    eax, eax
0x5233A6: mov     [esp+8+arg_0], 0
0x5233AE: jz      short loc_5233B7
0x5233B0: mov     ecx, [eax+0Ch]
0x5233B3: mov     [esp+8+arg_0], ecx
0x5233B7: push    4
0x5233B9: lea     edx, [esp+0Ch+arg_0]
0x5233BD: push    edx
0x5233BE: mov     ecx, esi
0x5233C0: call    TESForm_SaveFormIDToCurrentSaveGame
0x5233C5: pop     edi
0x5233C6: pop     esi
0x5233C7: retn    4
