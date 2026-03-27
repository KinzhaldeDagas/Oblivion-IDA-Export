0x4EE7C0: push    0FFFFFFFFh
0x4EE7C2: push    offset ??1TESWeather@@UAE@XZ_SEH
0x4EE7C7: mov     eax, large fs:0
0x4EE7CD: push    eax
0x4EE7CE: push    ecx
0x4EE7CF: push    esi
0x4EE7D0: mov     eax, ds:0B30AACh
0x4EE7D5: xor     eax, esp
0x4EE7D7: push    eax
0x4EE7D8: lea     eax, [esp+18h+var_C]
0x4EE7DC: mov     large fs:0, eax
0x4EE7E2: mov     esi, ecx
0x4EE7E4: mov     [esp+18h+var_10], esi
0x4EE7E8: call    TESForm_constr
0x4EE7ED: push    offset TESTexture_destr; a5
0x4EE7F2: push    offset TESTexture_constr; a4
0x4EE7F7: push    2; size
0x4EE7F9: push    0Ch; a2
0x4EE7FB: lea     eax, [esi+18h]
0x4EE7FE: push    eax; a1
0x4EE7FF: mov     [esp+2Ch+var_4], 0
0x4EE807: mov     dword ptr [esi], offset ??_7TESWeather@@6B@; const TESWeather::`vftable'
0x4EE80D: call    ArrayConstructor
0x4EE812: lea     ecx, [esi+30h]; this
0x4EE815: mov     byte ptr [esp+18h+var_4], 1
0x4EE81A: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4EE81F: push    0A0h ; ' '
0x4EE824: lea     ecx, [esi+68h]
0x4EE827: push    0
0x4EE829: mov     dword ptr [esi+108h], 0
0x4EE833: mov     dword ptr [esi+10Ch], 0
0x4EE83D: push    ecx
0x4EE83E: mov     byte ptr [esp+24h+var_4], 2
0x4EE843: mov     byte ptr [esi+4], 2Dh ; '-'
0x4EE847: call    __memset
0x4EE84C: xor     eax, eax
0x4EE84E: mov     [esi+48h], eax
0x4EE851: mov     [esi+4Ch], eax
0x4EE854: mov     [esi+50h], eax
0x4EE857: mov     [esi+54h], ax
0x4EE85B: mov     [esi+56h], al
0x4EE85E: mov     [esi+58h], eax
0x4EE861: push    38h ; '8'
0x4EE863: mov     [esi+5Ch], eax
0x4EE866: push    eax
0x4EE867: lea     edx, [esi+110h]
0x4EE86D: mov     [esi+60h], eax
0x4EE870: push    edx
0x4EE871: mov     [esi+64h], eax
0x4EE874: call    __memset
0x4EE879: add     esp, 18h
0x4EE87C: mov     ecx, esi; this
0x4EE87E: call    j_TESForm_InitializeComponents
0x4EE883: mov     eax, esi
0x4EE885: mov     ecx, [esp+18h+var_C]
0x4EE889: mov     large fs:0, ecx
0x4EE890: pop     ecx
0x4EE891: pop     esi
0x4EE892: add     esp, 10h
0x4EE895: retn
