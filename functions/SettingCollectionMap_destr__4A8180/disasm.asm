0x4A8180: push    0FFFFFFFFh
0x4A8182: push    offset SettingCollectionMap_destr_SEH
0x4A8187: mov     eax, large fs:0
0x4A818D: push    eax
0x4A818E: push    ecx
0x4A818F: push    esi
0x4A8190: push    edi
0x4A8191: mov     eax, ds:0B30AACh
0x4A8196: xor     eax, esp
0x4A8198: push    eax
0x4A8199: lea     eax, [esp+1Ch+var_C]
0x4A819D: mov     large fs:0, eax
0x4A81A3: mov     esi, ecx
0x4A81A5: mov     [esp+1Ch+var_10], esi
0x4A81A9: mov     dword ptr [esi], offset ??_7?$SettingCollectionMap@VSetting@@@@6B@; const SettingCollectionMap<Setting>::`vftable'
0x4A81AF: lea     edi, [esi+10Ch]
0x4A81B5: mov     ecx, edi
0x4A81B7: mov     [esp+1Ch+var_4], 1
0x4A81BF: call    NiTMap_Clear
0x4A81C4: mov     ecx, edi
0x4A81C6: mov     byte ptr [esp+1Ch+var_4], 0
0x4A81CB: mov     dword ptr [edi], offset ??_7?$BSTCaseInsensitiveStringMap@PAVSetting@@@@6B@; const BSTCaseInsensitiveStringMap<Setting *>::`vftable'
0x4A81D1: call    ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVSetting@@@@PAVSetting@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(void)
0x4A81D6: mov     dword ptr [esi], offset ??_7?$SettingCollection@VSetting@@@@6B@; const SettingCollection<Setting>::`vftable'
0x4A81DC: mov     ecx, [esp+1Ch+var_C]
0x4A81E0: mov     large fs:0, ecx
0x4A81E7: pop     ecx
0x4A81E8: pop     edi
0x4A81E9: pop     esi
0x4A81EA: add     esp, 10h
0x4A81ED: retn
0x4A8090: mov     dword ptr [ecx], offset ??_7?$BSTCaseInsensitiveStringMap@PAVSetting@@@@6B@; const BSTCaseInsensitiveStringMap<Setting *>::`vftable'
0x4A8096: jmp     ??1?$NiTStringTemplateMap@V?$NiTMap@PBDPAVSetting@@@@PAVSetting@@@@UAE@XZ; NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(void)
0x9B2950: mov     ecx, [ebp-10h]
0x9B2953: jmp     SettingCollection_destr
0x9B2958: mov     ecx, [ebp-10h]
0x9B295B: add     ecx, 10Ch
0x9B2961: jmp     loc_4A8090
0x9B2966: mov     edx, [esp+arg_4]
0x9B296A: lea     eax, [edx-0Ch]
0x9B296D: mov     ecx, [edx-10h]
0x9B2970: xor     ecx, eax
0x9B2972: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2977: mov     eax, offset stru_ADE8E0
0x9B297C: jmp     ___CxxFrameHandler3
