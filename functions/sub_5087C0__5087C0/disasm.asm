0x5087C0: sub     esp, 0Ch
0x5087C3: mov     edx, [esp+0Ch+l]
0x5087C7: lea     eax, [esp+0Ch+var_C]
0x5087CA: push    eax
0x5087CB: mov     eax, [esp+10h+arg_10]
0x5087CF: lea     ecx, [esp+10h+var_8]
0x5087D3: push    ecx; UInt16
0x5087D4: mov     ecx, [esp+14h+arg_C]
0x5087D8: push    edx; l
0x5087D9: mov     edx, [esp+18h+a4]
0x5087DD: push    eax; a6
0x5087DE: mov     eax, [esp+1Ch+a3]
0x5087E2: push    ecx; a5
0x5087E3: mov     ecx, [esp+20h+arg_4]
0x5087E7: push    edx; a4
0x5087E8: mov     edx, [esp+24h+a1]
0x5087EC: push    eax; a3
0x5087ED: push    ecx; a2
0x5087EE: push    edx; a1
0x5087EF: mov     dword ptr [esp+30h+var_8], 0
0x5087F7: mov     [esp+30h+var_C], 0
0x5087FF: call    Script_ExtractArgs
0x508804: add     esp, 24h
0x508807: test    al, al
0x508809: jnz     short loc_50880F
0x50880B: add     esp, 0Ch
0x50880E: retn
0x50880F: mov     eax, ds:0B333A0h
0x508814: mov     ecx, [eax+5Ch]
0x508817: mov     ecx, [ecx+20h]
0x50881A: call    TESEnchantableForm_GetCastingType
0x50881F: test    eax, eax
0x508821: jz      short loc_50885A
0x508823: cmp     dword ptr [esp+0Ch+var_8], 0
0x508828: jnz     short loc_508834
0x50882A: cmp     [esp+0Ch+var_C], 0
0x50882E: jnz     short loc_508834
0x508830: mov     cl, 1
0x508832: jmp     short loc_508836
0x508834: xor     cl, cl
0x508836: mov     edx, ds:0B333A0h
0x50883C: mov     edx, [edx+5Ch]
0x50883F: mov     edx, [edx+20h]
0x508842: mov     [edx+18h], cl
0x508845: fild    [esp+0Ch+var_C]
0x508848: fstp    [esp+0Ch+var_4]
0x50884C: fild    dword ptr [esp+0Ch+var_8]
0x508850: fstp    dword ptr [eax+2Ch]
0x508853: fld     [esp+0Ch+var_4]
0x508857: fstp    dword ptr [eax+30h]
0x50885A: mov     al, 1
0x50885C: add     esp, 0Ch
0x50885F: retn
