0x5BE870: sub     esp, 0Ch
0x5BE873: push    40Ah
0x5BE878: call    Menu_GetOpenMenuTile
0x5BE87D: add     esp, 4
0x5BE880: test    eax, eax
0x5BE882: jnz     short loc_5BE88A
0x5BE884: xor     al, al
0x5BE886: add     esp, 0Ch
0x5BE889: retn
0x5BE88A: push    esi
0x5BE88B: mov     ecx, eax
0x5BE88D: call    Tile_GetParentMenu
0x5BE892: mov     esi, eax
0x5BE894: test    esi, esi
0x5BE896: jz      short loc_5BE8B4
0x5BE898: mov     ecx, [esi+0D8h]
0x5BE89E: mov     eax, [ecx]
0x5BE8A0: mov     edx, ds:0B333C4h
0x5BE8A6: mov     eax, [eax+224h]
0x5BE8AC: push    edx
0x5BE8AD: call    eax
0x5BE8AF: cmp     eax, 64h ; 'd'
0x5BE8B2: jl      short loc_5BE8BB
0x5BE8B4: xor     al, al
0x5BE8B6: pop     esi
0x5BE8B7: add     esp, 0Ch
0x5BE8BA: retn
0x5BE8BB: fld     dword ptr ds:0B38E40h
0x5BE8C1: mov     ecx, [esi+0D8h]
0x5BE8C7: mov     edx, [ecx]
0x5BE8C9: fstp    [esp+10h+var_C]
0x5BE8CD: fld     dword ptr ds:0B38E48h
0x5BE8D3: mov     eax, [edx+284h]
0x5BE8D9: fstp    [esp+10h+var_8]
0x5BE8DD: push    edi
0x5BE8DE: fld     dword ptr ds:0B38E38h
0x5BE8E4: mov     edi, ds:0B38E50h
0x5BE8EA: fstp    [esp+14h+var_4]
0x5BE8EE: push    ecx
0x5BE8EF: fld     dword ptr ds:0B38E88h
0x5BE8F5: fstp    [esp+18h+var_18]
0x5BE8F8: push    20h ; ' '
0x5BE8FA: call    eax
0x5BE8FC: mov     ecx, ds:0B333C4h
0x5BE902: mov     edx, [ecx]
0x5BE904: push    eax; float
0x5BE905: mov     eax, [edx+284h]
0x5BE90B: push    20h ; ' '; int
0x5BE90D: call    eax
0x5BE90F: fld     [esp+1Ch+var_C]
0x5BE913: push    eax; int
0x5BE914: push    ecx
0x5BE915: fstp    [esp+24h+var_24]; float
0x5BE918: push    edi; int
0x5BE919: fld     [esp+28h+var_8]
0x5BE91D: push    ecx
0x5BE91E: mov     ecx, [esi+0D8h]
0x5BE924: fstp    [esp+2Ch+var_2C]; float
0x5BE927: call    Actor_GetLevel
0x5BE92C: movzx   ecx, ax
0x5BE92F: push    ecx; int
0x5BE930: mov     ecx, ds:0B333C4h
0x5BE936: call    Actor_GetLevel
0x5BE93B: movzx   edx, ax
0x5BE93E: fld     [esp+30h+var_4]
0x5BE942: push    edx; int
0x5BE943: push    ecx
0x5BE944: fstp    [esp+38h+var_38]; float
0x5BE947: call    sub_547B00
0x5BE94C: mov     ecx, ds:0B333C4h
0x5BE952: add     esp, 24h
0x5BE955: mov     edi, eax
0x5BE957: push    20h ; ' '
0x5BE959: mov     [esp+18h+var_4], edi
0x5BE95D: call    Actor_GetSkillMasteryLevel
0x5BE962: cmp     eax, 4
0x5BE965: jnz     short loc_5BE978
0x5BE967: fild    [esp+14h+var_4]
0x5BE96B: fmul    qword ptr ds:0A2FAA0h
0x5BE971: call    Double_To_SInt32
0x5BE976: mov     edi, eax
0x5BE978: mov     ecx, ds:0B333C4h
0x5BE97E: call    sub_5E4420
0x5BE983: cmp     eax, edi
0x5BE985: jge     short loc_5BE98F
0x5BE987: pop     edi
0x5BE988: xor     al, al
0x5BE98A: pop     esi
0x5BE98B: add     esp, 0Ch
0x5BE98E: retn
0x5BE98F: mov     ecx, [esi+0D8h]
0x5BE995: fld     dword ptr ds:0B38E30h
0x5BE99B: mov     eax, [ecx]
0x5BE99D: fstp    [esp+14h+var_4]
0x5BE9A1: mov     edx, [eax+284h]
0x5BE9A7: push    20h ; ' '
0x5BE9A9: mov     edi, ecx
0x5BE9AB: mov     esi, ecx
0x5BE9AD: call    edx
0x5BE9AF: mov     ecx, ds:0B333C4h
0x5BE9B5: push    eax
0x5BE9B6: mov     eax, [ecx]
0x5BE9B8: mov     edx, [eax+284h]
0x5BE9BE: push    20h ; ' '
0x5BE9C0: call    edx
0x5BE9C2: push    eax
0x5BE9C3: mov     eax, [edi]
0x5BE9C5: mov     edx, [eax+284h]
0x5BE9CB: push    24h ; '$'; int
0x5BE9CD: mov     ecx, edi
0x5BE9CF: call    edx
0x5BE9D1: fld     dword ptr [esp+18h]
0x5BE9D5: push    eax; int
0x5BE9D6: mov     eax, [esi]
0x5BE9D8: mov     edx, [eax+224h]
0x5BE9DE: push    ecx
0x5BE9DF: mov     ecx, ds:0B333C4h
0x5BE9E5: fstp    [esp+20h+var_20]; int
0x5BE9E8: push    ecx; float
0x5BE9E9: mov     ecx, esi
0x5BE9EB: call    edx
0x5BE9ED: push    eax; int
0x5BE9EE: call    sub_547B40
0x5BE9F3: add     esp, 14h
0x5BE9F6: test    eax, eax
0x5BE9F8: pop     edi
0x5BE9F9: setnz   al
0x5BE9FC: pop     esi
0x5BE9FD: add     esp, 0Ch
0x5BEA00: retn
