0x624C90: push    ebx
0x624C91: push    ebp
0x624C92: push    esi
0x624C93: mov     esi, ecx
0x624C95: cmp     byte ptr [esi+59h], 0
0x624C99: push    edi
0x624C9A: jnz     short loc_624CA5
0x624C9C: call    sub_624480
0x624CA1: mov     byte ptr [esi+59h], 1
0x624CA5: mov     ecx, esi
0x624CA7: call    sub_6135F0
0x624CAC: mov     ebp, [esp+10h+arg_0]
0x624CB0: cmp     ebp, eax
0x624CB2: jz      loc_624DA5
0x624CB8: mov     edi, [esi+3Ch]
0x624CBB: cmp     ebp, edi
0x624CBD: jz      loc_624DA5
0x624CC3: push    ebp
0x624CC4: mov     ecx, esi
0x624CC6: call    sub_613670
0x624CCB: test    al, al
0x624CCD: jnz     loc_624D8E
0x624CD3: push    64h ; 'd'; responsibility
0x624CD5: push    0; a7
0x624CD7: mov     ecx, edi; this
0x624CD9: call    Actor_IsCreature
0x624CDE: mov     ecx, edi
0x624CE0: push    eax; a6
0x624CE1: push    1; a5
0x624CE3: push    0
0x624CE5: push    ebp
0x624CE6: call    TesObjectREF_GetDistance
0x624CEB: mov     eax, [edi]
0x624CED: mov     edx, [eax+284h]
0x624CF3: push    ecx
0x624CF4: fstp    [esp+24h+var_24]
0x624CF7: push    21h ; '!'
0x624CF9: mov     ecx, edi
0x624CFB: call    edx
0x624CFD: push    eax; distanceToTarget
0x624CFE: mov     eax, [edi]
0x624D00: mov     edx, [eax+224h]
0x624D06: push    64h ; 'd'; aggressionStat
0x624D08: push    ebp; friendlyFight?
0x624D09: mov     ecx, edi
0x624D0B: call    edx
0x624D0D: push    eax; disposition
0x624D0E: call    shouldActorFight
0x624D13: add     esp, 20h
0x624D16: test    eax, eax
0x624D18: jge     short loc_624D1E
0x624D1A: xor     eax, eax
0x624D1C: test    eax, eax
0x624D1E: mov     ecx, [esi+3Ch]; this
0x624D21: setnle  bl
0x624D24: call    Actor_IsCreature
0x624D29: test    al, al
0x624D2B: jz      short loc_624D5A
0x624D2D: mov     ecx, ebp; this
0x624D2F: call    Actor_IsCreature
0x624D34: test    al, al
0x624D36: jz      short loc_624D5A
0x624D38: mov     ecx, ebp; this
0x624D3A: call    TESObjectREFR_GetOwner
0x624D3F: test    eax, eax
0x624D41: jz      short loc_624DA5
0x624D43: mov     ecx, [esi+3Ch]; this
0x624D46: call    TESObjectREFR_GetOwner
0x624D4B: mov     ecx, ebp; this
0x624D4D: mov     edi, eax
0x624D4F: call    TESObjectREFR_GetOwner
0x624D54: cmp     eax, edi
0x624D56: jnz     short loc_624D5E
0x624D58: jmp     short loc_624DA5
0x624D5A: test    bl, bl
0x624D5C: jz      short loc_624DA5
0x624D5E: mov     ecx, [ebp+58h]
0x624D61: mov     edx, [esi+3Ch]
0x624D64: mov     eax, [ecx]
0x624D66: mov     eax, [eax+170h]
0x624D6C: push    edx
0x624D6D: push    ebp
0x624D6E: call    eax
0x624D70: call    Double_To_SInt32
0x624D75: fldz
0x624D77: sub     esp, 8
0x624D7A: fst     [esp+18h+var_14]; float
0x624D7E: fstp    [esp+18h+var_18]; float
0x624D81: mov     ecx, esi
0x624D83: push    0; float
0x624D85: push    eax; char
0x624D86: push    ebp; int
0x624D87: call    sub_616190
0x624D8C: jmp     short loc_624DA5
0x624D8E: push    1
0x624D90: mov     ecx, esi
0x624D92: call    sub_614290
0x624D97: test    al, al
0x624D99: setz    cl
0x624D9C: push    ecx
0x624D9D: push    ebp
0x624D9E: mov     ecx, esi
0x624DA0: call    sub_619D40
0x624DA5: mov     edi, [esp+10h+arg_4]
0x624DA9: test    edi, edi
0x624DAB: jz      short loc_624DB5
0x624DAD: push    edi
0x624DAE: mov     ecx, esi
0x624DB0: call    BaseProcess_GetCounterEffects?
0x624DB5: cmp     dword ptr [esi+88h], 0
0x624DBC: jnz     short loc_624DC5
0x624DBE: mov     ecx, esi
0x624DC0: call    sub_613880
0x624DC5: mov     ecx, [esi+6Ch]
0x624DC8: cmp     ecx, 8
0x624DCB: jnz     loc_624E69
0x624DD1: add     byte ptr [esi+4Fh], 1
0x624DD5: movsx   edx, byte ptr [esi+4Fh]
0x624DD9: cmp     edx, ds:0B36D48h
0x624DDF: jle     loc_624F85
0x624DE5: mov     eax, [esi+3Ch]
0x624DE8: mov     edi, [eax+58h]
0x624DEB: mov     byte ptr [esi+4Dh], 1
0x624DEF: mov     edx, [edi]
0x624DF1: mov     eax, [edx+174h]
0x624DF7: mov     ecx, edi
0x624DF9: call    eax
0x624DFB: test    eax, eax
0x624DFD: jz      short loc_624E1F
0x624DFF: mov     edx, [edi]
0x624E01: mov     eax, [edx+174h]
0x624E07: mov     ecx, edi
0x624E09: call    eax
0x624E0B: cmp     byte ptr [eax+20h], 0Ch
0x624E0F: jz      short loc_624E1F
0x624E11: mov     edx, [edi]
0x624E13: mov     eax, [edx+178h]
0x624E19: push    0
0x624E1B: mov     ecx, edi
0x624E1D: call    eax
0x624E1F: mov     eax, [esi+70h]
0x624E22: cmp     eax, 2
0x624E25: jz      short loc_624E2C
0x624E27: cmp     eax, 4
0x624E2A: jnz     short loc_624E46
0x624E2C: mov     ecx, esi
0x624E2E: call    sub_6135F0
0x624E33: cmp     ebp, eax
0x624E35: jnz     short loc_624E46
0x624E37: mov     ecx, esi
0x624E39: call    sub_614290
0x624E3E: test    al, al
0x624E40: jz      loc_624F85
0x624E46: push    0
0x624E48: push    0
0x624E4A: mov     ecx, esi
0x624E4C: call    sub_6239D0
0x624E51: push    eax
0x624E52: mov     ecx, esi
0x624E54: call    sub_612DE0
0x624E59: push    0
0x624E5B: mov     ecx, esi
0x624E5D: call    sub_619920
0x624E62: pop     edi
0x624E63: pop     esi
0x624E64: pop     ebp
0x624E65: pop     ebx
0x624E66: retn    8
0x624E69: mov     eax, [esi+70h]
0x624E6C: cmp     eax, 6
0x624E6F: jz      loc_624F36
0x624E75: cmp     eax, 5
0x624E78: jz      loc_624F36
0x624E7E: cmp     ecx, 0Eh
0x624E81: jz      short loc_624E88
0x624E83: cmp     ecx, 10h
0x624E86: jnz     short loc_624E1F
0x624E88: cmp     eax, 8
0x624E8B: jnz     short loc_624E1F
0x624E8D: mov     ecx, [ebp+58h]
0x624E90: test    ecx, ecx
0x624E92: mov     bl, 1
0x624E94: jz      short loc_624EAB
0x624E96: mov     edx, [ecx]
0x624E98: mov     eax, [edx+0ECh]
0x624E9E: push    1
0x624EA0: call    eax
0x624EA2: test    eax, eax
0x624EA4: jz      short loc_624EAB
0x624EA6: mov     eax, [eax+8]
0x624EA9: jmp     short loc_624EAD
0x624EAB: xor     eax, eax
0x624EAD: test    eax, eax
0x624EAF: jz      short loc_624EC1
0x624EB1: mov     al, [eax+90h]
0x624EB7: cmp     al, 4
0x624EB9: jz      short loc_624EBF
0x624EBB: cmp     al, 5
0x624EBD: jnz     short loc_624EC1
0x624EBF: xor     bl, bl
0x624EC1: test    edi, edi
0x624EC3: jz      short loc_624ED2
0x624EC5: mov     ecx, [edi+0Ch]
0x624EC8: cmp     dword ptr [ecx+10h], 1
0x624ECC: jnz     loc_624E1F
0x624ED2: test    bl, bl
0x624ED4: jz      loc_624E1F
0x624EDA: mov     ecx, [esi+3Ch]
0x624EDD: mov     edx, [ecx]
0x624EDF: mov     eax, [edx+330h]
0x624EE5: call    eax
0x624EE7: test    eax, eax
0x624EE9: jz      loc_624E1F
0x624EEF: mov     ecx, [esi+3Ch]
0x624EF2: mov     edx, [ecx]
0x624EF4: mov     eax, [edx+330h]
0x624EFA: push    9
0x624EFC: call    eax
0x624EFE: mov     ecx, eax
0x624F00: call    sub_612DA0
0x624F05: mov     ecx, [esi+3Ch]
0x624F08: mov     edx, [ecx]
0x624F0A: mov     eax, [edx+330h]
0x624F10: call    eax
0x624F12: mov     ecx, eax
0x624F14: call    sub_6160B0
0x624F19: mov     ecx, [esi+3Ch]
0x624F1C: mov     edx, [ecx]
0x624F1E: mov     eax, [edx+330h]
0x624F24: push    0
0x624F26: call    eax
0x624F28: mov     ecx, eax
0x624F2A: call    sub_619920
0x624F2F: pop     edi
0x624F30: pop     esi
0x624F31: pop     ebp
0x624F32: pop     ebx
0x624F33: retn    8
0x624F36: mov     ecx, [esi+3Ch]
0x624F39: fld     dword ptr ds:0B376C0h
0x624F3F: mov     edx, [ecx]
0x624F41: mov     eax, [edx+374h]
0x624F47: push    ecx
0x624F48: fstp    [esp+14h+var_14]
0x624F4B: push    ebp
0x624F4C: call    eax
0x624F4E: cmp     dword ptr [esi+70h], 6
0x624F52: jnz     short loc_624F85
0x624F54: movsx   ecx, byte ptr [esi+4Eh]
0x624F58: cmp     ecx, ds:0B36D78h
0x624F5E: jle     short loc_624F85
0x624F60: push    0
0x624F62: push    0
0x624F64: mov     ecx, esi
0x624F66: call    sub_6239D0
0x624F6B: cmp     eax, 5
0x624F6E: jz      short loc_624F81
0x624F70: push    eax
0x624F71: mov     ecx, esi
0x624F73: call    sub_612DE0
0x624F78: push    0
0x624F7A: mov     ecx, esi
0x624F7C: call    sub_619920
0x624F81: mov     byte ptr [esi+4Eh], 0
0x624F85: pop     edi
0x624F86: pop     esi
0x624F87: pop     ebp
0x624F88: pop     ebx
0x624F89: retn    8
