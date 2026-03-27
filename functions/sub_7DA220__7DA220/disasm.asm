0x7DA220: push    0FFFFFFFFh
0x7DA222: push    offset SEH_7DA220
0x7DA227: mov     eax, large fs:0
0x7DA22D: push    eax
0x7DA22E: sub     esp, 400h
0x7DA234: mov     eax, ds:0B30AACh
0x7DA239: xor     eax, esp
0x7DA23B: mov     [esp+40Ch+var_10], eax
0x7DA242: push    ebx
0x7DA243: push    ebp
0x7DA244: push    esi
0x7DA245: push    edi
0x7DA246: mov     eax, ds:0B30AACh
0x7DA24B: xor     eax, esp
0x7DA24D: push    eax
0x7DA24E: lea     eax, [esp+420h+var_C]
0x7DA255: mov     large fs:0, eax
0x7DA25B: mov     ebp, [esp+420h+arg_0]
0x7DA262: lea     eax, [esp+420h+var_3FC]
0x7DA266: mov     esi, ecx
0x7DA268: push    eax
0x7DA269: mov     ecx, ebp
0x7DA26B: mov     [esp+424h+var_404], ebp
0x7DA26F: call    sub_405760
0x7DA274: mov     ebx, [eax]
0x7DA276: mov     eax, [esp+420h+var_3FC]
0x7DA27A: test    eax, eax
0x7DA27C: mov     [esp+420h+var_40C], ebx
0x7DA280: jz      short loc_7DA2A0
0x7DA282: mov     edi, eax
0x7DA284: add     eax, 4
0x7DA287: push    eax; lpAddend
0x7DA288: call    dword ptr ds:0A2807Ch
0x7DA28E: test    eax, eax
0x7DA290: jnz     short loc_7DA2A0
0x7DA292: test    edi, edi
0x7DA294: jz      short loc_7DA2A0
0x7DA296: mov     edx, [edi]
0x7DA298: mov     eax, [edx]
0x7DA29A: push    1
0x7DA29C: mov     ecx, edi
0x7DA29E: call    eax
0x7DA2A0: test    ebx, ebx
0x7DA2A2: jnz     short loc_7DA2E3
0x7DA2A4: mov     ecx, ebp; this
0x7DA2A6: call    NiAVObject_InitializePropertyState
0x7DA2AB: lea     ecx, [esp+420h+var_400]
0x7DA2AF: push    ecx
0x7DA2B0: mov     ecx, ebp
0x7DA2B2: call    sub_405760
0x7DA2B7: mov     edx, [eax]
0x7DA2B9: mov     eax, [esp+420h+var_400]
0x7DA2BD: test    eax, eax
0x7DA2BF: mov     [esp+420h+var_40C], edx
0x7DA2C3: jz      short loc_7DA2E3
0x7DA2C5: mov     edi, eax
0x7DA2C7: add     eax, 4
0x7DA2CA: push    eax; lpAddend
0x7DA2CB: call    dword ptr ds:0A2807Ch
0x7DA2D1: test    eax, eax
0x7DA2D3: jnz     short loc_7DA2E3
0x7DA2D5: test    edi, edi
0x7DA2D7: jz      short loc_7DA2E3
0x7DA2D9: mov     eax, [edi]
0x7DA2DB: mov     edx, [eax]
0x7DA2DD: push    1
0x7DA2DF: mov     ecx, edi
0x7DA2E1: call    edx
0x7DA2E3: cmp     dword ptr [esi+0D4h], 0
0x7DA2EA: jnz     short loc_7DA366
0x7DA2EC: test    dword ptr [esi+1Ch], 1000h
0x7DA2F3: ja      short loc_7DA359
0x7DA2F5: mov     eax, [ebp+0B4h]
0x7DA2FB: test    eax, eax
0x7DA2FD: jz      short loc_7DA31F
0x7DA2FF: mov     ecx, [eax+34h]
0x7DA302: test    ecx, ecx
0x7DA304: jz      short loc_7DA31F
0x7DA306: mov     eax, [ecx]
0x7DA308: mov     edx, [eax+4]
0x7DA30B: call    edx
0x7DA30D: test    eax, eax
0x7DA30F: jz      short loc_7DA31F
0x7DA311: cmp     eax, offset dword_B3FD98
0x7DA316: jz      short loc_7DA359
0x7DA318: mov     eax, [eax+4]
0x7DA31B: test    eax, eax
0x7DA31D: jnz     short loc_7DA311
0x7DA31F: push    ebp
0x7DA320: call    sub_7B7710
0x7DA325: add     esp, 4
0x7DA328: lea     edi, [esi+0D4h]
0x7DA32E: push    eax; a2
0x7DA32F: mov     ecx, edi; this
0x7DA331: call    NiSmartPointer_Set??
0x7DA336: cmp     dword ptr [edi], 0
0x7DA339: jnz     short loc_7DA359
0x7DA33B: push    6
0x7DA33D: lea     eax, [esp+424h+var_400]
0x7DA341: push    eax
0x7DA342: mov     ecx, ebp
0x7DA344: call    sub_708560
0x7DA349: lea     ecx, [esp+420h+var_400]; this
0x7DA34D: call    sub_7016A0
0x7DA352: xor     al, al
0x7DA354: jmp     loc_7DAACC
0x7DA359: cmp     dword ptr [esi+0D4h], 0
0x7DA360: jz      loc_7DA4B0
0x7DA366: mov     eax, [ebp+0B4h]
0x7DA36C: movzx   eax, word ptr [eax+8]
0x7DA370: movzx   eax, ax
0x7DA373: xor     bl, bl
0x7DA375: test    eax, eax
0x7DA377: jle     loc_7DA4B0
0x7DA37D: xor     ecx, ecx
0x7DA37F: mov     [esp+420h+var_408], eax
0x7DA383: mov     edi, [esi+0D4h]
0x7DA389: mov     edx, [edi+10h]
0x7DA38C: fld     dword ptr [edx+ecx]
0x7DA38F: add     edx, ecx
0x7DA391: fld     dword ptr ds:0B3F9A8h
0x7DA397: fucompp
0x7DA399: fnstsw  ax
0x7DA39B: test    ah, 44h
0x7DA39E: jp      short loc_7DA3E5
0x7DA3A0: fld     dword ptr [edx+4]
0x7DA3A3: fld     dword ptr ds:0B3F9ACh
0x7DA3A9: fucompp
0x7DA3AB: fnstsw  ax
0x7DA3AD: test    ah, 44h
0x7DA3B0: jp      short loc_7DA3E5
0x7DA3B2: fld     dword ptr [edx+8]
0x7DA3B5: fld     dword ptr ds:0B3F9B0h
0x7DA3BB: fucompp
0x7DA3BD: fnstsw  ax
0x7DA3BF: test    ah, 44h
0x7DA3C2: jp      short loc_7DA3E5
0x7DA3C4: mov     eax, [edi+10h]
0x7DA3C7: mov     edx, ds:0B258D0h
0x7DA3CD: add     eax, ecx
0x7DA3CF: mov     [eax], edx
0x7DA3D1: mov     edx, ds:0B258D4h
0x7DA3D7: mov     [eax+4], edx
0x7DA3DA: mov     edx, ds:0B258D8h
0x7DA3E0: mov     [eax+8], edx
0x7DA3E3: mov     bl, 1
0x7DA3E5: mov     edi, [esi+0D4h]
0x7DA3EB: mov     edx, [edi+0Ch]
0x7DA3EE: fld     dword ptr [edx+ecx]
0x7DA3F1: add     edx, ecx
0x7DA3F3: fld     dword ptr ds:0B3F9A8h
0x7DA3F9: fucompp
0x7DA3FB: fnstsw  ax
0x7DA3FD: test    ah, 44h
0x7DA400: jp      short loc_7DA447
0x7DA402: fld     dword ptr [edx+4]
0x7DA405: fld     dword ptr ds:0B3F9ACh
0x7DA40B: fucompp
0x7DA40D: fnstsw  ax
0x7DA40F: test    ah, 44h
0x7DA412: jp      short loc_7DA447
0x7DA414: fld     dword ptr [edx+8]
0x7DA417: fld     dword ptr ds:0B3F9B0h
0x7DA41D: fucompp
0x7DA41F: fnstsw  ax
0x7DA421: test    ah, 44h
0x7DA424: jp      short loc_7DA447
0x7DA426: mov     eax, [edi+0Ch]
0x7DA429: mov     edx, ds:0B258DCh
0x7DA42F: add     eax, ecx
0x7DA431: mov     [eax], edx
0x7DA433: mov     edx, ds:0B258E0h
0x7DA439: mov     [eax+4], edx
0x7DA43C: mov     edx, ds:0B258E4h
0x7DA442: mov     [eax+8], edx
0x7DA445: mov     bl, 1
0x7DA447: add     ecx, 0Ch
0x7DA44A: sub     [esp+420h+var_408], 1
0x7DA44F: jnz     loc_7DA383
0x7DA455: test    bl, bl
0x7DA457: jz      short loc_7DA4B0
0x7DA459: cmp     byte ptr ds:0B42EA6h, 0
0x7DA460: jz      short loc_7DA4B0
0x7DA462: mov     eax, [ebp+1Ch]
0x7DA465: test    eax, eax
0x7DA467: jz      short loc_7DA485
0x7DA469: mov     ecx, [ebp+8]
0x7DA46C: mov     eax, [eax+8]
0x7DA46F: push    ecx
0x7DA470: push    eax
0x7DA471: lea     eax, [esp+428h+var_3F8]
0x7DA475: push    offset aInvalidTangent; "Invalid tangent space data in %s : %s"
0x7DA47A: push    eax
0x7DA47B: call    __sprintf
0x7DA480: add     esp, 10h
0x7DA483: jmp     short loc_7DA49B
0x7DA485: mov     eax, [ebp+8]
0x7DA488: push    eax
0x7DA489: lea     ecx, [esp+424h+var_3F8]
0x7DA48D: push    offset aInvalidTange_0; "Invalid tangent space data in NULL : %s"
0x7DA492: push    ecx
0x7DA493: call    __sprintf
0x7DA498: add     esp, 0Ch
0x7DA49B: mov     eax, ds:0B42E8Ch
0x7DA4A0: test    eax, eax
0x7DA4A2: jz      short loc_7DA4B0
0x7DA4A4: lea     edx, [esp+420h+var_3F8]
0x7DA4A8: push    0; _DWORD
0x7DA4AA: push    edx; _DWORD
0x7DA4AB: call    eax ; dword_B42E8C
0x7DA4AD: add     esp, 8
0x7DA4B0: mov     eax, [esp+420h+var_40C]
0x7DA4B4: mov     ecx, [eax+20h]
0x7DA4B7: mov     [esp+420h+var_408], ecx
0x7DA4BB: push    2
0x7DA4BD: mov     ecx, ebp
0x7DA4BF: call    NiNode_GetNiPropertyByID
0x7DA4C4: mov     edi, eax
0x7DA4C6: test    edi, edi
0x7DA4C8: jz      loc_7DA748
0x7DA4CE: mov     ebp, [edi+8]
0x7DA4D1: xor     ebx, ebx
0x7DA4D3: cmp     ebp, ebx
0x7DA4D5: jz      loc_7DA748
0x7DA4DB: push    offset aRightEye; "right eye"
0x7DA4E0: push    ebp; Str1
0x7DA4E1: call    __strcmp
0x7DA4E6: add     esp, 8
0x7DA4E9: test    eax, eax
0x7DA4EB: jz      short loc_7DA4FF
0x7DA4ED: push    offset aLeftEye; "left eye"
0x7DA4F2: push    ebp; Str1
0x7DA4F3: call    __strcmp
0x7DA4F8: add     esp, 8
0x7DA4FB: test    eax, eax
0x7DA4FD: jnz     short loc_7DA516
0x7DA4FF: mov     edx, [esi+1Ch]
0x7DA502: and     edx, 0FFFFFFFEh
0x7DA505: or      edx, 20000h
0x7DA50B: mov     [esi+1Ch], edx
0x7DA50E: mov     [esi+24h], ebx
0x7DA511: jmp     loc_7DA748
0x7DA516: push    offset aEnvmap2; "envmap2"
0x7DA51B: push    ebp; Str1
0x7DA51C: call    __strcmp
0x7DA521: add     esp, 8
0x7DA524: test    eax, eax
0x7DA526: jnz     short loc_7DA537
0x7DA528: or      dword ptr [esi+1Ch], 200000h
0x7DA52F: mov     [esi+24h], ebx
0x7DA532: jmp     loc_7DA748
0x7DA537: push    7; MaxCount
0x7DA539: push    offset aRefract; "refract"
0x7DA53E: push    ebp; Str1
0x7DA53F: call    __strnicmp
0x7DA544: add     esp, 0Ch
0x7DA547: test    eax, eax
0x7DA549: jnz     loc_7DA60E
0x7DA54F: mov     eax, [edi+8]
0x7DA552: lea     edx, [eax+1]
0x7DA555: mov     cl, [eax]
0x7DA557: add     eax, 1
0x7DA55A: test    cl, cl
0x7DA55C: jnz     short loc_7DA555
0x7DA55E: sub     eax, edx
0x7DA560: add     eax, 1
0x7DA563: push    eax; Size
0x7DA564: call    FormHeapAlloc
0x7DA569: mov     ecx, [edi+8]
0x7DA56C: mov     ebp, eax
0x7DA56E: add     esp, 4
0x7DA571: mov     edx, ebp
0x7DA573: mov     al, [ecx]
0x7DA575: mov     [edx], al
0x7DA577: add     ecx, 1
0x7DA57A: add     edx, 1
0x7DA57D: test    al, al
0x7DA57F: jnz     short loc_7DA573
0x7DA581: push    offset word_A36430; Delim
0x7DA586: push    ebp; Str
0x7DA587: call    _strtok
0x7DA58C: mov     edi, eax
0x7DA58E: add     esp, 8
0x7DA591: cmp     edi, ebx
0x7DA593: jz      short loc_7DA600
0x7DA595: push    offset aRefract_0; "Refract"
0x7DA59A: push    edi; Str1
0x7DA59B: call    __strcmp
0x7DA5A0: test    eax, eax
0x7DA5A2: push    offset aRefractf; "RefractF"
0x7DA5A7: push    edi; Str1
0x7DA5A8: setz    bl
0x7DA5AB: call    __strcmp
0x7DA5B0: add     esp, 10h
0x7DA5B3: test    eax, eax
0x7DA5B5: setz    al
0x7DA5B8: test    bl, bl
0x7DA5BA: jnz     short loc_7DA5C9
0x7DA5BC: test    al, al
0x7DA5BE: jz      short loc_7DA600
0x7DA5C0: or      dword ptr [esi+1Ch], 10000h
0x7DA5C7: jmp     short loc_7DA5DD
0x7DA5C9: test    al, al
0x7DA5CB: jz      short loc_7DA5D6
0x7DA5CD: or      dword ptr [esi+1Ch], 10000h
0x7DA5D4: jmp     short loc_7DA5DD
0x7DA5D6: or      dword ptr [esi+1Ch], 8000h
0x7DA5DD: mov     ecx, [esp+420h+var_404]
0x7DA5E1: push    0
0x7DA5E3: mov     dword ptr [esi+24h], 0
0x7DA5EA: mov     byte ptr [esi+0E4h], 1
0x7DA5F1: call    NiNode_GetNiPropertyByID
0x7DA5F6: test    eax, eax
0x7DA5F8: jz      short loc_7DA600
0x7DA5FA: and     word ptr [eax+18h], 0FFFEh
0x7DA600: push    ebp
0x7DA601: call    FormHeapFree
0x7DA606: add     esp, 4
0x7DA609: jmp     loc_7DA748
0x7DA60E: push    8; MaxCount
0x7DA610: push    offset aDynalpha; "dynalpha"
0x7DA615: push    ebp; Str1
0x7DA616: call    __strnicmp
0x7DA61B: add     esp, 0Ch
0x7DA61E: test    eax, eax
0x7DA620: jnz     loc_7DA6C2
0x7DA626: mov     ebx, [esp+420h+var_404]
0x7DA62A: or      dword ptr [esi+1Ch], 80000h
0x7DA631: xor     ebp, ebp
0x7DA633: push    ebp
0x7DA634: mov     ecx, ebx
0x7DA636: mov     [esi+24h], ebp
0x7DA639: call    NiNode_GetNiPropertyByID
0x7DA63E: mov     edi, eax
0x7DA640: cmp     edi, ebp
0x7DA642: jnz     short loc_7DA6A2
0x7DA644: push    1Ch; Size
0x7DA646: call    FormHeapAlloc
0x7DA64B: add     esp, 4
0x7DA64E: mov     [esp+420h+var_400], eax
0x7DA652: cmp     eax, ebp
0x7DA654: mov     [esp+420h+var_4], ebp
0x7DA65B: jz      short loc_7DA682
0x7DA65D: mov     ecx, eax
0x7DA65F: call    sub_47F920
0x7DA664: and     word ptr [eax+18h], 0FFFEh
0x7DA66A: push    eax; a2
0x7DA66B: mov     ecx, ebx; this
0x7DA66D: mov     [esp+424h+var_4], 0FFFFFFFFh
0x7DA678: call    sub_405680
0x7DA67D: jmp     loc_7DA748
0x7DA682: xor     eax, eax
0x7DA684: and     word ptr [eax+18h], 0FFFEh
0x7DA68A: push    eax; a2
0x7DA68B: mov     ecx, ebx; this
0x7DA68D: mov     [esp+424h+var_4], 0FFFFFFFFh
0x7DA698: call    sub_405680
0x7DA69D: jmp     loc_7DA748
0x7DA6A2: mov     ecx, edi
0x7DA6A4: call    sub_700900
0x7DA6A9: push    edi
0x7DA6AA: mov     ecx, ebx
0x7DA6AC: mov     ebp, eax
0x7DA6AE: call    sub_4A1220
0x7DA6B3: mov     eax, ebp
0x7DA6B5: push    eax; a2
0x7DA6B6: mov     ecx, ebx; this
0x7DA6B8: call    sub_405680
0x7DA6BD: jmp     loc_7DA748
0x7DA6C2: push    0Ah; MaxCount
0x7DA6C4: push    offset aHidesecret; "HideSecret"
0x7DA6C9: push    ebp; Str1
0x7DA6CA: call    __strnicmp
0x7DA6CF: add     esp, 0Ch
0x7DA6D2: test    eax, eax
0x7DA6D4: jnz     short loc_7DA701
0x7DA6D6: or      dword ptr [esi+1Ch], 100000h
0x7DA6DD: mov     ecx, [esi+0BCh]; this
0x7DA6E3: mov     [esi+24h], ebx
0x7DA6E6: mov     eax, ds:0B4311Ch
0x7DA6EB: push    eax; a2
0x7DA6EC: call    NiSmartPointer_Set??
0x7DA6F1: mov     edx, [esi]
0x7DA6F3: mov     eax, [edx+7Ch]
0x7DA6F6: push    3
0x7DA6F8: mov     ecx, esi
0x7DA6FA: call    eax
0x7DA6FC: jmp     loc_7DAA53
0x7DA701: push    5; MaxCount
0x7DA703: push    offset aHair; "hair"
0x7DA708: push    ebp; Str1
0x7DA709: call    __strnicmp
0x7DA70E: add     esp, 0Ch
0x7DA711: test    eax, eax
0x7DA713: jnz     short loc_7DA748
0x7DA715: mov     ecx, [esp+420h+var_404]
0x7DA719: cmp     [ecx+0B8h], ebx
0x7DA71F: jnz     short loc_7DA748
0x7DA721: or      dword ptr [esi+1Ch], 40001h
0x7DA728: push    ebx
0x7DA729: mov     [esi+24h], ebx
0x7DA72C: call    NiNode_GetNiPropertyByID
0x7DA731: cmp     eax, ebx
0x7DA733: jz      short loc_7DA748
0x7DA735: cmp     dword ptr ds:0B42F48h, 5
0x7DA73C: jge     short loc_7DA748
0x7DA73E: and     word ptr [eax+18h], 0FFFEh
0x7DA744: mov     byte ptr [eax+1Ah], 80h ; '€'
0x7DA748: cmp     [esp+420h+var_408], 0
0x7DA74D: jz      loc_7DAA53
0x7DA753: mov     ebp, [esp+420h+var_408]
0x7DA757: mov     cl, [ebp+18h]
0x7DA75A: and     cl, 0Eh
0x7DA75D: cmp     cl, 6
0x7DA760: jz      short loc_7DA76C
0x7DA762: mov     eax, [esi+1Ch]
0x7DA765: test    eax, 80h
0x7DA76A: jbe     short loc_7DA775
0x7DA76C: or      dword ptr [esi+1Ch], 80h
0x7DA773: jmp     short loc_7DA77D
0x7DA775: and     eax, 0FFFFFF7Fh
0x7DA77A: mov     [esi+1Ch], eax
0x7DA77D: xor     edi, edi
0x7DA77F: mov     [esi+24h], edi
0x7DA782: mov     edx, [ebp+20h]
0x7DA785: mov     eax, [edx]
0x7DA787: cmp     eax, edi
0x7DA789: jz      short loc_7DA797
0x7DA78B: movzx   eax, word ptr [eax+4]
0x7DA78F: shr     eax, 0Ch
0x7DA792: and     eax, 3
0x7DA795: jmp     short loc_7DA79C
0x7DA797: mov     eax, 3
0x7DA79C: mov     edx, [esi]
0x7DA79E: push    eax
0x7DA79F: mov     eax, [edx+7Ch]
0x7DA7A2: mov     ecx, esi
0x7DA7A4: call    eax
0x7DA7A6: mov     cl, [ebp+18h]
0x7DA7A9: and     cl, 0Eh
0x7DA7AC: cmp     cl, 8
0x7DA7AF: jnz     short loc_7DA7BA
0x7DA7B1: or      dword ptr [esi+1Ch], 800h
0x7DA7B8: jmp     short loc_7DA7C1
0x7DA7BA: and     dword ptr [esi+1Ch], 0FFFFF7FFh
0x7DA7C1: mov     [esi+24h], edi
0x7DA7C4: test    byte ptr [ebp+18h], 1
0x7DA7C8: jz      loc_7DA920
0x7DA7CE: or      dword ptr [esi+1Ch], 8
0x7DA7D2: mov     ebx, [esp+420h+var_408]
0x7DA7D6: mov     eax, [esi+1Ch]
0x7DA7D9: xor     ebp, ebp
0x7DA7DB: mov     [esi+24h], ebp
0x7DA7DE: movzx   edx, word ptr [ebx+18h]
0x7DA7E2: shr     edx, 4
0x7DA7E5: and     edx, 0FFh
0x7DA7EB: jle     short loc_7DA80A
0x7DA7ED: xor     ecx, ecx
0x7DA7EF: mov     eax, 18h
0x7DA7F4: cmp     ecx, edx
0x7DA7F6: jge     short loc_7DA82E
0x7DA7F8: mov     edi, [ebx+20h]
0x7DA7FB: mov     edi, [eax+edi]
0x7DA7FE: add     ecx, 1
0x7DA801: add     eax, 4
0x7DA804: cmp     edi, ebp
0x7DA806: jz      short loc_7DA7F4
0x7DA808: jmp     short loc_7DA836
0x7DA80A: test    al, 8
0x7DA80C: jbe     short loc_7DA81E
0x7DA80E: or      eax, 8
0x7DA811: mov     [esi+1Ch], eax
0x7DA814: mov     [esi+24h], ebp
0x7DA817: xor     edi, edi
0x7DA819: jmp     loc_7DA920
0x7DA81E: and     eax, 0FFFFFFF7h
0x7DA821: mov     [esi+1Ch], eax
0x7DA824: mov     [esi+24h], ebp
0x7DA827: xor     edi, edi
0x7DA829: jmp     loc_7DA920
0x7DA82E: cmp     edi, ebp
0x7DA830: jz      loc_7DA920
0x7DA836: mov     ebp, [esi+0BCh]
0x7DA83C: mov     eax, [edi+8]
0x7DA83F: mov     ebx, [ebp+4]
0x7DA842: add     ebp, 4
0x7DA845: cmp     ebx, eax
0x7DA847: mov     [esp+420h+var_40C], eax
0x7DA84B: jz      short loc_7DA882
0x7DA84D: test    ebx, ebx
0x7DA84F: jz      short loc_7DA86D
0x7DA851: lea     edx, [ebx+4]
0x7DA854: push    edx; lpAddend
0x7DA855: call    dword ptr ds:0A2807Ch
0x7DA85B: test    eax, eax
0x7DA85D: jnz     short loc_7DA86D
0x7DA85F: test    ebx, ebx
0x7DA861: jz      short loc_7DA86D
0x7DA863: mov     eax, [ebx]
0x7DA865: mov     edx, [eax]
0x7DA867: push    1
0x7DA869: mov     ecx, ebx
0x7DA86B: call    edx
0x7DA86D: mov     eax, [esp+420h+var_40C]
0x7DA871: test    eax, eax
0x7DA873: mov     [ebp+0], eax
0x7DA876: jz      short loc_7DA882
0x7DA878: add     eax, 4
0x7DA87B: push    eax; lpAddend
0x7DA87C: call    dword ptr ds:0A28078h
0x7DA882: mov     ecx, [esi+0BCh]
0x7DA888: mov     eax, [ecx+4]
0x7DA88B: test    eax, eax
0x7DA88D: jz      loc_7DA920
0x7DA893: push    eax
0x7DA894: push    offset dword_B3F95C
0x7DA899: call    NiRTTI_Cast
0x7DA89E: mov     edx, [esi+0BCh]
0x7DA8A4: mov     ebx, eax
0x7DA8A6: mov     eax, [edx+4]
0x7DA8A9: mov     ecx, [eax+24h]
0x7DA8AC: add     esp, 8
0x7DA8AF: test    ecx, ecx
0x7DA8B1: jz      short loc_7DA920
0x7DA8B3: mov     edx, [ecx]
0x7DA8B5: mov     eax, [edx+10h]
0x7DA8B8: call    eax
0x7DA8BA: cmp     eax, 1
0x7DA8BD: ja      short loc_7DA920
0x7DA8BF: test    ebx, ebx
0x7DA8C1: jz      short loc_7DA8DB
0x7DA8C3: mov     ecx, [ebx+38h]
0x7DA8C6: push    ecx
0x7DA8C7: lea     edx, [esp+424h+var_3F8]
0x7DA8CB: push    offset aTextureErrorTe; "TEXTURE ERROR : texture does not contai"...
0x7DA8D0: push    edx
0x7DA8D1: call    __sprintf
0x7DA8D6: add     esp, 0Ch
0x7DA8D9: jmp     short loc_7DA8ED
0x7DA8DB: lea     eax, [esp+420h+var_3F8]
0x7DA8DF: push    offset aTextureError_0; "TEXTURE ERROR : texture does not contai"...
0x7DA8E4: push    eax
0x7DA8E5: call    __sprintf
0x7DA8EA: add     esp, 8
0x7DA8ED: mov     ebx, [esi+0BCh]
0x7DA8F3: mov     ebp, [ebx+4]
0x7DA8F6: add     ebx, 4
0x7DA8F9: test    ebp, ebp
0x7DA8FB: jz      short loc_7DA920
0x7DA8FD: lea     ecx, [ebp+4]
0x7DA900: push    ecx; lpAddend
0x7DA901: call    dword ptr ds:0A2807Ch
0x7DA907: test    eax, eax
0x7DA909: jnz     short loc_7DA91A
0x7DA90B: test    ebp, ebp
0x7DA90D: jz      short loc_7DA91A
0x7DA90F: mov     edx, [ebp+0]
0x7DA912: mov     eax, [edx]
0x7DA914: push    1
0x7DA916: mov     ecx, ebp
0x7DA918: call    eax
0x7DA91A: mov     dword ptr [ebx], 0
0x7DA920: mov     ecx, [esp+420h+var_408]
0x7DA924: mov     edx, [ecx+20h]
0x7DA927: mov     eax, [edx]
0x7DA929: test    eax, eax
0x7DA92B: jz      short loc_7DA932
0x7DA92D: mov     ebx, [eax+8]
0x7DA930: jmp     short loc_7DA934
0x7DA932: xor     ebx, ebx
0x7DA934: test    edi, edi
0x7DA936: mov     [esp+420h+var_40C], 0
0x7DA93E: jz      short loc_7DA955
0x7DA940: mov     edi, [edi+8]
0x7DA943: push    edi
0x7DA944: push    offset dword_B3F95C
0x7DA949: call    NiRTTI_Cast
0x7DA94E: add     esp, 8
0x7DA951: mov     [esp+420h+var_40C], eax
0x7DA955: test    ebx, ebx
0x7DA957: jz      loc_7DAA53
0x7DA95D: mov     ebp, [esi+0BCh]
0x7DA963: mov     edi, [ebp+0]
0x7DA966: cmp     edi, ebx
0x7DA968: jz      short loc_7DA997
0x7DA96A: test    edi, edi
0x7DA96C: jz      short loc_7DA98A
0x7DA96E: lea     eax, [edi+4]
0x7DA971: push    eax; lpAddend
0x7DA972: call    dword ptr ds:0A2807Ch
0x7DA978: test    eax, eax
0x7DA97A: jnz     short loc_7DA98A
0x7DA97C: test    edi, edi
0x7DA97E: jz      short loc_7DA98A
0x7DA980: mov     edx, [edi]
0x7DA982: mov     eax, [edx]
0x7DA984: push    1
0x7DA986: mov     ecx, edi
0x7DA988: call    eax
0x7DA98A: mov     [ebp+0], ebx
0x7DA98D: add     ebx, 4
0x7DA990: push    ebx; lpAddend
0x7DA991: call    dword ptr ds:0A28078h
0x7DA997: mov     ecx, [esi+0BCh]
0x7DA99D: mov     eax, [ecx]
0x7DA99F: push    eax
0x7DA9A0: push    offset dword_B3F95C
0x7DA9A5: call    NiRTTI_Cast
0x7DA9AA: mov     edx, [esi+0BCh]
0x7DA9B0: mov     edi, eax
0x7DA9B2: mov     eax, [edx]
0x7DA9B4: mov     ebx, [eax+24h]
0x7DA9B7: add     esp, 8
0x7DA9BA: test    edi, edi
0x7DA9BC: jz      short loc_7DA9DF
0x7DA9BE: mov     edx, [esp+420h+var_40C]
0x7DA9C2: mov     ecx, [edi+38h]
0x7DA9C5: xor     eax, eax
0x7DA9C7: test    edx, edx
0x7DA9C9: jz      short loc_7DA9CE
0x7DA9CB: mov     eax, [edx+38h]
0x7DA9CE: test    ecx, ecx
0x7DA9D0: jz      short loc_7DA9DF
0x7DA9D2: mov     edx, [esi]
0x7DA9D4: push    eax
0x7DA9D5: mov     eax, [edx+6Ch]
0x7DA9D8: push    1
0x7DA9DA: push    ecx
0x7DA9DB: mov     ecx, esi
0x7DA9DD: call    eax
0x7DA9DF: test    ebx, ebx
0x7DA9E1: jz      short loc_7DAA53
0x7DA9E3: mov     edx, [ebx]
0x7DA9E5: mov     eax, [edx+10h]
0x7DA9E8: mov     ecx, ebx
0x7DA9EA: call    eax
0x7DA9EC: cmp     eax, 1
0x7DA9EF: ja      short loc_7DAA53
0x7DA9F1: test    edi, edi
0x7DA9F3: jz      short loc_7DAA10
0x7DA9F5: mov     ecx, [edi+38h]
0x7DA9F8: push    ecx
0x7DA9F9: lea     edx, [esp+424h+var_204]
0x7DAA00: push    offset aTextureErrorTe; "TEXTURE ERROR : texture does not contai"...
0x7DAA05: push    edx
0x7DAA06: call    __sprintf
0x7DAA0B: add     esp, 0Ch
0x7DAA0E: jmp     short loc_7DAA25
0x7DAA10: lea     eax, [esp+420h+var_204]
0x7DAA17: push    offset aTextureError_0; "TEXTURE ERROR : texture does not contai"...
0x7DAA1C: push    eax
0x7DAA1D: call    __sprintf
0x7DAA22: add     esp, 8
0x7DAA25: mov     ebx, [esi+0BCh]
0x7DAA2B: mov     edi, [ebx]
0x7DAA2D: test    edi, edi
0x7DAA2F: jz      short loc_7DAA53
0x7DAA31: lea     ecx, [edi+4]
0x7DAA34: push    ecx; lpAddend
0x7DAA35: call    dword ptr ds:0A2807Ch
0x7DAA3B: test    eax, eax
0x7DAA3D: jnz     short loc_7DAA4D
0x7DAA3F: test    edi, edi
0x7DAA41: jz      short loc_7DAA4D
0x7DAA43: mov     edx, [edi]
0x7DAA45: mov     eax, [edx]
0x7DAA47: push    1
0x7DAA49: mov     ecx, edi
0x7DAA4B: call    eax
0x7DAA4D: mov     dword ptr [ebx], 0
0x7DAA53: mov     edi, [esp+420h+var_404]
0x7DAA57: xor     ebx, ebx
0x7DAA59: push    ebx
0x7DAA5A: mov     ecx, edi
0x7DAA5C: call    NiNode_GetNiPropertyByID
0x7DAA61: cmp     eax, ebx
0x7DAA63: jz      short loc_7DAA72
0x7DAA65: test    byte ptr [eax+18h], 1
0x7DAA69: jz      short loc_7DAA72
0x7DAA6B: or      dword ptr [esi+1Ch], 40h
0x7DAA6F: mov     [esi+24h], ebx
0x7DAA72: mov     eax, [edi+0B4h]
0x7DAA78: cmp     eax, ebx
0x7DAA7A: jz      short loc_7DAA81
0x7DAA7C: cmp     [eax+34h], ebx
0x7DAA7F: jnz     short loc_7DAA97
0x7DAA81: mov     edx, [esi]
0x7DAA83: mov     eax, [edx+68h]
0x7DAA86: push    edi
0x7DAA87: mov     ecx, esi
0x7DAA89: call    eax
0x7DAA8B: mov     ecx, [edi+0B4h]
0x7DAA91: push    eax
0x7DAA92: call    sub_6C61E0
0x7DAA97: push    6
0x7DAA99: mov     ecx, edi
0x7DAA9B: call    NiNode_GetNiPropertyByID
0x7DAAA0: cmp     eax, ebx
0x7DAAA2: jz      short loc_7DAAAC
0x7DAAA4: push    eax
0x7DAAA5: mov     ecx, edi
0x7DAAA7: call    sub_4A1220
0x7DAAAC: cmp     [edi+0B8h], ebx
0x7DAAB2: jnz     short loc_7DAABB
0x7DAAB4: mov     eax, [esi+1Ch]
0x7DAAB7: test    al, 2
0x7DAAB9: jbe     short loc_7DAAC1
0x7DAABB: or      dword ptr [esi+1Ch], 2
0x7DAABF: jmp     short loc_7DAAC7
0x7DAAC1: and     eax, 0FFFFFFFDh
0x7DAAC4: mov     [esi+1Ch], eax
0x7DAAC7: mov     [esi+24h], ebx
0x7DAACA: mov     al, 1
0x7DAACC: mov     ecx, [esp+420h+var_C]
0x7DAAD3: mov     large fs:0, ecx
0x7DAADA: pop     ecx
0x7DAADB: pop     edi
0x7DAADC: pop     esi
0x7DAADD: pop     ebp
0x7DAADE: pop     ebx
0x7DAADF: mov     ecx, [esp+40Ch+var_10]
0x7DAAE6: xor     ecx, esp
0x7DAAE8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DAAED: add     esp, 40Ch
0x7DAAF3: retn    4
