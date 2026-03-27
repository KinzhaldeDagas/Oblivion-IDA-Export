0x5EC400: push    0FFFFFFFFh
0x5EC402: push    offset SEH_5EC400
0x5EC407: mov     eax, large fs:0
0x5EC40D: push    eax
0x5EC40E: sub     esp, 0A8h
0x5EC414: push    ebx
0x5EC415: push    ebp
0x5EC416: push    esi
0x5EC417: push    edi
0x5EC418: mov     eax, ds:0B30AACh
0x5EC41D: xor     eax, esp
0x5EC41F: push    eax
0x5EC420: lea     eax, [esp+0C8h+var_C]
0x5EC427: mov     large fs:0, eax
0x5EC42D: mov     esi, ecx
0x5EC42F: call    sub_5E1B30
0x5EC434: test    al, al
0x5EC436: jz      loc_5ECCB4
0x5EC43C: fld     dword ptr ds:0B148DCh
0x5EC442: fcom    qword ptr ds:0A2F928h
0x5EC448: fnstsw  ax
0x5EC44A: test    ah, 5
0x5EC44D: jp      short loc_5EC453
0x5EC44F: fstp    st
0x5EC451: fld1
0x5EC453: fstp    [esp+0C8h+var_98]
0x5EC457: fld     [esp+0C8h+arg_0]
0x5EC45E: fld     [esp+0C8h+var_98]
0x5EC462: fcom    st(1)
0x5EC464: fnstsw  ax
0x5EC466: test    ah, 5
0x5EC469: jp      loc_5ECCB0
0x5EC46F: fxch    st(1)
0x5EC471: fst     [esp+0C8h+var_A8]
0x5EC475: fcompp
0x5EC477: fnstsw  ax
0x5EC479: test    ah, 41h
0x5EC47C: jnz     loc_5EC86C
0x5EC482: fld     [esp+0C8h+arg_10]
0x5EC489: fsub    [esp+0C8h+arg_4]
0x5EC490: fstp    [esp+0C8h+var_94]
0x5EC494: fld     [esp+0C8h+arg_14]
0x5EC49B: fsub    [esp+0C8h+arg_8]
0x5EC4A2: fstp    [esp+0C8h+var_90]
0x5EC4A6: fld     [esp+0C8h+arg_18]
0x5EC4AD: fsub    [esp+0C8h+arg_C]
0x5EC4B4: fstp    [esp+0C8h+var_9C]
0x5EC4B8: fld     [esp+0C8h+var_94]
0x5EC4BC: fld     qword ptr ds:0A3D0C0h
0x5EC4C2: fmul    st(1), st
0x5EC4C4: fxch    st(1)
0x5EC4C6: fstp    [esp+0C8h+var_94]
0x5EC4CA: fld     [esp+0C8h+var_90]
0x5EC4CE: fmul    st, st(1)
0x5EC4D0: fstp    [esp+0C8h+var_1C]
0x5EC4D7: fmul    [esp+0C8h+var_9C]
0x5EC4DB: fstp    [esp+0C8h+var_A4]
0x5EC4DF: fld     dword ptr ds:0A524B0h
0x5EC4E5: sub     esp, 8
0x5EC4E8: fstp    dword ptr [esp+0D0h+var_D0+4]; float
0x5EC4EC: fld     dword ptr ds:0A6E68Ch
0x5EC4F2: fstp    dword ptr [esp+0D0h+var_D0]; float
0x5EC4F5: call    Rand4
0x5EC4FA: fstp    [esp+0D0h+var_8C]
0x5EC4FE: fld     dword ptr ds:0A524B0h
0x5EC504: fstp    dword ptr [esp+0D0h+var_D0+4]; float
0x5EC508: fld     dword ptr ds:0A6E68Ch
0x5EC50E: fstp    dword ptr [esp+0D0h+var_D0]; float
0x5EC511: call    Rand4
0x5EC516: fstp    [esp+0D0h+var_88]
0x5EC51A: fld     dword ptr ds:0A524B0h
0x5EC520: fstp    dword ptr [esp+0D0h+var_D0+4]; float
0x5EC524: fld     dword ptr ds:0A6E68Ch
0x5EC52A: fstp    dword ptr [esp+0D0h+var_D0]; float
0x5EC52D: call    Rand4
0x5EC532: fstp    [esp+0D0h+var_84]
0x5EC536: add     esp, 8
0x5EC539: fld     [esp+0C8h+arg_1C]
0x5EC540: fadd    [esp+0C8h+var_8C]
0x5EC544: fstp    [esp+0C8h+var_9C]
0x5EC548: fld     [esp+0C8h+arg_20]
0x5EC54F: fadd    [esp+0C8h+var_88]
0x5EC553: fstp    [esp+0C8h+var_90]
0x5EC557: fld     [esp+0C8h+arg_24]
0x5EC55E: fadd    [esp+0C8h+var_84]
0x5EC562: fstp    [esp+0C8h+var_A0]
0x5EC566: fld     [esp+0C8h+var_9C]
0x5EC56A: fadd    [esp+0C8h+var_94]
0x5EC56E: fstp    [esp+0C8h+var_9C]
0x5EC572: fld     [esp+0C8h+var_90]
0x5EC576: fadd    [esp+0C8h+var_1C]
0x5EC57D: fstp    [esp+0C8h+var_90]
0x5EC581: fld     [esp+0C8h+var_A0]
0x5EC585: fadd    [esp+0C8h+var_A4]
0x5EC589: fstp    [esp+0C8h+var_A0]
0x5EC58D: fld     [esp+0C8h+var_9C]
0x5EC591: fstp    [esp+0C8h+var_80]
0x5EC595: mov     eax, [esp+0C8h+var_80]
0x5EC599: fld     [esp+0C8h+var_90]
0x5EC59D: mov     [esp+0C8h+var_B4], eax
0x5EC5A1: fstp    [esp+0C8h+var_7C]
0x5EC5A5: mov     ecx, [esp+0C8h+var_7C]
0x5EC5A9: fld     [esp+0C8h+var_A0]
0x5EC5AD: mov     [esp+0C8h+var_B0], ecx
0x5EC5B1: fstp    [esp+0C8h+var_78]
0x5EC5B5: mov     edx, [esp+0C8h+var_78]
0x5EC5B9: lea     ecx, [esp+0C8h+var_B4]
0x5EC5BD: mov     [esp+0C8h+var_AC], edx
0x5EC5C1: call    sub_43F350
0x5EC5C6: fstp    st
0x5EC5C8: mov     eax, [esi]
0x5EC5CA: mov     edx, [eax+170h]
0x5EC5D0: mov     ecx, esi
0x5EC5D2: xor     edi, edi
0x5EC5D4: call    edx
0x5EC5D6: mov     ebx, eax
0x5EC5D8: test    ebx, ebx
0x5EC5DA: jz      short loc_5EC5EE
0x5EC5DC: mov     eax, [esi]
0x5EC5DE: mov     edx, [eax+190h]
0x5EC5E4: mov     ecx, esi
0x5EC5E6: call    edx
0x5EC5E8: test    al, al
0x5EC5EA: jz      short loc_5EC5EE
0x5EC5EC: mov     edi, ebx
0x5EC5EE: mov     eax, [edi+24h]
0x5EC5F1: mov     edx, [eax+38h]
0x5EC5F4: lea     ecx, [edi+24h]
0x5EC5F7: call    edx
0x5EC5F9: test    eax, eax
0x5EC5FB: jz      loc_5EC6BC
0x5EC601: mov     eax, [esi]
0x5EC603: mov     edx, [eax+170h]
0x5EC609: mov     ecx, esi
0x5EC60B: xor     edi, edi
0x5EC60D: call    edx
0x5EC60F: mov     ebx, eax
0x5EC611: test    ebx, ebx
0x5EC613: jz      short loc_5EC627
0x5EC615: mov     eax, [esi]
0x5EC617: mov     edx, [eax+190h]
0x5EC61D: mov     ecx, esi
0x5EC61F: call    edx
0x5EC621: test    al, al
0x5EC623: jz      short loc_5EC627
0x5EC625: mov     edi, ebx
0x5EC627: mov     eax, [edi+24h]
0x5EC62A: mov     edx, [eax+38h]
0x5EC62D: lea     ecx, [edi+24h]
0x5EC630: call    edx
0x5EC632: cmp     byte ptr [eax], 0
0x5EC635: jz      loc_5EC6BC
0x5EC63B: mov     eax, [esi]
0x5EC63D: mov     edx, [eax+170h]
0x5EC643: mov     ecx, esi
0x5EC645: xor     edi, edi
0x5EC647: call    edx
0x5EC649: mov     ebx, eax
0x5EC64B: test    ebx, ebx
0x5EC64D: jz      short loc_5EC661
0x5EC64F: mov     eax, [esi]
0x5EC651: mov     edx, [eax+190h]
0x5EC657: mov     ecx, esi
0x5EC659: call    edx
0x5EC65B: test    al, al
0x5EC65D: jz      short loc_5EC661
0x5EC65F: mov     edi, ebx
0x5EC661: mov     eax, [edi+24h]
0x5EC664: mov     edx, [eax+38h]
0x5EC667: lea     ecx, [edi+24h]
0x5EC66A: call    edx
0x5EC66C: mov     ecx, [esp+0C8h+var_B4]
0x5EC670: mov     edx, [esp+0C8h+var_B0]
0x5EC674: push    0; int
0x5EC676: push    0FFFFFFFFh; float
0x5EC678: push    0; float
0x5EC67A: push    eax; int
0x5EC67B: sub     esp, 0Ch
0x5EC67E: mov     eax, esp
0x5EC680: mov     [eax], ecx
0x5EC682: mov     ecx, [esp+0E4h+var_AC]
0x5EC686: mov     [eax+4], edx
0x5EC689: mov     edx, [esp+0E4h+arg_10]
0x5EC690: mov     [eax+8], ecx
0x5EC693: mov     ecx, [esp+0E4h+arg_14]
0x5EC69A: sub     esp, 0Ch
0x5EC69D: mov     eax, esp
0x5EC69F: mov     [eax], edx
0x5EC6A1: mov     edx, [esp+0F0h+arg_18]
0x5EC6A8: mov     [eax+4], ecx
0x5EC6AB: mov     ecx, esi; this
0x5EC6AD: mov     [eax+8], edx
0x5EC6B0: call    TESObjectREFR_GetParentCell
0x5EC6B5: mov     ecx, eax
0x5EC6B7: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>(void)
0x5EC6BC: mov     eax, [esi]
0x5EC6BE: mov     edx, [eax+170h]
0x5EC6C4: mov     ecx, esi
0x5EC6C6: xor     ebx, ebx
0x5EC6C8: call    edx
0x5EC6CA: mov     edi, eax
0x5EC6CC: test    edi, edi
0x5EC6CE: jz      short loc_5EC6E2
0x5EC6D0: mov     eax, [esi]
0x5EC6D2: mov     edx, [eax+190h]
0x5EC6D8: mov     ecx, esi
0x5EC6DA: call    edx
0x5EC6DC: test    al, al
0x5EC6DE: jz      short loc_5EC6E2
0x5EC6E0: mov     ebx, edi
0x5EC6E2: mov     eax, [ebx+24h]
0x5EC6E5: mov     edx, [eax+40h]
0x5EC6E8: lea     ecx, [ebx+24h]
0x5EC6EB: call    edx
0x5EC6ED: test    eax, eax
0x5EC6EF: jz      loc_5EC849
0x5EC6F5: mov     eax, [esi]
0x5EC6F7: mov     edx, [eax+170h]
0x5EC6FD: mov     ecx, esi
0x5EC6FF: xor     edi, edi
0x5EC701: call    edx
0x5EC703: mov     ebx, eax
0x5EC705: test    ebx, ebx
0x5EC707: jz      short loc_5EC71B
0x5EC709: mov     eax, [esi]
0x5EC70B: mov     edx, [eax+190h]
0x5EC711: mov     ecx, esi
0x5EC713: call    edx
0x5EC715: test    al, al
0x5EC717: jz      short loc_5EC71B
0x5EC719: mov     edi, ebx
0x5EC71B: mov     eax, [edi+24h]
0x5EC71E: mov     edx, [eax+40h]
0x5EC721: lea     ecx, [edi+24h]
0x5EC724: call    edx
0x5EC726: cmp     byte ptr [eax], 0
0x5EC729: jz      loc_5EC849
0x5EC72F: mov     ecx, esi; this
0x5EC731: call    TESObjectREFR_GetParentCell
0x5EC736: push    esi; TESObjectREFR *
0x5EC737: call    sub_4C9BE0
0x5EC73C: add     esp, 4
0x5EC73F: mov     ecx, esi; this
0x5EC741: mov     edi, eax
0x5EC743: call    TESObjectREFR_GetParentCell
0x5EC748: mov     ecx, eax; this
0x5EC74A: add     edi, 2
0x5EC74D: call    TESObjectCELL_GetNiNode?
0x5EC752: test    eax, eax
0x5EC754: jz      short loc_5EC783
0x5EC756: movzx   ecx, word ptr [eax+0B6h]
0x5EC75D: cmp     ecx, edi
0x5EC75F: jbe     short loc_5EC783
0x5EC761: mov     edx, [eax+0B0h]
0x5EC767: mov     eax, [edx+edi*4]
0x5EC76A: test    eax, eax
0x5EC76C: jz      short loc_5EC783
0x5EC76E: cmp     word ptr [eax+0B6h], 3
0x5EC776: jbe     short loc_5EC783
0x5EC778: mov     eax, [eax+0B0h]
0x5EC77E: mov     ebx, [eax+0Ch]
0x5EC781: jmp     short loc_5EC785
0x5EC783: xor     ebx, ebx
0x5EC785: push    20h ; ' '; Size
0x5EC787: call    FormHeapAlloc
0x5EC78C: mov     ebp, eax
0x5EC78E: add     esp, 4
0x5EC791: mov     [esp+0C8h+var_9C], ebp
0x5EC795: xor     eax, eax
0x5EC797: cmp     ebp, eax
0x5EC799: mov     [esp+0C8h+var_4], eax
0x5EC7A0: jz      loc_5EC833
0x5EC7A6: mov     edx, [esi]
0x5EC7A8: mov     eax, [edx+170h]
0x5EC7AE: mov     ecx, esi
0x5EC7B0: xor     edi, edi
0x5EC7B2: call    eax
0x5EC7B4: test    eax, eax
0x5EC7B6: mov     [esp+0C8h+var_A0], eax
0x5EC7BA: jz      short loc_5EC7D0
0x5EC7BC: mov     edx, [esi]
0x5EC7BE: mov     eax, [edx+190h]
0x5EC7C4: mov     ecx, esi
0x5EC7C6: call    eax
0x5EC7C8: test    al, al
0x5EC7CA: jz      short loc_5EC7D0
0x5EC7CC: mov     edi, [esp+0C8h+var_A0]
0x5EC7D0: mov     edx, [edi+24h]
0x5EC7D3: mov     eax, [edx+40h]
0x5EC7D6: lea     ecx, [edi+24h]
0x5EC7D9: call    eax
0x5EC7DB: fld1
0x5EC7DD: mov     edx, [esp+0C8h+arg_10]
0x5EC7E4: push    1; float
0x5EC7E6: sub     esp, 10h
0x5EC7E9: fst     dword ptr [esp+0DCh+var_D0]; float
0x5EC7ED: mov     ecx, esp
0x5EC7EF: mov     [ecx], edx
0x5EC7F1: mov     edx, [esp+0DCh+arg_14]
0x5EC7F8: mov     [ecx+4], edx
0x5EC7FB: mov     edx, [esp+0DCh+arg_18]
0x5EC802: mov     [ecx+8], edx
0x5EC805: mov     edx, [esp+0DCh+var_B4]
0x5EC809: sub     esp, 0Ch
0x5EC80C: mov     ecx, esp
0x5EC80E: mov     [ecx], edx
0x5EC810: mov     edx, [esp+0E8h+var_B0]
0x5EC814: mov     [ecx+4], edx
0x5EC817: mov     edx, [esp+0E8h+var_AC]
0x5EC81B: push    eax; float
0x5EC81C: push    ebx; int
0x5EC81D: mov     [ecx+8], edx
0x5EC820: push    ecx
0x5EC821: mov     ecx, esi; this
0x5EC823: fstp    [esp+0F4h+var_F4]; float
0x5EC826: call    TESObjectREFR_GetParentCell
0x5EC82B: push    eax; int
0x5EC82C: mov     ecx, ebp
0x5EC82E: call    sub_5713F0
0x5EC833: push    eax
0x5EC834: mov     ecx, offset ActorProcessManager_ptr
0x5EC839: mov     [esp+0CCh+var_4], 0FFFFFFFFh
0x5EC844: call    sub_678D30
0x5EC849: fld     [esp+0C8h+var_A8]
0x5EC84D: fmul    qword ptr ds:0A3C770h
0x5EC853: fstp    [esp+0C8h+var_A8]
0x5EC857: fld     [esp+0C8h+var_A8]
0x5EC85B: fld     [esp+0C8h+var_98]
0x5EC85F: fcompp
0x5EC861: fnstsw  ax
0x5EC863: test    ah, 5
0x5EC866: jnp     loc_5EC4DF
0x5EC86C: mov     eax, [esi]
0x5EC86E: mov     edx, [eax+154h]
0x5EC874: mov     ecx, esi
0x5EC876: mov     [esp+0C8h+var_5C], 0FFFFFFFFh
0x5EC87E: call    edx
0x5EC880: fld     [esp+0C8h+arg_0]
0x5EC887: mov     ebp, eax
0x5EC889: fst     [esp+0C8h+var_A8]
0x5EC88D: test    ebp, ebp
0x5EC88F: jz      loc_5ECCB2
0x5EC895: fld     [esp+0C8h+var_98]
0x5EC899: fcompp
0x5EC89B: fnstsw  ax
0x5EC89D: test    ah, 5
0x5EC8A0: jp      loc_5ECCB4
0x5EC8A6: mov     eax, [esi]
0x5EC8A8: mov     edx, [eax+174h]
0x5EC8AE: mov     ecx, esi
0x5EC8B0: call    edx
0x5EC8B2: mov     ecx, [eax]
0x5EC8B4: mov     edx, [eax+4]
0x5EC8B7: mov     eax, [eax+8]
0x5EC8BA: mov     [esp+0C8h+var_B4], ecx
0x5EC8BE: fld     [esp+0C8h+var_B4]
0x5EC8C2: fld     qword ptr ds:0A46E48h
0x5EC8C8: mov     [esp+0C8h+var_B0], edx
0x5EC8CC: fadd    st(1), st
0x5EC8CE: mov     [esp+0C8h+var_AC], eax
0x5EC8D2: fxch    st(1)
0x5EC8D4: fstp    [esp+0C8h+var_B4]
0x5EC8D8: fld     [esp+0C8h+var_B0]
0x5EC8DC: fadd    st, st(1)
0x5EC8DE: fstp    [esp+0C8h+var_B0]
0x5EC8E2: fadd    [esp+0C8h+var_AC]
0x5EC8E6: fstp    [esp+0C8h+var_AC]
0x5EC8EA: fld     [esp+0C8h+arg_0]
0x5EC8F1: fld     [esp+0C8h+var_98]
0x5EC8F5: fcompp
0x5EC8F7: fnstsw  ax
0x5EC8F9: test    ah, 5
0x5EC8FC: jp      loc_5ECCB4
0x5EC902: fld     [esp+0C8h+var_B4]
0x5EC906: fsub    [esp+0C8h+arg_10]
0x5EC90D: fstp    [esp+0C8h+var_34]
0x5EC914: fld     [esp+0C8h+var_B0]
0x5EC918: fsub    [esp+0C8h+arg_14]
0x5EC91F: fstp    [esp+0C8h+var_30]
0x5EC926: fld     [esp+0C8h+var_AC]
0x5EC92A: fsub    [esp+0C8h+arg_18]
0x5EC931: fstp    [esp+0C8h+var_2C]
0x5EC938: fld     dword ptr ds:0A47E6Ch
0x5EC93E: sub     esp, 8
0x5EC941: fstp    dword ptr [esp+0D0h+var_D0+4]; float
0x5EC945: fld     dword ptr ds:0A641B0h
0x5EC94B: fstp    dword ptr [esp+0D0h+var_D0]; float
0x5EC94E: call    Rand4
0x5EC953: fstp    [esp+0D0h+var_80]
0x5EC957: add     esp, 4
0x5EC95A: fld     dword ptr ds:0A524B0h
0x5EC960: fstp    dword ptr [esp+0CCh+var_D0+4]; float
0x5EC963: call    Rand5
0x5EC968: fstp    [esp+0CCh+var_7C]
0x5EC96C: fld     dword ptr ds:0A47E6Ch
0x5EC972: fstp    dword ptr [esp+0CCh+var_D0+4]; float
0x5EC975: push    ecx
0x5EC976: fld     dword ptr ds:0A641B0h
0x5EC97C: fstp    dword ptr [esp+0D0h+var_D0]; float
0x5EC97F: call    Rand4
0x5EC984: fstp    [esp+0D0h+var_78]
0x5EC988: add     esp, 4
0x5EC98B: fld     [esp+0CCh+var_80]
0x5EC98F: fld     qword ptr ds:0A3F3E8h
0x5EC995: fmul    st(1), st
0x5EC997: fxch    st(1)
0x5EC999: fstp    [esp+0CCh+var_4C]
0x5EC9A0: fld     [esp+0CCh+var_7C]
0x5EC9A4: fmul    st, st(1)
0x5EC9A6: fstp    [esp+0CCh+var_48]
0x5EC9AD: fmul    [esp+0CCh+var_78]
0x5EC9B1: fstp    [esp+0CCh+var_44]
0x5EC9B8: fld     [esp+0CCh+var_34]
0x5EC9BF: fadd    [esp+0CCh+var_4C]
0x5EC9C6: fstp    [esp+0CCh+var_74]
0x5EC9CA: fld     [esp+0CCh+var_30]
0x5EC9D1: fadd    [esp+0CCh+var_48]
0x5EC9D8: fstp    [esp+0CCh+var_70]
0x5EC9DC: fld     [esp+0CCh+var_2C]
0x5EC9E3: fadd    [esp+0CCh+var_44]
0x5EC9EA: fstp    [esp+0CCh+var_6C]
0x5EC9EE: fld     [esp+0CCh+var_74]
0x5EC9F2: fld     qword ptr ds:0A2FAA0h
0x5EC9F8: fmul    st(1), st
0x5EC9FA: fxch    st(1)
0x5EC9FC: fstp    [esp+0CCh+var_68]
0x5ECA00: fld     [esp+0CCh+var_70]
0x5ECA04: fmul    st, st(1)
0x5ECA06: fstp    [esp+0CCh+var_64]
0x5ECA0A: fmul    [esp+0CCh+var_6C]
0x5ECA0E: fstp    [esp+0CCh+var_60]
0x5ECA12: fld     [esp+0CCh+var_68]
0x5ECA16: fadd    [esp+0CCh+arg_10]
0x5ECA1D: fstp    [esp+0CCh+var_8C]
0x5ECA21: fld     [esp+0CCh+var_64]
0x5ECA25: fadd    [esp+0CCh+arg_14]
0x5ECA2C: fstp    [esp+0CCh+var_88]
0x5ECA30: fld     [esp+0CCh+var_60]
0x5ECA34: fadd    [esp+0CCh+arg_18]
0x5ECA3B: fstp    [esp+0CCh+var_84]
0x5ECA3F: fld     dword ptr ds:0A46B10h
0x5ECA45: fstp    dword ptr [esp+0CCh+var_D0+4]; float
0x5ECA48: call    Rand5
0x5ECA4D: push    ecx
0x5ECA4E: fstp    [esp+0D0h+var_D0]; double
0x5ECA51: call    _floor
0x5ECA56: fnstcw  word ptr [esp+0D0h+var_94]
0x5ECA5A: add     esp, 8
0x5ECA5D: movzx   eax, word ptr [esp+0C8h+var_94]
0x5ECA62: or      eax, 0C00h
0x5ECA67: mov     [esp+0C8h+var_A4], eax
0x5ECA6B: fldcw   word ptr [esp+0C8h+var_A4]
0x5ECA6F: fistp   [esp+0C8h+var_A4]
0x5ECA73: mov     cl, byte ptr [esp+0C8h+var_A4]
0x5ECA77: mov     byte ptr [esp+0C8h+var_A0], cl
0x5ECA7B: fldcw   word ptr [esp+0C8h+var_94]
0x5ECA7F: fld     [esp+0C8h+var_8C]
0x5ECA83: fsub    [esp+0C8h+arg_4]
0x5ECA8A: fstp    [esp+0C8h+var_B4]
0x5ECA8E: fld     [esp+0C8h+var_88]
0x5ECA92: fsub    [esp+0C8h+arg_8]
0x5ECA99: fstp    [esp+0C8h+var_B0]
0x5ECA9D: fld     [esp+0C8h+var_84]
0x5ECAA1: fsub    [esp+0C8h+arg_C]
0x5ECAA8: lea     ecx, [esp+0C8h+var_B4]
0x5ECAAC: fstp    [esp+0C8h+var_AC]
0x5ECAB0: call    sub_43F350
0x5ECAB5: fstp    st
0x5ECAB7: fld     [esp+0C8h+var_B4]
0x5ECABB: fld     qword ptr ds:0A3C770h
0x5ECAC1: fmul    st(1), st
0x5ECAC3: fxch    st(1)
0x5ECAC5: fstp    [esp+0C8h+var_58]
0x5ECAC9: fld     [esp+0C8h+var_B0]
0x5ECACD: fmul    st, st(1)
0x5ECACF: fstp    [esp+0C8h+var_54]
0x5ECAD3: fmul    [esp+0C8h+var_AC]
0x5ECAD7: fstp    [esp+0C8h+var_50]
0x5ECADB: fld     [esp+0C8h+arg_1C]
0x5ECAE2: fsub    [esp+0C8h+var_58]
0x5ECAE6: fstp    [esp+0C8h+var_40]
0x5ECAED: mov     edx, [esp+0C8h+var_40]
0x5ECAF4: fld     [esp+0C8h+arg_20]
0x5ECAFB: mov     [esp+0C8h+var_B4], edx
0x5ECAFF: fsub    [esp+0C8h+var_54]
0x5ECB03: fstp    [esp+0C8h+var_3C]
0x5ECB0A: mov     eax, [esp+0C8h+var_3C]
0x5ECB11: fld     [esp+0C8h+arg_24]
0x5ECB18: mov     [esp+0C8h+var_B0], eax
0x5ECB1C: fsub    [esp+0C8h+var_50]
0x5ECB20: fstp    [esp+0C8h+var_38]
0x5ECB27: mov     ecx, [esp+0C8h+var_38]
0x5ECB2E: mov     [esp+0C8h+var_AC], ecx
0x5ECB32: lea     ecx, [esp+0C8h+var_B4]
0x5ECB36: call    sub_43F350
0x5ECB3B: fstp    st
0x5ECB3D: fld     [esp+0C8h+var_B4]
0x5ECB41: push    ecx
0x5ECB42: fld     qword ptr ds:0A46970h
0x5ECB48: fmul    st(1), st
0x5ECB4A: fxch    st(1)
0x5ECB4C: fstp    [esp+0CCh+var_28]
0x5ECB53: fld     [esp+0CCh+var_B0]
0x5ECB57: fmul    st, st(1)
0x5ECB59: fstp    [esp+0CCh+var_24]
0x5ECB60: fmul    [esp+0CCh+var_AC]
0x5ECB64: fstp    [esp+0CCh+var_20]
0x5ECB6B: fld     [esp+0CCh+var_8C]
0x5ECB6F: fsub    [esp+0CCh+var_28]
0x5ECB76: fstp    [esp+0CCh+var_18]
0x5ECB7D: fld     [esp+0CCh+var_88]
0x5ECB81: fsub    [esp+0CCh+var_24]
0x5ECB88: fstp    [esp+0CCh+var_14]
0x5ECB8F: fld     [esp+0CCh+var_84]
0x5ECB93: fsub    [esp+0CCh+var_20]
0x5ECB9A: fstp    [esp+0CCh+var_10]
0x5ECBA1: fld     dword ptr ds:0A46B14h
0x5ECBA7: fstp    dword ptr [esp+0CCh+var_D0+4]; float
0x5ECBAA: call    Rand5
0x5ECBAF: mov     edx, [esi]
0x5ECBB1: fstp    [esp+0CCh+var_A4]
0x5ECBB5: mov     eax, [edx+170h]
0x5ECBBB: add     esp, 4
0x5ECBBE: mov     ecx, esi
0x5ECBC0: xor     ebx, ebx
0x5ECBC2: call    eax
0x5ECBC4: mov     edi, eax
0x5ECBC6: test    edi, edi
0x5ECBC8: jz      short loc_5ECBDC
0x5ECBCA: mov     edx, [esi]
0x5ECBCC: mov     eax, [edx+190h]
0x5ECBD2: mov     ecx, esi
0x5ECBD4: call    eax
0x5ECBD6: test    al, al
0x5ECBD8: jz      short loc_5ECBDC
0x5ECBDA: mov     ebx, edi
0x5ECBDC: mov     edx, [ebx+24h]
0x5ECBDF: mov     eax, [edx+38h]
0x5ECBE2: lea     ecx, [ebx+24h]
0x5ECBE5: call    eax
0x5ECBE7: test    eax, eax
0x5ECBE9: jz      loc_5ECC8B
0x5ECBEF: mov     edx, [esi]
0x5ECBF1: mov     eax, [edx+170h]
0x5ECBF7: mov     ecx, esi
0x5ECBF9: xor     edi, edi
0x5ECBFB: call    eax
0x5ECBFD: mov     ebx, eax
0x5ECBFF: test    ebx, ebx
0x5ECC01: jz      short loc_5ECC15
0x5ECC03: mov     edx, [esi]
0x5ECC05: mov     eax, [edx+190h]
0x5ECC0B: mov     ecx, esi
0x5ECC0D: call    eax
0x5ECC0F: test    al, al
0x5ECC11: jz      short loc_5ECC15
0x5ECC13: mov     edi, ebx
0x5ECC15: mov     edx, [edi+24h]
0x5ECC18: mov     eax, [edx+38h]
0x5ECC1B: lea     ecx, [edi+24h]
0x5ECC1E: call    eax
0x5ECC20: cmp     byte ptr [eax], 0
0x5ECC23: jz      short loc_5ECC8B
0x5ECC25: mov     ecx, [esp+0C8h+var_A0]
0x5ECC29: fld     [esp+0C8h+var_A4]
0x5ECC2D: push    ecx
0x5ECC2E: push    ecx
0x5ECC2F: fstp    dword ptr [esp+0D0h+var_D0]
0x5ECC32: push    0
0x5ECC34: lea     edx, [esp+0D4h+var_5C]
0x5ECC38: push    edx
0x5ECC39: push    ebp
0x5ECC3A: mov     ecx, esi
0x5ECC3C: call    sub_5E1BB0
0x5ECC41: mov     ecx, [esp+0DCh+var_B4]
0x5ECC45: mov     edx, [esp+0DCh+var_B0]
0x5ECC49: push    eax
0x5ECC4A: sub     esp, 0Ch
0x5ECC4D: mov     eax, esp
0x5ECC4F: mov     [eax], ecx
0x5ECC51: mov     ecx, [esp+0ECh+var_AC]
0x5ECC55: mov     [eax+4], edx
0x5ECC58: mov     edx, [esp+0ECh+var_18]
0x5ECC5F: mov     [eax+8], ecx
0x5ECC62: mov     ecx, [esp+0ECh+var_14]
0x5ECC69: sub     esp, 0Ch
0x5ECC6C: mov     eax, esp
0x5ECC6E: mov     [eax], edx
0x5ECC70: mov     edx, [esp+0F8h+var_10]
0x5ECC77: mov     [eax+4], ecx
0x5ECC7A: mov     ecx, esi; this
0x5ECC7C: mov     [eax+8], edx
0x5ECC7F: call    TESObjectREFR_GetParentCell
0x5ECC84: mov     ecx, eax
0x5ECC86: call    sub_4CF1A0
0x5ECC8B: fld     [esp+0C8h+var_A8]
0x5ECC8F: fmul    qword ptr ds:0A3C770h
0x5ECC95: fstp    [esp+0C8h+var_A8]
0x5ECC99: fld     [esp+0C8h+var_A8]
0x5ECC9D: fld     [esp+0C8h+var_98]
0x5ECCA1: fcompp
0x5ECCA3: fnstsw  ax
0x5ECCA5: test    ah, 5
0x5ECCA8: jnp     loc_5EC938
0x5ECCAE: jmp     short loc_5ECCB4
0x5ECCB0: fstp    st(1)
0x5ECCB2: fstp    st
0x5ECCB4: mov     ecx, [esp+0C8h+var_C]
0x5ECCBB: mov     large fs:0, ecx
0x5ECCC2: pop     ecx
0x5ECCC3: pop     edi
0x5ECCC4: pop     esi
0x5ECCC5: pop     ebp
0x5ECCC6: pop     ebx
0x5ECCC7: add     esp, 0B4h
0x5ECCCD: retn    2Ch ; ','
