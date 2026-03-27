0x7766E0: push    esi
0x7766E1: mov     esi, ecx
0x7766E3: xor     ecx, ecx
0x7766E5: mov     eax, 25h ; '%'
0x7766EA: push    edi
0x7766EB: mov     [esi+4], eax
0x7766EE: xor     edi, edi
0x7766F0: mov     edx, 4
0x7766F5: mul     edx
0x7766F7: seto    cl
0x7766FA: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x776700: mov     [esi+0Ch], edi
0x776703: neg     ecx
0x776705: or      ecx, eax
0x776707: push    ecx; Size
0x776708: call    FormHeapAlloc
0x77670D: mov     ecx, [esi+4]
0x776710: add     ecx, ecx
0x776712: add     ecx, ecx
0x776714: push    ecx
0x776715: push    edi
0x776716: push    eax
0x776717: mov     [esi+8], eax
0x77671A: call    __memset
0x77671F: mov     eax, [esp+18h+arg_4]
0x776723: mov     edx, [esp+18h+arg_0]
0x776727: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiLight@@PAVLightEntry@NiDX9LightManager@@@@6B@; const NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'
0x77672D: mov     [esi+1Ch], edi
0x776730: mov     [esi+14h], edi
0x776733: mov     [esi+18h], edi
0x776736: mov     dword ptr [esi+10h], offset ??_7?$NiTPointerList@PAVNiLight@@@@6B@; const NiTPointerList<NiLight *>::`vftable'
0x77673D: mov     [esi+24h], edx
0x776740: mov     dword ptr [esi+28h], 0FFFFFFFFh
0x776747: mov     [esi+20h], eax
0x77674A: mov     ecx, [eax]
0x77674C: mov     edx, [ecx+4]
0x77674F: add     esp, 10h
0x776752: push    eax
0x776753: call    edx
0x776755: push    200h
0x77675A: lea     eax, [esi+40h]
0x77675D: push    edi
0x77675E: push    eax
0x77675F: mov     [esi+3Ch], edi
0x776762: call    __memset
0x776767: add     esp, 0Ch
0x77676A: mov     ecx, esi
0x77676C: call    sub_776240
0x776771: pop     edi
0x776772: mov     eax, esi
0x776774: pop     esi
0x776775: retn    8
