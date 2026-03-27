0x4A8330: push    0FFFFFFFFh
0x4A8332: push    offset SettingCollectionMap_constr_SEH
0x4A8337: mov     eax, large fs:0
0x4A833D: push    eax
0x4A833E: push    ecx
0x4A833F: push    ebx
0x4A8340: push    esi
0x4A8341: push    edi
0x4A8342: mov     eax, ds:0B30AACh
0x4A8347: xor     eax, esp
0x4A8349: push    eax
0x4A834A: lea     eax, [esp+20h+var_C]
0x4A834E: mov     large fs:0, eax
0x4A8354: mov     esi, ecx
0x4A8356: mov     [esp+20h+var_10], esi
0x4A835A: xor     ebx, ebx
0x4A835C: mov     [esi+108h], ebx
0x4A8362: mov     [esi+4], bl
0x4A8365: mov     eax, [esp+20h+arg_0]
0x4A8369: lea     edi, [esi+10Ch]
0x4A836F: push    eax
0x4A8370: mov     ecx, edi
0x4A8372: mov     [esp+24h+var_4], ebx
0x4A8376: mov     dword ptr [esi], offset ??_7?$SettingCollectionMap@VSetting@@@@6B@; const SettingCollectionMap<Setting>::`vftable'
0x4A837C: call    ??0?$NiTMap@PBDPAVSetting@@@@QAE@XZ; NiTMap<char const *,Setting *>::NiTMap<char const *,Setting *>(void)
0x4A8381: mov     [edi+10h], bl
0x4A8384: mov     dword ptr [edi], offset ??_7?$BSTCaseInsensitiveStringMap@PAVSetting@@@@6B@; const BSTCaseInsensitiveStringMap<Setting *>::`vftable'
0x4A838A: mov     eax, esi
0x4A838C: mov     ecx, [esp+20h+var_C]
0x4A8390: mov     large fs:0, ecx
0x4A8397: pop     ecx
0x4A8398: pop     edi
0x4A8399: pop     esi
0x4A839A: pop     ebx
0x4A839B: add     esp, 10h
0x4A839E: retn    4
