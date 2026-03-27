0x5E70F0: sub     esp, 0Ch
0x5E70F3: push    esi
0x5E70F4: mov     esi, ecx
0x5E70F6: mov     eax, [esi]
0x5E70F8: mov     edx, [eax+198h]
0x5E70FE: push    0
0x5E7100: call    edx
0x5E7102: test    al, al
0x5E7104: jnz     loc_5E721F
0x5E710A: mov     eax, [esi]
0x5E710C: mov     edx, [eax+19Ch]
0x5E7112: mov     ecx, esi
0x5E7114: call    edx
0x5E7116: test    al, al
0x5E7118: jnz     loc_5E721F
0x5E711E: cmp     dword ptr [esi+0B0h], 4
0x5E7125: jz      loc_5E721F
0x5E712B: mov     ecx, [esi+58h]
0x5E712E: test    ecx, ecx
0x5E7130: jz      loc_5E721F
0x5E7136: mov     eax, [ecx]
0x5E7138: mov     edx, [eax+8]
0x5E713B: call    edx
0x5E713D: test    eax, eax
0x5E713F: jnz     loc_5E721F
0x5E7145: fld     dword ptr [esi+0BCh]
0x5E714B: push    edi
0x5E714C: mov     edi, [esi+58h]
0x5E714F: fld     dword ptr [edi+240h]
0x5E7155: fcompp
0x5E7157: fnstsw  ax
0x5E7159: test    ah, 41h
0x5E715C: jnz     short loc_5E7191
0x5E715E: fld     dword ptr [edi+240h]
0x5E7164: mov     ecx, offset fPainDelay
0x5E7169: fstp    dword ptr [esp+14h+var_C]
0x5E716D: fld     dword ptr [esi+0BCh]
0x5E7173: fstp    [esp+14h+var_C+4]
0x5E7177: call    GameSetting_GetSafeFloatPointer
0x5E717C: fld     dword ptr [esp+14h+var_C]
0x5E7180: fsub    dword ptr [eax]
0x5E7182: fcomp   [esp+14h+var_C+4]
0x5E7186: fnstsw  ax
0x5E7188: test    ah, 5
0x5E718B: jnp     loc_5E721E
0x5E7191: mov     ecx, offset fPainDelay
0x5E7196: call    GameSetting_GetSafeFloatPointer
0x5E719B: fld     dword ptr [eax]
0x5E719D: fadd    dword ptr [esi+0BCh]
0x5E71A3: fstp    dword ptr [edi+240h]
0x5E71A9: mov     ecx, ds:0B333C4h
0x5E71AF: cmp     esi, ecx
0x5E71B1: jnz     short loc_5E71F1
0x5E71B3: cmp     [esp+14h+arg_4], 0
0x5E71B8: jz      short loc_5E71D2
0x5E71BA: fld     dword ptr ds:0A35AA4h
0x5E71C0: push    ecx
0x5E71C1: fstp    [esp+18h+var_18]; float
0x5E71C4: call    sub_7EB080
0x5E71C9: mov     ecx, ds:0B333C4h
0x5E71CF: add     esp, 4
0x5E71D2: cmp     byte ptr [esp+14h+arg_0], 0
0x5E71D7: jz      short loc_5E721E
0x5E71D9: mov     eax, [ecx]
0x5E71DB: mov     edx, [eax+308h]
0x5E71E1: push    0
0x5E71E3: push    1
0x5E71E5: push    0
0x5E71E7: call    edx
0x5E71E9: pop     edi
0x5E71EA: pop     esi
0x5E71EB: add     esp, 0Ch
0x5E71EE: retn    8
0x5E71F1: cmp     byte ptr [esp+14h+arg_0], 0
0x5E71F6: jz      short loc_5E721E
0x5E71F8: mov     eax, [edi]
0x5E71FA: mov     edx, [eax+33Ch]
0x5E7200: push    0
0x5E7202: mov     ecx, edi
0x5E7204: call    edx
0x5E7206: push    0
0x5E7208: push    1
0x5E720A: push    0
0x5E720C: mov     [esp+20h+arg_0], eax
0x5E7210: lea     eax, [esp+20h+arg_0]
0x5E7214: push    esi
0x5E7215: push    eax
0x5E7216: call    sub_616530
0x5E721B: add     esp, 14h
0x5E721E: pop     edi
0x5E721F: pop     esi
0x5E7220: add     esp, 0Ch
0x5E7223: retn    8
