0x9646B0: fld     dword ptr ds:0A79DB4h
0x9646B6: mov     eax, [esp+arg_C]
0x9646BA: mov     ecx, [esp+arg_4]
0x9646BE: sub     esp, 5Ch
0x9646C1: push    20h ; ' '; int
0x9646C3: sub     esp, 0Ch
0x9646C6: fstp    [esp+6Ch+var_64]; float
0x9646CA: fld     dword ptr ds:0A37080h
0x9646D0: fstp    [esp+6Ch+var_68]; float
0x9646D4: fld     [esp+6Ch+arg_0]
0x9646D8: fstp    [esp+6Ch+var_6C]; float
0x9646DB: push    eax; int
0x9646DC: push    ecx; int
0x9646DD: lea     ecx, [esp+74h+var_50]
0x9646E1: call    sub_974600
0x9646E6: mov     edx, [esp+5Ch+arg_10]
0x9646EA: mov     eax, [esp+5Ch+arg_8]
0x9646EE: push    edx
0x9646EF: push    eax
0x9646F0: lea     ecx, [esp+64h+var_50]
0x9646F4: call    sub_96F170
0x9646F9: lea     ecx, [esp+5Ch+var_50]
0x9646FD: call    sub_680CC0
0x964702: mov     ecx, [esp+5Ch+arg_14]
0x964706: fstp    dword ptr [ecx]
0x964708: lea     ecx, [esp+5Ch+var_50]
0x96470C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x964711: cmp     eax, 3
0x964714: jz      short loc_96472A
0x964716: lea     ecx, [esp+5Ch+var_50]
0x96471A: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96471F: cmp     eax, 2
0x964722: jz      short loc_96472A
0x964724: xor     al, al
0x964726: add     esp, 5Ch
0x964729: retn
0x96472A: lea     ecx, [esp+5Ch+var_50]
0x96472E: call    sub_4E7DE0
0x964733: cmp     [esp+5Ch+arg_1C], 0
0x964738: mov     edx, [eax]
0x96473A: mov     ecx, [esp+5Ch+arg_18]
0x96473E: mov     [ecx], edx
0x964740: mov     edx, [eax+4]
0x964743: mov     [ecx+4], edx
0x964746: mov     eax, [eax+8]
0x964749: mov     [ecx+8], eax
0x96474C: jz      short loc_9647A1
0x96474E: lea     ecx, [esp+5Ch+var_50]; this
0x964752: call    TESObjectREFR_GetPosition
0x964757: mov     edx, [eax]
0x964759: mov     ecx, [esp+5Ch+arg_20]
0x964760: mov     [ecx], edx
0x964762: mov     edx, [eax+4]
0x964765: mov     [ecx+4], edx
0x964768: mov     eax, [eax+8]
0x96476B: mov     [ecx+8], eax
0x96476E: fld     dword ptr [ecx]
0x964770: mov     eax, [esp+5Ch+arg_24]
0x964777: fchs
0x964779: fstp    [esp+5Ch+var_5C]
0x96477C: fld     dword ptr [ecx+4]
0x96477F: fchs
0x964781: fstp    [esp+5Ch+var_58]
0x964785: mov     edx, [esp+5Ch+var_58]
0x964789: fld     dword ptr [ecx+8]
0x96478C: mov     ecx, [esp+5Ch+var_5C]
0x96478F: fchs
0x964791: mov     [eax], ecx
0x964793: fstp    [esp+5Ch+var_54]
0x964797: mov     ecx, [esp+5Ch+var_54]
0x96479B: mov     [eax+4], edx
0x96479E: mov     [eax+8], ecx
0x9647A1: mov     al, 1
0x9647A3: add     esp, 5Ch
0x9647A6: retn
