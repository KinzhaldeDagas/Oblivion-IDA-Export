0x4CE0A0: push    ebx
0x4CE0A1: push    esi
0x4CE0A2: push    edi
0x4CE0A3: mov     edi, [esp+0Ch+groupRecord]
0x4CE0A7: xor     bl, bl
0x4CE0A9: test    edi, edi
0x4CE0AB: mov     esi, ecx
0x4CE0AD: jz      TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE0B3: mov     eax, [edi]
0x4CE0B5: cmp     eax, ds:0B05E20h
0x4CE0BB: jnz     TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE0C1: mov     al, [esi+24h]
0x4CE0C4: xor     ecx, ecx
0x4CE0C6: and     al, 1
0x4CE0C8: jnz     short loc_4CE0CD
0x4CE0CA: mov     ecx, [esi+50h]
0x4CE0CD: mov     edx, [edi+0Ch]
0x4CE0D0: cmp     edx, 5; switch 6 cases
0x4CE0D3: ja      TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE0D9: jmp     ds:jpt_4CE0D9[edx*4]; switch jump
0x4CE0E0: mov     edx, dword ptr [esp+0Ch+matchAllLevels]; jumptable 004CE0D9 case 0
0x4CE0E4: test    dl, dl
0x4CE0E6: jz      TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE0EC: test    al, al
0x4CE0EE: jz      short loc_4CE106
0x4CE0F0: mov     ecx, dword ptr [esp+0Ch+arg2]
0x4CE0F4: push    ecx; arg2
0x4CE0F5: push    edx; matchAllLevels
0x4CE0F6: push    edi; groupRecord
0x4CE0F7: mov     ecx, esi; this
0x4CE0F9: call    TESForm_MatchGroupRecord
0x4CE0FE: pop     edi
0x4CE0FF: pop     esi
0x4CE100: mov     bl, al
0x4CE102: pop     ebx
0x4CE103: retn    0Ch
0x4CE106: mov     esi, dword ptr [esp+0Ch+arg2]
0x4CE10A: mov     eax, [ecx]
0x4CE10C: push    esi
0x4CE10D: push    edx
0x4CE10E: mov     edx, [eax+0BCh]
0x4CE114: push    edi
0x4CE115: call    edx
0x4CE117: pop     edi
0x4CE118: pop     esi
0x4CE119: mov     bl, al
0x4CE11B: pop     ebx
0x4CE11C: retn    0Ch
0x4CE11F: test    al, al; jumptable 004CE0D9 case 1
0x4CE121: jnz     short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE123: mov     eax, [edi+8]
0x4CE126: push    eax
0x4CE127: call    sub_46AF50
0x4CE12C: test    al, al
0x4CE12E: jz      short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE130: cmp     [esp+0Ch+matchAllLevels], 0
0x4CE135: jnz     short loc_4CE178
0x4CE137: test    dword ptr [esi+8], 400h
0x4CE13E: jz      short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE140: pop     edi
0x4CE141: mov     bl, 1
0x4CE143: pop     esi
0x4CE144: mov     al, bl
0x4CE146: pop     ebx
0x4CE147: retn    0Ch
0x4CE14A: test    dword ptr [esi+8], 400h; jumptable 004CE0D9 cases 2,4
0x4CE151: jnz     short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE153: cmp     [esp+0Ch+matchAllLevels], 0
0x4CE158: jz      short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE15A: mov     ecx, esi
0x4CE15C: call    sub_4CA5F0
0x4CE161: jmp     short loc_4CE173
0x4CE163: test    dword ptr [esi+8], 400h; jumptable 004CE0D9 cases 3,5
0x4CE16A: jnz     short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE16C: mov     ecx, esi
0x4CE16E: call    sub_4CA640
0x4CE173: cmp     [edi+8], eax
0x4CE176: jnz     short TESObjectCELL_MatchGroupRecord___def_4CE0D9
0x4CE178: mov     bl, 1
