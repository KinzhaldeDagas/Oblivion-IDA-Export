0x622D40: push    ecx
0x622D41: push    esi
0x622D42: mov     esi, ecx
0x622D44: cmp     dword ptr [esi+6Ch], 0Fh
0x622D48: jnz     loc_622E25
0x622D4E: call    sub_6135F0
0x622D53: test    eax, eax
0x622D55: jz      short loc_622D81
0x622D57: mov     ecx, esi
0x622D59: call    sub_6135F0
0x622D5E: mov     ecx, eax
0x622D60: call    Actor_IsSwimming
0x622D65: test    al, al
0x622D67: jz      short loc_622D81
0x622D69: mov     ecx, [esi+3Ch]
0x622D6C: call    Actor_IsSwimming
0x622D71: test    al, al
0x622D73: jnz     short loc_622D81
0x622D75: mov     ecx, [esi+3Ch]
0x622D78: call    Actor_CanFightInWater
0x622D7D: test    al, al
0x622D7F: jz      short loc_622D95
0x622D81: cmp     byte ptr [esi+174h], 0
0x622D88: jz      short loc_622D95
0x622D8A: mov     ecx, esi
0x622D8C: pop     esi
0x622D8D: add     esp, 4
0x622D90: jmp     sub_61D320
0x622D95: mov     ecx, esi
0x622D97: call    sub_6195B0
0x622D9C: test    al, al
0x622D9E: jnz     loc_622E25
0x622DA4: fld     dword ptr [esi+44h]
0x622DA7: fsub    dword ptr [esi+0D4h]
0x622DAD: fld     dword ptr [esi+0D8h]
0x622DB3: fcompp
0x622DB5: fnstsw  ax
0x622DB7: test    ah, 5
0x622DBA: jp      short loc_622E25
0x622DBC: mov     ecx, esi
0x622DBE: call    loc_622820
0x622DC3: test    al, al
0x622DC5: jnz     short loc_622E25
0x622DC7: mov     ecx, esi
0x622DC9: call    sub_614290
0x622DCE: test    al, al
0x622DD0: jnz     short loc_622D8A
0x622DD2: push    0
0x622DD4: mov     ecx, esi
0x622DD6: call    sub_6150E0
0x622DDB: test    al, al
0x622DDD: jnz     short loc_622D8A
0x622DDF: cmp     dword ptr [esi+80h], 0
0x622DE6: jnz     short loc_622E04
0x622DE8: movzx   eax, byte ptr [esi+17Ch]
0x622DEF: push    eax
0x622DF0: push    4
0x622DF2: lea     ecx, [esp+10h+var_4]
0x622DF6: push    ecx
0x622DF7: mov     ecx, esi
0x622DF9: call    sub_616980
0x622DFE: mov     [esi+80h], eax
0x622E04: fld     dword ptr [esi+44h]
0x622E07: fstp    dword ptr [esi+0D4h]
0x622E0D: fld     dword ptr ds:0A46C30h
0x622E13: fstp    dword ptr [esi+0D8h]
0x622E19: fld     dword ptr ds:0A30634h
0x622E1F: fstp    dword ptr [esi+0DCh]
0x622E25: pop     esi
0x622E26: pop     ecx
0x622E27: retn
