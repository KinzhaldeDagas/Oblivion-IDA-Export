0x5E9E70: cmp     byte ptr ds:0B14E98h, 0
0x5E9E77: push    ebx
0x5E9E78: push    esi
0x5E9E79: push    edi
0x5E9E7A: mov     esi, ecx
0x5E9E7C: jz      short loc_5E9EAF
0x5E9E7E: mov     eax, [esi]
0x5E9E80: mov     edx, [eax+170h]
0x5E9E86: xor     ebx, ebx
0x5E9E88: call    edx
0x5E9E8A: mov     edi, eax
0x5E9E8C: test    edi, edi
0x5E9E8E: jz      short loc_5E9EA2
0x5E9E90: mov     eax, [esi]
0x5E9E92: mov     edx, [eax+190h]
0x5E9E98: mov     ecx, esi
0x5E9E9A: call    edx
0x5E9E9C: test    al, al
0x5E9E9E: jz      short loc_5E9EA2
0x5E9EA0: mov     ebx, edi
0x5E9EA2: mov     eax, [ebx+28h]
0x5E9EA5: shr     eax, 1
0x5E9EA7: test    al, 1
0x5E9EA9: jnz     loc_5EA047
0x5E9EAF: cmp     byte ptr [esi+0FCh], 0
0x5E9EB6: jnz     loc_5EA03E
0x5E9EBC: cmp     byte ptr [esi+80h], 0
0x5E9EC3: mov     byte ptr [esi+0FCh], 1
0x5E9ECA: jz      loc_5E9F76
0x5E9ED0: mov     ecx, [esi+7Ch]; this
0x5E9ED3: test    ecx, ecx
0x5E9ED5: jz      loc_5E9F76
0x5E9EDB: call    Actor_IsNPC
0x5E9EE0: test    al, al
0x5E9EE2: jz      loc_5E9F76
0x5E9EE8: mov     ecx, esi; this
0x5E9EEA: mov     ebx, esi
0x5E9EEC: call    TESObjectREFR_GetOwner
0x5E9EF1: mov     edx, [esi]
0x5E9EF3: mov     edi, eax
0x5E9EF5: mov     eax, [edx+170h]
0x5E9EFB: mov     ecx, esi
0x5E9EFD: call    eax
0x5E9EFF: cmp     byte ptr [eax+4], 24h ; '$'
0x5E9F03: jz      short loc_5E9F1B
0x5E9F05: test    edi, edi
0x5E9F07: jnz     short loc_5E9F1F
0x5E9F09: mov     edx, [esi]
0x5E9F0B: mov     eax, [esi+7Ch]
0x5E9F0E: mov     edx, [edx+244h]
0x5E9F14: push    eax
0x5E9F15: mov     ecx, esi
0x5E9F17: call    edx
0x5E9F19: jmp     short loc_5E9F76
0x5E9F1B: test    edi, edi
0x5E9F1D: jz      short loc_5E9F44
0x5E9F1F: mov     al, [edi+4]
0x5E9F22: cmp     al, 23h ; '#'
0x5E9F24: jnz     short loc_5E9F33
0x5E9F26: push    edi
0x5E9F27: mov     ecx, offset ActorProcessManager_ptr
0x5E9F2C: call    sub_675220
0x5E9F31: jmp     short loc_5E9F42
0x5E9F33: cmp     al, 6
0x5E9F35: jnz     short loc_5E9F44
0x5E9F37: push    edi
0x5E9F38: mov     ecx, offset ActorProcessManager_ptr
0x5E9F3D: call    sub_675290
0x5E9F42: mov     ebx, eax
0x5E9F44: mov     ecx, [esi+7Ch]
0x5E9F47: push    20h ; ' '
0x5E9F49: lea     eax, [esi+44h]
0x5E9F4C: push    eax
0x5E9F4D: push    ecx
0x5E9F4E: call    Script_AddEventToExtraScript
0x5E9F53: add     esp, 0Ch
0x5E9F56: test    ebx, ebx
0x5E9F58: jz      short loc_5E9F6F
0x5E9F5A: mov     ecx, [esi+7Ch]
0x5E9F5D: test    ecx, ecx
0x5E9F5F: jz      short loc_5E9F6F
0x5E9F61: mov     edx, [ecx]
0x5E9F63: mov     eax, [edx+248h]
0x5E9F69: push    0FFFFFFFFh
0x5E9F6B: push    ebx
0x5E9F6C: push    esi
0x5E9F6D: call    eax
0x5E9F6F: mov     byte ptr [esi+80h], 0
0x5E9F76: mov     ecx, [esi+7Ch]
0x5E9F79: cmp     ecx, ds:0B333C4h
0x5E9F7F: jnz     short loc_5E9FFD
0x5E9F81: mov     edx, [esi]
0x5E9F83: mov     eax, [edx+128h]
0x5E9F89: mov     ecx, esi
0x5E9F8B: call    eax
0x5E9F8D: mov     edx, [esi]
0x5E9F8F: mov     edi, eax
0x5E9F91: mov     eax, [edx+170h]
0x5E9F97: mov     ecx, esi
0x5E9F99: call    eax
0x5E9F9B: test    edi, edi
0x5E9F9D: mov     ebx, eax
0x5E9F9F: jnz     short loc_5E9FBB
0x5E9FA1: test    ebx, ebx
0x5E9FA3: jz      short loc_5E9FB7
0x5E9FA5: mov     edx, [esi]
0x5E9FA7: mov     eax, [edx+190h]
0x5E9FAD: mov     ecx, esi
0x5E9FAF: call    eax
0x5E9FB1: test    al, al
0x5E9FB3: jz      short loc_5E9FB7
0x5E9FB5: mov     edi, ebx
0x5E9FB7: test    edi, edi
0x5E9FB9: jz      short loc_5E9FFD
0x5E9FBB: cmp     dword ptr [edi+40h], 0
0x5E9FBF: jnz     short loc_5E9FEF
0x5E9FC1: cmp     dword ptr [edi+3Ch], 0
0x5E9FC5: jnz     short loc_5E9FEF
0x5E9FC7: mov     edx, [esi]
0x5E9FC9: mov     eax, [edx+170h]
0x5E9FCF: mov     ecx, esi
0x5E9FD1: xor     ebx, ebx
0x5E9FD3: call    eax
0x5E9FD5: mov     edi, eax
0x5E9FD7: test    edi, edi
0x5E9FD9: jz      short loc_5E9FED
0x5E9FDB: mov     edx, [esi]
0x5E9FDD: mov     eax, [edx+190h]
0x5E9FE3: mov     ecx, esi
0x5E9FE5: call    eax
0x5E9FE7: test    al, al
0x5E9FE9: jz      short loc_5E9FED
0x5E9FEB: mov     ebx, edi
0x5E9FED: mov     edi, ebx
0x5E9FEF: test    edi, edi
0x5E9FF1: jz      short loc_5E9FFD
0x5E9FF3: push    0
0x5E9FF5: lea     ecx, [edi+24h]
0x5E9FF8: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x5E9FFD: mov     edx, [esi+7Ch]
0x5EA000: push    10h
0x5EA002: lea     ecx, [esi+44h]
0x5EA005: push    ecx
0x5EA006: push    edx
0x5EA007: call    Script_AddEventToExtraScript
0x5EA00C: mov     ecx, [esi+58h]
0x5EA00F: add     esp, 0Ch
0x5EA012: test    ecx, ecx
0x5EA014: jz      short loc_5EA03E
0x5EA016: mov     eax, [ecx]
0x5EA018: fld     dword ptr ds:0A32048h
0x5EA01E: mov     edx, [eax+364h]
0x5EA024: push    ecx
0x5EA025: fstp    [esp+10h+var_10]
0x5EA028: call    edx
0x5EA02A: mov     ecx, [esi+58h]
0x5EA02D: mov     eax, [ecx]
0x5EA02F: mov     edx, [eax+370h]
0x5EA035: push    7Fh
0x5EA037: push    0
0x5EA039: push    0
0x5EA03B: push    esi
0x5EA03C: call    edx
0x5EA03E: push    2; newDeadState
0x5EA040: mov     ecx, esi; this
0x5EA042: call    Actor_HandleDeathSTate????
0x5EA047: pop     edi
0x5EA048: pop     esi
0x5EA049: pop     ebx
0x5EA04A: retn
