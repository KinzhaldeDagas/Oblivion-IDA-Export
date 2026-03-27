0x736950: sub     esp, 18h
0x736953: push    ebx
0x736954: mov     ebx, [esp+1Ch+arg_90]
0x73695B: push    ebp
0x73695C: push    esi
0x73695D: push    edi
0x73695E: mov     edi, [esp+28h+arg_4]
0x736962: mov     eax, [edi+5Ch]
0x736965: mov     ecx, [edi+60h]
0x736968: mov     esi, [eax+ecx*4]
0x73696B: imul    esi, [esp+28h+arg_94]
0x736973: mov     ecx, [eax+ebx*4+4]
0x736977: add     esi, [edi+50h]
0x73697A: sub     ecx, [eax+ebx*4]
0x73697D: add     esi, [eax+ebx*4]
0x736980: mov     eax, [esp+28h+arg_0]
0x736984: push    1
0x736986: lea     edx, [esp+2Ch+arg_4]
0x73698A: push    edx
0x73698B: mov     edx, [eax+4]
0x73698E: push    ecx
0x73698F: push    esi
0x736990: push    eax
0x736991: mov     [esp+3Ch+arg_4], 1
0x736999: call    edx
0x73699B: add     esp, 14h
0x73699E: lea     eax, [esp+28h+arg_8]
0x7369A2: push    eax
0x7369A3: lea     ecx, [esp+2Ch+var_18]
0x7369A7: call    sub_71B4D0
0x7369AC: mov     ecx, [edi+54h]
0x7369AF: mov     ebp, [ecx+ebx*4]
0x7369B2: mov     edx, [edi+58h]
0x7369B5: mov     ebx, [edx+ebx*4]
0x7369B8: lea     eax, [esp+28h+arg_4C]
0x7369BC: push    eax
0x7369BD: lea     ecx, [esp+2Ch+arg_8]
0x7369C1: call    sub_70E260
0x7369C6: test    al, al
0x7369C8: jz      short loc_736A0C
0x7369CA: cmp     [esp+28h+var_18], 0FF0000h
0x7369D2: jnz     short loc_736A0C
0x7369D4: test    ebx, ebx
0x7369D6: mov     eax, esi
0x7369D8: jbe     short loc_736A0C
0x7369DA: mov     [esp+28h+arg_4], ebx
0x7369DE: mov     edi, edi
0x7369E0: test    ebp, ebp
0x7369E2: jbe     short loc_736A05
0x7369E4: mov     edi, ebp
0x7369E6: mov     bl, [eax+2]
0x7369E9: mov     cl, [eax+1]
0x7369EC: mov     dl, [eax]
0x7369EE: mov     [esi], bl
0x7369F0: add     esi, 1
0x7369F3: mov     [esi], cl
0x7369F5: add     esi, 1
0x7369F8: mov     [esi], dl
0x7369FA: add     esi, 1
0x7369FD: add     eax, 3
0x736A00: sub     edi, 1
0x736A03: jnz     short loc_7369E6
0x736A05: sub     [esp+28h+arg_4], 1
0x736A0A: jnz     short loc_7369E0
0x736A0C: pop     edi
0x736A0D: pop     esi
0x736A0E: pop     ebp
0x736A0F: pop     ebx
0x736A10: add     esp, 18h
0x736A13: retn
