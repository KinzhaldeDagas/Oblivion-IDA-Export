0x5EF9B0: push    0FFFFFFFFh
0x5EF9B2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x5EF9B7: mov     eax, large fs:0
0x5EF9BD: push    eax
0x5EF9BE: push    ecx
0x5EF9BF: push    ebx
0x5EF9C0: push    esi
0x5EF9C1: push    edi
0x5EF9C2: mov     eax, ds:0B30AACh
0x5EF9C7: xor     eax, esp
0x5EF9C9: push    eax
0x5EF9CA: lea     eax, [esp+20h+var_C]
0x5EF9CE: mov     large fs:0, eax
0x5EF9D4: mov     esi, ecx
0x5EF9D6: mov     eax, [esi+3Ch]
0x5EF9D9: xor     ebx, ebx
0x5EF9DB: cmp     eax, ebx
0x5EF9DD: jz      loc_5EFAC4
0x5EF9E3: push    offset aWeapon; "Weapon"
0x5EF9E8: push    eax; a1
0x5EF9E9: call    NiObjectNET_LookupObjectByName
0x5EF9EE: mov     edi, eax
0x5EF9F0: add     esp, 8
0x5EF9F3: cmp     edi, ebx
0x5EF9F5: jz      loc_5EFAC4
0x5EF9FB: cmp     [esp+20h+arg_0], bl
0x5EF9FF: jz      loc_5EFABC
0x5EFA05: mov     eax, [edi+0A8h]
0x5EFA0B: cmp     eax, ebx
0x5EFA0D: jnz     loc_5EFAC4
0x5EFA13: mov     ecx, [esi+58h]
0x5EFA16: mov     eax, [ecx]
0x5EFA18: mov     edx, [eax+0ECh]
0x5EFA1E: push    1
0x5EFA20: call    edx
0x5EFA22: test    eax, eax
0x5EFA24: jz      loc_5EFAC4
0x5EFA2A: mov     ecx, [esi+58h]
0x5EFA2D: mov     eax, [ecx]
0x5EFA2F: mov     edx, [eax+0ECh]
0x5EFA35: push    1
0x5EFA37: call    edx
0x5EFA39: mov     eax, [eax+8]
0x5EFA3C: fld     dword ptr [eax+98h]
0x5EFA42: push    ecx
0x5EFA43: fstp    dword ptr [esp+24h+arg_0]
0x5EFA47: fld     dword ptr [esp+24h+arg_0]
0x5EFA4B: fstp    [esp+24h+var_24]; float
0x5EFA4E: call    Calc_GetCombatDistance
0x5EFA53: fsub    qword ptr ds:0A2F920h
0x5EFA59: push    28h ; '('; Size
0x5EFA5B: fstp    dword ptr [esp+28h+arg_0]
0x5EFA5F: call    FormHeapAlloc
0x5EFA64: add     esp, 8
0x5EFA67: mov     [esp+20h+var_10], eax
0x5EFA6B: cmp     eax, ebx
0x5EFA6D: mov     [esp+20h+var_4], ebx
0x5EFA71: jz      short loc_5EFAA5
0x5EFA73: fld     dword ptr ds:0A46C30h
0x5EFA79: push    ebx
0x5EFA7A: push    edi
0x5EFA7B: sub     esp, 8
0x5EFA7E: fstp    [esp+30h+var_2C]
0x5EFA82: mov     ecx, eax; this
0x5EFA84: fld     dword ptr [esp+30h+arg_0]
0x5EFA88: fstp    [esp+30h+var_30]
0x5EFA8B: call    ??0WeaponObject@@QAE@XZ; WeaponObject::WeaponObject(void)
0x5EFA90: mov     ecx, [esp+20h+var_C]
0x5EFA94: mov     large fs:0, ecx
0x5EFA9B: pop     ecx
0x5EFA9C: pop     edi
0x5EFA9D: pop     esi
0x5EFA9E: pop     ebx
0x5EFA9F: add     esp, 10h
0x5EFAA2: retn    4
0x5EFAA5: xor     eax, eax
0x5EFAA7: mov     ecx, [esp+20h+var_C]
0x5EFAAB: mov     large fs:0, ecx
0x5EFAB2: pop     ecx
0x5EFAB3: pop     edi
0x5EFAB4: pop     esi
0x5EFAB5: pop     ebx
0x5EFAB6: add     esp, 10h
0x5EFAB9: retn    4
0x5EFABC: push    ebx
0x5EFABD: mov     ecx, edi
0x5EFABF: call    sub_435CE0
0x5EFAC4: mov     eax, ebx
0x5EFAC6: mov     ecx, [esp+20h+var_C]
0x5EFACA: mov     large fs:0, ecx
0x5EFAD1: pop     ecx
0x5EFAD2: pop     edi
0x5EFAD3: pop     esi
0x5EFAD4: pop     ebx
0x5EFAD5: add     esp, 10h
0x5EFAD8: retn    4
