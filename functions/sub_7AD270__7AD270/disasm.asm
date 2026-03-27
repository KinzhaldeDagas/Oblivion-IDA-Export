0x7AD270: sub     esp, 7Ch
0x7AD273: cmp     byte ptr ds:0B42CDAh, 0
0x7AD27A: push    ebx
0x7AD27B: push    esi
0x7AD27C: mov     esi, [esp+84h+arg_0]
0x7AD283: mov     ebx, ecx
0x7AD285: jz      short loc_7AD2D1
0x7AD287: cmp     byte ptr ds:0B42CDBh, 0
0x7AD28E: jz      short loc_7AD2C8
0x7AD290: test    esi, esi
0x7AD292: jz      loc_7ADFC6
0x7AD298: mov     eax, [esi]
0x7AD29A: mov     edx, [eax+4]
0x7AD29D: mov     ecx, esi
0x7AD29F: call    edx
0x7AD2A1: test    eax, eax
0x7AD2A3: jz      loc_7ADFC6
0x7AD2A9: lea     esp, [esp+0]
0x7AD2B0: cmp     eax, offset dword_B3FCDC
0x7AD2B5: jz      short loc_7AD2C8
0x7AD2B7: mov     eax, [eax+4]
0x7AD2BA: test    eax, eax
0x7AD2BC: jnz     short loc_7AD2B0
0x7AD2BE: pop     esi
0x7AD2BF: mov     al, 1
0x7AD2C1: pop     ebx
0x7AD2C2: add     esp, 7Ch
0x7AD2C5: retn    4
0x7AD2C8: cmp     byte ptr ds:0B42CDAh, 0
0x7AD2CF: jnz     short loc_7AD2E1
0x7AD2D1: cmp     byte ptr ds:0B42CDBh, 0
0x7AD2D8: jz      short loc_7AD2E1
0x7AD2DA: mov     ecx, ebx
0x7AD2DC: call    sub_7AB6F0
0x7AD2E1: cmp     byte ptr [ebx+2268h], 0
0x7AD2E8: jnz     short loc_7AD2FA
0x7AD2EA: cmp     byte ptr ds:0B42CE8h, 0
0x7AD2F1: jnz     short loc_7AD2FA
0x7AD2F3: mov     byte ptr [ebx+2268h], 1
0x7AD2FA: push    edi
0x7AD2FB: lea     eax, [esp+88h+var_6C]
0x7AD2FF: push    eax
0x7AD300: mov     ecx, esi
0x7AD302: call    sub_405760
0x7AD307: mov     edi, [eax]
0x7AD309: mov     eax, [esp+88h+var_6C]
0x7AD30D: test    eax, eax
0x7AD30F: jz      short loc_7AD32F
0x7AD311: mov     esi, eax
0x7AD313: add     eax, 4
0x7AD316: push    eax; lpAddend
0x7AD317: call    dword ptr ds:0A2807Ch
0x7AD31D: test    eax, eax
0x7AD31F: jnz     short loc_7AD32F
0x7AD321: test    esi, esi
0x7AD323: jz      short loc_7AD32F
0x7AD325: mov     edx, [esi]
0x7AD327: mov     eax, [edx]
0x7AD329: push    1
0x7AD32B: mov     ecx, esi
0x7AD32D: call    eax
0x7AD32F: test    edi, edi
0x7AD331: jnz     short loc_7AD354
0x7AD333: lea     ecx, [esp+8Ch]
0x7AD33A: push    ecx
0x7AD33B: mov     ecx, ebx
0x7AD33D: call    sub_7ABC40
0x7AD342: mov     ecx, eax
0x7AD344: call    sub_7ABDE0
0x7AD349: pop     edi
0x7AD34A: pop     esi
0x7AD34B: mov     al, 1
0x7AD34D: pop     ebx
0x7AD34E: add     esp, 7Ch
0x7AD351: retn    4
0x7AD354: cmp     byte ptr ds:0B42CE3h, 0
0x7AD35B: mov     edx, [esp+8Ch]
0x7AD362: mov     ecx, [edx+0BCh]
0x7AD368: push    ebp
0x7AD369: mov     ebp, [edi+18h]
0x7AD36C: mov     [esp+90h+var_74], ebp
0x7AD370: jz      loc_7AD426
0x7AD376: test    ecx, ecx
0x7AD378: mov     eax, [edi+20h]
0x7AD37B: jnz     loc_7AD42E
0x7AD381: test    eax, eax
0x7AD383: jz      loc_7ADFC4
0x7AD389: mov     eax, [eax+20h]
0x7AD38C: mov     eax, [eax]
0x7AD38E: test    eax, eax
0x7AD390: jz      loc_7ADFC4
0x7AD396: cmp     [eax+8], ecx
0x7AD399: jz      loc_7ADFC4
0x7AD39F: cmp     byte ptr [ebx+21E0h], 0
0x7AD3A6: jz      loc_7ADFAD
0x7AD3AC: mov     eax, [edi+8]
0x7AD3AF: test    byte ptr [eax+18h], 1
0x7AD3B3: jz      loc_7ADF81
0x7AD3B9: cmp     byte ptr [ebx+34h], 0
0x7AD3BD: jz      short loc_7AD3D0
0x7AD3BF: mov     dx, [eax+18h]
0x7AD3C3: shr     dx, 0Dh
0x7AD3C7: test    dl, 1
0x7AD3CA: jnz     loc_7ADF81
0x7AD3D0: cmp     byte ptr ds:0B42CE3h, 0
0x7AD3D7: jnz     loc_7ADF65
0x7AD3DD: cmp     byte ptr ds:0B42CE1h, 0
0x7AD3E4: jz      loc_7ADF46
0x7AD3EA: mov     eax, [esp+90h]
0x7AD3F1: fld     dword ptr [eax+28h]
0x7AD3F4: fild    dword ptr ds:0B42CE4h
0x7AD3FA: fcompp
0x7AD3FC: fnstsw  ax
0x7AD3FE: test    ah, 41h
0x7AD401: jnz     loc_7ADF46
0x7AD407: lea     ecx, [esp+90h]
0x7AD40E: push    ecx
0x7AD40F: lea     ecx, [ebx+2254h]
0x7AD415: call    sub_5B1E20
0x7AD41A: pop     ebp
0x7AD41B: pop     edi
0x7AD41C: pop     esi
0x7AD41D: mov     al, 1
0x7AD41F: pop     ebx
0x7AD420: add     esp, 7Ch
0x7AD423: retn    4
0x7AD426: test    ecx, ecx
0x7AD428: jz      loc_7AD39F
0x7AD42E: test    ebp, ebp
0x7AD430: jz      loc_7AD39F
0x7AD436: mov     edx, [ecx]
0x7AD438: mov     eax, [edx+1Ch]
0x7AD43B: call    eax
0x7AD43D: mov     edx, [ebp+0]
0x7AD440: mov     esi, eax
0x7AD442: mov     eax, [edx+54h]
0x7AD445: mov     ecx, ebp
0x7AD447: call    eax
0x7AD449: cmp     esi, 16h
0x7AD44C: jnz     loc_7AD528
0x7AD452: cmp     eax, 0Bh
0x7AD455: jnz     loc_7AD7E7
0x7AD45B: mov     ecx, ds:0B42F40h
0x7AD461: mov     edx, [ebp+0]
0x7AD464: mov     edx, [edx+5Ch]
0x7AD467: push    1
0x7AD469: lea     eax, [esp+94h+var_74]
0x7AD46D: push    eax
0x7AD46E: mov     eax, [esp+98h]
0x7AD475: push    ecx
0x7AD476: push    eax
0x7AD477: mov     ecx, ebp
0x7AD479: mov     [esp+0A0h+var_74], 0
0x7AD481: call    edx
0x7AD483: mov     eax, [eax+4]
0x7AD486: mov     esi, [eax]
0x7AD488: lea     ecx, [eax+8]
0x7AD48B: mov     eax, [ecx]
0x7AD48D: test    eax, eax
0x7AD48F: mov     [esp+0A0h+var_80], eax
0x7AD493: jz      short loc_7AD4E4
0x7AD495: mov     edi, 17Dh
0x7AD49A: lea     ebx, [ebx+0]
0x7AD4A0: cmp     byte ptr ds:0B42CE8h, 0
0x7AD4A7: jz      short loc_7AD4BA
0x7AD4A9: cmp     [eax+4], di
0x7AD4AD: jnz     short loc_7AD4D1
0x7AD4AF: push    edi; float
0x7AD4B0: push    eax; int
0x7AD4B1: mov     ecx, ebx
0x7AD4B3: call    sub_7A9820
0x7AD4B8: jmp     short loc_7AD4D1
0x7AD4BA: movzx   eax, word ptr [eax+4]
0x7AD4BE: add     eax, 0Dh
0x7AD4C1: lea     ecx, [esp+0A0h+var_80]
0x7AD4C5: lea     edx, [eax+eax*4]
0x7AD4C8: push    ecx
0x7AD4C9: lea     ecx, [ebx+edx*4]
0x7AD4CC: call    sub_7ABDE0
0x7AD4D1: test    esi, esi
0x7AD4D3: jz      short loc_7AD4E4
0x7AD4D5: lea     eax, [esi+8]
0x7AD4D8: mov     eax, [eax]
0x7AD4DA: test    eax, eax
0x7AD4DC: mov     esi, [esi]
0x7AD4DE: mov     [esp+0A0h+var_80], eax
0x7AD4E2: jnz     short loc_7AD4A0
0x7AD4E4: mov     esi, [esp+0A0h+var_10]
0x7AD4EB: add     dword ptr ds:0B42CD0h, 1
0x7AD4F2: mov     eax, [esi]
0x7AD4F4: mov     edx, [eax+10h]
0x7AD4F7: mov     ecx, esi
0x7AD4F9: call    edx
0x7AD4FB: test    eax, eax
0x7AD4FD: jz      loc_7ADFC4
0x7AD503: mov     ecx, [esi+0B4h]
0x7AD509: mov     eax, [ecx]
0x7AD50B: mov     edx, [eax+5Ch]
0x7AD50E: call    edx
0x7AD510: movzx   eax, ax
0x7AD513: pop     ebp
0x7AD514: movzx   eax, ax
0x7AD517: add     ds:0B42CC4h, eax
0x7AD51D: pop     edi
0x7AD51E: pop     esi
0x7AD51F: mov     al, 1
0x7AD521: pop     ebx
0x7AD522: add     esp, 7Ch
0x7AD525: retn    4
0x7AD528: cmp     esi, 18h
0x7AD52B: jnz     loc_7AD5C1
0x7AD531: cmp     eax, 0Ch
0x7AD534: jnz     loc_7AD7E7
0x7AD53A: mov     ecx, ds:0B42F40h
0x7AD540: mov     edx, [ebp+0]
0x7AD543: mov     edi, [esp+90h]
0x7AD54A: mov     edx, [edx+5Ch]
0x7AD54D: push    1
0x7AD54F: lea     eax, [esp+94h+var_74]
0x7AD553: push    eax
0x7AD554: push    ecx
0x7AD555: push    edi
0x7AD556: mov     ecx, ebp
0x7AD558: mov     [esp+0A0h+var_74], 0
0x7AD560: call    edx
0x7AD562: mov     eax, [eax+4]
0x7AD565: mov     esi, [eax]
0x7AD567: lea     ecx, [eax+8]
0x7AD56A: mov     eax, [ecx]
0x7AD56C: test    eax, eax
0x7AD56E: mov     [esp+0A0h+var_80], eax
0x7AD572: jz      short loc_7AD59E
0x7AD574: movzx   eax, word ptr [eax+4]
0x7AD578: add     eax, 0Dh
0x7AD57B: lea     ecx, [esp+0A0h+var_80]
0x7AD57F: lea     edx, [eax+eax*4]
0x7AD582: push    ecx
0x7AD583: lea     ecx, [ebx+edx*4]
0x7AD586: call    sub_7ABDE0
0x7AD58B: test    esi, esi
0x7AD58D: jz      short loc_7AD59E
0x7AD58F: lea     eax, [esi+8]
0x7AD592: mov     eax, [eax]
0x7AD594: test    eax, eax
0x7AD596: mov     esi, [esi]
0x7AD598: mov     [esp+0A0h+var_80], eax
0x7AD59C: jnz     short loc_7AD574
0x7AD59E: add     dword ptr ds:0B42CD0h, 1
0x7AD5A5: mov     eax, [edi]
0x7AD5A7: mov     edx, [eax+10h]
0x7AD5AA: mov     ecx, edi
0x7AD5AC: call    edx
0x7AD5AE: test    eax, eax
0x7AD5B0: jz      loc_7ADFC4
0x7AD5B6: mov     ecx, [edi+0B4h]
0x7AD5BC: jmp     loc_7AD509
0x7AD5C1: cmp     esi, 19h
0x7AD5C4: jnz     loc_7AD712
0x7AD5CA: cmp     eax, 0Eh
0x7AD5CD: jnz     loc_7AD7E7
0x7AD5D3: cmp     byte ptr [ebx+21E3h], 0
0x7AD5DA: jz      loc_7ADFC4
0x7AD5E0: mov     ecx, ds:0B42F40h
0x7AD5E6: mov     edx, [ebp+0]
0x7AD5E9: mov     edx, [edx+5Ch]
0x7AD5EC: push    1
0x7AD5EE: lea     eax, [esp+94h+var_78]
0x7AD5F2: push    eax
0x7AD5F3: mov     eax, [esp+98h]
0x7AD5FA: push    ecx
0x7AD5FB: push    eax
0x7AD5FC: mov     ecx, ebp
0x7AD5FE: mov     [esp+0A0h+var_78], 0
0x7AD606: call    edx
0x7AD608: mov     eax, [eax+4]
0x7AD60B: mov     esi, [eax+8]
0x7AD60E: test    esi, esi
0x7AD610: mov     edi, [eax]
0x7AD612: lea     ecx, [eax+8]
0x7AD615: mov     [esp+0A0h+var_80], esi
0x7AD619: jz      loc_7AD6CE
0x7AD61F: mov     ebp, 8
0x7AD624: mov     eax, [esp+0A0h+var_84]
0x7AD628: cmp     [eax+108h], ebp
0x7AD62E: jnz     short loc_7AD641
0x7AD630: push    esi
0x7AD631: lea     ecx, [ebx+0A4h]
0x7AD637: push    ecx
0x7AD638: mov     ecx, ebx
0x7AD63A: call    sub_7AD1C0
0x7AD63F: jmp     short loc_7AD6B6
0x7AD641: lea     edx, [esp+0A0h+var_80]
0x7AD645: push    edx
0x7AD646: lea     ecx, [ebx+21C0h]
0x7AD64C: call    sub_5B1E20
0x7AD651: cmp     byte ptr ds:0B42CE3h, 0
0x7AD658: jnz     short loc_7AD6AD
0x7AD65A: mov     eax, [esp+0A0h+var_84]
0x7AD65E: cmp     [eax+108h], ebp
0x7AD664: jnz     short loc_7AD688
0x7AD666: cmp     byte ptr ds:0B42CE1h, 0
0x7AD66D: jz      short loc_7AD680
0x7AD66F: cmp     byte ptr ds:0B42CE2h, 0
0x7AD676: jz      short loc_7AD680
0x7AD678: lea     ecx, [ebx+2254h]
0x7AD67E: jmp     short loc_7AD6B0
0x7AD680: lea     ecx, [ebx+2244h]
0x7AD686: jmp     short loc_7AD6B0
0x7AD688: cmp     byte ptr ds:0B42CE1h, 0
0x7AD68F: jz      short loc_7AD680
0x7AD691: mov     ecx, [esi]
0x7AD693: fld     dword ptr [ecx+28h]
0x7AD696: fild    dword ptr ds:0B42CE4h
0x7AD69C: fcompp
0x7AD69E: fnstsw  ax
0x7AD6A0: test    ah, 41h
0x7AD6A3: jnz     short loc_7AD680
0x7AD6A5: lea     ecx, [ebx+2254h]
0x7AD6AB: jmp     short loc_7AD6B0
0x7AD6AD: lea     ecx, [ebx+0Ch]
0x7AD6B0: push    esi
0x7AD6B1: call    sub_5B1E20
0x7AD6B6: test    edi, edi
0x7AD6B8: jz      short loc_7AD6CE
0x7AD6BA: mov     esi, [edi+8]
0x7AD6BD: test    esi, esi
0x7AD6BF: lea     eax, [edi+8]
0x7AD6C2: mov     edi, [edi]
0x7AD6C4: mov     [esp+0A0h+var_80], esi
0x7AD6C8: jnz     loc_7AD624
0x7AD6CE: mov     esi, [esp+0A0h+var_10]
0x7AD6D5: add     dword ptr ds:0B42CD0h, 1
0x7AD6DC: mov     edx, [esi]
0x7AD6DE: mov     eax, [edx+10h]
0x7AD6E1: mov     ecx, esi
0x7AD6E3: call    eax
0x7AD6E5: test    eax, eax
0x7AD6E7: jz      loc_7ADFC4
0x7AD6ED: mov     ecx, [esi+0B4h]
0x7AD6F3: mov     edx, [ecx]
0x7AD6F5: mov     eax, [edx+5Ch]
0x7AD6F8: call    eax
0x7AD6FA: movzx   eax, ax
0x7AD6FD: pop     ebp
0x7AD6FE: movzx   ecx, ax
0x7AD701: add     ds:0B42CC4h, ecx
0x7AD707: pop     edi
0x7AD708: pop     esi
0x7AD709: mov     al, 1
0x7AD70B: pop     ebx
0x7AD70C: add     esp, 7Ch
0x7AD70F: retn    4
0x7AD712: cmp     esi, 1Ah
0x7AD715: jnz     loc_7AD7DE
0x7AD71B: cmp     eax, 0Dh
0x7AD71E: jnz     loc_7AD7E7
0x7AD724: cmp     byte ptr [ebx+21E3h], 0
0x7AD72B: jz      loc_7ADFC4
0x7AD731: mov     ecx, ds:0B42F40h
0x7AD737: mov     edx, [ebp+0]
0x7AD73A: mov     edx, [edx+5Ch]
0x7AD73D: push    1
0x7AD73F: lea     eax, [esp+94h+var_74]
0x7AD743: push    eax
0x7AD744: mov     eax, [esp+98h]
0x7AD74B: push    ecx
0x7AD74C: push    eax
0x7AD74D: mov     ecx, ebp
0x7AD74F: mov     [esp+0A0h+var_74], 0
0x7AD757: call    edx
0x7AD759: mov     eax, [eax+4]
0x7AD75C: mov     esi, [eax+8]
0x7AD75F: test    esi, esi
0x7AD761: mov     edi, [eax]
0x7AD763: lea     ecx, [eax+8]
0x7AD766: mov     [esp+0A0h+var_80], esi
0x7AD76A: jz      loc_7AD6CE
0x7AD770: lea     ebp, [ebx+21C0h]
0x7AD776: lea     eax, [esp+0A0h+var_80]
0x7AD77A: push    eax
0x7AD77B: mov     ecx, ebp
0x7AD77D: call    sub_5B1E20
0x7AD782: cmp     byte ptr ds:0B42CE3h, 0
0x7AD789: jnz     short loc_7AD7B8
0x7AD78B: cmp     byte ptr ds:0B42CE1h, 0
0x7AD792: jz      short loc_7AD7B0
0x7AD794: mov     ecx, [esi]
0x7AD796: fld     dword ptr [ecx+28h]
0x7AD799: fild    dword ptr ds:0B42CE4h
0x7AD79F: fcompp
0x7AD7A1: fnstsw  ax
0x7AD7A3: test    ah, 41h
0x7AD7A6: jnz     short loc_7AD7B0
0x7AD7A8: lea     ecx, [ebx+2254h]
0x7AD7AE: jmp     short loc_7AD7BB
0x7AD7B0: lea     ecx, [ebx+2244h]
0x7AD7B6: jmp     short loc_7AD7BB
0x7AD7B8: lea     ecx, [ebx+0Ch]
0x7AD7BB: push    esi
0x7AD7BC: call    sub_5B1E20
0x7AD7C1: test    edi, edi
0x7AD7C3: jz      loc_7AD6CE
0x7AD7C9: mov     esi, [edi+8]
0x7AD7CC: test    esi, esi
0x7AD7CE: lea     eax, [edi+8]
0x7AD7D1: mov     edi, [edi]
0x7AD7D3: mov     [esp+0A0h+var_80], esi
0x7AD7D7: jnz     short loc_7AD776
0x7AD7D9: jmp     loc_7AD6CE
0x7AD7DE: cmp     esi, 0FFFFFFFFh
0x7AD7E1: jle     loc_7AD39F
0x7AD7E7: cmp     eax, 1
0x7AD7EA: jl      loc_7AD39F
0x7AD7F0: mov     eax, [ebp+98h]
0x7AD7F6: test    eax, eax
0x7AD7F8: jz      short loc_7AD80C
0x7AD7FA: push    1
0x7AD7FC: push    eax
0x7AD7FD: mov     ecx, ebx
0x7AD7FF: call    sub_7AA3C0
0x7AD804: test    al, al
0x7AD806: jnz     loc_7ADFC4
0x7AD80C: mov     esi, [esp+90h]
0x7AD813: mov     al, [esi+18h]
0x7AD816: mov     edx, [edi+8]
0x7AD819: shr     al, 7
0x7AD81C: test    al, 1
0x7AD81E: mov     [esp+90h+var_5C], edx
0x7AD822: jnz     short loc_7AD852
0x7AD824: cmp     word ptr ds:0B42EACh, 5
0x7AD82C: jz      short loc_7AD852
0x7AD82E: mov     eax, [ebp+1Ch]
0x7AD831: shr     eax, 1Ch
0x7AD834: push    eax
0x7AD835: call    GetShadowSceneNode
0x7AD83A: push    eax
0x7AD83B: push    esi
0x7AD83C: call    sub_7C7050
0x7AD841: add     esp, 0Ch
0x7AD844: test    al, al
0x7AD846: jz      loc_7ADFC4
0x7AD84C: or      word ptr [esi+18h], 80h
0x7AD852: cmp     dword ptr [ebx+5Ch], 0
0x7AD856: setnle  al
0x7AD859: test    dword ptr [ebp+1Ch], 200h
0x7AD860: setnbe  cl
0x7AD863: cmp     al, cl
0x7AD865: jz      short loc_7AD87B
0x7AD867: push    eax
0x7AD868: push    200h
0x7AD86D: mov     ecx, ebp
0x7AD86F: call    sub_434980
0x7AD874: mov     ecx, ebp
0x7AD876: call    sub_7E24C0
0x7AD87B: mov     ecx, ds:0B42F40h
0x7AD881: mov     edx, [ebp+0]
0x7AD884: mov     edx, [edx+5Ch]
0x7AD887: push    1
0x7AD889: lea     eax, [esp+94h+var_6C]
0x7AD88D: push    eax
0x7AD88E: push    ecx
0x7AD88F: push    esi
0x7AD890: mov     ecx, ebp
0x7AD892: mov     [esp+0A0h+var_6C], 0
0x7AD89A: call    edx
0x7AD89C: test    eax, eax
0x7AD89E: mov     [esp+0A0h+var_80], eax
0x7AD8A2: jz      loc_7ADFC4
0x7AD8A8: cmp     dword ptr [eax+0Ch], 1
0x7AD8AC: mov     [esp+0A0h+var_8D], 0
0x7AD8B1: jbe     short loc_7AD926
0x7AD8B3: mov     eax, [esp+0A0h+var_10]
0x7AD8BA: mov     esi, [eax+0Ch]
0x7AD8BD: test    esi, esi
0x7AD8BF: jz      short loc_7AD926
0x7AD8C1: xor     edi, edi
0x7AD8C3: cmp     [esp+0A0h+var_8D], 0
0x7AD8C8: jnz     short loc_7AD926
0x7AD8CA: push    esi
0x7AD8CB: push    offset unk_B3CE30
0x7AD8D0: call    NiRTTI__IsObjectOfRTTIType
0x7AD8D5: add     esp, 8
0x7AD8D8: test    al, al
0x7AD8DA: jz      short loc_7AD91F
0x7AD8DC: push    18h; Size
0x7AD8DE: call    FormHeapAlloc
0x7AD8E3: add     esp, 4
0x7AD8E6: cmp     eax, edi
0x7AD8E8: jz      short loc_7AD8FB
0x7AD8EA: mov     dword ptr [eax], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7AD8F0: mov     [eax+4], edi
0x7AD8F3: mov     [eax+8], edi
0x7AD8F6: mov     [eax+0Ch], edi
0x7AD8F9: jmp     short loc_7AD8FD
0x7AD8FB: xor     eax, eax
0x7AD8FD: fldz
0x7AD8FF: mov     ecx, eax
0x7AD901: fstp    dword ptr [eax+14h]
0x7AD904: mov     [esp+0A0h+var_88], eax
0x7AD908: call    sub_7AA6C0
0x7AD90D: lea     ecx, [esp+0A0h+var_88]
0x7AD911: push    ecx
0x7AD912: lea     ecx, [ebx+3Ch]
0x7AD915: call    sub_6AA320
0x7AD91A: mov     [esp+0A0h+var_8D], 1
0x7AD91F: mov     esi, [esi+34h]
0x7AD922: cmp     esi, edi
0x7AD924: jnz     short loc_7AD8C3
0x7AD926: mov     edx, [esp+0A0h+var_80]
0x7AD92A: cmp     dword ptr [edx+0Ch], 0
0x7AD92E: jbe     loc_7ADFC4
0x7AD934: fldz
0x7AD936: mov     ecx, [esp+0A0h+var_84]
0x7AD93A: fcomp   dword ptr [ecx+20h]
0x7AD93D: fnstsw  ax
0x7AD93F: test    ah, 5
0x7AD942: jp      loc_7ADFC4
0x7AD948: cmp     byte ptr [ebx+21E2h], 0
0x7AD94F: jz      loc_7AD9D2
0x7AD955: cmp     byte ptr [ebx+21E0h], 0
0x7AD95C: jz      short loc_7AD9D2
0x7AD95E: mov     eax, [ecx]
0x7AD960: mov     edx, [eax+64h]
0x7AD963: call    edx
0x7AD965: cmp     dword ptr [eax+0Ch], 0
0x7AD969: jbe     short loc_7AD9D2
0x7AD96B: cmp     byte ptr [ebx+21E0h], 0
0x7AD972: mov     eax, [eax+4]
0x7AD975: mov     esi, [eax+8]
0x7AD978: mov     [esp+0A0h+var_88], esi
0x7AD97C: jz      short loc_7AD997
0x7AD97E: movzx   eax, word ptr [esi+4]
0x7AD982: add     eax, 0Dh
0x7AD985: lea     ecx, [esp+0A0h+var_88]
0x7AD989: lea     edx, [eax+eax*4]
0x7AD98C: push    ecx
0x7AD98D: lea     ecx, [ebx+edx*4]
0x7AD990: call    sub_7ABDE0
0x7AD995: jmp     short loc_7AD9D2
0x7AD997: call    sub_7A9CC0
0x7AD99C: mov     edi, eax
0x7AD99E: movzx   eax, word ptr [esi+4]
0x7AD9A2: push    0
0x7AD9A4: push    eax
0x7AD9A5: call    sub_7D1320
0x7AD9AA: add     esp, 8
0x7AD9AD: test    edi, edi
0x7AD9AF: jz      short loc_7AD9C5
0x7AD9B1: mov     ecx, [edi+30h]
0x7AD9B4: mov     edx, [ecx]
0x7AD9B6: mov     eax, [edx+48h]
0x7AD9B9: call    eax
0x7AD9BB: mov     ecx, [edi+2Ch]
0x7AD9BE: mov     edx, [ecx]
0x7AD9C0: mov     eax, [edx+48h]
0x7AD9C3: call    eax
0x7AD9C5: movzx   ecx, word ptr [esi+4]
0x7AD9C9: push    ecx; float
0x7AD9CA: push    esi; int
0x7AD9CB: mov     ecx, ebx
0x7AD9CD: call    sub_7A9820
0x7AD9D2: mov     edx, [esp+0A0h+var_80]
0x7AD9D6: mov     eax, [edx+4]
0x7AD9D9: mov     ebp, [eax+8]
0x7AD9DC: test    ebp, ebp
0x7AD9DE: mov     edx, [eax]
0x7AD9E0: lea     ecx, [eax+8]
0x7AD9E3: mov     [esp+0A0h+var_8C], edx
0x7AD9E7: mov     [esp+0A0h+var_88], ebp
0x7AD9EB: jz      loc_7ADF1A
0x7AD9F1: jmp     short loc_7ADA04
0x7AD9F3: jmp     short loc_7ADA00
0x7AD9F5: align 10h
0x7ADA00: mov     edx, [esp+0A0h+var_8C]
0x7ADA04: cmp     byte ptr ds:0B42CE8h, 0
0x7ADA0B: movzx   esi, word ptr [ebp+4]
0x7ADA0F: jz      short loc_7ADA44
0x7ADA11: lea     eax, [esi-168h]
0x7ADA17: cmp     ax, 12h
0x7ADA1B: ja      short loc_7ADA2B
0x7ADA1D: cmp     si, 16Eh
0x7ADA22: jz      short loc_7ADA2B
0x7ADA24: cmp     si, 16Fh
0x7ADA29: jnz     short loc_7ADA32
0x7ADA2B: cmp     si, 17Bh
0x7ADA30: jnz     short loc_7ADA44
0x7ADA32: test    edx, edx
0x7ADA34: jz      loc_7ADF1A
0x7ADA3A: mov     ecx, [edx]
0x7ADA3C: lea     eax, [edx+8]
0x7ADA3F: jmp     loc_7ADF08
0x7ADA44: cmp     si, 190h
0x7ADA49: jz      short loc_7ADA6D
0x7ADA4B: cmp     si, 192h
0x7ADA50: jz      short loc_7ADA6D
0x7ADA52: lea     edx, [esi-34h]
0x7ADA55: cmp     dx, 13h
0x7ADA59: ja      def_7ADBF2; jumptable 007ADBF2 default case
0x7ADA5F: mov     eax, [esp+0A0h+var_80]
0x7ADA63: cmp     dword ptr [eax+0Ch], 1
0x7ADA67: jnz     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADA6D: lea     ecx, [esp+0A0h+var_78]
0x7ADA71: push    ecx
0x7ADA72: mov     ecx, [ebp+0]
0x7ADA75: call    sub_405760
0x7ADA7A: mov     edi, [eax]
0x7ADA7C: lea     ecx, [esp+0A0h+var_78]; this
0x7ADA80: call    sub_7016A0
0x7ADA85: mov     edi, [edi+0Ch]
0x7ADA88: test    edi, edi
0x7ADA8A: jz      loc_7ADC20
0x7ADA90: mov     eax, [ebx+8]
0x7ADA93: fld     dword ptr [edi+2Ch]
0x7ADA96: mov     edx, [eax+88h]
0x7ADA9C: fstp    [esp+0A0h+var_74]
0x7ADAA0: mov     ecx, [eax+8Ch]
0x7ADAA6: fld     dword ptr [edi+30h]
0x7ADAA9: add     eax, 88h ; 'ˆ'
0x7ADAAE: fstp    [esp+0A0h+var_70]
0x7ADAB2: mov     [esp+0A0h+var_68], edx
0x7ADAB6: mov     edx, [eax+8]
0x7ADAB9: mov     eax, [ebp+0]
0x7ADABC: add     eax, 20h ; ' '
0x7ADABF: mov     [esp+0A0h+var_64], ecx
0x7ADAC3: mov     ecx, [eax]
0x7ADAC5: mov     [esp+0A0h+var_44], ecx
0x7ADAC9: fld     [esp+0A0h+var_44]
0x7ADACD: fsub    [esp+0A0h+var_68]
0x7ADAD1: mov     ecx, [eax+8]
0x7ADAD4: mov     [esp+0A0h+var_60], edx
0x7ADAD8: mov     edx, [eax+4]
0x7ADADB: fstp    [esp+0A0h+var_50]
0x7ADADF: mov     [esp+0A0h+var_40], edx
0x7ADAE3: fld     [esp+0A0h+var_40]
0x7ADAE7: mov     edx, [eax+0Ch]
0x7ADAEA: fsub    [esp+0A0h+var_64]
0x7ADAEE: mov     [esp+0A0h+var_3C], ecx
0x7ADAF2: lea     ecx, [esp+0A0h+var_50]
0x7ADAF6: mov     [esp+0A0h+var_38], edx
0x7ADAFA: fstp    [esp+0A0h+var_4C]
0x7ADAFE: fld     [esp+0A0h+var_3C]
0x7ADB02: fsub    [esp+0A0h+var_60]
0x7ADB06: fstp    [esp+0A0h+var_48]
0x7ADB0A: call    sub_404C90
0x7ADB0F: fadd    [esp+0A0h+var_38]
0x7ADB13: fld     [esp+0A0h+var_74]
0x7ADB17: fcom    st(1)
0x7ADB19: fnstsw  ax
0x7ADB1B: fstp    st(1)
0x7ADB1D: test    ah, 5
0x7ADB20: jp      loc_7ADBD3
0x7ADB26: fld     [esp+0A0h+var_70]
0x7ADB2A: mov     eax, [edi+20h]
0x7ADB2D: mov     ecx, [edi+24h]
0x7ADB30: fst     [esp+0A0h+var_34]
0x7ADB34: mov     edx, [edi+28h]
0x7ADB37: fsubrp  st(1), st
0x7ADB39: mov     [esp+0A0h+var_5C], eax
0x7ADB3D: mov     eax, [esp+0A0h+var_34]
0x7ADB41: fstp    [esp+0A0h+var_30]
0x7ADB45: mov     [esp+0A0h+var_58], ecx
0x7ADB49: fldz
0x7ADB4B: mov     ecx, [esp+0A0h+var_30]
0x7ADB4F: fst     [esp+0A0h+var_2C]
0x7ADB53: mov     [esp+0A0h+var_54], edx
0x7ADB57: mov     edx, [esp+0A0h+var_2C]
0x7ADB5B: fst     [esp+0A0h+var_28]
0x7ADB5F: fld     [esp+0A0h+var_5C]
0x7ADB63: mov     ds:0B46638h, eax
0x7ADB68: mov     eax, [esp+0A0h+var_28]
0x7ADB6C: fstp    [esp+0A0h+var_24]
0x7ADB70: fld     [esp+0A0h+var_58]
0x7ADB74: mov     ds:0B4663Ch, ecx
0x7ADB7A: mov     ecx, [esp+0A0h+var_24]
0x7ADB7E: fstp    [esp+0A0h+var_20]
0x7ADB85: fld     [esp+0A0h+var_54]
0x7ADB89: mov     ds:0B46640h, edx
0x7ADB8F: mov     edx, [esp+0A0h+var_20]
0x7ADB96: fstp    [esp+0A0h+var_1C]
0x7ADB9D: mov     ds:0B46644h, eax
0x7ADBA2: mov     eax, [esp+0A0h+var_1C]
0x7ADBA9: fstp    [esp+0A0h+var_18]
0x7ADBB0: mov     ds:0B46648h, ecx
0x7ADBB6: mov     ecx, [esp+0A0h+var_18]
0x7ADBBD: mov     ds:0B4664Ch, edx
0x7ADBC3: mov     ds:0B46650h, eax
0x7ADBC8: mov     ds:0B46654h, ecx
0x7ADBCE: jmp     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADBD3: cmp     si, 190h
0x7ADBD8: fstp    st
0x7ADBDA: jz      short loc_7ADC03
0x7ADBDC: cmp     si, 192h
0x7ADBE1: jz      short loc_7ADC03
0x7ADBE3: movzx   eax, si
0x7ADBE6: add     eax, 0FFFFFFCCh; switch 20 cases
0x7ADBE9: cmp     eax, 13h
0x7ADBEC: ja      def_7ADBF2; jumptable 007ADBF2 default case
0x7ADBF2: jmp     ds:jpt_7ADBF2[eax*4]; switch jump
0x7ADBF9: mov     esi, 1Ah; jumptable 007ADBF2 case 53
0x7ADBFE: jmp     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC03: cmp     [esp+0A0h+var_8C], 0
0x7ADC08: jz      loc_7ADF1A
0x7ADC0E: mov     ecx, [esp+0A0h+var_8C]
0x7ADC12: mov     edx, [ecx]
0x7ADC14: lea     eax, [ecx+8]
0x7ADC17: mov     [esp+0A0h+var_8C], edx
0x7ADC1B: jmp     loc_7ADF0C
0x7ADC20: cmp     si, 190h
0x7ADC25: jz      loc_7ADEF8
0x7ADC2B: cmp     si, 192h
0x7ADC30: jz      loc_7ADEF8
0x7ADC36: movzx   eax, si
0x7ADC39: add     eax, 0FFFFFFCCh; switch 20 cases
0x7ADC3C: cmp     eax, 13h
0x7ADC3F: ja      def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC45: jmp     ds:jpt_7ADC45[eax*4]; switch jump
0x7ADC4C: mov     esi, 19h; jumptable 007ADBF2 case 52
0x7ADC51: jmp     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC56: mov     esi, 1Bh; jumptable 007ADBF2 case 54
0x7ADC5B: jmp     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC60: mov     esi, 1Ch; jumptable 007ADBF2 case 55
0x7ADC65: jmp     def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC6A: mov     esi, 1Eh; jumptable 007ADBF2 case 56
0x7ADC6F: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC71: mov     esi, 1Fh; jumptable 007ADBF2 case 57
0x7ADC76: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC78: mov     esi, 1Dh; jumptable 007ADBF2 case 58
0x7ADC7D: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC7F: mov     esi, 20h ; ' '; jumptable 007ADBF2 case 59
0x7ADC84: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC86: mov     esi, 21h ; '!'; jumptable 007ADBF2 case 60
0x7ADC8B: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC8D: mov     esi, 22h ; '"'; jumptable 007ADBF2 case 61
0x7ADC92: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC94: mov     esi, 24h ; '$'; jumptable 007ADBF2 case 62
0x7ADC99: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADC9B: mov     esi, 25h ; '%'; jumptable 007ADBF2 case 63
0x7ADCA0: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCA2: mov     esi, 28h ; '('; jumptable 007ADBF2 case 68
0x7ADCA7: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCA9: mov     esi, 26h ; '&'; jumptable 007ADBF2 case 64
0x7ADCAE: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCB0: mov     esi, 27h ; '''; jumptable 007ADBF2 case 65
0x7ADCB5: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCB7: mov     esi, 29h ; ')'; jumptable 007ADBF2 case 66
0x7ADCBC: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCBE: mov     esi, 2Ah ; '*'; jumptable 007ADBF2 case 67
0x7ADCC3: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCC5: mov     esi, 2Bh ; '+'; jumptable 007ADBF2 case 69
0x7ADCCA: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCCC: mov     esi, 2Ch ; ','; jumptable 007ADBF2 case 70
0x7ADCD1: jmp     short def_7ADBF2; jumptable 007ADBF2 default case
0x7ADCD3: mov     esi, 2Eh ; '.'; jumptable 007ADBF2 case 71
