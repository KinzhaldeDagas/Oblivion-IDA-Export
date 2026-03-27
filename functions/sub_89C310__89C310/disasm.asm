0x89C310: mov     eax, [esp+arg_4]
0x89C314: sub     esp, 4Ch
0x89C317: test    eax, eax
0x89C319: push    edi
0x89C31A: mov     edi, ecx
0x89C31C: jz      loc_89C8CA
0x89C322: mov     ecx, [edi+88h]
0x89C328: test    ecx, ecx
0x89C32A: jz      short loc_89C35D
0x89C32C: mov     ecx, [esp+50h+arg_0]
0x89C330: mov     dl, [esp+50h+arg_8]
0x89C334: mov     word ptr [esp+50h+var_38], ax
0x89C339: lea     eax, [esp+50h+var_40]
0x89C33D: mov     [esp+50h+var_3C], ecx
0x89C341: mov     ecx, [edi+80h]
0x89C347: push    eax
0x89C348: mov     byte ptr [esp+54h+var_40], 6
0x89C34D: mov     byte ptr [esp+54h+var_38+2], dl
0x89C351: call    sub_8D8830
0x89C356: pop     edi
0x89C357: add     esp, 4Ch
0x89C35A: retn    0Ch
0x89C35D: push    ebx
0x89C35E: mov     ebx, ds:0BA9DE4h
0x89C364: push    ebp
0x89C365: mov     ebp, large fs:2Ch
0x89C36C: mov     eax, [ebp+ebx*4+0]
0x89C370: mov     ecx, [eax+1A4h]
0x89C376: cmp     ecx, [eax+1A8h]
0x89C37C: push    esi
0x89C37D: jnb     short loc_89C3AA
0x89C37F: mov     esi, eax
0x89C381: mov     ecx, [esi+1A4h]
0x89C387: mov     dword ptr [ecx], offset aLtaddentities; "LtAddEntities"
0x89C38D: mov     dword ptr [ecx+0Ch], offset aInit; "init"
0x89C394: rdtsc
0x89C396: mov     [esp+5Ch+var_48], eax
0x89C39A: mov     edx, [esp+5Ch+var_48]
0x89C39E: mov     [ecx+4], edx
0x89C3A1: add     ecx, 10h
0x89C3A4: mov     [esi+1A4h], ecx
0x89C3AA: mov     esi, [edi+88h]
0x89C3B0: mov     ebp, [ebp+ebx*4+0]
0x89C3B4: inc     esi
0x89C3B5: xor     eax, eax
0x89C3B7: mov     [edi+88h], esi
0x89C3BD: mov     ecx, [ebp+19Ch]
0x89C3C3: cmp     ecx, eax
0x89C3C5: mov     [esp+5Ch+var_30], eax
0x89C3C9: mov     [esp+5Ch+var_2C], eax
0x89C3CD: mov     [esp+5Ch+var_28], 80000000h
0x89C3D5: mov     [esp+5Ch+var_48], ebp
0x89C3D9: jnz     short loc_89C3E1
0x89C3DB: mov     ecx, ds:0BA7D9Ch
0x89C3E1: mov     ebx, [esp+5Ch+arg_4]
0x89C3E5: mov     edx, [ecx+20h]
0x89C3E8: lea     eax, ds:10h[ebx*4]
0x89C3EF: and     eax, 0FFFFFFF0h
0x89C3F2: lea     esi, [edx+eax]
0x89C3F5: cmp     esi, [ecx+2Ch]
0x89C3F8: ja      short loc_89C401
0x89C3FA: mov     [ecx+20h], esi
0x89C3FD: mov     eax, edx
0x89C3FF: jmp     short loc_89C407
0x89C401: mov     edx, [ecx]
0x89C403: push    eax
0x89C404: call    dword ptr [edx+0Ch]
0x89C407: mov     ecx, [ebp+19Ch]
0x89C40D: mov     [esp+5Ch+var_30], eax
0x89C411: mov     esi, ebx
0x89C413: mov     [esp+5Ch+var_24], eax
0x89C417: xor     eax, eax
0x89C419: or      esi, 80000000h
0x89C41F: cmp     ecx, eax
0x89C421: mov     [esp+5Ch+var_28], esi
0x89C425: mov     [esp+5Ch+var_20], eax
0x89C429: mov     [esp+5Ch+var_1C], eax
0x89C42D: mov     [esp+5Ch+var_18], 80000000h
0x89C435: jnz     short loc_89C43D
0x89C437: mov     ecx, ds:0BA7D9Ch
0x89C43D: mov     edx, [ecx+20h]
0x89C440: mov     eax, ebx
0x89C442: shl     eax, 5
0x89C445: add     eax, 10h
0x89C448: and     eax, 0FFFFFFF0h
0x89C44B: lea     ebp, [edx+eax]
0x89C44E: cmp     ebp, [ecx+2Ch]
0x89C451: ja      short loc_89C45A
0x89C453: mov     [ecx+20h], ebp
0x89C456: mov     eax, edx
0x89C458: jmp     short loc_89C460
0x89C45A: mov     edx, [ecx]
0x89C45C: push    eax
0x89C45D: call    dword ptr [edx+0Ch]
0x89C460: mov     [esp+5Ch+var_20], eax
0x89C464: mov     [esp+5Ch+var_14], eax
0x89C468: mov     al, [edi+0A4h]
0x89C46E: test    al, al
0x89C470: mov     [esp+5Ch+var_18], esi
0x89C474: mov     byte ptr [esp+5Ch+var_4C+3], 0
0x89C479: jz      short loc_89C4CD
0x89C47B: mov     ecx, ds:0BA7D98h
0x89C481: mov     eax, [ecx]
0x89C483: push    2Fh ; '/'
0x89C485: push    6Ch ; 'l'
0x89C487: call    dword ptr [eax+10h]
0x89C48A: push    edi
0x89C48B: mov     ecx, eax
0x89C48D: mov     word ptr [eax+4], 6Ch ; 'l'
0x89C493: call    sub_8DE400
0x89C498: mov     ebp, eax
0x89C49A: cmp     dword ptr [esp+5Ch+arg_8], 1
0x89C49F: jnz     short loc_89C4B7
0x89C4A1: mov     cx, [edi+3Ch]
0x89C4A5: mov     [ebp+20h], cx
0x89C4A9: mov     byte ptr [ebp+26h], 1
0x89C4AD: mov     byte ptr [ebp+29h], 1
0x89C4B1: mov     byte ptr [ebp+28h], 1
0x89C4B5: jmp     short loc_89C4FB
0x89C4B7: mov     dx, [edi+48h]
0x89C4BB: mov     [ebp+20h], dx
0x89C4BF: mov     byte ptr [ebp+26h], 1
0x89C4C3: mov     byte ptr [ebp+29h], 0
0x89C4C7: mov     byte ptr [ebp+28h], 0
0x89C4CB: jmp     short loc_89C4FB
0x89C4CD: mov     eax, [edi+38h]
0x89C4D0: mov     ebp, [eax]
0x89C4D2: mov     eax, [ebp+38h]
0x89C4D5: mov     ecx, [ebp+3Ch]
0x89C4D8: lea     edx, [ebp+34h]
0x89C4DB: add     eax, ebx
0x89C4DD: and     ecx, 3FFFFFFFh
0x89C4E3: cmp     ecx, eax
0x89C4E5: jge     short loc_89C4FB
0x89C4E7: add     ecx, ecx
0x89C4E9: cmp     eax, ecx
0x89C4EB: jge     short loc_89C4EF
0x89C4ED: mov     eax, ecx
0x89C4EF: push    4
0x89C4F1: push    eax
0x89C4F2: push    edx
0x89C4F3: call    sub_8A6E40
0x89C4F8: add     esp, 0Ch
0x89C4FB: mov     ecx, [edi+74h]
0x89C4FE: fld     dword ptr [ecx+8]
0x89C501: mov     eax, [esp+5Ch+arg_4]
0x89C505: fmul    dword ptr ds:0A3D65Ch
0x89C50B: xor     ebx, ebx
0x89C50D: test    eax, eax
0x89C50F: fstp    [esp+5Ch+var_44]
0x89C513: jle     loc_89C5BB
0x89C519: lea     esp, [esp+0]
0x89C520: mov     edx, [esp+5Ch+arg_0]
0x89C524: mov     esi, [edx+ebx*4]
0x89C527: mov     ecx, esi
0x89C529: call    sub_8BC720
0x89C52E: mov     eax, [esi+1Ch]
0x89C531: test    eax, eax
0x89C533: jnz     short loc_89C53F
0x89C535: mov     eax, [esi]
0x89C537: mov     ecx, esi
0x89C539: call    dword ptr [eax+0Ch]
0x89C53C: mov     [esi+1Ch], eax
0x89C53F: mov     ecx, [esi+50h]
0x89C542: add     ecx, 10h
0x89C545: push    ecx; int
0x89C546: push    0; int
0x89C548: push    0; float
0x89C54A: call    sub_8DD0C0
0x89C54F: mov     al, [esi+91h]
0x89C555: add     esp, 0Ch
0x89C558: test    al, al
0x89C55A: mov     [esi+8], edi
0x89C55D: push    esi
0x89C55E: jz      short loc_89C565
0x89C560: mov     ecx, [edi+30h]
0x89C563: jmp     short loc_89C56C
0x89C565: mov     byte ptr [esp+60h+var_4C+3], 1
0x89C56A: mov     ecx, ebp
0x89C56C: call    sub_8DDE30
0x89C571: mov     eax, [esi+14h]
0x89C574: test    eax, eax
0x89C576: jz      short loc_89C5AE
0x89C578: mov     ecx, [esp+5Ch+var_1C]
0x89C57C: mov     eax, ecx
0x89C57E: shl     eax, 5
0x89C581: add     eax, [esp+5Ch+var_20]
0x89C585: inc     ecx
0x89C586: push    eax
0x89C587: mov     eax, [esp+60h+var_44]
0x89C58B: mov     [esp+60h+var_1C], ecx
0x89C58F: mov     ecx, [esi+14h]
0x89C592: mov     edx, [ecx]
0x89C594: push    eax
0x89C595: mov     eax, [esi+1Ch]
0x89C598: push    eax
0x89C599: call    dword ptr [edx+0Ch]
0x89C59C: mov     ecx, [esp+5Ch+var_2C]
0x89C5A0: mov     edx, [esp+5Ch+var_30]
0x89C5A4: add     esi, 28h ; '('
0x89C5A7: mov     [edx+ecx*4], esi
0x89C5AA: inc     [esp+5Ch+var_2C]
0x89C5AE: mov     eax, [esp+5Ch+arg_4]
0x89C5B2: inc     ebx
0x89C5B3: cmp     ebx, eax
0x89C5B5: jl      loc_89C520
0x89C5BB: mov     al, [edi+0A4h]
0x89C5C1: test    al, al
0x89C5C3: jz      short loc_89C60A
0x89C5C5: mov     al, byte ptr [esp+5Ch+var_4C+3]
0x89C5C9: test    al, al
0x89C5CB: jz      short loc_89C601
0x89C5CD: cmp     dword ptr [esp+5Ch+arg_8], 1
0x89C5D2: lea     esi, [edi+38h]
0x89C5D5: jz      short loc_89C5DA
0x89C5D7: lea     esi, [edi+44h]
0x89C5DA: mov     eax, [esi+8]
0x89C5DD: mov     ecx, [esi+4]
0x89C5E0: and     eax, 3FFFFFFFh
0x89C5E5: cmp     ecx, eax
0x89C5E7: jnz     short loc_89C5F4
0x89C5E9: push    4
0x89C5EB: push    esi
0x89C5EC: call    sub_8A6EE0
0x89C5F1: add     esp, 8
0x89C5F4: mov     ecx, [esi+4]
0x89C5F7: mov     edx, [esi]
0x89C5F9: mov     [edx+ecx*4], ebp
0x89C5FC: inc     dword ptr [esi+4]
0x89C5FF: jmp     short loc_89C60A
0x89C601: mov     eax, [ebp+0]
0x89C604: push    1
0x89C606: mov     ecx, ebp
0x89C608: call    dword ptr [eax]
0x89C60A: mov     ecx, [esp+5Ch+var_48]
0x89C60E: mov     ecx, [ecx+19Ch]
0x89C614: mov     esi, [edi+2A4h]
0x89C61A: xor     eax, eax
0x89C61C: cmp     ecx, eax
0x89C61E: mov     [esp+5Ch+var_10], eax
0x89C622: mov     [esp+5Ch+var_C], eax
0x89C626: mov     [esp+5Ch+var_8], 80000000h
0x89C62E: jnz     short loc_89C636
0x89C630: mov     ecx, ds:0BA7D9Ch
0x89C636: mov     edx, [ecx+20h]
0x89C639: mov     ebx, [ecx+2Ch]
0x89C63C: lea     eax, ds:10h[esi*8]
0x89C643: and     eax, 0FFFFFFF0h
0x89C646: lea     ebp, [edx+eax]
0x89C649: cmp     ebp, ebx
0x89C64B: ja      short loc_89C654
0x89C64D: mov     [ecx+20h], ebp
0x89C650: mov     eax, edx
0x89C652: jmp     short loc_89C65A
0x89C654: mov     edx, [ecx]
0x89C656: push    eax
0x89C657: call    dword ptr [edx+0Ch]
0x89C65A: mov     ebx, ds:0BA9DE4h
0x89C660: mov     ebp, [esp+5Ch+var_48]
0x89C664: or      esi, 80000000h
0x89C66A: mov     [esp+5Ch+var_8], esi
0x89C66E: mov     esi, large fs:2Ch
0x89C675: mov     [esp+5Ch+var_10], eax
0x89C679: mov     [esp+5Ch+var_4], eax
0x89C67D: mov     eax, [esi+ebx*4]
0x89C680: mov     ecx, [eax+1A4h]
0x89C686: cmp     ecx, [eax+1A8h]
0x89C68C: jnb     short loc_89C6B0
0x89C68E: mov     ecx, [ebp+1A4h]
0x89C694: mov     dword ptr [ecx], offset aStbroadphase; "StBroadphase"
0x89C69A: rdtsc
0x89C69C: mov     dword ptr [esp+5Ch+arg_8], eax
0x89C6A0: mov     edx, dword ptr [esp+5Ch+arg_8]
0x89C6A4: mov     [ecx+4], edx
0x89C6A7: add     ecx, 0Ch
0x89C6AA: mov     [ebp+1A4h], ecx
0x89C6B0: mov     ecx, [edi+64h]
0x89C6B3: mov     eax, [ecx]
0x89C6B5: lea     edx, [esp+5Ch+var_10]
0x89C6B9: push    edx
0x89C6BA: lea     edx, [esp+60h+var_20]
0x89C6BE: push    edx
0x89C6BF: lea     edx, [esp+64h+var_30]
0x89C6C3: push    edx
0x89C6C4: call    dword ptr [eax+0Ch]
0x89C6C7: mov     eax, [esi+ebx*4]
0x89C6CA: mov     ecx, [eax+1A4h]
0x89C6D0: cmp     ecx, [eax+1A8h]
0x89C6D6: jnb     short loc_89C6FA
0x89C6D8: mov     ecx, [ebp+1A4h]
0x89C6DE: mov     dword ptr [ecx], offset aStcreateagents; "StCreateAgents"
0x89C6E4: rdtsc
0x89C6E6: mov     dword ptr [esp+5Ch+arg_8], eax
0x89C6EA: mov     edx, dword ptr [esp+5Ch+arg_8]
0x89C6EE: mov     [ecx+4], edx
0x89C6F1: add     ecx, 0Ch
0x89C6F4: mov     [ebp+1A4h], ecx
0x89C6FA: mov     eax, [edi+78h]
0x89C6FD: test    eax, eax
0x89C6FF: jz      short loc_89C706
0x89C701: add     eax, 8
0x89C704: jmp     short loc_89C708
0x89C706: xor     eax, eax
0x89C708: mov     ecx, [esp+5Ch+var_10]
0x89C70C: push    eax
0x89C70D: mov     eax, [esp+60h+var_C]
0x89C711: push    eax
0x89C712: push    ecx
0x89C713: mov     ecx, [edi+68h]
0x89C716: call    sub_8D8370
0x89C71B: mov     eax, [esi+ebx*4]
0x89C71E: mov     edx, [eax+1A4h]
0x89C724: cmp     edx, [eax+1A8h]
0x89C72A: jnb     short loc_89C74E
0x89C72C: mov     ecx, [ebp+1A4h]
0x89C732: mov     dword ptr [ecx], offset aStaddedcb; "StAddedCb"
0x89C738: rdtsc
0x89C73A: mov     dword ptr [esp+5Ch+arg_8], eax
0x89C73E: mov     eax, dword ptr [esp+5Ch+arg_8]
0x89C742: mov     [ecx+4], eax
0x89C745: add     ecx, 0Ch
0x89C748: mov     [ebp+1A4h], ecx
0x89C74E: mov     ebx, [esp+5Ch+arg_4]
0x89C752: xor     esi, esi
0x89C754: test    ebx, ebx
0x89C756: jle     short loc_89C774
0x89C758: mov     ecx, [esp+5Ch+arg_0]
0x89C75C: mov     ebp, [ecx+esi*4]
0x89C75F: push    ebp
0x89C760: push    edi
0x89C761: call    sub_8DC380
0x89C766: push    ebp
0x89C767: call    sub_8DBEF0
0x89C76C: add     esp, 0Ch
0x89C76F: inc     esi
0x89C770: cmp     esi, ebx
0x89C772: jl      short loc_89C758
0x89C774: dec     dword ptr [edi+88h]
0x89C77A: jnz     short loc_89C797
0x89C77C: mov     eax, [edi+84h]
0x89C782: test    eax, eax
0x89C784: jz      short loc_89C797
0x89C786: mov     al, [edi+90h]
0x89C78C: test    al, al
0x89C78E: jnz     short loc_89C797
0x89C790: mov     ecx, edi
0x89C792: call    sub_899210
0x89C797: mov     edx, large fs:2Ch
0x89C79E: mov     eax, ds:0BA9DE4h
0x89C7A3: mov     eax, [edx+eax*4]
0x89C7A6: mov     ecx, [eax+1A4h]
0x89C7AC: cmp     ecx, [eax+1A8h]
0x89C7B2: mov     esi, [esp+5Ch+var_48]
0x89C7B6: jnb     short loc_89C7DA
0x89C7B8: mov     ecx, [esi+1A4h]
0x89C7BE: mov     dword ptr [ecx], offset aLt_0; "lt"
0x89C7C4: rdtsc
0x89C7C6: mov     [esp+5Ch+arg_4], eax
0x89C7CA: mov     edx, [esp+5Ch+arg_4]
0x89C7CE: mov     [ecx+4], edx
0x89C7D1: add     ecx, 0Ch
0x89C7D4: mov     [esi+1A4h], ecx
0x89C7DA: mov     ecx, [esi+19Ch]
0x89C7E0: test    ecx, ecx
0x89C7E2: mov     eax, [esp+5Ch+var_4]
0x89C7E6: jnz     short loc_89C7EE
0x89C7E8: mov     ecx, ds:0BA7D9Ch
0x89C7EE: cmp     eax, [ecx+28h]
0x89C7F1: mov     [ecx+20h], eax
0x89C7F4: jnz     short loc_89C7FC
0x89C7F6: mov     edx, [ecx]
0x89C7F8: push    eax
0x89C7F9: call    dword ptr [edx+10h]
0x89C7FC: mov     eax, [esp+5Ch+var_8]
0x89C800: test    eax, eax
0x89C802: js      short loc_89C829
0x89C804: mov     ecx, [esi+19Ch]
0x89C80A: test    ecx, ecx
0x89C80C: jnz     short loc_89C814
0x89C80E: mov     ecx, ds:0BA7D9Ch
0x89C814: and     eax, 3FFFFFFFh
0x89C819: push    14h
0x89C81B: shl     eax, 3
0x89C81E: push    eax
0x89C81F: mov     eax, [esp+64h+var_10]
0x89C823: push    eax
0x89C824: call    sub_8A75D0
0x89C829: mov     ecx, [esi+19Ch]
0x89C82F: test    ecx, ecx
0x89C831: mov     eax, [esp+5Ch+var_14]
0x89C835: jnz     short loc_89C83D
0x89C837: mov     ecx, ds:0BA7D9Ch
0x89C83D: cmp     eax, [ecx+28h]
0x89C840: mov     [ecx+20h], eax
0x89C843: jnz     short loc_89C84B
0x89C845: mov     edx, [ecx]
0x89C847: push    eax
0x89C848: call    dword ptr [edx+10h]
0x89C84B: mov     eax, [esp+5Ch+var_18]
0x89C84F: test    eax, eax
0x89C851: js      short loc_89C878
0x89C853: mov     ecx, [esi+19Ch]
0x89C859: test    ecx, ecx
0x89C85B: jnz     short loc_89C863
0x89C85D: mov     ecx, ds:0BA7D9Ch
0x89C863: and     eax, 3FFFFFFFh
0x89C868: push    14h
0x89C86A: shl     eax, 5
0x89C86D: push    eax
0x89C86E: mov     eax, [esp+64h+var_20]
0x89C872: push    eax
0x89C873: call    sub_8A75D0
0x89C878: mov     ecx, [esi+19Ch]
0x89C87E: test    ecx, ecx
0x89C880: mov     eax, [esp+5Ch+var_24]
0x89C884: jnz     short loc_89C88C
0x89C886: mov     ecx, ds:0BA7D9Ch
0x89C88C: cmp     eax, [ecx+28h]
0x89C88F: mov     [ecx+20h], eax
0x89C892: jnz     short loc_89C89A
0x89C894: mov     edx, [ecx]
0x89C896: push    eax
0x89C897: call    dword ptr [edx+10h]
0x89C89A: mov     eax, [esp+5Ch+var_28]
0x89C89E: test    eax, eax
0x89C8A0: js      short loc_89C8C7
0x89C8A2: mov     ecx, [esi+19Ch]
0x89C8A8: test    ecx, ecx
0x89C8AA: jnz     short loc_89C8B2
0x89C8AC: mov     ecx, ds:0BA7D9Ch
0x89C8B2: and     eax, 3FFFFFFFh
0x89C8B7: push    14h
0x89C8B9: shl     eax, 2
0x89C8BC: push    eax
0x89C8BD: mov     eax, [esp+64h+var_30]
0x89C8C1: push    eax
0x89C8C2: call    sub_8A75D0
0x89C8C7: pop     esi
0x89C8C8: pop     ebp
0x89C8C9: pop     ebx
0x89C8CA: pop     edi
0x89C8CB: add     esp, 4Ch
0x89C8CE: retn    0Ch
