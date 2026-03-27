0x693920: push    ecx
0x693921: push    ebx
0x693922: mov     ebx, ecx
0x693924: mov     ecx, [ebx+20h]; this
0x693927: test    ecx, ecx
0x693929: jz      short loc_69399C
0x69392B: push    esi
0x69392C: call    MagicTarget_GetParentActor
0x693931: mov     esi, eax
0x693933: test    esi, esi
0x693935: jz      short loc_69399B
0x693937: mov     ecx, [esi+58h]
0x69393A: mov     eax, [ecx]
0x69393C: mov     edx, [eax+0ECh]
0x693942: push    edi
0x693943: push    1
0x693945: call    edx
0x693947: mov     edi, eax
0x693949: test    edi, edi
0x69394B: jz      short loc_693963
0x69394D: fld     dword ptr [ebx+18h]
0x693950: mov     eax, [esi]
0x693952: mov     edx, [eax+2C4h]
0x693958: push    0
0x69395A: push    ecx
0x69395B: fstp    dword ptr [esp+18h+var_18]
0x69395E: push    edi
0x69395F: mov     ecx, esi
0x693961: call    edx
0x693963: cmp     byte ptr ds:0B3B908h, 0
0x69396A: jz      short loc_69399A
0x69396C: fld     dword ptr [ebx+18h]
0x69396F: sub     esp, 8
0x693972: fstp    [esp+18h+var_4]
0x693976: mov     ecx, edi
0x693978: fld     [esp+18h+var_4]
0x69397C: fstp    [esp+18h+var_18]
0x69397F: call    sub_488DF0
0x693984: push    eax
0x693985: mov     ecx, esi; this
0x693987: call    TESObjectREFR_GetName
0x69398C: push    eax
0x69398D: push    offset aSSSTakes0_2f_0; "%s's %s takes %0.2f disintegrate weapon"...
0x693992: call    Interface_ConsolePrint
0x693997: add     esp, 14h
0x69399A: pop     edi
0x69399B: pop     esi
0x69399C: pop     ebx
0x69399D: pop     ecx
0x69399E: retn
