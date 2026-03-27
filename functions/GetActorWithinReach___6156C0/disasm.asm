0x6156C0: sub     esp, 0Ch
0x6156C3: push    ebx
0x6156C4: mov     ebx, [esp+10h+a2]
0x6156C8: mov     eax, [ebx]
0x6156CA: mov     edx, [eax+330h]
0x6156D0: push    esi; a5
0x6156D1: mov     ecx, ebx
0x6156D3: call    edx
0x6156D5: test    eax, eax
0x6156D7: jz      short loc_61572B
0x6156D9: mov     eax, [ebx]
0x6156DB: mov     edx, [eax+330h]
0x6156E1: mov     ecx, ebx
0x6156E3: call    edx
0x6156E5: mov     ecx, eax
0x6156E7: call    sub_6135F0
0x6156EC: mov     esi, eax
0x6156EE: test    esi, esi
0x6156F0: jz      short loc_61572B
0x6156F2: push    0
0x6156F4: push    esi
0x6156F5: push    ebx
0x6156F6: call    sub_6131D0
0x6156FB: add     esp, 0Ch
0x6156FE: test    al, al
0x615700: jz      short loc_615723
0x615702: push    1; a4
0x615704: push    esi; a3
0x615705: push    ebx; a2
0x615706: call    TESObjectREFR_GetDistanceBetween?
0x61570B: fld     [esp+20h+arg_4]
0x61570F: fcompp
0x615711: add     esp, 0Ch
0x615714: fnstsw  ax
0x615716: test    ah, 1
0x615719: jnz     short loc_615723
0x61571B: mov     eax, esi
0x61571D: pop     esi
0x61571E: pop     ebx
0x61571F: add     esp, 0Ch
0x615722: retn
0x615723: pop     esi
0x615724: xor     eax, eax
0x615726: pop     ebx
0x615727: add     esp, 0Ch
0x61572A: retn
0x61572B: fld     dword ptr ds:0A32048h
0x615731: push    ebp
0x615732: push    0; a2
0x615734: fstp    [esp+1Ch+var_C]
0x615738: mov     ecx, offset ActorProcessManager_ptr; this
0x61573D: mov     [esp+1Ch+a2], 0
0x615745: call    sub_673A50
0x61574A: mov     ecx, eax; this
0x61574C: call    sub_7616D0
0x615751: mov     ebp, eax
0x615753: test    ebp, ebp
0x615755: jz      loc_6158DC
0x61575B: push    edi; a5
0x61575C: lea     esp, [esp+0]
0x615760: cmp     dword ptr [ebp+4], 0
0x615764: jnz     short loc_615770
0x615766: cmp     dword ptr [ebp+0], 0
0x61576A: jz      loc_6158DB
0x615770: mov     eax, [ebp+0]
0x615773: push    0; int
0x615775: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61577A: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61577F: push    0; int
0x615781: push    eax; void *
0x615782: call    OblivionDynamicCast
0x615787: mov     ebp, [ebp+4]
0x61578A: mov     esi, eax
0x61578C: add     esp, 14h
0x61578F: test    esi, esi
0x615791: jz      loc_6158D3
0x615797: cmp     esi, ebx
0x615799: jz      short loc_615810
0x61579B: mov     eax, [esi]
0x61579D: mov     edx, [eax+198h]
0x6157A3: push    0
0x6157A5: mov     ecx, esi
0x6157A7: call    edx
0x6157A9: test    al, al
0x6157AB: jnz     short loc_615810
0x6157AD: mov     eax, [esi]
0x6157AF: mov     edx, [eax+154h]
0x6157B5: mov     ecx, esi
0x6157B7: call    edx
0x6157B9: test    eax, eax
0x6157BB: jz      short loc_615810
0x6157BD: push    0; a4
0x6157BF: push    esi; a3
0x6157C0: push    ebx; a2
0x6157C1: call    TESObjectREFR_GetDistanceBetween?
0x6157C6: fld     [esp+28h+arg_4]
0x6157CA: fcompp
0x6157CC: add     esp, 0Ch
0x6157CF: fnstsw  ax
0x6157D1: test    ah, 1
0x6157D4: jnz     short loc_615810
0x6157D6: fld     dword ptr ds:0A32048h
0x6157DC: lea     eax, [esp+1Ch+var_8]
0x6157E0: push    eax
0x6157E1: fstp    [esp+20h+var_8]
0x6157E5: push    esi
0x6157E6: push    ebx
0x6157E7: call    sub_6131D0
0x6157EC: add     esp, 0Ch
0x6157EF: test    al, al
0x6157F1: jz      short loc_615810
0x6157F3: fld     [esp+1Ch+var_8]
0x6157F7: fld     [esp+1Ch+var_C]
0x6157FB: fcomp   st(1)
0x6157FD: fnstsw  ax
0x6157FF: test    ah, 1
0x615802: jnz     short loc_61580E
0x615804: fstp    [esp+1Ch+var_C]
0x615808: mov     [esp+1Ch+a2], esi
0x61580C: jmp     short loc_615810
0x61580E: fstp    st
0x615810: lea     ecx, [esi+44h]
0x615813: call    GetExtraDataFollower
0x615818: test    eax, eax
0x61581A: jz      loc_6158D3
0x615820: mov     edi, [eax+0Ch]; a1
0x615823: test    edi, edi
0x615825: jz      loc_6158D3
0x61582B: jmp     short loc_615830
0x61582D: align 10h
0x615830: mov     esi, [edi]
0x615832: test    esi, esi
0x615834: jz      loc_6158D3
0x61583A: mov     ecx, [esi+58h]
0x61583D: test    ecx, ecx
0x61583F: jz      loc_6158C8
0x615845: mov     edx, [ecx]
0x615847: mov     eax, [edx+8]
0x61584A: call    eax
0x61584C: test    eax, eax
0x61584E: jnz     short loc_6158C8
0x615850: cmp     esi, ebx
0x615852: jz      short loc_6158C8
0x615854: mov     edx, [esi]
0x615856: push    eax
0x615857: mov     eax, [edx+198h]
0x61585D: mov     ecx, esi
0x61585F: call    eax
0x615861: test    al, al
0x615863: jnz     short loc_6158C8
0x615865: mov     edx, [esi]
0x615867: mov     eax, [edx+154h]
0x61586D: mov     ecx, esi
0x61586F: call    eax
0x615871: test    eax, eax
0x615873: jz      short loc_6158C8
0x615875: push    0; a4
0x615877: push    esi; a3
0x615878: push    ebx; a2
0x615879: call    TESObjectREFR_GetDistanceBetween?
0x61587E: fld     [esp+28h+arg_4]
0x615882: fcompp
0x615884: add     esp, 0Ch
0x615887: fnstsw  ax
0x615889: test    ah, 1
0x61588C: jnz     short loc_6158C8
0x61588E: fld     dword ptr ds:0A32048h
0x615894: lea     ecx, [esp+1Ch+var_8]
0x615898: push    ecx
0x615899: fstp    [esp+20h+var_8]
0x61589D: push    esi
0x61589E: push    ebx
0x61589F: call    sub_6131D0
0x6158A4: add     esp, 0Ch
0x6158A7: test    al, al
0x6158A9: jz      short loc_6158C8
0x6158AB: fld     [esp+1Ch+var_8]
0x6158AF: fld     [esp+1Ch+var_C]
0x6158B3: fcomp   st(1)
0x6158B5: fnstsw  ax
0x6158B7: test    ah, 1
0x6158BA: jnz     short loc_6158C6
0x6158BC: fstp    [esp+1Ch+var_C]
0x6158C0: mov     [esp+1Ch+a2], esi
0x6158C4: jmp     short loc_6158C8
0x6158C6: fstp    st
0x6158C8: mov     edi, [edi+4]
0x6158CB: test    edi, edi
0x6158CD: jnz     loc_615830
0x6158D3: test    ebp, ebp
0x6158D5: jnz     loc_615760
0x6158DB: pop     edi; a1
0x6158DC: mov     eax, ds:0B333C4h
0x6158E1: cmp     ebx, eax
0x6158E3: pop     ebp
0x6158E4: jz      short loc_615943
0x6158E6: push    0; a4
0x6158E8: push    eax; a3
0x6158E9: push    ebx; a2
0x6158EA: call    TESObjectREFR_GetDistanceBetween?
0x6158EF: fstp    [esp+20h+var_4]
0x6158F3: mov     eax, ds:0B333C4h
0x6158F8: fld     dword ptr ds:0A32048h
0x6158FE: lea     edx, [esp+20h+var_8]
0x615902: fstp    [esp+20h+var_8]
0x615906: push    edx
0x615907: push    eax
0x615908: push    ebx
0x615909: call    sub_6131D0
0x61590E: fld     [esp+2Ch+var_4]
0x615912: fld     [esp+2Ch+arg_4]
0x615916: mov     cl, al
0x615918: fcompp
0x61591A: add     esp, 18h
0x61591D: fnstsw  ax
0x61591F: test    ah, 1
0x615922: jnz     short loc_615943
0x615924: test    cl, cl
0x615926: jz      short loc_615943
0x615928: fld     [esp+14h+var_8]
0x61592C: fld     [esp+14h+var_C]
0x615930: fcompp
0x615932: fnstsw  ax
0x615934: test    ah, 1
0x615937: jnz     short loc_615943
0x615939: mov     ecx, ds:0B333C4h
0x61593F: mov     [esp+14h+a2], ecx
0x615943: mov     esi, [esp+14h+a2]
0x615947: test    esi, esi
0x615949: jz      short loc_615976
0x61594B: mov     ecx, ebx
0x61594D: call    Actor_IsPlayer
0x615952: test    al, al
0x615954: jz      short loc_615976
0x615956: mov     ecx, ds:0B333C4h; int
0x61595C: push    0; char
0x61595E: push    0; int
0x615960: push    1; char
0x615962: push    esi; int
0x615963: push    1; int
0x615965: call    sub_5F2820
0x61596A: test    al, al
0x61596C: jnz     short loc_615976
0x61596E: mov     [esp+14h+a2], 0
0x615976: mov     eax, [esp+14h+a2]
0x61597A: pop     esi
0x61597B: pop     ebx
0x61597C: add     esp, 0Ch
0x61597F: retn
