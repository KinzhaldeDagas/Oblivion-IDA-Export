0x766F30: sub     esp, 14h
0x766F33: push    ebx
0x766F34: push    esi
0x766F35: mov     esi, ecx
0x766F37: mov     eax, [esi+614h]
0x766F3D: xor     ebx, ebx
0x766F3F: cmp     eax, ebx
0x766F41: push    edi
0x766F42: jz      loc_7672A9
0x766F48: cmp     [esi+6F0h], bl
0x766F4E: jnz     loc_7672A9
0x766F54: mov     edi, [eax+8]
0x766F57: push    ebp
0x766F58: mov     ebp, [eax]
0x766F5A: mov     ebx, [ebp+0B8h]
0x766F60: lea     ecx, [ebp+20h]
0x766F63: mov     [esp+24h+var_8], ecx
0x766F67: push    [esp+24h+var_8]
0x766F6B: mov     ecx, [esi+624h]
0x766F71: mov     edx, [ecx]
0x766F73: mov     edx, [edx+28h]
0x766F76: lea     eax, [ebp+64h]
0x766F79: push    eax
0x766F7A: mov     eax, [esi+620h]
0x766F80: push    eax
0x766F81: mov     eax, [esi+61Ch]
0x766F87: push    eax
0x766F88: push    edi
0x766F89: push    ebx
0x766F8A: push    ebp
0x766F8B: call    edx
0x766F8D: test    eax, eax
0x766F8F: jz      short loc_766FD9
0x766F91: mov     edi, [esi+624h]
0x766F97: xor     ebx, ebx
0x766F99: cmp     edi, ebx
0x766F9B: jz      short loc_766FBF
0x766F9D: lea     eax, [edi+4]
0x766FA0: push    eax; lpAddend
0x766FA1: call    dword ptr ds:0A2807Ch
0x766FA7: test    eax, eax
0x766FA9: jnz     short loc_766FB9
0x766FAB: cmp     edi, ebx
0x766FAD: jz      short loc_766FB9
0x766FAF: mov     edx, [edi]
0x766FB1: mov     eax, [edx]
0x766FB3: push    1
0x766FB5: mov     ecx, edi
0x766FB7: call    eax
0x766FB9: mov     [esi+624h], ebx
0x766FBF: pop     ebp
0x766FC0: pop     edi
0x766FC1: mov     [esi+61Ch], ebx
0x766FC7: mov     [esi+620h], ebx
0x766FCD: mov     ecx, esi
0x766FCF: pop     esi
0x766FD0: pop     ebx
0x766FD1: add     esp, 14h
0x766FD4: jmp     sub_762FD0
0x766FD9: mov     ecx, [esi+624h]
0x766FDF: mov     edx, [ecx]
0x766FE1: mov     edx, [edx+2Ch]
0x766FE4: lea     eax, [ebp+20h]
0x766FE7: push    eax
0x766FE8: lea     eax, [ebp+64h]
0x766FEB: push    eax
0x766FEC: mov     eax, [esi+620h]
0x766FF2: push    eax
0x766FF3: mov     eax, [esi+61Ch]
0x766FF9: push    eax
0x766FFA: push    edi
0x766FFB: push    ebx
0x766FFC: push    ebp
0x766FFD: call    edx
0x766FFF: mov     ecx, [esi+624h]
0x767005: mov     eax, [ecx]
0x767007: mov     edx, [eax+48h]
0x76700A: call    edx
0x76700C: test    eax, eax
0x76700E: jz      loc_767205
0x767014: mov     ebx, [esi+614h]
0x76701A: mov     eax, [ebx]
0x76701C: mov     edx, [ebx+8]
0x76701F: mov     ecx, [esi+624h]
0x767025: mov     ebp, [ecx]
0x767027: lea     edi, [eax+20h]
0x76702A: push    edi
0x76702B: lea     edi, [eax+64h]
0x76702E: push    edi
0x76702F: mov     edi, [esi+620h]
0x767035: push    edi
0x767036: mov     edi, [esi+61Ch]
0x76703C: push    edi
0x76703D: push    edx
0x76703E: mov     edx, [eax+0B8h]
0x767044: push    edx
0x767045: push    eax
0x767046: mov     eax, [ebp+30h]
0x767049: mov     [esp+3Ch+var_10], ebx
0x76704D: call    eax
0x76704F: jmp     short loc_767055
0x767051: mov     ebx, [esp+20h+var_10]
0x767055: mov     ebp, [ebx]
0x767057: mov     ecx, [ebp+0B8h]
0x76705D: mov     edi, [ebx+8]
0x767060: mov     ebx, [ebx+4]
0x767063: mov     [esp+20h+var_C], ecx
0x767067: mov     ecx, [esi+624h]; void *
0x76706D: cmp     ecx, [esi+0A94h]
0x767073: mov     [esp+20h], ebx
0x767077: lea     eax, [ebp+20h]
0x76707A: jnz     short loc_76709F
0x76707C: test    ebx, ebx
0x76707E: jz      short loc_76709F
0x767080: movzx   edx, word ptr [ebx+20h]
0x767084: cmp     edx, [esi+6D8h]
0x76708A: jbe     short loc_76709F
0x76708C: push    edx
0x76708D: push    offset aEndbatchCannot; "EndBatch> Cannot render partition with "...
0x767092: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x767097: add     esp, 8
0x76709A: jmp     loc_7671E1
0x76709F: mov     edx, [ecx]
0x7670A1: mov     edx, [edx+34h]
0x7670A4: push    eax
0x7670A5: lea     eax, [ebp+64h]
0x7670A8: push    eax
0x7670A9: mov     eax, [esi+620h]
0x7670AF: push    eax
0x7670B0: mov     eax, [esi+61Ch]
0x7670B6: push    eax
0x7670B7: mov     eax, [esp+30h+var_C]
0x7670BB: push    edi
0x7670BC: push    ebx
0x7670BD: push    eax
0x7670BE: push    ebp
0x7670BF: call    edx
0x7670C1: mov     edx, [esi+61Ch]
0x7670C7: mov     ecx, [esi+624h]
0x7670CD: mov     eax, [ecx]
0x7670CF: mov     eax, [eax+3Ch]
0x7670D2: push    edx
0x7670D3: push    edi
0x7670D4: push    ebx
0x7670D5: push    ebp
0x7670D6: call    eax
0x7670D8: mov     ecx, [esi+624h]
0x7670DE: mov     edx, [ecx]
0x7670E0: mov     edx, [edx+38h]
0x7670E3: mov     edi, eax
0x7670E5: lea     eax, [ebp+20h]
0x7670E8: push    eax
0x7670E9: lea     eax, [ebp+64h]
0x7670EC: push    eax
0x7670ED: mov     eax, [esi+620h]
0x7670F3: push    eax
0x7670F4: mov     eax, [esi+61Ch]
0x7670FA: push    eax
0x7670FB: mov     eax, [esp+30h+var_C]
0x7670FF: push    edi
0x767100: push    ebx
0x767101: push    eax
0x767102: push    ebp
0x767103: call    edx
0x767105: mov     eax, [esi+8ACh]
0x76710B: mov     ecx, [eax+0FF0h]
0x767111: mov     edx, [ecx]
0x767113: mov     eax, [edx+4]
0x767116: call    eax
0x767118: xor     eax, eax
0x76711A: cmp     [edi+30h], eax
0x76711D: jz      short loc_76718E
0x76711F: cmp     [edi+44h], eax
0x767122: mov     [esp+20h+var_8], eax
0x767126: mov     [esp+20h+var_4], eax
0x76712A: jbe     loc_7671AB
0x767130: mov     eax, [edi+48h]
0x767133: test    eax, eax
0x767135: jz      short loc_767144
0x767137: mov     ecx, [esp+20h+var_4]
0x76713B: movzx   ebx, word ptr [eax+ecx*2]
0x76713F: sub     ebx, 2
0x767142: jmp     short loc_767147
0x767144: mov     ebx, [edi+3Ch]
0x767147: mov     ecx, [esp+20h+var_8]
0x76714B: mov     eax, [esi+280h]
0x767151: mov     edx, [eax]
0x767153: mov     edx, [edx+148h]
0x767159: push    ebx
0x76715A: push    ecx
0x76715B: mov     ecx, [edi+14h]
0x76715E: push    ecx
0x76715F: mov     ecx, [edi+34h]
0x767162: push    0
0x767164: push    ecx
0x767165: mov     ecx, [edi+38h]
0x767168: push    ecx
0x767169: push    eax
0x76716A: call    edx
0x76716C: mov     eax, [esp+20h+var_8]
0x767170: lea     ecx, [eax+ebx+2]
0x767174: mov     eax, [esp+20h+var_4]
0x767178: add     eax, 1
0x76717B: cmp     eax, [edi+44h]
0x76717E: mov     [esp+20h+var_8], ecx
0x767182: mov     [esp+20h+var_4], eax
0x767186: jb      short loc_767130
0x767188: mov     ebx, [esp+20h]
0x76718C: jmp     short loc_7671AB
0x76718E: mov     ecx, [edi+3Ch]
0x767191: mov     eax, [esi+280h]
0x767197: mov     edx, [eax]
0x767199: mov     edx, [edx+144h]
0x76719F: push    ecx
0x7671A0: mov     ecx, [edi+34h]
0x7671A3: push    ecx
0x7671A4: mov     ecx, [edi+38h]
0x7671A7: push    ecx
0x7671A8: push    eax
0x7671A9: call    edx
0x7671AB: mov     ecx, [esi+624h]
0x7671B1: mov     edx, [ecx]
0x7671B3: mov     edx, [edx+40h]
0x7671B6: lea     eax, [ebp+20h]
0x7671B9: push    eax
0x7671BA: lea     eax, [ebp+64h]
0x7671BD: push    eax
0x7671BE: mov     eax, [esi+620h]
0x7671C4: push    eax
0x7671C5: mov     eax, [esi+61Ch]
0x7671CB: push    eax
0x7671CC: mov     eax, [esp+30h+var_C]
0x7671D0: push    edi
0x7671D1: push    ebx
0x7671D2: push    eax
0x7671D3: push    ebp
0x7671D4: call    edx
0x7671D6: mov     eax, [esp+20h+var_10]
0x7671DA: mov     ecx, [eax+0Ch]
0x7671DD: mov     [esp+20h+var_10], ecx
0x7671E1: cmp     [esp+20h+var_10], 0
0x7671E6: jnz     loc_767051
0x7671EC: mov     ecx, [esi+624h]
0x7671F2: mov     edx, [ecx]
0x7671F4: mov     eax, [edx+4Ch]
0x7671F7: call    eax
0x7671F9: test    eax, eax
0x7671FB: jnz     loc_767014
0x767201: mov     ebx, [esp+20h+var_C]
0x767205: mov     eax, [esi+614h]
0x76720B: test    eax, eax
0x76720D: jz      short loc_767227
0x76720F: mov     edx, 0F000h
0x767214: mov     ecx, [eax]
0x767216: mov     ecx, [ecx+0B4h]
0x76721C: and     [ecx+2Eh], dx
0x767220: mov     eax, [eax+0Ch]
0x767223: test    eax, eax
0x767225: jnz     short loc_767214
0x767227: mov     ecx, [esi+624h]
0x76722D: mov     edx, [ecx]
0x76722F: mov     edx, [edx+44h]
0x767232: lea     eax, [ebp+20h]
0x767235: push    eax
0x767236: lea     eax, [ebp+64h]
0x767239: push    eax
0x76723A: mov     eax, [esi+620h]
0x767240: push    eax
0x767241: mov     eax, [esi+61Ch]
0x767247: push    eax
0x767248: push    edi
0x767249: push    ebx
0x76724A: push    ebp
0x76724B: call    edx
0x76724D: mov     edi, [esi+624h]
0x767253: xor     ebx, ebx
0x767255: cmp     edi, ebx
0x767257: jz      short loc_76727B
0x767259: lea     eax, [edi+4]
0x76725C: push    eax; lpAddend
0x76725D: call    dword ptr ds:0A2807Ch
0x767263: test    eax, eax
0x767265: jnz     short loc_767275
0x767267: cmp     edi, ebx
0x767269: jz      short loc_767275
0x76726B: mov     edx, [edi]
0x76726D: mov     eax, [edx]
0x76726F: push    1
0x767271: mov     ecx, edi
0x767273: call    eax
0x767275: mov     [esi+624h], ebx
0x76727B: mov     ecx, esi
0x76727D: mov     [esi+61Ch], ebx
0x767283: mov     [esi+620h], ebx
0x767289: call    sub_762FD0
0x76728E: mov     esi, [esi+8ACh]
0x767294: mov     edx, [esi]
0x767296: mov     eax, [edx+0FCh]
0x76729C: push    ebx
0x76729D: mov     ecx, esi
0x76729F: call    eax
0x7672A1: pop     ebp
0x7672A2: pop     edi
0x7672A3: pop     esi
0x7672A4: pop     ebx
0x7672A5: add     esp, 14h
0x7672A8: retn
0x7672A9: mov     edi, [esi+624h]
0x7672AF: cmp     edi, ebx
0x7672B1: jz      short loc_7672D5
0x7672B3: lea     ecx, [edi+4]
0x7672B6: push    ecx; lpAddend
0x7672B7: call    dword ptr ds:0A2807Ch
0x7672BD: test    eax, eax
0x7672BF: jnz     short loc_7672CF
0x7672C1: cmp     edi, ebx
0x7672C3: jz      short loc_7672CF
0x7672C5: mov     edx, [edi]
0x7672C7: mov     eax, [edx]
0x7672C9: push    1
0x7672CB: mov     ecx, edi
0x7672CD: call    eax
0x7672CF: mov     [esi+624h], ebx
0x7672D5: pop     edi
0x7672D6: mov     [esi+61Ch], ebx
0x7672DC: mov     [esi+620h], ebx
0x7672E2: mov     ecx, esi
0x7672E4: pop     esi
0x7672E5: pop     ebx
0x7672E6: add     esp, 14h
0x7672E9: jmp     sub_762FD0
