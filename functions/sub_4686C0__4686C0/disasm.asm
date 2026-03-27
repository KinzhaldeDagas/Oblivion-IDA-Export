0x4686C0: push    esi
0x4686C1: mov     esi, [esp+4+arg_0]
0x4686C5: test    esi, esi
0x4686C7: jz      short loc_46871B
0x4686C9: push    1; a2
0x4686CB: mov     ecx, esi; this
0x4686CD: call    Actor_GetActorBaseForm
0x4686D2: test    eax, eax
0x4686D4: jz      short loc_46871B
0x4686D6: add     eax, 68h ; 'h'
0x4686D9: jz      short loc_46871B
0x4686DB: cmp     dword ptr [eax+14h], 0
0x4686DF: jnz     short loc_4686F7
0x4686E1: cmp     dword ptr [eax+10h], 0
0x4686E5: jnz     short loc_4686F7
0x4686E7: push    0; a2
0x4686E9: mov     ecx, esi; this
0x4686EB: call    Actor_GetActorBaseForm
0x4686F0: test    eax, eax
0x4686F2: jz      short loc_46871B
0x4686F4: add     eax, 68h ; 'h'
0x4686F7: test    eax, eax
0x4686F9: jz      short loc_46871B
0x4686FB: fld     [esp+4+arg_C]
0x4686FF: mov     ecx, [esp+4+arg_4]
0x468703: sub     esp, 8
0x468706: fstp    [esp+0Ch+var_8]; float
0x46870A: fld     [esp+0Ch+arg_8]
0x46870E: fstp    [esp+0Ch+var_C]; int
0x468711: push    ecx; int
0x468712: push    esi; int
0x468713: lea     ecx, [eax+10h]
0x468716: call    sub_5692E0
0x46871B: pop     esi
0x46871C: retn
