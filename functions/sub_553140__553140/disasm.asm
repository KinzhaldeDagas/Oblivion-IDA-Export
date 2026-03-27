0x553140: push    0FFFFFFFFh
0x553142: push    offset SEH_553140
0x553147: mov     eax, large fs:0
0x55314D: push    eax
0x55314E: sub     esp, 2Ch
0x553151: push    ebx
0x553152: push    ebp
0x553153: push    esi
0x553154: push    edi
0x553155: mov     eax, ds:0B30AACh
0x55315A: xor     eax, esp
0x55315C: push    eax; ArgList
0x55315D: lea     eax, [esp+4Ch+var_C]
0x553161: mov     large fs:0, eax
0x553167: mov     ebp, ecx
0x553169: mov     [esp+4Ch+var_2C], ebp
0x55316D: call    sub_552ED0
0x553172: push    offset sub_552E50; a5
0x553177: push    offset sub_6EF4A0; a4
0x55317C: push    4; size
0x55317E: push    10h; a2
0x553180: lea     esi, [ebp+88h]
0x553186: xor     ebx, ebx
0x553188: push    esi; a1
0x553189: mov     [esp+60h+var_4], ebx
0x55318D: call    ArrayConstructor
0x553192: lea     edi, [ebp+0C8h]
0x553198: mov     ecx, edi
0x55319A: mov     byte ptr [esp+4Ch+var_4], 1
0x55319F: call    sub_552D90
0x5531A4: mov     [ebp+0DB0h], ebx
0x5531AA: mov     [ebp+0DB4h], ebx
0x5531B0: mov     [ebp+0DB8h], ebx
0x5531B6: push    0Eh; MaxCount
0x5531B8: push    offset aFacegenSi_ctl; "FaceGen\\si.ctl"
0x5531BD: lea     ecx, [esp+54h+var_28]
0x5531C1: mov     byte ptr [esp+54h+var_4], 5
0x5531C6: mov     [esp+54h+var_10], 0Fh
0x5531CE: mov     [esp+54h+var_14], ebx
0x5531D2: mov     byte ptr [esp+54h+var_24], bl
0x5531D6: call    sub_414500
0x5531DB: push    edi
0x5531DC: push    esi
0x5531DD: lea     ebx, [ebp+0D9Ch]
0x5531E3: push    ebx
0x5531E4: lea     eax, [ebp+4]
0x5531E7: push    eax
0x5531E8: lea     eax, [esp+5Ch+var_28]
0x5531EC: push    ebp
0x5531ED: push    eax
0x5531EE: mov     byte ptr [esp+64h+var_4], 6
0x5531F3: call    sub_6ED850
0x5531F8: add     esp, 18h
0x5531FB: test    al, al
0x5531FD: setz    [esp+4Ch+var_35]
0x553202: cmp     [esp+4Ch+var_10], 10h
0x553207: mov     byte ptr [esp+4Ch+var_4], 5
0x55320C: jb      short loc_55321B
0x55320E: mov     ecx, [esp+4Ch+var_24]
0x553212: push    ecx
0x553213: call    FormHeapFree
0x553218: add     esp, 4
0x55321B: cmp     [esp+4Ch+var_35], 0
0x553220: jz      short loc_553290
0x553222: push    0Eh; MaxCount
0x553224: push    offset aFacegenSi_ctl; "FaceGen\\si.ctl"
0x553229: lea     ecx, [esp+54h+var_28]
0x55322D: mov     [esp+54h+var_10], 0Fh
0x553235: mov     [esp+54h+var_14], 0
0x55323D: mov     byte ptr [esp+54h+var_24], 0
0x553242: call    sub_414500
0x553247: push    edi
0x553248: push    esi
0x553249: push    ebx
0x55324A: lea     eax, [ebp+4]
0x55324D: push    eax
0x55324E: lea     edx, [esp+5Ch+var_28]
0x553252: push    ebp
0x553253: push    edx
0x553254: mov     byte ptr [esp+64h+var_4], 7
0x553259: call    sub_6ED850
0x55325E: add     esp, 18h
0x553261: test    al, al
0x553263: setz    bl
0x553266: cmp     [esp+4Ch+var_10], 10h
0x55326B: mov     byte ptr [esp+4Ch+var_4], 5
0x553270: jb      short loc_55327F
0x553272: mov     eax, [esp+4Ch+var_24]
0x553276: push    eax
0x553277: call    FormHeapFree
0x55327C: add     esp, 4
0x55327F: test    bl, bl
0x553281: jz      short loc_553290
0x553283: push    offset aUnableToLoadCt; "Unable to load CTL file"
0x553288: call    PrintError
0x55328D: add     esp, 4
0x553290: lea     edi, [ebp+8Ch]
0x553296: lea     esi, [ebp+10h]
0x553299: mov     [esp+4Ch+var_30], 2
0x5532A1: mov     [esp+4Ch+var_34], 2
0x5532A9: mov     eax, [edi]
0x5532AB: xor     ebx, ebx
0x5532AD: cmp     eax, ebx
0x5532AF: jz      short loc_5532EF
0x5532B1: mov     ecx, [edi+4]
0x5532B4: sub     ecx, eax
0x5532B6: mov     eax, 4EC4EC4Fh
0x5532BB: imul    ecx
0x5532BD: sar     edx, 4
0x5532C0: mov     eax, edx
0x5532C2: shr     eax, 1Fh
0x5532C5: add     eax, edx
0x5532C7: cmp     eax, ebx
0x5532C9: jz      short loc_5532EF
0x5532CB: ja      short loc_5532D2
0x5532CD: call    __invalid_parameter_noinfo
0x5532D2: mov     ecx, [edi]
0x5532D4: cmp     ecx, ebx
0x5532D6: jz      short loc_553303
0x5532D8: mov     eax, [ecx]
0x5532DA: fldz
0x5532DC: mov     ecx, [ecx+4]
0x5532DF: mov     [esi-4], eax
0x5532E2: imul    eax, ecx
0x5532E5: push    ecx
0x5532E6: mov     [esi-8], ecx
0x5532E9: fstp    [esp+50h+var_50]
0x5532EC: push    eax
0x5532ED: jmp     short loc_5532FC
0x5532EF: fldz
0x5532F1: push    ecx
0x5532F2: fstp    [esp+50h+var_50]; int
0x5532F5: mov     [esi-8], ebx
0x5532F8: mov     [esi-4], ebx
0x5532FB: push    ebx; int
0x5532FC: mov     ecx, esi; int
0x5532FE: call    sub_527160
0x553303: add     edi, 10h
0x553306: add     esi, 18h
0x553309: sub     [esp+4Ch+var_34], 1
0x55330E: jnz     short loc_5532A9
0x553310: sub     [esp+4Ch+var_30], 1
0x553315: jnz     short loc_5532A1
0x553317: push    1Ch; Size
0x553319: mov     dword ptr [ebp+0DACh], 0
0x553323: call    FormHeapAlloc
0x553328: mov     esi, eax
0x55332A: add     esp, 4
0x55332D: mov     [esp+4Ch+var_30], esi
0x553331: test    esi, esi
0x553333: mov     byte ptr [esp+4Ch+var_4], 8
0x553338: jz      short loc_553355
0x55333A: mov     ecx, esi; this
0x55333C: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x553341: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x553347: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x55334D: mov     byte ptr [esi+1Ah], 0
0x553351: mov     edi, esi
0x553353: jmp     short loc_553357
0x553355: xor     edi, edi
0x553357: mov     esi, [ebp+0DB0h]
0x55335D: cmp     esi, edi
0x55335F: mov     byte ptr [esp+4Ch+var_4], 5
0x553364: jz      short loc_55339A
0x553366: test    esi, esi
0x553368: jz      short loc_553386
0x55336A: lea     ecx, [esi+4]
0x55336D: push    ecx; lpAddend
0x55336E: call    dword ptr ds:0A2807Ch
0x553374: test    eax, eax
0x553376: jnz     short loc_553386
0x553378: test    esi, esi
0x55337A: jz      short loc_553386
0x55337C: mov     edx, [esi]
0x55337E: mov     eax, [edx]
0x553380: push    1
0x553382: mov     ecx, esi
0x553384: call    eax
0x553386: test    edi, edi
0x553388: mov     [ebp+0DB0h], edi
0x55338E: jz      short loc_55339A
0x553390: add     edi, 4
0x553393: push    edi; lpAddend
0x553394: call    dword ptr ds:0A28078h
0x55339A: mov     eax, [ebp+0DB0h]
0x5533A0: or      word ptr [eax+18h], 200h
0x5533A6: mov     eax, [ebp+0DB0h]
0x5533AC: mov     cx, [eax+18h]
0x5533B0: and     cx, 0F3FFh
0x5533B5: or      cx, 1000h
0x5533BA: mov     [eax+18h], cx
0x5533BE: mov     eax, [ebp+0DB0h]
0x5533C4: push    70h ; 'p'; Size
0x5533C6: mov     byte ptr [eax+1Ah], 64h ; 'd'
0x5533CA: call    FormHeapAlloc
0x5533CF: add     esp, 4
0x5533D2: mov     [esp+4Ch+var_30], eax
0x5533D6: test    eax, eax
0x5533D8: mov     byte ptr [esp+4Ch+var_4], 9
0x5533DD: jz      short loc_5533F5
0x5533DF: push    1
0x5533E1: push    1
0x5533E3: push    offset unk_B25E48
0x5533E8: push    20h ; ' '
0x5533EA: push    20h ; ' '
0x5533EC: mov     ecx, eax
0x5533EE: call    NiPixelData__NiPixelData
0x5533F3: jmp     short loc_5533F7
0x5533F5: xor     eax, eax
0x5533F7: mov     edx, [eax+5Ch]
0x5533FA: mov     ecx, [edx]
0x5533FC: add     ecx, [eax+50h]
0x5533FF: mov     byte ptr [esp+4Ch+var_4], 5
0x553404: add     ecx, 2
0x553407: mov     esi, 20h ; ' '
0x55340C: mov     bl, 80h ; '€'
0x55340E: mov     edi, edi
0x553410: mov     edx, 20h ; ' '
0x553415: mov     [ecx-2], bl
0x553418: mov     [ecx-1], bl
0x55341B: mov     [ecx], bl
0x55341D: add     ecx, 3
0x553420: sub     edx, 1
0x553423: jnz     short loc_553415
0x553425: sub     esi, 1
0x553428: jnz     short loc_553410
0x55342A: add     dword ptr [eax+68h], 1
0x55342E: push    offset dword_B256D0; a2
0x553433: push    eax; a1
0x553434: call    NiSourceTexture__LoadTexturePixelData
0x553439: mov     esi, [ebp+0DB4h]
0x55343F: mov     edi, eax
0x553441: add     esp, 8
0x553444: cmp     esi, edi
0x553446: jz      short loc_55347C
0x553448: test    esi, esi
0x55344A: jz      short loc_553468
0x55344C: lea     eax, [esi+4]
0x55344F: push    eax; lpAddend
0x553450: call    dword ptr ds:0A2807Ch
0x553456: test    eax, eax
0x553458: jnz     short loc_553468
0x55345A: test    esi, esi
0x55345C: jz      short loc_553468
0x55345E: mov     edx, [esi]
0x553460: mov     eax, [edx]
0x553462: push    1
0x553464: mov     ecx, esi
0x553466: call    eax
0x553468: test    edi, edi
0x55346A: mov     [ebp+0DB4h], edi
0x553470: jz      short loc_55347C
0x553472: add     edi, 4
0x553475: push    edi; lpAddend
0x553476: call    dword ptr ds:0A28078h
0x55347C: push    70h ; 'p'; Size
0x55347E: call    FormHeapAlloc
0x553483: add     esp, 4
0x553486: mov     [esp+4Ch+var_30], eax
0x55348A: test    eax, eax
0x55348C: mov     byte ptr [esp+4Ch+var_4], 0Ah
0x553491: jz      short loc_5534A9
0x553493: push    1
0x553495: push    1
0x553497: push    offset unk_B25E48
0x55349C: push    20h ; ' '
0x55349E: push    20h ; ' '
0x5534A0: mov     ecx, eax
0x5534A2: call    NiPixelData__NiPixelData
0x5534A7: jmp     short loc_5534AB
0x5534A9: xor     eax, eax
0x5534AB: mov     ecx, [eax+5Ch]
0x5534AE: mov     ecx, [ecx]
0x5534B0: add     ecx, [eax+50h]
0x5534B3: mov     byte ptr [esp+4Ch+var_4], 5
0x5534B8: add     ecx, 2
0x5534BB: mov     esi, 20h ; ' '
0x5534C0: mov     bl, 40h ; '@'
0x5534C2: mov     edx, 20h ; ' '
0x5534C7: mov     [ecx-2], bl
0x5534CA: mov     [ecx-1], bl
0x5534CD: mov     [ecx], bl
0x5534CF: add     ecx, 3
0x5534D2: sub     edx, 1
0x5534D5: jnz     short loc_5534C7
0x5534D7: sub     esi, 1
0x5534DA: jnz     short loc_5534C2
0x5534DC: add     dword ptr [eax+68h], 1
0x5534E0: push    offset dword_B256D0; a2
0x5534E5: push    eax; a1
0x5534E6: call    NiSourceTexture__LoadTexturePixelData
0x5534EB: mov     esi, [ebp+0DB8h]
0x5534F1: mov     edi, eax
0x5534F3: add     esp, 8
0x5534F6: cmp     esi, edi
0x5534F8: jz      short loc_55352E
0x5534FA: test    esi, esi
0x5534FC: jz      short loc_55351A
0x5534FE: lea     edx, [esi+4]
0x553501: push    edx; lpAddend
0x553502: call    dword ptr ds:0A2807Ch
0x553508: test    eax, eax
0x55350A: jnz     short loc_55351A
0x55350C: test    esi, esi
0x55350E: jz      short loc_55351A
0x553510: mov     eax, [esi]
0x553512: mov     edx, [eax]
0x553514: push    1
0x553516: mov     ecx, esi
0x553518: call    edx
0x55351A: test    edi, edi
0x55351C: mov     [ebp+0DB8h], edi
0x553522: jz      short loc_55352E
0x553524: add     edi, 4
0x553527: push    edi; lpAddend
0x553528: call    dword ptr ds:0A28078h
0x55352E: mov     eax, ebp
0x553530: mov     ecx, dword ptr [esp+4Ch+var_C]
0x553534: mov     large fs:0, ecx
0x55353B: pop     ecx
0x55353C: pop     edi
0x55353D: pop     esi
0x55353E: pop     ebp
0x55353F: pop     ebx
0x553540: add     esp, 38h
0x553543: retn
