0x628140: sub     esp, 0Ch
0x628143: push    ebp
0x628144: mov     ebp, ecx
0x628146: cmp     byte ptr [ebp+3Ch], 0
0x62814A: jz      loc_6281F5
0x628150: mov     ecx, [esp+10h+arg_0]; this
0x628154: call    TESObjectREFR_IsPersistent?
0x628159: test    al, al
0x62815B: jz      loc_6281F5
0x628161: fld     dword ptr ds:0A32048h
0x628167: push    ebx
0x628168: lea     ebx, [ebp+54h]
0x62816B: fstp    [esp+14h+var_C]
0x62816F: push    edi
0x628170: mov     edi, ebx
0x628172: test    edi, edi
0x628174: mov     [esp+18h+var_8], 0
0x62817C: jz      short loc_6281E8
0x62817E: push    esi
0x62817F: nop
0x628180: mov     esi, [edi]
0x628182: test    esi, esi
0x628184: jz      short loc_6281E7
0x628186: mov     eax, [esp+1Ch+arg_0]
0x62818A: mov     edi, [edi+4]
0x62818D: push    0
0x62818F: push    eax
0x628190: mov     ecx, esi
0x628192: call    TesObjectREF_GetDistance
0x628197: fstp    [esp+1Ch+var_4]
0x62819B: mov     ecx, [esi+8]
0x62819E: shr     ecx, 0Bh
0x6281A1: test    cl, 1
0x6281A4: jnz     short loc_6281D5
0x6281A6: mov     edx, [esi]
0x6281A8: mov     eax, [edx+198h]
0x6281AE: push    0
0x6281B0: mov     ecx, esi
0x6281B2: call    eax
0x6281B4: test    al, al
0x6281B6: jnz     short loc_6281D5
0x6281B8: fld     [esp+1Ch+var_C]
0x6281BC: fld     [esp+1Ch+var_4]
0x6281C0: fcom    st(1)
0x6281C2: fnstsw  ax
0x6281C4: fstp    st(1)
0x6281C6: test    ah, 5
0x6281C9: jp      short loc_6281E1
0x6281CB: fstp    [esp+1Ch+var_C]
0x6281CF: mov     [esp+1Ch+var_8], esi
0x6281D3: jmp     short loc_6281E3
0x6281D5: push    esi
0x6281D6: mov     ecx, ebp
0x6281D8: call    sub_627D60
0x6281DD: mov     edi, ebx
0x6281DF: jmp     short loc_6281E3
0x6281E1: fstp    st
0x6281E3: test    edi, edi
0x6281E5: jnz     short loc_628180
0x6281E7: pop     esi
0x6281E8: mov     eax, [esp+18h+var_8]
0x6281EC: pop     edi
0x6281ED: pop     ebx
0x6281EE: pop     ebp
0x6281EF: add     esp, 0Ch
0x6281F2: retn    4
0x6281F5: xor     eax, eax
0x6281F7: pop     ebp
0x6281F8: add     esp, 0Ch
0x6281FB: retn    4
