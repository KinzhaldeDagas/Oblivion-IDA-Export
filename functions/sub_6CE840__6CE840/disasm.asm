0x6CE840: sub     esp, 0A4h
0x6CE846: fld1
0x6CE848: mov     eax, ds:0B3F9A8h
0x6CE84D: mov     edx, ds:0B3F9B0h
0x6CE853: fst     [esp+0A4h+var_94]
0x6CE857: push    ebx
0x6CE858: fstp    [esp+0A8h+var_90]
0x6CE85C: fldz
0x6CE85E: push    esi
0x6CE85F: push    edi
0x6CE860: sub     esp, 10h
0x6CE863: fst     dword ptr [esp+0C0h+X+4]; float
0x6CE867: mov     ebx, ecx
0x6CE869: fst     dword ptr [esp+0C0h+X]; float
0x6CE86D: mov     ecx, ds:0B3F9ACh
0x6CE873: fst     [esp+0C0h+var_BC]; float
0x6CE877: mov     dword ptr [esp+0C0h+var_8C+4], ecx
0x6CE87B: fstp    [esp+0C0h+var_C0]; float
0x6CE87E: lea     ecx, [esp+0C0h+var_6C]
0x6CE882: mov     dword ptr [esp+0C0h+var_8C], eax
0x6CE886: mov     [esp+0C0h+var_84], edx
0x6CE88A: call    sub_714C40
0x6CE88F: fldz
0x6CE891: fstp    [esp+0B0h+var_98]
0x6CE895: lea     edi, [ebx+30h]
0x6CE898: fld     dword ptr ds:0A7DEB4h
0x6CE89E: mov     [esp+0B0h+var_9F], 0
0x6CE8A3: fchs
0x6CE8A5: mov     [esp+0B0h+var_A2], 0
0x6CE8AA: fstp    [esp+0B0h+var_9C]
0x6CE8AE: mov     [esp+0B0h+var_A1], 0
0x6CE8B3: fld     dword ptr [edi+1Ch]
0x6CE8B6: mov     [esp+0B0h+var_70], edi
0x6CE8BA: fld     [esp+0B0h+var_9C]
0x6CE8BE: fld     st
0x6CE8C0: fucomp  st(2)
0x6CE8C2: fnstsw  ax
0x6CE8C4: fstp    st(1)
0x6CE8C6: test    ah, 44h
0x6CE8C9: jp      loc_6CEA16
0x6CE8CF: fld     dword ptr [edi+10h]
0x6CE8D2: fld     st(1)
0x6CE8D4: fucompp
0x6CE8D6: fnstsw  ax
0x6CE8D8: test    ah, 44h
0x6CE8DB: jp      loc_6CEA16
0x6CE8E1: fld     dword ptr [edi]
0x6CE8E3: fucompp
0x6CE8E5: fnstsw  ax
0x6CE8E7: test    ah, 44h
0x6CE8EA: jp      loc_6CEA18
0x6CE8F0: push    offset Vector3_InitValue?
0x6CE8F5: mov     ecx, edi
0x6CE8F7: mov     [esp+0B4h+var_9E], 1
0x6CE8FC: call    sub_471390
0x6CE901: push    offset dword_B27110
0x6CE906: mov     ecx, edi
0x6CE908: call    sub_471430
0x6CE90D: fld1
0x6CE90F: sub     esp, 8
0x6CE912: fstp    [esp+0B8h+X]; X
0x6CE915: call    __isnan
0x6CE91A: add     esp, 8
0x6CE91D: test    eax, eax
0x6CE91F: jnz     short loc_6CE93A
0x6CE921: fld1
0x6CE923: sub     esp, 8
0x6CE926: fstp    [esp+0B8h+X]; X
0x6CE929: call    __finite
0x6CE92E: add     esp, 8
0x6CE931: test    eax, eax
0x6CE933: jz      short loc_6CE93A
0x6CE935: fld1
0x6CE937: fstp    dword ptr [ebx+4Ch]
0x6CE93A: xor     dl, dl
0x6CE93C: cmp     [ebx+0Dh], dl
0x6CE93F: mov     [esp+0B0h+var_A0], 1
0x6CE944: mov     [esp+0B0h+var_9D], dl
0x6CE948: jbe     loc_6CED15
0x6CE94E: fld     dword ptr ds:0A7DEB4h
0x6CE954: push    ebp
0x6CE955: mov     esi, [ebx+14h]
0x6CE958: movzx   eax, dl
0x6CE95B: lea     ecx, [eax+eax*2]
0x6CE95E: imul    eax, 68h ; 'h'
0x6CE961: add     eax, [ebx+50h]
0x6CE964: cmp     dword ptr [esi+ecx*8], 0
0x6CE968: lea     ebp, [esi+ecx*8]
0x6CE96B: mov     ecx, eax
0x6CE96D: jz      loc_6CEB8D
0x6CE973: fldz
0x6CE975: fcom    dword ptr [ebp+8]
0x6CE978: fnstsw  ax
0x6CE97A: test    ah, 5
0x6CE97D: jp      loc_6CEB8B
0x6CE983: cmp     [esp+0B4h+var_9E], 0
0x6CE988: lea     edi, [esp+0B4h+var_5C]
0x6CE98C: lea     esi, [ecx+4]
0x6CE98F: jnz     short loc_6CE994
0x6CE991: lea     esi, [ecx+24h]
0x6CE994: fxch    st(1)
0x6CE996: mov     ecx, 8
0x6CE99B: fchs
0x6CE99D: rep movsd
0x6CE99F: fstp    [esp+0B4h+var_9C]
0x6CE9A3: fld     [esp+0B4h+var_5C]
0x6CE9A7: fld     st
0x6CE9A9: fld     [esp+0B4h+var_9C]
0x6CE9AD: fld     st
0x6CE9AF: fucomp  st(2)
0x6CE9B1: fnstsw  ax
0x6CE9B3: test    ah, 44h
0x6CE9B6: fstp    st(1)
0x6CE9B8: jnp     short loc_6CEA22
0x6CE9BA: fld     dword ptr [ebp+8]
0x6CE9BD: mov     [esp+0B4h+var_9F], 1
0x6CE9C2: fstp    [esp+0B4h+var_9C]
0x6CE9C6: fld     [esp+0B4h+var_9C]
0x6CE9CA: fld     st
0x6CE9CC: fmulp   st(3), st
0x6CE9CE: fxch    st(2)
0x6CE9D0: fstp    [esp+0B4h+var_3C]
0x6CE9D4: fld     [esp+0B4h+var_58]
0x6CE9D8: fmul    st, st(2)
0x6CE9DA: fstp    [esp+0B4h+var_38]
0x6CE9DE: fld     [esp+0B4h+var_54]
0x6CE9E2: fmulp   st(2), st
0x6CE9E4: fxch    st(1)
0x6CE9E6: fstp    [esp+0B4h+var_34]
0x6CE9ED: fld     [esp+0B4h+var_3C]
0x6CE9F1: fadd    dword ptr [esp+0B4h+var_8C]
0x6CE9F5: fstp    dword ptr [esp+0B4h+var_8C]
0x6CE9F9: fld     dword ptr [esp+0B4h+var_8C+4]
0x6CE9FD: fadd    [esp+0B4h+var_38]
0x6CEA01: fstp    dword ptr [esp+0B4h+var_8C+4]
0x6CEA05: fld     [esp+0B4h+var_84]
0x6CEA09: fadd    [esp+0B4h+var_34]
0x6CEA10: fstp    [esp+0B4h+var_84]
0x6CEA14: jmp     short loc_6CEA2F
0x6CEA16: fstp    st
0x6CEA18: mov     [esp+0B0h+var_9E], 0
0x6CEA1D: jmp     loc_6CE93A
0x6CEA22: fstp    st(1)
0x6CEA24: fld     [esp+0B4h+var_94]
0x6CEA28: fsub    dword ptr [ebp+8]
0x6CEA2B: fstp    [esp+0B4h+var_94]
0x6CEA2F: fld     [esp+0B4h+var_4C]
0x6CEA33: fld     st
0x6CEA35: fucomp  st(2)
0x6CEA37: fnstsw  ax
0x6CEA39: fstp    st(1)
0x6CEA3B: test    ah, 44h
0x6CEA3E: jnp     loc_6CEB41
0x6CEA44: cmp     [esp+0B4h+var_A0], 0
0x6CEA49: mov     edx, [esp+0B4h+var_50]
0x6CEA4D: mov     eax, [esp+0B4h+var_4C]
0x6CEA51: mov     ecx, [esp+0B4h+var_48]
0x6CEA55: mov     [esp+0B4h+var_80], edx
0x6CEA59: mov     edx, [esp+0B4h+var_44]
0x6CEA5D: mov     [esp+0B4h+var_7C], eax
0x6CEA61: mov     [esp+0B4h+var_78], ecx
0x6CEA65: mov     [esp+0B4h+var_74], edx
0x6CEA69: jnz     short loc_6CEACA
0x6CEA6B: fmul    [esp+0B4h+var_68]
0x6CEA6F: fld     [esp+0B4h+var_50]
0x6CEA73: fmul    [esp+0B4h+var_6C]
0x6CEA77: faddp   st(1), st
0x6CEA79: fld     [esp+0B4h+var_48]
0x6CEA7D: fmul    [esp+0B4h+var_64]
0x6CEA81: faddp   st(1), st
0x6CEA83: fld     [esp+0B4h+var_44]
0x6CEA87: fmul    [esp+0B4h+var_60]
0x6CEA8B: faddp   st(1), st
0x6CEA8D: fstp    [esp+0B4h+var_9C]
0x6CEA91: fcomp   [esp+0B4h+var_9C]
0x6CEA95: fnstsw  ax
0x6CEA97: test    ah, 41h
0x6CEA9A: jnz     short loc_6CEAD3
0x6CEA9C: lea     eax, [esp+0B4h+var_30]
0x6CEAA3: push    eax
0x6CEAA4: lea     ecx, [esp+0B8h+var_80]
0x6CEAA8: call    sub_714CC0
0x6CEAAD: mov     ecx, [eax]
0x6CEAAF: mov     [esp+0B4h+var_80], ecx
0x6CEAB3: mov     edx, [eax+4]
0x6CEAB6: mov     [esp+0B4h+var_7C], edx
0x6CEABA: mov     ecx, [eax+8]
0x6CEABD: mov     [esp+0B4h+var_78], ecx
0x6CEAC1: mov     edx, [eax+0Ch]
0x6CEAC4: mov     [esp+0B4h+var_74], edx
0x6CEAC8: jmp     short loc_6CEAD3
0x6CEACA: fstp    st
0x6CEACC: mov     [esp+0B4h+var_A0], 0
0x6CEAD1: fstp    st
0x6CEAD3: fld     dword ptr [ebp+8]
0x6CEAD6: push    ecx
0x6CEAD7: lea     eax, [esp+0B8h+var_20]
0x6CEADE: fstp    dword ptr [esp+0B8h+X]; float
0x6CEAE1: push    eax; int
0x6CEAE2: lea     ecx, [esp+0BCh+var_80]
0x6CEAE6: call    sub_72F930
0x6CEAEB: mov     ecx, [eax]
0x6CEAED: mov     [esp+0B4h+var_80], ecx
0x6CEAF1: fld     [esp+0B4h+var_80]
0x6CEAF5: mov     edx, [eax+4]
0x6CEAF8: fadd    [esp+0B4h+var_6C]
0x6CEAFC: mov     [esp+0B4h+var_7C], edx
0x6CEB00: mov     ecx, [eax+8]
0x6CEB03: mov     [esp+0B4h+var_78], ecx
0x6CEB07: mov     edx, [eax+0Ch]
0x6CEB0A: fstp    [esp+0B4h+var_6C]
0x6CEB0E: fld     [esp+0B4h+var_68]
0x6CEB12: mov     [esp+0B4h+var_74], edx
0x6CEB16: fadd    [esp+0B4h+var_7C]
0x6CEB1A: mov     dl, [esp+0B4h+var_9D]
0x6CEB1E: mov     [esp+0B4h+var_A2], 1
0x6CEB23: fstp    [esp+0B4h+var_68]
0x6CEB27: fld     [esp+0B4h+var_64]
0x6CEB2B: fadd    [esp+0B4h+var_78]
0x6CEB2F: fstp    [esp+0B4h+var_64]
0x6CEB33: fld     [esp+0B4h+var_60]
0x6CEB37: fadd    [esp+0B4h+var_74]
0x6CEB3B: fstp    [esp+0B4h+var_60]
0x6CEB3F: jmp     short loc_6CEB45
0x6CEB41: fstp    st
0x6CEB43: fstp    st
0x6CEB45: fld     [esp+0B4h+var_40]
0x6CEB49: mov     edi, [esp+0B4h+var_70]
0x6CEB4D: fld     st
0x6CEB4F: fld     dword ptr ds:0A7DEB4h
0x6CEB55: fld     st
0x6CEB57: fchs
0x6CEB59: fucomp  st(2)
0x6CEB5B: fnstsw  ax
0x6CEB5D: fstp    st(1)
0x6CEB5F: test    ah, 44h
0x6CEB62: jnp     short loc_6CEB7C
0x6CEB64: fld     dword ptr [ebp+8]
0x6CEB67: mov     [esp+0B4h+var_A1], 1
0x6CEB6C: fmulp   st(2), st
0x6CEB6E: fld     [esp+0B4h+var_98]
0x6CEB72: faddp   st(2), st
0x6CEB74: fxch    st(1)
0x6CEB76: fstp    [esp+0B4h+var_98]
0x6CEB7A: jmp     short loc_6CEB8D
0x6CEB7C: fstp    st(1)
0x6CEB7E: fld     [esp+0B4h+var_90]
0x6CEB82: fsub    dword ptr [ebp+8]
0x6CEB85: fstp    [esp+0B4h+var_90]
0x6CEB89: jmp     short loc_6CEB8D
0x6CEB8B: fstp    st
0x6CEB8D: add     dl, 1
0x6CEB90: cmp     dl, [ebx+0Dh]
0x6CEB93: mov     [esp+0B4h+var_9D], dl
0x6CEB97: jb      loc_6CE955
0x6CEB9D: mov     al, [esp+0B4h+var_9F]
0x6CEBA1: fstp    st
0x6CEBA3: test    al, al
0x6CEBA5: pop     ebp
0x6CEBA6: jnz     short loc_6CEBB8
0x6CEBA8: cmp     [esp+0B0h+var_A2], al
0x6CEBAC: jnz     short loc_6CEBB8
0x6CEBAE: cmp     [esp+0B0h+var_A1], al
0x6CEBB2: jz      loc_6CED15
0x6CEBB8: test    al, al
0x6CEBBA: fld     [esp+0B0h+var_94]
0x6CEBBE: fld1
0x6CEBC0: mov     ecx, ds:0B24260h
0x6CEBC6: fld     st
0x6CEBC8: mov     edx, ds:0B24264h
0x6CEBCE: fdivrp  st(2), st
0x6CEBD0: mov     [esp+0B0h+var_5C], ecx
0x6CEBD4: mov     ecx, ds:0B24268h
0x6CEBDA: mov     [esp+0B0h+var_58], edx
0x6CEBDE: mov     edx, ds:0B3CBA4h
0x6CEBE4: mov     [esp+0B0h+var_54], ecx
0x6CEBE8: mov     ecx, ds:0B3CBA8h
0x6CEBEE: mov     [esp+0B0h+var_50], edx
0x6CEBF2: mov     edx, ds:0B3CBACh
0x6CEBF8: mov     [esp+0B0h+var_4C], ecx
0x6CEBFC: mov     ecx, ds:0B3CBB0h
0x6CEC02: mov     [esp+0B0h+var_48], edx
0x6CEC06: mov     [esp+0B0h+var_44], ecx
0x6CEC0A: fxch    st(1)
0x6CEC0C: fstp    [esp+0B0h+var_94]
0x6CEC10: fdiv    [esp+0B0h+var_90]
0x6CEC14: fstp    [esp+0B0h+var_90]
0x6CEC18: fld     dword ptr ds:0A79E10h
0x6CEC1E: fstp    [esp+0B0h+var_40]
0x6CEC22: jz      short loc_6CEC56
0x6CEC24: fld     dword ptr [esp+0B0h+var_8C]
0x6CEC28: lea     edx, [esp+0B0h+var_8C]
0x6CEC2C: fld     [esp+0B0h+var_94]
0x6CEC30: push    edx
0x6CEC31: fld     st
0x6CEC33: lea     ecx, [esp+0B4h+var_5C]
0x6CEC37: fmulp   st(2), st
0x6CEC39: fxch    st(1)
0x6CEC3B: fstp    dword ptr [esp+0B4h+var_8C]
0x6CEC3F: fld     dword ptr [esp+0B4h+var_8C+4]
0x6CEC43: fmul    st, st(1)
0x6CEC45: fstp    dword ptr [esp+0B4h+var_8C+4]
0x6CEC49: fmul    [esp+0B4h+var_84]
0x6CEC4D: fstp    [esp+0B4h+var_84]
0x6CEC51: call    sub_471390
0x6CEC56: cmp     [esp+0B0h+var_A2], 0
0x6CEC5B: jz      short loc_6CEC74
0x6CEC5D: lea     ecx, [esp+0B0h+var_6C]
0x6CEC61: call    sub_715340
0x6CEC66: lea     eax, [esp+0B0h+var_6C]
0x6CEC6A: push    eax
0x6CEC6B: lea     ecx, [esp+0B4h+var_5C]
0x6CEC6F: call    sub_471430
0x6CEC74: cmp     [esp+0B0h+var_A1], 0
0x6CEC79: jz      short loc_6CECBB
0x6CEC7B: fld     [esp+0B0h+var_90]
0x6CEC7F: sub     esp, 8
0x6CEC82: fmul    [esp+0B8h+var_98]
0x6CEC86: fstp    [esp+0B8h+var_98]
0x6CEC8A: fld     [esp+0B8h+var_98]
0x6CEC8E: fstp    [esp+0B8h+X]; X
0x6CEC91: call    __isnan
0x6CEC96: add     esp, 8
0x6CEC99: test    eax, eax
0x6CEC9B: jnz     short loc_6CECBB
0x6CEC9D: fld     [esp+0B0h+var_98]
0x6CECA1: sub     esp, 8
0x6CECA4: fstp    [esp+0B8h+X]; X
0x6CECA7: call    __finite
0x6CECAC: add     esp, 8
0x6CECAF: test    eax, eax
0x6CECB1: jz      short loc_6CECBB
0x6CECB3: fld     [esp+0B0h+var_98]
0x6CECB7: fstp    [esp+0B0h+var_40]
0x6CECBB: lea     ecx, [esp+0B0h+var_5C]
0x6CECBF: push    ecx
0x6CECC0: lea     edx, [esp+0B4h+var_20]
0x6CECC7: push    edx
0x6CECC8: mov     ecx, edi
0x6CECCA: call    sub_6CB820
0x6CECCF: mov     esi, eax
0x6CECD1: mov     ecx, 8
0x6CECD6: rep movsd
0x6CECD8: fld     dword ptr ds:0A7DEB4h
0x6CECDE: fchs
0x6CECE0: fstp    [esp+0B0h+var_9C]
0x6CECE4: mov     esi, [esp+0B0h+var_70]
0x6CECE8: fld     dword ptr [esi+1Ch]
0x6CECEB: fld     [esp+0B0h+var_9C]
0x6CECEF: fld     st
0x6CECF1: fucomp  st(2)
0x6CECF3: fnstsw  ax
0x6CECF5: fstp    st(1)
0x6CECF7: test    ah, 44h
0x6CECFA: jp      short loc_6CED23
0x6CECFC: fld     dword ptr [esi+10h]
0x6CECFF: fld     st(1)
0x6CED01: fucompp
0x6CED03: fnstsw  ax
0x6CED05: test    ah, 44h
0x6CED08: jp      short loc_6CED23
0x6CED0A: fld     dword ptr [esi]
0x6CED0C: fucompp
0x6CED0E: fnstsw  ax
0x6CED10: test    ah, 44h
0x6CED13: jp      short loc_6CED25
0x6CED15: pop     edi
0x6CED16: pop     esi
0x6CED17: xor     al, al
0x6CED19: pop     ebx
0x6CED1A: add     esp, 0A4h
0x6CED20: retn    0Ch
0x6CED23: fstp    st
0x6CED25: mov     edi, [esp+0B0h+arg_8]
0x6CED2C: mov     ecx, 8
0x6CED31: rep movsd
0x6CED33: pop     edi
0x6CED34: pop     esi
0x6CED35: mov     al, 1
0x6CED37: pop     ebx
0x6CED38: add     esp, 0A4h
0x6CED3E: retn    0Ch
