0x791870: mov     eax, ds:0B429F4h
0x791875: sub     esp, 0Ch
0x791878: push    ebx
0x791879: push    ebp
0x79187A: push    esi
0x79187B: push    edi
0x79187C: mov     edi, ds:0B429F0h
0x791882: cmp     edi, eax
0x791884: mov     ebx, eax
0x791886: jbe     short loc_791898
0x791888: call    __invalid_parameter_noinfo
0x79188D: mov     eax, ds:0B429F4h
0x791892: mov     edi, ds:0B429F0h
0x791898: cmp     edi, eax
0x79189A: mov     esi, offset unk_B429EC
0x79189F: jbe     short loc_7918A6
0x7918A1: call    __invalid_parameter_noinfo
0x7918A6: push    ebx; Src
0x7918A7: push    esi; int
0x7918A8: push    edi; Dst
0x7918A9: mov     eax, offset unk_B429EC
0x7918AE: push    eax; int
0x7918AF: lea     eax, [esp+2Ch+var_8]
0x7918B3: push    eax; int
0x7918B4: mov     ecx, offset unk_B429EC
0x7918B9: call    sub_439050
0x7918BE: mov     eax, ds:0B429D4h
0x7918C3: mov     ecx, ds:0B429D0h
0x7918C9: cmp     ecx, eax
0x7918CB: mov     ebx, eax
0x7918CD: jbe     short loc_7918DF
0x7918CF: call    __invalid_parameter_noinfo
0x7918D4: mov     eax, ds:0B429D4h
0x7918D9: mov     ecx, ds:0B429D0h
0x7918DF: cmp     ecx, eax
0x7918E1: mov     esi, offset unk_B429CC
0x7918E6: mov     edi, ecx
0x7918E8: jbe     short loc_7918EF
0x7918EA: call    __invalid_parameter_noinfo
0x7918EF: push    ebx; Src
0x7918F0: push    esi; int
0x7918F1: mov     eax, offset unk_B429CC
0x7918F6: push    edi; Dst
0x7918F7: push    eax; int
0x7918F8: lea     ecx, [esp+2Ch+var_8]
0x7918FC: push    ecx; int
0x7918FD: mov     ecx, eax
0x7918FF: call    sub_439050
0x791904: xor     ebp, ebp
0x791906: xor     edi, edi
0x791908: mov     [esp+1Ch+var_C], ebp
0x79190C: lea     esp, [esp+0]
0x791910: mov     esi, ds:0B429B8h
0x791916: mov     eax, [esi+14h]
0x791919: test    eax, eax
0x79191B: jz      loc_7919BA
0x791921: mov     ecx, [esi+18h]
0x791924: sub     ecx, eax
0x791926: mov     eax, 30C30C31h
0x79192B: imul    ecx
0x79192D: sar     edx, 4
0x791930: mov     eax, edx
0x791932: shr     eax, 1Fh
0x791935: add     eax, edx
0x791937: cmp     edi, eax
0x791939: jnb     short loc_7919BA
0x79193B: mov     eax, [esi+14h]
0x79193E: test    eax, eax
0x791940: lea     ebx, [esi+14h]
0x791943: jz      short loc_79195F
0x791945: mov     ecx, [esi+18h]
0x791948: sub     ecx, eax
0x79194A: mov     eax, 30C30C31h
0x79194F: imul    ecx
0x791951: sar     edx, 4
0x791954: mov     eax, edx
0x791956: shr     eax, 1Fh
0x791959: add     eax, edx
0x79195B: cmp     edi, eax
0x79195D: jb      short loc_791964
0x79195F: call    __invalid_parameter_noinfo
0x791964: mov     edx, [ebx]
0x791966: mov     eax, [esp+1Ch+var_C]
0x79196A: cmp     byte ptr [eax+edx], 0
0x79196E: lea     ecx, [esp+1Ch+var_8]
0x791972: mov     [esp+1Ch+var_8], ebp
0x791976: push    ecx
0x791977: jz      short loc_79198A
0x791979: mov     ecx, offset unk_B429EC
0x79197E: call    sub_791770
0x791983: mov     ecx, offset unk_B429EC
0x791988: jmp     short loc_791999
0x79198A: mov     ecx, offset unk_B429CC
0x79198F: call    sub_791770
0x791994: mov     ecx, offset unk_B429CC
0x791999: lea     eax, [esp+1Ch+var_8]
0x79199D: lea     edx, [ebp+1]
0x7919A0: push    eax
0x7919A1: mov     [esp+20h+var_8], edx
0x7919A5: call    sub_791770
0x7919AA: add     [esp+1Ch+var_C], 54h ; 'T'
0x7919AF: add     edi, 1
0x7919B2: add     ebp, 2
0x7919B5: jmp     loc_791910
0x7919BA: pop     edi
0x7919BB: pop     esi
0x7919BC: pop     ebp
0x7919BD: pop     ebx
0x7919BE: add     esp, 0Ch
0x7919C1: retn
