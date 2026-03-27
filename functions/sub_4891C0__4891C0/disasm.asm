0x4891C0: sub     esp, 24h
0x4891C3: fld     dword ptr ds:0A30634h
0x4891C9: push    esi
0x4891CA: push    edi
0x4891CB: fstp    [esp+2Ch+var_24]
0x4891CF: mov     edi, ecx
0x4891D1: call    sub_485150
0x4891D6: push    0; int
0x4891D8: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x4891DD: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4891E2: mov     esi, eax
0x4891E4: mov     eax, [edi+8]
0x4891E7: push    0; int
0x4891E9: push    eax; void *
0x4891EA: call    OblivionDynamicCast
0x4891EF: add     esp, 14h
0x4891F2: test    eax, eax
0x4891F4: jnz     loc_489486
0x4891FA: mov     ecx, ds:0B333C4h
0x489200: mov     edx, [ecx]
0x489202: mov     eax, [edx+288h]
0x489208: push    ebx
0x489209: push    7
0x48920B: call    eax
0x48920D: fstp    dword ptr [esp+30h+var_1C]
0x489211: mov     ecx, ds:0B333C4h
0x489217: mov     edx, [ecx]
0x489219: mov     eax, [edx+284h]
0x48921F: push    0
0x489221: call    eax
0x489223: mov     ecx, ds:0B333C4h
0x489229: mov     edx, [ecx]
0x48922B: mov     [esp+30h+var_14], eax
0x48922F: fild    [esp+30h+var_14]
0x489233: mov     eax, [edx+284h]
0x489239: push    3
0x48923B: fstp    [esp+34h+var_10]
0x48923F: call    eax
0x489241: mov     ecx, ds:0B333C4h; this
0x489247: mov     [esp+30h+var_14], eax
0x48924B: fild    [esp+30h+var_14]
0x48924F: fstp    [esp+30h+var_14]
0x489253: call    Actor_GetFatigueFraction
0x489258: cmp     esi, 1
0x48925B: fstp    dword ptr [esp+30h+var_1C+4]
0x48925F: mov     esi, [edi+8]
0x489262: jnz     loc_4893B2
0x489268: cmp     byte ptr [esi+4], 21h ; '!'
0x48926C: jnz     loc_489324
0x489272: cmp     byte ptr [esi+90h], 4
0x489279: jnz     short loc_489286
0x48927B: fld     dword ptr ds:0A30634h
0x489281: jmp     loc_489385
0x489286: mov     ecx, ds:0B333C4h
0x48928C: mov     ebx, [ecx]
0x48928E: mov     ecx, esi
0x489290: call    TESObjectWEAP_GetWeaponSkillAV
0x489295: mov     ecx, ds:0B333C4h
0x48929B: mov     edx, [ebx+288h]
0x4892A1: push    eax
0x4892A2: call    edx
0x4892A4: fstp    [esp+30h+var_4]
0x4892A8: mov     eax, [esi+88h]
0x4892AE: mov     edx, [eax+10h]
0x4892B1: lea     ecx, [esi+88h]
0x4892B7: call    edx
0x4892B9: push    0
0x4892BB: mov     ecx, edi
0x4892BD: movzx   ebx, ax
0x4892C0: call    ContainerEntryExtraData_GetHealth
0x4892C5: push    esi
0x4892C6: fstp    qword ptr [esp+34h+var_24]
0x4892CA: call    TESHealthForm_GetHealthForForm
0x4892CF: add     esp, 4
0x4892D2: test    eax, eax
0x4892D4: mov     dword ptr [esp+30h+var_C], eax
0x4892D8: fild    dword ptr [esp+30h+var_C]
0x4892DC: jge     short loc_4892E4
0x4892DE: fadd    dword ptr ds:0A2FC78h
0x4892E4: cmp     byte ptr [esi+90h], 5
0x4892EB: fdivr   qword ptr [esp+30h+var_24]
0x4892EF: fstp    dword ptr [esp+30h+var_C]
0x4892F3: jnz     short loc_4892FB
0x4892F5: fld     [esp+30h+var_14]
0x4892F9: jmp     short loc_4892FF
0x4892FB: fld     [esp+30h+var_10]
0x4892FF: fstp    [esp+30h+var_24]
0x489303: push    1
0x489305: fld1
0x489307: sub     esp, 8
0x48930A: fstp    [esp+3Ch+var_38]
0x48930E: fld     dword ptr [esp+3Ch+var_C]
0x489312: fstp    [esp+3Ch+var_3C]
0x489315: fld     dword ptr [esp+3Ch+var_1C+4]
0x489319: push    ebx
0x48931A: push    ecx
0x48931B: fstp    [esp+44h+var_44]
0x48931E: fld     [esp+44h+var_24]
0x489322: jmp     short loc_489363
0x489324: mov     ecx, ds:0B333C4h
0x48932A: mov     eax, [ecx]
0x48932C: mov     edx, [eax+288h]
0x489332: push    1Ch
0x489334: call    edx
0x489336: fstp    [esp+30h+var_4]
0x48933A: mov     eax, [esi+74h]
0x48933D: mov     edx, [eax+10h]
0x489340: lea     ecx, [esi+74h]
0x489343: call    edx
0x489345: fld1
0x489347: push    1; float
0x489349: sub     esp, 8
0x48934C: fst     [esp+3Ch+var_38]; float
0x489350: movzx   eax, ax
0x489353: fstp    [esp+3Ch+var_3C]; float
0x489356: push    eax; int
0x489357: fld     dword ptr [esp+40h+var_1C+4]
0x48935B: push    ecx
0x48935C: fstp    [esp+44h+var_44]; float
0x48935F: fld     [esp+44h+var_14]
0x489363: call    Double_To_SInt32
0x489368: fld     dword ptr [esp+44h+var_1C]
0x48936C: push    eax; int
0x48936D: call    Double_To_SInt32
0x489372: fld     [esp+48h+var_4]
0x489376: push    eax; int
0x489377: call    Double_To_SInt32
0x48937C: push    eax; int
0x48937D: call    Calc_WeaponDamage
0x489382: add     esp, 20h
0x489385: fstp    [esp+30h+var_24]
0x489389: sub     esp, 8
0x48938C: fld1
0x48938E: fstp    [esp+38h+var_34]; float
0x489392: fld     [esp+38h+var_24]
0x489396: fstp    [esp+38h+var_38]; float
0x489399: call    Round_Float
0x48939E: fstp    [esp+38h+var_24]
0x4893A2: add     esp, 8
0x4893A5: fld     [esp+30h+var_24]
0x4893A9: pop     ebx
0x4893AA: pop     edi
0x4893AB: pop     esi
0x4893AC: add     esp, 24h
0x4893AF: retn    0Ch
0x4893B2: cmp     byte ptr [esi+4], 14h
0x4893B6: jnz     short loc_4893A5
0x4893B8: mov     eax, ds:0B333C4h
0x4893BD: mov     ebx, [eax]
0x4893BF: mov     ecx, esi
0x4893C1: call    TESObjectARMO_GetArmorSkillAV
0x4893C6: mov     ecx, ds:0B333C4h
0x4893CC: mov     edx, [ebx+288h]
0x4893D2: push    eax
0x4893D3: call    edx
0x4893D5: fstp    [esp+30h+var_10]
0x4893D9: push    0
0x4893DB: mov     ecx, edi
0x4893DD: call    ContainerEntryExtraData_GetHealth
0x4893E2: fstp    [esp+30h+var_C]
0x4893E6: push    esi
0x4893E7: call    TESHealthForm_GetHealthForForm
0x4893EC: test    eax, eax
0x4893EE: mov     [esp+34h+var_4], eax
0x4893F2: fild    [esp+34h+var_4]
0x4893F6: jge     short loc_4893FE
0x4893F8: fadd    dword ptr ds:0A2FC78h
0x4893FE: fdivr   [esp+34h+var_C]
0x489402: movzx   eax, word ptr [esi+0E4h]
0x489409: mov     [esp+34h+var_4], eax
0x48940D: sub     esp, 8
0x489410: fstp    dword ptr [esp+3Ch+var_C]
0x489414: fild    [esp+3Ch+var_4]
0x489418: fnstcw  word ptr [esp+3Ch+var_24]
0x48941C: fdiv    qword ptr ds:0A309F0h
0x489422: movzx   eax, word ptr [esp+3Ch+var_24]
0x489427: or      eax, 0C00h
0x48942C: fstp    [esp+3Ch+var_4]
0x489430: fld     dword ptr [esp+3Ch+var_C]
0x489434: fstp    [esp+3Ch+var_34]; float
0x489438: fld     dword ptr [esp+3Ch+var_1C]
0x48943C: fstp    [esp+3Ch+var_38]; float
0x489440: fld     [esp+3Ch+var_10]
0x489444: fstp    [esp+3Ch+var_3C]; float
0x489447: fld     [esp+3Ch+var_4]
0x48944B: mov     [esp+3Ch+var_4], eax
0x48944F: fldcw   word ptr [esp+3Ch+var_4]
0x489453: fistp   [esp+3Ch+var_4]
0x489457: movzx   ecx, word ptr [esp+3Ch+var_4]
0x48945C: push    ecx; int
0x48945D: fldcw   word ptr [esp+40h+var_24]
0x489461: call    Calc_ArmorRating
0x489466: fstp    [esp+40h+var_34]; float
0x48946A: add     esp, 0Ch
0x48946D: call    sub_484370
0x489472: fstp    [esp+34h+var_24]
0x489476: fld     [esp+34h+var_24]
0x48947A: add     esp, 4
0x48947D: pop     ebx
0x48947E: pop     edi
0x48947F: pop     esi
0x489480: add     esp, 24h
0x489483: retn    0Ch
0x489486: fld     dword ptr [eax+4]
0x489489: pop     edi
0x48948A: fnstcw  word ptr [esp+28h+var_24]
0x48948E: pop     esi
0x48948F: movzx   eax, word ptr [esp+24h+var_24]
0x489493: or      eax, 0C00h
0x489498: mov     [esp+24h+var_4], eax
0x48949C: fldcw   word ptr [esp+24h+var_4]
0x4894A0: fistp   [esp+24h+var_4]
0x4894A4: mov     dl, byte ptr [esp+24h+var_4]
0x4894A8: movzx   eax, dl
0x4894AB: mov     [esp+24h+var_4], eax
0x4894AF: fldcw   word ptr [esp+24h+var_24]
0x4894B2: fild    [esp+24h+var_4]
0x4894B6: fstp    [esp+24h+var_24]
0x4894B9: fld     [esp+24h+var_24]
0x4894BC: add     esp, 24h
0x4894BF: retn    0Ch
