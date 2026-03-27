0x5BEB70: fld     dword ptr ds:0A46B10h
0x5BEB76: sub     esp, 0Ch
0x5BEB79: push    esi
0x5BEB7A: mov     esi, ecx
0x5BEB7C: fcomp   dword ptr [esi+7Ch]
0x5BEB7F: fnstsw  ax
0x5BEB81: test    ah, 41h
0x5BEB84: jnz     short loc_5BEB93
0x5BEB86: cmp     dword ptr [esi+28h], 2
0x5BEB8A: jz      short loc_5BEB93
0x5BEB8C: xor     al, al
0x5BEB8E: pop     esi
0x5BEB8F: add     esp, 0Ch
0x5BEB92: retn
0x5BEB93: mov     ecx, [esi+0D8h]; this
0x5BEB99: push    1; a2
0x5BEB9B: call    Actor_GetActorBaseForm
0x5BEBA0: lea     ecx, [eax+24h]
0x5BEBA3: mov     eax, [ecx]
0x5BEBA5: mov     edx, [eax+10h]
0x5BEBA8: call    edx
0x5BEBAA: test    al, al
0x5BEBAC: jnz     short loc_5BEB8C
0x5BEBAE: push    40Ah
0x5BEBB3: call    InterfaceManager_MenuModeHasFocus
0x5BEBB8: add     esp, 4
0x5BEBBB: test    al, al
0x5BEBBD: jz      short loc_5BEB8C
0x5BEBBF: mov     ecx, [esi+0D8h]
0x5BEBC5: mov     eax, [ecx]
0x5BEBC7: mov     edx, ds:0B333C4h
0x5BEBCD: mov     eax, [eax+224h]
0x5BEBD3: push    edx
0x5BEBD4: call    eax
0x5BEBD6: cmp     eax, 64h ; 'd'
0x5BEBD9: jl      short loc_5BEBE1
0x5BEBDB: cmp     dword ptr [esi+28h], 2
0x5BEBDF: jnz     short loc_5BEB8C
0x5BEBE1: mov     ecx, ds:0B333C4h
0x5BEBE7: mov     edx, [ecx]
0x5BEBE9: mov     eax, [edx+284h]
0x5BEBEF: push    20h ; ' '
0x5BEBF1: call    eax
0x5BEBF3: mov     ecx, [esi+0D8h]
0x5BEBF9: mov     edx, [ecx]
0x5BEBFB: mov     [esp+10h+var_C], eax
0x5BEBFF: fild    [esp+10h+var_C]
0x5BEC03: mov     eax, [edx+284h]
0x5BEC09: push    20h ; ' '
0x5BEC0B: fstp    [esp+14h+var_8]
0x5BEC0F: call    eax
0x5BEC11: mov     ecx, [esi+0D8h]
0x5BEC17: mov     edx, [ecx]
0x5BEC19: mov     edx, [edx+224h]
0x5BEC1F: mov     [esp+10h+var_C], eax
0x5BEC23: fild    [esp+10h+var_C]
0x5BEC27: mov     eax, ds:0B333C4h
0x5BEC2C: push    eax
0x5BEC2D: fsubr   [esp+14h+var_8]
0x5BEC31: fmul    qword ptr ds:0A2FAA0h
0x5BEC37: fiadd   dword ptr ds:0B38E80h
0x5BEC3D: fstp    [esp+14h+var_8]
0x5BEC41: call    edx
0x5BEC43: mov     [esp+10h+var_C], eax
0x5BEC47: fild    [esp+10h+var_C]
0x5BEC4B: fcomp   [esp+10h+var_8]
0x5BEC4F: fnstsw  ax
0x5BEC51: test    ah, 41h
0x5BEC54: jnz     short loc_5BEC60
0x5BEC56: cmp     dword ptr [esi+28h], 2
0x5BEC5A: jnz     loc_5BEB8C
0x5BEC60: mov     al, 1
0x5BEC62: pop     esi
0x5BEC63: add     esp, 0Ch
0x5BEC66: retn
