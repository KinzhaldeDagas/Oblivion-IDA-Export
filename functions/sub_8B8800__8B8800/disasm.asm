0x8B8800: mov     eax, [esp+arg_0]
0x8B8804: mov     edx, [eax]
0x8B8806: mov     ecx, [esp+arg_C]
0x8B880A: mov     [ecx], edx
0x8B880C: mov     edx, [eax+4]
0x8B880F: mov     [ecx+4], edx
0x8B8812: lea     edx, [eax+8]
0x8B8815: mov     eax, [edx]
0x8B8817: mov     [ecx+8], eax
0x8B881A: mov     eax, [esp+arg_4]
0x8B881E: test    eax, eax
0x8B8820: mov     dword ptr [ecx+0Ch], 0
0x8B8827: movaps  xmm0, xmmword ptr [ecx]
0x8B882A: movaps  xmmword ptr [ecx+10h], xmm0
0x8B882E: jle     locret_8B88EF
0x8B8834: push    esi
0x8B8835: push    edi
0x8B8836: mov     edi, [esp+8+arg_8]
0x8B883A: mov     esi, eax
0x8B883C: lea     esp, [esp+0]
0x8B8840: fld     dword ptr [edx-8]
0x8B8843: fld     dword ptr [ecx+10h]
0x8B8846: fst     [esp+8+arg_0]
0x8B884A: fcomp   st(1)
0x8B884C: fnstsw  ax
0x8B884E: test    ah, 41h
0x8B8851: jnz     short loc_8B8859
0x8B8853: fstp    st
0x8B8855: fld     [esp+8+arg_0]
0x8B8859: fstp    dword ptr [ecx+10h]
0x8B885C: fld     dword ptr [edx-4]
0x8B885F: fld     dword ptr [ecx+14h]
0x8B8862: fst     [esp+8+arg_0]
0x8B8866: fcomp   st(1)
0x8B8868: fnstsw  ax
0x8B886A: test    ah, 41h
0x8B886D: jnz     short loc_8B8875
0x8B886F: fstp    st
0x8B8871: fld     [esp+8+arg_0]
0x8B8875: fstp    dword ptr [ecx+14h]
0x8B8878: fld     dword ptr [edx]
0x8B887A: fld     dword ptr [ecx+18h]
0x8B887D: fst     [esp+8+arg_0]
0x8B8881: fcomp   st(1)
0x8B8883: fnstsw  ax
0x8B8885: test    ah, 41h
0x8B8888: jnz     short loc_8B8890
0x8B888A: fstp    st
0x8B888C: fld     [esp+8+arg_0]
0x8B8890: fstp    dword ptr [ecx+18h]
0x8B8893: fld     dword ptr [edx-8]
0x8B8896: fld     dword ptr [ecx]
0x8B8898: fst     [esp+8+arg_0]
0x8B889C: fcomp   st(1)
0x8B889E: fnstsw  ax
0x8B88A0: test    ah, 5
0x8B88A3: jp      short loc_8B88AB
0x8B88A5: fstp    st
0x8B88A7: fld     [esp+8+arg_0]
0x8B88AB: fstp    dword ptr [ecx]
0x8B88AD: fld     dword ptr [edx-4]
0x8B88B0: fld     dword ptr [ecx+4]
0x8B88B3: fst     [esp+8+arg_0]
0x8B88B7: fcomp   st(1)
0x8B88B9: fnstsw  ax
0x8B88BB: test    ah, 5
0x8B88BE: jp      short loc_8B88C6
0x8B88C0: fstp    st
0x8B88C2: fld     [esp+8+arg_0]
0x8B88C6: fstp    dword ptr [ecx+4]
0x8B88C9: fld     dword ptr [edx]
0x8B88CB: fld     dword ptr [ecx+8]
0x8B88CE: fst     [esp+8+arg_0]
0x8B88D2: fcomp   st(1)
0x8B88D4: fnstsw  ax
0x8B88D6: test    ah, 5
0x8B88D9: jp      short loc_8B88E1
0x8B88DB: fstp    st
0x8B88DD: fld     [esp+8+arg_0]
0x8B88E1: add     edx, edi
0x8B88E3: fstp    dword ptr [ecx+8]
0x8B88E6: dec     esi
0x8B88E7: jnz     loc_8B8840
0x8B88ED: pop     edi
0x8B88EE: pop     esi
0x8B88EF: retn
