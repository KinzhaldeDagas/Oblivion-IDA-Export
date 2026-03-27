0x61DB00: push    ebx
0x61DB01: push    ebp
0x61DB02: push    esi
0x61DB03: push    edi
0x61DB04: mov     edi, [esp+10h+arg_0]
0x61DB08: xor     bl, bl
0x61DB0A: test    edi, edi
0x61DB0C: mov     esi, ecx
0x61DB0E: jz      short loc_61DB35
0x61DB10: mov     ecx, [esi+3Ch]; int
0x61DB13: push    edi; int
0x61DB14: call    sub_5EFF30
0x61DB19: push    edi
0x61DB1A: mov     ecx, esi
0x61DB1C: call    sub_6162D0
0x61DB21: mov     eax, [esi+40h]
0x61DB24: test    eax, eax
0x61DB26: jz      short loc_61DB52
0x61DB28: cmp     dword ptr [eax+4], 0
0x61DB2C: jnz     short loc_61DB54
0x61DB2E: cmp     dword ptr [eax], 0
0x61DB31: jnz     short loc_61DB54
0x61DB33: jmp     short loc_61DB52
0x61DB35: mov     edi, [esi+40h]
0x61DB38: test    edi, edi
0x61DB3A: jz      short loc_61DB52
0x61DB3C: mov     eax, [edi]
0x61DB3E: test    eax, eax
0x61DB40: jz      short loc_61DB52
0x61DB42: mov     eax, [eax]
0x61DB44: push    eax
0x61DB45: mov     ecx, esi
0x61DB47: call    sub_6162D0
0x61DB4C: mov     eax, [edi]
0x61DB4E: test    eax, eax
0x61DB50: jnz     short loc_61DB42
0x61DB52: mov     bl, 1
0x61DB54: mov     eax, [esi+6Ch]
0x61DB57: cmp     eax, 2
0x61DB5A: mov     ebp, 0Dh
0x61DB5F: jz      short loc_61DBBC
0x61DB61: cmp     eax, 3
0x61DB64: jz      short loc_61DBBC
0x61DB66: cmp     eax, 7
0x61DB69: jnz     short loc_61DBA3
0x61DB6B: mov     ecx, [esi+3Ch]
0x61DB6E: mov     edi, [ecx+58h]
0x61DB71: mov     edx, [edi]
0x61DB73: mov     eax, [edx+174h]
0x61DB79: mov     ecx, edi
0x61DB7B: call    eax
0x61DB7D: test    eax, eax
0x61DB7F: jz      short loc_61DBC3
0x61DB81: mov     edx, [edi]
0x61DB83: mov     eax, [edx+174h]
0x61DB89: mov     ecx, edi
0x61DB8B: call    eax
0x61DB8D: cmp     byte ptr [eax+20h], 0Ch
0x61DB91: jz      short loc_61DBC3
0x61DB93: mov     edx, [edi]
0x61DB95: mov     eax, [edx+178h]
0x61DB9B: push    0
0x61DB9D: mov     ecx, edi
0x61DB9F: call    eax
0x61DBA1: jmp     short loc_61DBC3
0x61DBA3: cmp     eax, 4
0x61DBA6: jnz     short loc_61DBD7
0x61DBA8: push    0
0x61DBAA: mov     ecx, esi
0x61DBAC: call    sub_619920
0x61DBB1: push    9
0x61DBB3: mov     ecx, esi
0x61DBB5: call    sub_612DA0
0x61DBBA: jmp     short loc_61DBD7
0x61DBBC: mov     ecx, esi
0x61DBBE: call    sub_6160B0
0x61DBC3: cmp     [esi+70h], ebp
0x61DBC6: jz      short loc_61DBD4
0x61DBC8: fld     dword ptr ds:0A30634h
0x61DBCE: fstp    dword ptr [esi+188h]
0x61DBD4: mov     [esi+70h], ebp
0x61DBD7: mov     ecx, [esi+3Ch]
0x61DBDA: call    Actor_IsBlocking
0x61DBDF: test    al, al
0x61DBE1: jz      short loc_61DBED
0x61DBE3: mov     ecx, [esi+3Ch]
0x61DBE6: push    0; float
0x61DBE8: call    sub_5F4AE0
0x61DBED: test    bl, bl
0x61DBEF: jz      loc_61DC76
0x61DBF5: xor     eax, eax
0x61DBF7: mov     ecx, 2Ch ; ','
0x61DBFC: lea     esp, [esp+0]
0x61DC00: cmp     ds:0B15198h[eax*4], ecx
0x61DC07: jz      short loc_61DC11
0x61DC09: add     eax, 1
0x61DC0C: cmp     eax, 2
0x61DC0F: jl      short loc_61DC00
0x61DC11: cmp     eax, 2
0x61DC14: mov     ecx, [esi+3Ch]
0x61DC17: mov     ecx, [ecx+58h]
0x61DC1A: jge     short loc_61DC27
0x61DC1C: mov     edx, [ecx]
0x61DC1E: push    eax
0x61DC1F: mov     eax, [edx+17Ch]
0x61DC25: call    eax
0x61DC27: mov     eax, [esi+9Ch]
0x61DC2D: test    eax, eax
0x61DC2F: jz      loc_61DCF8
0x61DC35: cmp     dword ptr [eax], 0
0x61DC38: jz      loc_61DCF8
0x61DC3E: mov     ecx, [esi+3Ch]
0x61DC41: mov     edx, [ecx]
0x61DC43: mov     eax, [edx+198h]
0x61DC49: push    0
0x61DC4B: call    eax
0x61DC4D: test    al, al
0x61DC4F: jnz     loc_61DCF8
0x61DC55: mov     ecx, [esi+9Ch]
0x61DC5B: mov     edx, [ecx]
0x61DC5D: mov     ecx, [esi+3Ch]
0x61DC60: push    0
0x61DC62: push    0
0x61DC64: push    edx
0x61DC65: add     ecx, 68h ; 'h'
0x61DC68: call    MagicTarget_RemoveEffects
0x61DC6D: pop     edi
0x61DC6E: pop     esi
0x61DC6F: pop     ebp
0x61DC70: mov     al, bl
0x61DC72: pop     ebx
0x61DC73: retn    4
0x61DC76: mov     ecx, esi
0x61DC78: call    sub_6135F0
0x61DC7D: test    eax, eax
0x61DC7F: jz      short loc_61DCF8
0x61DC81: cmp     byte ptr [esi+114h], 0
0x61DC88: jz      short loc_61DCA2
0x61DC8A: mov     eax, [esi+70h]
0x61DC8D: test    eax, eax
0x61DC8F: jz      short loc_61DC9B
0x61DC91: cmp     eax, 1
0x61DC94: jz      short loc_61DC9B
0x61DC96: cmp     eax, 3
0x61DC99: jnz     short loc_61DCA2
0x61DC9B: mov     byte ptr [esi+114h], 0
0x61DCA2: mov     edi, [esi+28h]
0x61DCA5: mov     ecx, esi
0x61DCA7: call    sub_6135F0
0x61DCAC: push    eax
0x61DCAD: mov     ecx, edi
0x61DCAF: call    TeSPackage_TargetData_SetTargetREFR
0x61DCB4: cmp     [esi+70h], ebp
0x61DCB7: jz      short loc_61DCC5
0x61DCB9: fld     dword ptr ds:0A30634h
0x61DCBF: fstp    dword ptr [esi+188h]
0x61DCC5: mov     [esi+70h], ebp
0x61DCC8: cmp     byte ptr ds:0B3B908h, 0
0x61DCCF: jz      short loc_61DCF8
0x61DCD1: mov     edi, [esi+3Ch]
0x61DCD4: mov     ecx, esi
0x61DCD6: call    sub_6135F0
0x61DCDB: mov     ecx, eax; this
0x61DCDD: call    TESObjectREFR_GetName
0x61DCE2: push    eax
0x61DCE3: mov     ecx, edi; this
0x61DCE5: call    TESObjectREFR_GetName
0x61DCEA: push    eax
0x61DCEB: push    offset a_20sIsNowFight; "%.20s is now fighting %s!"
0x61DCF0: call    Interface_ConsolePrint
0x61DCF5: add     esp, 0Ch
0x61DCF8: pop     edi
0x61DCF9: pop     esi
0x61DCFA: pop     ebp
0x61DCFB: mov     al, bl
0x61DCFD: pop     ebx
0x61DCFE: retn    4
