0x636674: mov     ecx, edi
0x636676: call    eax
0x636678: lea     ecx, [esp+arg_1C]
0x63667C: mov     ebp, eax
0x63667E: push    ecx
0x63667F: mov     ecx, ebp
0x636681: call    sub_625290
0x636686: mov     edx, [esi]
0x636688: mov     ecx, ebp; this
0x63668A: mov     [esp+arg_40], edx
0x63668E: call    TESObjectREFR_GetWorldSpace
0x636693: push    eax
0x636694: mov     ecx, ebp; this
0x636696: call    TESObjectREFR_GetParentCell
0x63669B: mov     ecx, [esp+4+arg_1C]
0x63669F: mov     edx, [esp+4+arg_20]
0x6366A3: push    eax
0x6366A4: sub     esp, 0Ch
0x6366A7: mov     eax, esp
0x6366A9: mov     [eax], ecx
0x6366AB: mov     ecx, [esp+14h+arg_24]
0x6366AF: mov     [eax+4], edx
0x6366B2: mov     edx, [esp+14h+arg_40]
0x6366B6: jmp     short loc_6366F6
0x6366B8: mov     ecx, [esi]
0x6366BA: push    edi
0x6366BB: lea     edx, [esp+4+arg_1C]
0x6366BF: mov     [esp+4+arg_40], ecx
0x6366C3: push    edx
0x6366C4: mov     ecx, ebx
0x6366C6: call    sub_566B30
0x6366CB: push    edi
0x6366CC: mov     ecx, ebx
0x6366CE: mov     ebp, eax
0x6366D0: call    sub_566940
0x6366D5: push    eax
0x6366D6: push    edi
0x6366D7: mov     ecx, ebx
0x6366D9: call    sub_566A40
0x6366DE: mov     ecx, [ebp+0]
0x6366E1: mov     edx, [ebp+4]
0x6366E4: push    eax
0x6366E5: sub     esp, 0Ch
0x6366E8: mov     eax, esp
0x6366EA: mov     [eax], ecx
0x6366EC: mov     ecx, [ebp+8]
0x6366EF: mov     [eax+4], edx
0x6366F2: mov     edx, [esp+14h+arg_40]
0x6366F6: mov     [eax+8], ecx
0x6366F9: mov     eax, [edx+3DCh]
0x6366FF: push    edi
0x636700: mov     ecx, esi
0x636702: call    eax
0x636704: test    al, al
0x636706: jz      loc_636FBE
0x63670C: mov     ecx, esi
0x63670E: call    sub_64ADA0
0x636713: test    al, al
0x636715: jz      short loc_636750
0x636717: mov     eax, [ebx+1Ch]
0x63671A: mov     ecx, eax
0x63671C: shr     ecx, 1
0x63671E: test    cl, 1
0x636721: jnz     short loc_636750
0x636723: shr     eax, 2
0x636726: test    al, 1
0x636728: jnz     short loc_636750
0x63672A: mov     ebx, [ebx+18h]
0x63672D: mov     edi, [esi]
0x63672F: push    ebx
0x636730: call    sub_673980
0x636735: mov     edx, [edi+17Ch]
0x63673B: add     esp, 4
0x63673E: sub     eax, 1
0x636741: push    eax
0x636742: mov     ecx, esi
0x636744: call    edx
0x636746: pop     edi
0x636747: pop     esi
0x636748: pop     ebp
0x636749: pop     ebx
0x63674A: add     esp, 28h
0x63674D: retn    10h
0x636750: mov     ecx, [ebx+24h]
0x636753: test    ecx, ecx
0x636755: jz      loc_636867
0x63675B: call    sub_5697E0
0x636760: mov     ebp, eax
0x636762: test    ebp, ebp
0x636764: jz      loc_636867
0x63676A: mov     eax, [ebp+0]
0x63676D: mov     edx, [eax+190h]
0x636773: mov     ecx, ebp
0x636775: call    edx
0x636777: test    al, al
0x636779: jz      loc_636867
0x63677F: cmp     byte ptr [ebx+20h], 16h
0x636783: mov     ecx, ebp
0x636785: jz      loc_6368CB
0x63678B: mov     eax, [ebp+0]
0x63678E: mov     edx, [eax+174h]
0x636794: call    edx
0x636796: push    eax
0x636797: lea     eax, [esp+1Ch+arg_4]
0x63679B: push    eax
0x63679C: lea     ecx, [esi+0D4h]
0x6367A2: call    sub_4121A0
0x6367A7: mov     ecx, eax
0x6367A9: call    sub_404C90
0x6367AE: fstp    [esp+18h+arg_28]
0x6367B2: mov     ecx, offset flt_B36A88
0x6367B7: call    GameSetting_GetSafeFloatPointer
0x6367BC: fld     [esp+18h+arg_28]
0x6367C0: fld     dword ptr [eax]
0x6367C2: fcompp
0x6367C4: fnstsw  ax
0x6367C6: test    ah, 5
0x6367C9: jnp     short loc_6367E9
0x6367CB: fld     [esp+18h+arg_0]
0x6367CF: fild    [esp+18h+var_4]
0x6367D3: fcompp
0x6367D5: fnstsw  ax
0x6367D7: test    ah, 5
0x6367DA: jp      loc_636867
0x6367E0: cmp     byte ptr [esi+0D0h], 0
0x6367E7: jz      short loc_636867
0x6367E9: mov     ecx, [esi]
0x6367EB: mov     edx, [ebp+0]
0x6367EE: mov     eax, [edx+174h]
0x6367F4: mov     [esp+18h+arg_24], ecx
0x6367F8: mov     ecx, ebp
0x6367FA: call    eax
0x6367FC: mov     ecx, ebp; this
0x6367FE: mov     [esp+18h+arg_28], eax
0x636802: call    TESObjectREFR_GetWorldSpace
0x636807: push    eax
0x636808: mov     ecx, ebp; this
0x63680A: call    TESObjectREFR_GetParentCell
0x63680F: mov     ecx, [esp+1Ch+arg_28]
0x636813: mov     edx, [ecx]
0x636815: push    eax
0x636816: sub     esp, 0Ch
0x636819: mov     eax, esp
0x63681B: mov     [eax], edx
0x63681D: mov     edx, [ecx+4]
0x636820: mov     ecx, [ecx+8]
0x636823: mov     [eax+4], edx
0x636826: mov     edx, [esp+2Ch+arg_24]
0x63682A: mov     [eax+8], ecx
0x63682D: mov     eax, [edx+3DCh]
0x636833: push    edi
0x636834: mov     ecx, esi
0x636836: call    eax
0x636838: test    al, al
0x63683A: jz      loc_636FBE
0x636840: mov     edx, [ebp+0]
0x636843: mov     eax, [edx+174h]
0x636849: mov     ecx, ebp
0x63684B: call    eax
0x63684D: mov     ecx, [eax]
0x63684F: mov     [esi+0D4h], ecx
0x636855: mov     edx, [eax+4]
0x636858: mov     [esi+0D8h], edx
0x63685E: mov     eax, [eax+8]
0x636861: mov     [esi+0DCh], eax
0x636867: mov     eax, [esi]
0x636869: mov     edx, [eax+36Ch]
0x63686F: mov     ecx, esi
0x636871: call    edx
0x636873: test    eax, eax
0x636875: jz      loc_636956
0x63687B: mov     eax, [edi]
0x63687D: mov     edx, [eax+380h]
0x636883: mov     ecx, edi
0x636885: call    edx
0x636887: test    eax, eax
0x636889: jz      short loc_6368A0
0x63688B: mov     eax, [esi]
0x63688D: mov     edx, [eax+36Ch]
0x636893: mov     ecx, esi
0x636895: call    edx
0x636897: cmp     eax, 4
0x63689A: jz      loc_636956
0x6368A0: mov     ecx, dword ptr [esp+30h+var_20]
0x6368A4: test    ecx, ecx
0x6368A6: jz      short loc_6368B5
0x6368A8: call    sub_4D74B0
0x6368AD: test    al, al
0x6368AF: jnz     loc_636FBE
0x6368B5: mov     eax, [edi]
0x6368B7: mov     edx, [eax+320h]
0x6368BD: mov     ecx, edi
0x6368BF: call    edx
0x6368C1: pop     edi
0x6368C2: pop     esi
0x6368C3: pop     ebp
0x6368C4: pop     ebx
0x6368C5: add     esp, 28h
0x6368C8: retn    10h
0x6368CB: call    sub_5E3290
0x6368D0: test    al, al
0x6368D2: jz      short loc_636867
0x6368D4: push    0
0x6368D6: push    ebp
0x6368D7: mov     ecx, edi
0x6368D9: call    TesObjectREF_GetDistance
0x6368DE: fcomp   dword ptr ds:0A6B324h
0x6368E4: fnstsw  ax
0x6368E6: test    ah, 5
0x6368E9: jp      loc_636867
0x6368EF: mov     edx, [esi]
0x6368F1: mov     eax, [edx+410h]
0x6368F7: mov     ecx, esi
0x6368F9: call    eax
0x6368FB: test    eax, eax
0x6368FD: jz      loc_636867
0x636903: mov     ecx, eax
0x636905: call    sub_683AA0
0x63690A: test    al, al
0x63690C: jz      loc_636867
0x636912: lea     ecx, [esp+18h+arg_4]
0x636916: push    ecx
0x636917: mov     ecx, ebp
0x636919: call    sub_625290
0x63691E: lea     edx, [esp+18h+arg_4]
0x636922: push    edx
0x636923: mov     ecx, edi
0x636925: call    sub_4D7E30
0x63692A: fcomp   dword ptr ds:0A6B324h
0x636930: fnstsw  ax
0x636932: test    ah, 41h
0x636935: jnz     loc_636867
0x63693B: mov     eax, [edi]
0x63693D: mov     edx, [eax+1CCh]
0x636943: lea     ecx, [esp+18h+arg_4]
0x636947: push    ecx
0x636948: mov     ecx, edi
0x63694A: call    edx
0x63694C: pop     edi
0x63694D: pop     esi
0x63694E: pop     ebp
0x63694F: pop     ebx
0x636950: add     esp, 28h
0x636953: retn    10h
0x636956: mov     eax, [ebx+1Ch]
0x636959: shr     eax, 0Dh
0x63695C: test    al, 1
0x63695E: jz      short loc_636967
0x636960: mov     eax, 201h
0x636965: jmp     short loc_6369C0
0x636967: mov     eax, [esp+30h+arg_14]
0x63696B: cmp     eax, 0FFFFFFFFh
0x63696E: jnz     short loc_6369C0
0x636970: mov     eax, [esi+8]
0x636973: test    eax, eax
0x636975: mov     [esp+30h+arg_10], 0
0x63697A: jz      short loc_63698C
0x63697C: mov     al, [eax+20h]
0x63697F: cmp     al, 0Fh
0x636981: jz      short loc_636987
0x636983: cmp     al, 0Ch
0x636985: jnz     short loc_63698C
0x636987: mov     [esp+30h+arg_10], 1
0x63698C: mov     edx, [esp+30h+var_1C]
0x636990: mov     ecx, dword ptr [esp+30h+arg_10]
0x636994: push    1; char
0x636996: lea     eax, [edx+edx]
0x636999: push    ecx; char
0x63699A: mov     dword ptr [esp+38h+arg_10], eax
0x63699E: fild    dword ptr [esp+38h+arg_10]
0x6369A2: sub     esp, 0Ch
0x6369A5: mov     ecx, esi
0x6369A7: fstp    dword ptr [esp+44h+var_3C]; char
0x6369AB: fild    [esp+44h+var_1C]
0x6369AF: fstp    [esp+44h+var_40]; float
0x6369B3: fld     [esp+44h+var_14]
0x6369B7: fstp    [esp+44h+var_44]; float
0x6369BA: push    edi; Concurrency::details::SchedulerBase *
0x6369BB: call    sub_629F40
0x6369C0: mov     edx, [esi]
0x6369C2: push    eax
0x6369C3: mov     eax, [edx+238h]
0x6369C9: push    edi
0x6369CA: mov     ecx, esi
0x6369CC: call    eax
0x6369CE: push    edi
0x6369CF: lea     ecx, [esp+3Ch+var_18]
0x6369D3: push    ecx
0x6369D4: mov     ecx, ebx
0x6369D6: call    sub_566B30
0x6369DB: mov     ebp, [esp+38h+var_28]
0x6369DF: test    ebp, ebp
0x6369E1: jz      short loc_636A1F
0x6369E3: mov     edx, [edi]
0x6369E5: mov     eax, [edx+380h]
0x6369EB: mov     ecx, edi
0x6369ED: call    eax
0x6369EF: cmp     ebp, eax
0x6369F1: jnz     short loc_636A1F
0x6369F3: mov     edx, [edi]
0x6369F5: mov     eax, [edx+380h]
0x6369FB: mov     ecx, edi
0x6369FD: call    eax
0x6369FF: lea     ecx, [esp+38h+var_C]
0x636A03: push    ecx
0x636A04: mov     ecx, eax
0x636A06: call    sub_625290
0x636A0B: mov     edx, [eax]
0x636A0D: mov     [esp+38h+var_18], edx
0x636A11: mov     ecx, [eax+4]
0x636A14: mov     [esp+38h+var_14], ecx
0x636A18: mov     edx, [eax+8]
0x636A1B: mov     [esp+38h+var_10], edx
0x636A1F: fild    [esp+38h+var_24]
0x636A23: mov     ebp, [esi]
0x636A25: push    ecx
0x636A26: mov     ecx, ebx
0x636A28: fstp    dword ptr [esp+3Ch+var_3C]
0x636A2B: push    edi
0x636A2C: call    sub_566940
0x636A31: push    eax
0x636A32: push    edi
0x636A33: mov     ecx, ebx
0x636A35: call    sub_566A40
0x636A3A: mov     edx, [ebp+414h]
0x636A40: push    eax
0x636A41: lea     eax, [esp+44h+var_18]
0x636A45: push    eax
0x636A46: push    edi
0x636A47: mov     ecx, esi
0x636A49: call    edx
0x636A4B: pop     edi
0x636A4C: pop     esi
0x636A4D: pop     ebp
0x636A4E: pop     ebx
0x636A4F: add     esp, 28h
0x636A52: retn    10h
