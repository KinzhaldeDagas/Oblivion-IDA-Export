0x6965C0: sub     esp, 4Ch
0x6965C3: push    ebx
0x6965C4: mov     ebx, ecx
0x6965C6: mov     ecx, [ebx+68h]
0x6965C9: test    ecx, ecx
0x6965CB: push    esi
0x6965CC: push    edi
0x6965CD: jz      short loc_6965FD
0x6965CF: mov     eax, [ecx]
0x6965D1: mov     edx, [eax+20h]
0x6965D4: call    edx
0x6965D6: mov     esi, eax
0x6965D8: test    esi, esi
0x6965DA: jz      short loc_6965FD
0x6965DC: mov     eax, [esi]
0x6965DE: mov     edx, [eax+190h]
0x6965E4: mov     ecx, esi
0x6965E6: call    edx
0x6965E8: test    al, al
0x6965EA: jz      short loc_6965FD
0x6965EC: mov     eax, [esi+5Ch]
0x6965EF: mov     edx, [eax+24h]
0x6965F2: lea     ecx, [esi+5Ch]
0x6965F5: mov     edi, esi
0x6965F7: call    edx
0x6965F9: mov     esi, eax
0x6965FB: jmp     short loc_696601
0x6965FD: xor     edi, edi
0x6965FF: xor     esi, esi
0x696601: mov     ecx, ebx; this
0x696603: call    MobileObject_GetCharProxy
0x696608: test    esi, esi
0x69660A: mov     ecx, eax
0x69660C: jz      loc_696751
0x696612: test    ecx, ecx
0x696614: jz      loc_696751
0x69661A: mov     edx, [ebx+88h]
0x696620: test    edx, edx
0x696622: jz      loc_696751
0x696628: fld     dword ptr ds:0A3D65Ch
0x69662E: fcomp   dword ptr [ebx+64h]
0x696631: fnstsw  ax
0x696633: test    ah, 41h
0x696636: jnz     short loc_696665
0x696638: mov     eax, ds:0B333C4h
0x69663D: cmp     edi, eax
0x69663F: jnz     short loc_696665
0x696641: cmp     byte ptr [eax+588h], 0
0x696648: jnz     short loc_696665
0x69664A: mov     eax, [esi+88h]
0x696650: mov     edi, [esi+8Ch]
0x696656: mov     esi, [esi+90h]
0x69665C: mov     [edx+54h], eax
0x69665F: mov     [edx+58h], edi
0x696662: mov     [edx+5Ch], esi
0x696665: fldz
0x696667: fcomp   dword ptr [ebx+64h]
0x69666A: fnstsw  ax
0x69666C: test    ah, 5
0x69666F: jp      loc_696735
0x696675: mov     eax, [ebx+88h]
0x69667B: mov     edx, [eax+88h]
0x696681: mov     [esp+58h+var_48], edx
0x696685: mov     edx, [eax+8Ch]
0x69668B: mov     eax, [eax+90h]
0x696691: mov     [esp+58h+var_44], edx
0x696695: lea     edx, [esp+58h+var_30]
0x696699: push    edx
0x69669A: mov     [esp+5Ch+var_40], eax
0x69669E: call    sub_5E1500
0x6966A3: fld     [esp+58h+var_30]
0x6966A7: fsub    [esp+58h+var_48]
0x6966AB: lea     ecx, [esp+58h+var_3C]
0x6966AF: fstp    [esp+58h+var_3C]
0x6966B3: fld     [esp+58h+var_2C]
0x6966B7: fsub    [esp+58h+var_44]
0x6966BB: fstp    [esp+58h+var_38]
0x6966BF: fldz
0x6966C1: fstp    [esp+58h+var_34]
0x6966C5: fld     [esp+58h+var_28]
0x6966C9: fsub    [esp+58h+var_40]
0x6966CD: fstp    [esp+58h+var_4C]
0x6966D1: fld     [esp+58h+var_4C]
0x6966D5: fstp    [esp+58h+var_4C]
0x6966D9: call    sub_404C90
0x6966DE: fld     [esp+58h+var_4C]
0x6966E2: fxch    st(1)
0x6966E4: call    sub_98598A
0x6966E9: fstp    [esp+58h+var_4C]
0x6966ED: fld     [esp+58h+var_4C]
0x6966F1: sub     esp, 8
0x6966F4: fchs
0x6966F6: fstp    [esp+60h+var_5C]; float
0x6966FA: fldz
0x6966FC: fstp    [esp+60h+a2]; float
0x6966FF: fld     [esp+60h+var_3C]
0x696703: fld     [esp+60h+var_38]
0x696707: call    sub_98598A
0x69670C: fstp    [esp+60h+var_4C]
0x696710: fld     [esp+60h+var_4C]
0x696714: push    ecx
0x696715: lea     ecx, [esp+64h+var_24]
0x696719: fstp    [esp+64h+var_64]; float
0x69671C: call    sub_7118E0
0x696721: mov     edi, [ebx+88h]
0x696727: add     edi, 30h ; '0'
0x69672A: mov     ecx, 9
0x69672F: lea     esi, [esp+58h+var_24]
0x696733: rep movsd
0x696735: fldz
0x696737: push    0; a3
0x696739: push    ecx
0x69673A: fstp    [esp+60h+a2]; a2
0x69673D: mov     ecx, [ebx+88h]; this
0x696743: call    NiAVObject_UpdateNiAVObject
0x696748: pop     edi
0x696749: pop     esi
0x69674A: xor     al, al
0x69674C: pop     ebx
0x69674D: add     esp, 4Ch
0x696750: retn
0x696751: pop     edi
0x696752: pop     esi
0x696753: mov     al, 1
0x696755: pop     ebx
0x696756: add     esp, 4Ch
0x696759: retn
