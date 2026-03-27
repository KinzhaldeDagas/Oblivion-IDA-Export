0x9517D0: push    ecx
0x9517D1: fld     dword ptr [ecx+0F80h]
0x9517D7: lea     edx, [ecx+0F70h]
0x9517DD: mov     ecx, [ecx+10h]
0x9517E0: add     ecx, 0FFFFFFFEh
0x9517E3: lea     eax, [ecx+1]
0x9517E6: cmp     eax, 4
0x9517E9: push    esi
0x9517EA: mov     esi, edx
0x9517EC: jl      loc_951880
0x9517F2: shr     eax, 2
0x9517F5: push    edi
0x9517F6: mov     edi, eax
0x9517F8: neg     eax
0x9517FA: lea     ecx, [ecx+eax*4]
0x9517FD: lea     ecx, [ecx+0]
0x951800: fld     dword ptr [edx+60h]
0x951803: fst     [esp+0Ch+var_4]
0x951807: fcomp   st(1)
0x951809: fnstsw  ax
0x95180B: test    ah, 5
0x95180E: jp      short loc_951819
0x951810: fstp    st
0x951812: lea     esi, [edx+50h]
0x951815: fld     [esp+0Ch+var_4]
0x951819: fld     dword ptr [edx+0B0h]
0x95181F: fst     [esp+0Ch+var_4]
0x951823: fcomp   st(1)
0x951825: fnstsw  ax
0x951827: test    ah, 5
0x95182A: jp      short loc_951838
0x95182C: fstp    st
0x95182E: lea     esi, [edx+0A0h]
0x951834: fld     [esp+0Ch+var_4]
0x951838: fld     dword ptr [edx+100h]
0x95183E: fst     [esp+0Ch+var_4]
0x951842: fcomp   st(1)
0x951844: fnstsw  ax
0x951846: test    ah, 5
0x951849: jp      short loc_951857
0x95184B: fstp    st
0x95184D: lea     esi, [edx+0F0h]
0x951853: fld     [esp+0Ch+var_4]
0x951857: fld     dword ptr [edx+150h]
0x95185D: fst     [esp+0Ch+var_4]
0x951861: fcomp   st(1)
0x951863: fnstsw  ax
0x951865: test    ah, 5
0x951868: jp      short loc_951876
0x95186A: fstp    st
0x95186C: lea     esi, [edx+140h]
0x951872: fld     [esp+0Ch+var_4]
0x951876: add     edx, 140h
0x95187C: dec     edi
0x95187D: jnz     short loc_951800
0x95187F: pop     edi
0x951880: test    ecx, ecx
0x951882: jl      short loc_9518A3
0x951884: inc     ecx
0x951885: fld     dword ptr [edx+60h]
0x951888: add     edx, 50h ; 'P'
0x95188B: fst     [esp+8+var_4]
0x95188F: fcomp   st(1)
0x951891: fnstsw  ax
0x951893: test    ah, 5
0x951896: jp      short loc_9518A0
0x951898: fstp    st
0x95189A: mov     esi, edx
0x95189C: fld     [esp+8+var_4]
0x9518A0: dec     ecx
0x9518A1: jnz     short loc_951885
0x9518A3: mov     eax, esi
0x9518A5: fstp    st
0x9518A7: pop     esi
0x9518A8: pop     ecx
0x9518A9: retn
