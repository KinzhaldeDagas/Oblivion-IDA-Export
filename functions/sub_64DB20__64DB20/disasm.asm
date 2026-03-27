0x64DB20: sub     esp, 14h
0x64DB23: push    ebx
0x64DB24: push    ebp
0x64DB25: push    esi
0x64DB26: mov     esi, ecx
0x64DB28: mov     eax, [esi]
0x64DB2A: mov     edx, [eax+184h]
0x64DB30: push    edi
0x64DB31: call    edx
0x64DB33: mov     edi, [esp+24h+arg_0]
0x64DB37: mov     ebx, eax
0x64DB39: test    ebx, ebx
0x64DB3B: jz      short loc_64DB77
0x64DB3D: test    byte ptr [ebx+1Eh], 1
0x64DB41: jz      short loc_64DB77
0x64DB43: mov     ecx, ds:0B333C4h
0x64DB49: push    edi
0x64DB4A: call    sub_663A60
0x64DB4F: test    al, al
0x64DB51: jnz     loc_64DF2B
0x64DB57: mov     ecx, ds:0B333C4h
0x64DB5D: call    sub_663A00
0x64DB62: cmp     eax, ds:0B36A80h
0x64DB68: jge     loc_64DF2B
0x64DB6E: push    0
0x64DB70: mov     ecx, ebx
0x64DB72: call    sub_5668E0
0x64DB77: mov     eax, [esi+2Ch]
0x64DB7A: test    eax, eax
0x64DB7C: jz      short loc_64DB88
0x64DB7E: mov     eax, [eax+8]
0x64DB81: shr     eax, 5
0x64DB84: test    al, 1
0x64DB86: jz      short loc_64DBC0
0x64DB88: mov     edx, [esi]
0x64DB8A: mov     eax, [edx+558h]
0x64DB90: push    edi
0x64DB91: mov     ecx, esi
0x64DB93: call    eax
0x64DB95: mov     ecx, [esi+2Ch]
0x64DB98: test    ecx, ecx
0x64DB9A: jz      short loc_64DBC0
0x64DB9C: mov     edx, [ecx]
0x64DB9E: mov     eax, [edx+174h]
0x64DBA4: call    eax
0x64DBA6: mov     ecx, [eax]
0x64DBA8: mov     [esi+0D4h], ecx
0x64DBAE: mov     edx, [eax+4]
0x64DBB1: mov     [esi+0D8h], edx
0x64DBB7: mov     eax, [eax+8]
0x64DBBA: mov     [esi+0DCh], eax
0x64DBC0: mov     eax, [esi+2Ch]
0x64DBC3: test    eax, eax
0x64DBC5: jnz     short loc_64DBEA
0x64DBC7: cmp     byte ptr [esp+24h+arg_4], al
0x64DBCB: jz      loc_64DF2B
0x64DBD1: mov     edx, [esi]
0x64DBD3: mov     eax, [edx+188h]
0x64DBD9: push    1
0x64DBDB: push    edi
0x64DBDC: mov     ecx, esi
0x64DBDE: call    eax
0x64DBE0: pop     edi
0x64DBE1: pop     esi
0x64DBE2: pop     ebp
0x64DBE3: pop     ebx
0x64DBE4: add     esp, 14h
0x64DBE7: retn    10h
0x64DBEA: push    0
0x64DBEC: push    eax
0x64DBED: mov     ecx, edi
0x64DBEF: call    TesObjectREF_GetDistance
0x64DBF4: fstp    [esp+24h+arg_0]
0x64DBF8: mov     ecx, edi; this
0x64DBFA: call    TESObjectREFR_GetWorldSpace
0x64DBFF: mov     ecx, [esi+2Ch]; this
0x64DC02: mov     ebp, eax
0x64DC04: call    TESObjectREFR_GetWorldSpace
0x64DC09: cmp     ebp, eax
0x64DC0B: jz      short loc_64DC25
0x64DC0D: mov     ecx, [esi+34h]
0x64DC10: test    ecx, ecx
0x64DC12: jz      short loc_64DC25
0x64DC14: call    sub_68A160
0x64DC19: push    eax
0x64DC1A: mov     ecx, edi
0x64DC1C: call    sub_4D7E30
0x64DC21: fstp    [esp+24h+arg_0]
0x64DC25: push    2
0x64DC27: push    edi
0x64DC28: mov     ecx, ebx
0x64DC2A: call    sub_5677B0
0x64DC2F: fstp    [esp+24h+var_14]
0x64DC33: mov     eax, [esi+2Ch]
0x64DC36: xor     ebp, ebp
0x64DC38: cmp     eax, ebp
0x64DC3A: mov     [esp+24h+var_4], eax
0x64DC3E: jz      loc_64DE57
0x64DC44: cmp     byte ptr [ebx+20h], 1
0x64DC48: jnz     short loc_64DC76
0x64DC4A: mov     ecx, [ebx+24h]
0x64DC4D: cmp     ecx, ebp
0x64DC4F: jz      short loc_64DC76
0x64DC51: call    sub_569740
0x64DC56: cmp     eax, 2
0x64DC59: jge     short loc_64DC76
0x64DC5B: fld     dword ptr ds:0A30634h
0x64DC61: push    ecx
0x64DC62: fstp    [esp+28h+var_2C+4]; float
0x64DC65: push    ebp; char
0x64DC66: push    edi; int
0x64DC67: mov     ecx, ebx
0x64DC69: call    sub_566DC0
0x64DC6E: test    al, al
0x64DC70: jnz     loc_64DE57
0x64DC76: mov     ecx, [esi+2Ch]
0x64DC79: mov     edx, [ecx]
0x64DC7B: mov     eax, [edx+174h]
0x64DC81: call    eax
0x64DC83: fld     dword ptr [esi+0D4h]
0x64DC89: fsub    dword ptr [eax]
0x64DC8B: fstp    [esp+24h+var_10]
0x64DC8F: fld     dword ptr [esi+0D8h]
0x64DC95: fsub    dword ptr [eax+4]
0x64DC98: fstp    [esp+24h+var_C]
0x64DC9C: fld     dword ptr [esi+0DCh]
0x64DCA2: fsub    dword ptr [eax+8]
0x64DCA5: fstp    [esp+24h+var_8]
0x64DCA9: fld     [esp+24h+var_C]
0x64DCAD: fld     [esp+24h+var_10]
0x64DCB1: fld     [esp+24h+var_8]
0x64DCB5: fld     st(1)
0x64DCB7: fmulp   st(2), st
0x64DCB9: fld     st(2)
0x64DCBB: fmulp   st(3), st
0x64DCBD: fxch    st(1)
0x64DCBF: faddp   st(2), st
0x64DCC1: fmul    st, st
0x64DCC3: faddp   st(1), st
0x64DCC5: fstp    [esp+24h+arg_4]
0x64DCC9: fld     [esp+24h+arg_4]
0x64DCCD: call    __CIsqrt
0x64DCD2: fstp    [esp+24h+arg_4]
0x64DCD6: fld     [esp+24h+arg_4]
0x64DCDA: fld     dword ptr ds:0B36A88h
0x64DCE0: fcompp
0x64DCE2: fnstsw  ax
0x64DCE4: test    ah, 5
0x64DCE7: jnp     short loc_64DD0B
0x64DCE9: fld     [esp+24h+arg_0]
0x64DCED: fld     [esp+24h+var_14]
0x64DCF1: fcompp
0x64DCF3: fnstsw  ax
0x64DCF5: test    ah, 5
0x64DCF8: jp      loc_64DD86
0x64DCFE: cmp     byte ptr [esi+0D0h], 0
0x64DD05: jz      loc_64DD93
0x64DD0B: mov     ecx, [esi]
0x64DD0D: mov     [esp+24h+arg_4], ecx
0x64DD11: mov     ecx, [esi+2Ch]
0x64DD14: mov     edx, [ecx]
0x64DD16: mov     eax, [edx+174h]
0x64DD1C: call    eax
0x64DD1E: mov     ecx, [esi+2Ch]; this
0x64DD21: mov     ebp, eax
0x64DD23: call    TESObjectREFR_GetWorldSpace
0x64DD28: mov     ecx, [esi+2Ch]; this
0x64DD2B: push    eax
0x64DD2C: call    TESObjectREFR_GetParentCell
0x64DD31: mov     ecx, [ebp+0]
0x64DD34: mov     edx, [ebp+4]
0x64DD37: push    eax
0x64DD38: sub     esp, 0Ch
0x64DD3B: mov     eax, esp
0x64DD3D: mov     [eax], ecx
0x64DD3F: mov     ecx, [ebp+8]
0x64DD42: mov     [eax+4], edx
0x64DD45: mov     edx, [esp+38h+arg_4]
0x64DD49: mov     [eax+8], ecx
0x64DD4C: mov     eax, [edx+3DCh]
0x64DD52: push    edi
0x64DD53: mov     ecx, esi
0x64DD55: call    eax
0x64DD57: test    al, al
0x64DD59: jz      loc_64DF2B
0x64DD5F: mov     ecx, [esi+2Ch]
0x64DD62: mov     edx, [ecx]
0x64DD64: mov     eax, [edx+174h]
0x64DD6A: call    eax
0x64DD6C: mov     ecx, [eax]
0x64DD6E: mov     [esi+0D4h], ecx
0x64DD74: mov     edx, [eax+4]
0x64DD77: mov     [esi+0D8h], edx
0x64DD7D: mov     eax, [eax+8]
0x64DD80: mov     [esi+0DCh], eax
0x64DD86: cmp     byte ptr [esi+0D0h], 0
0x64DD8D: jnz     loc_64DED3
0x64DD93: push    3Ah ; ':'; a1
0x64DD95: call    TESForm_LookupByFormID
0x64DD9A: add     esp, 4
0x64DD9D: mov     ecx, offset TimeGlobals
0x64DDA2: mov     ebp, eax
0x64DDA4: call    TimeGlobals_GetGameHour
0x64DDA9: fstp    [esp+24h+arg_4]
0x64DDAD: fld     [esp+24h+arg_4]
0x64DDB1: mov     ecx, edi; this
0x64DDB3: fstp    qword ptr [esp+24h+var_10]
0x64DDB7: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64DDBC: fcomp   qword ptr [esp+24h+var_10]
0x64DDC0: fnstsw  ax
0x64DDC2: test    ah, 41h
0x64DDC5: jnz     short loc_64DDD5
0x64DDC7: fld     [esp+24h+arg_4]
0x64DDCB: fadd    qword ptr ds:0A2F920h
0x64DDD1: fstp    [esp+24h+arg_4]
0x64DDD5: fld     [esp+24h+arg_4]
0x64DDD9: mov     ecx, edi; this
0x64DDDB: fstp    qword ptr [esp+24h+var_10]
0x64DDDF: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64DDE4: fsubr   qword ptr [esp+24h+var_10]
0x64DDE8: mov     eax, [esi]
0x64DDEA: push    1
0x64DDEC: push    edi
0x64DDED: fstp    [esp+2Ch+arg_0]
0x64DDF1: mov     ecx, ebx
0x64DDF3: fld     dword ptr [ebp+24h]
0x64DDF6: mov     ebp, [esi+2Ch]
0x64DDF9: fstp    [esp+2Ch+arg_4]
0x64DDFD: mov     [esp+2Ch+var_10], eax
0x64DE01: call    sub_5677B0
0x64DE06: sub     esp, 8
0x64DE09: fstp    [esp+2Ch+var_2C+4]
0x64DE0D: mov     ecx, [esi+2Ch]; this
0x64DE10: fld     [esp+2Ch+arg_4]
0x64DE14: fdivr   qword ptr ds:0A2F938h
0x64DE1A: fmul    [esp+2Ch+arg_0]
0x64DE1E: fstp    [esp+2Ch+arg_4]
0x64DE22: fld     [esp+2Ch+arg_4]
0x64DE26: fstp    [esp+2Ch+var_2C]
0x64DE29: call    TESObjectREFR_GetWorldSpace
0x64DE2E: mov     ecx, [esi+2Ch]; this
0x64DE31: push    eax
0x64DE32: call    TESObjectREFR_GetParentCell
0x64DE37: mov     edx, [ebp+0]
0x64DE3A: push    eax
0x64DE3B: mov     eax, [edx+174h]
0x64DE41: mov     ecx, ebp
0x64DE43: call    eax
0x64DE45: push    eax
0x64DE46: mov     eax, [esp+28h]
0x64DE4A: mov     edx, [eax+418h]
0x64DE50: push    edi
0x64DE51: mov     ecx, esi
0x64DE53: call    edx
0x64DE55: jmp     short loc_64DED3
0x64DE57: cmp     byte ptr [esp+24h+arg_4], 0
0x64DE5C: jz      short loc_64DED3
0x64DE5E: mov     eax, [esi]
0x64DE60: mov     edx, [eax+188h]
0x64DE66: push    1
0x64DE68: push    edi
0x64DE69: mov     ecx, esi
0x64DE6B: call    edx
0x64DE6D: mov     ecx, ebx
0x64DE6F: call    sub_5660A0
0x64DE74: test    al, al
0x64DE76: jz      short loc_64DEBD
0x64DE78: cmp     [esi+0C0h], ebp
0x64DE7E: jz      short loc_64DE88
0x64DE80: mov     [esi+0C0h], ebp
0x64DE86: jmp     short loc_64DE8B
0x64DE88: mov     [esi+8], ebp
0x64DE8B: cmp     ebx, ebp
0x64DE8D: jz      short loc_64DE9A
0x64DE8F: mov     eax, [ebx]
0x64DE91: mov     edx, [eax+10h]
0x64DE94: push    1
0x64DE96: mov     ecx, ebx
0x64DE98: call    edx
0x64DE9A: mov     eax, [edi]
0x64DE9C: mov     edx, [eax+44h]
0x64DE9F: push    30000h
0x64DEA4: mov     ecx, edi
0x64DEA6: call    edx
0x64DEA8: mov     eax, [esi]
0x64DEAA: mov     edx, [eax+18h]
0x64DEAD: push    ebp
0x64DEAE: push    edi
0x64DEAF: mov     ecx, esi
0x64DEB1: call    edx
0x64DEB3: pop     edi
0x64DEB4: pop     esi
0x64DEB5: pop     ebp
0x64DEB6: pop     ebx
0x64DEB7: add     esp, 14h
0x64DEBA: retn    10h
0x64DEBD: cmp     byte ptr [esi+0D0h], 0
0x64DEC4: jnz     short loc_64DED3
0x64DEC6: mov     eax, [esi]
0x64DEC8: mov     edx, [eax+194h]
0x64DECE: push    edi
0x64DECF: mov     ecx, esi
0x64DED1: call    edx
0x64DED3: mov     eax, [esp+24h+var_4]
0x64DED7: push    0
0x64DED9: push    eax
0x64DEDA: mov     ecx, edi
0x64DEDC: call    TesObjectREF_GetDistance
0x64DEE1: fld     [esp+24h+var_14]
0x64DEE5: fcompp
0x64DEE7: fnstsw  ax
0x64DEE9: test    ah, 41h
0x64DEEC: jnz     short loc_64DF2B
0x64DEEE: cmp     byte ptr [esi+0D0h], 0
0x64DEF5: jnz     short loc_64DF2B
0x64DEF7: mov     edx, [edi]
0x64DEF9: mov     eax, [edx+334h]
0x64DEFF: push    1
0x64DF01: mov     ecx, edi
0x64DF03: call    eax
0x64DF05: test    al, al
0x64DF07: jz      short loc_64DF24
0x64DF09: mov     edx, [edi]
0x64DF0B: mov     eax, [edx+330h]
0x64DF11: mov     ecx, edi
0x64DF13: call    eax
0x64DF15: test    eax, eax
0x64DF17: jz      short loc_64DF24
0x64DF19: mov     ecx, eax
0x64DF1B: call    sub_6163A0
0x64DF20: test    al, al
0x64DF22: jnz     short loc_64DF2B
0x64DF24: mov     ecx, edi
0x64DF26: call    sub_5E02B0
0x64DF2B: pop     edi
0x64DF2C: pop     esi
0x64DF2D: pop     ebp
0x64DF2E: pop     ebx
0x64DF2F: add     esp, 14h
0x64DF32: retn    10h
