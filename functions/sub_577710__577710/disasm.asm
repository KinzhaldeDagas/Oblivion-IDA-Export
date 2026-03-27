0x577710: push    0FFFFFFFFh
0x577712: push    offset SEH_577710
0x577717: mov     eax, large fs:0
0x57771D: push    eax
0x57771E: push    ecx
0x57771F: push    esi
0x577720: mov     eax, ds:0B30AACh
0x577725: xor     eax, esp
0x577727: push    eax
0x577728: lea     eax, [esp+18h+var_C]
0x57772C: mov     large fs:0, eax
0x577732: mov     esi, ecx
0x577734: mov     [esp+18h+var_10], esi
0x577738: xor     eax, eax
0x57773A: mov     [esi+0Ch], eax
0x57773D: mov     [esi+4], eax
0x577740: mov     [esi+8], eax
0x577743: mov     dword ptr [esi], offset ??_7?$NiTList@PAVCharData@FontManager@@@@6B@; const NiTList<FontManager::CharData *>::`vftable'
0x577749: mov     ecx, [esp+18h+arg_4]
0x57774D: mov     [esi+10h], eax
0x577750: mov     edx, [ecx+18h]
0x577753: mov     [esi+24h], edx
0x577756: mov     edx, [esp+18h+arg_C]
0x57775A: mov     [esi+28h], edx
0x57775D: mov     edx, [esp+18h+arg_0]
0x577761: push    eax
0x577762: mov     [esi+30h], edx
0x577765: mov     edx, [esp+1Ch+arg_8]
0x577769: push    ecx
0x57776A: mov     ecx, esi
0x57776C: mov     [esp+20h+var_4], eax
0x577770: mov     [esi+14h], eax
0x577773: mov     [esi+18h], eax
0x577776: mov     [esi+1Ch], eax
0x577779: mov     [esi+20h], edx
0x57777C: call    sub_5772A0
0x577781: mov     eax, esi
0x577783: mov     ecx, [esp+18h+var_C]
0x577787: mov     large fs:0, ecx
0x57778E: pop     ecx
0x57778F: pop     esi
0x577790: add     esp, 10h
0x577793: retn    10h
