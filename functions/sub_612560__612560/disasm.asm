0x612560: sub     esp, 0Ch
0x612563: fldz
0x612565: push    edi
0x612566: mov     edi, [esp+10h+arg_4]
0x61256A: fst     [esp+10h+var_C]
0x61256E: test    edi, edi
0x612570: jz      loc_612630
0x612576: push    edi
0x612577: fstp    st
0x612579: call    TESHealthForm_GetHealthForForm
0x61257E: add     esp, 4
0x612581: test    eax, eax
0x612583: jz      loc_61262C
0x612589: push    ebx
0x61258A: push    esi
0x61258B: mov     esi, [esp+18h+arg_0]
0x61258F: mov     ebx, [esi]
0x612591: mov     ecx, edi
0x612593: call    TESObjectWEAP_GetWeaponSkillAV
0x612598: push    eax
0x612599: mov     eax, [ebx+288h]
0x61259F: mov     ecx, esi
0x6125A1: call    eax
0x6125A3: fstp    [esp+18h+var_4]
0x6125A7: mov     edx, [esi]
0x6125A9: mov     eax, [edx+288h]
0x6125AF: push    7
0x6125B1: mov     ecx, esi
0x6125B3: call    eax
0x6125B5: fstp    [esp+18h+var_8]
0x6125B9: mov     edx, [esi]
0x6125BB: mov     eax, [edx+284h]
0x6125C1: push    0
0x6125C3: mov     ecx, esi
0x6125C5: call    eax
0x6125C7: mov     [esp+18h+arg_4], eax
0x6125CB: fild    [esp+18h+arg_4]
0x6125CF: mov     ecx, esi; this
0x6125D1: fstp    [esp+18h+var_C]
0x6125D5: call    Actor_GetFatigueFraction
0x6125DA: fstp    [esp+18h+arg_4]
0x6125DE: sub     esp, 8
0x6125E1: fld     dword ptr ds:0A30634h
0x6125E7: fstp    [esp+20h+var_1C]; float
0x6125EB: fld     [esp+20h+arg_4]
0x6125EF: fstp    [esp+20h+var_20]; float
0x6125F2: fld     [esp+20h+var_C]
0x6125F6: call    Double_To_SInt32
0x6125FB: fld     [esp+20h+var_8]
0x6125FF: push    eax; int
0x612600: call    Double_To_SInt32
0x612605: fld     [esp+24h+var_4]
0x612609: push    eax; int
0x61260A: call    Double_To_SInt32
0x61260F: fld     [esp+28h+arg_8]
0x612613: push    eax; int
0x612614: push    ecx
0x612615: mov     ecx, [esp+30h+arg_C]
0x612619: fstp    [esp+30h+var_30]; float
0x61261C: push    ecx; int
0x61261D: push    edi; int
0x61261E: call    sub_547140
0x612623: fstp    [esp+38h+var_C]
0x612627: add     esp, 20h
0x61262A: pop     esi
0x61262B: pop     ebx
0x61262C: fld     [esp+10h+var_C]
0x612630: pop     edi
0x612631: add     esp, 0Ch
0x612634: retn
