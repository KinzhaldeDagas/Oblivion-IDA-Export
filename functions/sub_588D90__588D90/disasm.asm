0x588D90: sub     esp, 8
0x588D93: push    esi
0x588D94: push    edi
0x588D95: push    0FABh
0x588D9A: mov     esi, ecx
0x588D9C: call    Tile_GetFloat
0x588DA1: fstp    [esp+10h+var_8]
0x588DA5: mov     edi, [esi+10h]
0x588DA8: test    edi, edi
0x588DAA: jz      loc_588E46
0x588DB0: mov     eax, [edi+18h]
0x588DB3: test    eax, eax
0x588DB5: jz      short loc_588DF3
0x588DB7: jmp     short loc_588DC0
0x588DB9: align 10h
0x588DC0: mov     edx, [eax+8]
0x588DC3: lea     ecx, [eax+8]
0x588DC6: movzx   ecx, word ptr [edx+18h]
0x588DCA: cmp     cx, 0FA6h
0x588DCF: mov     eax, [eax]
0x588DD1: jz      short loc_588DDB
0x588DD3: ja      short loc_588DF3
0x588DD5: test    eax, eax
0x588DD7: jnz     short loc_588DC0
0x588DD9: jmp     short loc_588DF3
0x588DDB: fld     dword ptr [edx+4]
0x588DDE: fstp    [esp+10h+var_4]
0x588DE2: fld     dword ptr ds:0A379B4h
0x588DE8: fcomp   [esp+10h+var_4]
0x588DEC: fnstsw  ax
0x588DEE: test    ah, 44h
0x588DF1: jnp     short loc_588E07
0x588DF3: mov     esi, [edi+10h]
0x588DF6: push    1; arg1
0x588DF8: push    0; canCreate
0x588DFA: call    InterfaceManager_GetSingleton
0x588DFF: add     esp, 8
0x588E02: cmp     esi, [eax+68h]
0x588E05: jnz     short loc_588E3B
0x588E07: mov     eax, [edi+18h]
0x588E0A: test    eax, eax
0x588E0C: jz      short loc_588E29
0x588E0E: mov     edi, edi
0x588E10: mov     edx, [eax+8]
0x588E13: lea     ecx, [eax+8]
0x588E16: movzx   ecx, word ptr [edx+18h]
0x588E1A: cmp     cx, 0FABh
0x588E1F: mov     eax, [eax]
0x588E21: jz      short loc_588E50
0x588E23: ja      short loc_588E29
0x588E25: test    eax, eax
0x588E27: jnz     short loc_588E10
0x588E29: fldz
0x588E2B: fstp    [esp+10h+var_4]
0x588E2F: fld     [esp+10h+var_4]
0x588E33: fadd    [esp+10h+var_8]
0x588E37: fstp    [esp+10h+var_8]
0x588E3B: mov     edi, [edi+10h]
0x588E3E: test    edi, edi
0x588E40: jnz     loc_588DB0
0x588E46: fld     [esp+10h+var_8]
0x588E4A: pop     edi
0x588E4B: pop     esi
0x588E4C: add     esp, 8
0x588E4F: retn
0x588E50: fld     dword ptr [edx+4]
0x588E53: jmp     short loc_588E2B
