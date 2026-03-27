0x7BC1B0: push    0FFFFFFFFh
0x7BC1B2: push    offset SEH_7BC1B0
0x7BC1B7: mov     eax, large fs:0
0x7BC1BD: push    eax
0x7BC1BE: sub     esp, 0Ch
0x7BC1C1: push    ebx
0x7BC1C2: push    ebp
0x7BC1C3: push    esi
0x7BC1C4: push    edi
0x7BC1C5: mov     eax, ds:0B30AACh
0x7BC1CA: xor     eax, esp
0x7BC1CC: push    eax
0x7BC1CD: lea     eax, [esp+2Ch+var_C]
0x7BC1D1: mov     large fs:0, eax
0x7BC1D7: mov     esi, ecx
0x7BC1D9: xor     ebx, ebx
0x7BC1DB: mov     [esp+2Ch+var_14], ebx
0x7BC1DF: cmp     [esi+70h], ebx
0x7BC1E2: mov     [esp+2Ch+var_4], ebx
0x7BC1E6: mov     ebp, 1
0x7BC1EB: jnz     loc_7BC41E
0x7BC1F1: lea     eax, [esp+2Ch+var_10]
0x7BC1F5: push    eax
0x7BC1F6: call    sub_7606A0
0x7BC1FB: add     esp, 4
0x7BC1FE: mov     edi, eax
0x7BC200: mov     ecx, [esi+70h]
0x7BC203: cmp     ecx, [edi]
0x7BC205: mov     byte ptr [esp+2Ch+var_4], 1
0x7BC20A: jz      short loc_7BC227
0x7BC20C: cmp     ecx, ebx
0x7BC20E: jz      short loc_7BC21B
0x7BC210: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BC214: jnz     short loc_7BC21B
0x7BC216: call    sub_7604D0
0x7BC21B: mov     eax, [edi]
0x7BC21D: cmp     eax, ebx
0x7BC21F: mov     [esi+70h], eax
0x7BC222: jz      short loc_7BC227
0x7BC224: add     [eax+60h], ebp
0x7BC227: mov     eax, [esp+2Ch+var_10]
0x7BC22B: cmp     eax, ebx
0x7BC22D: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC232: jz      short loc_7BC246
0x7BC234: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BC238: mov     ecx, eax
0x7BC23A: add     eax, 60h ; '`'
0x7BC23D: cmp     [eax], ebx
0x7BC23F: jnz     short loc_7BC246
0x7BC241: call    sub_7604D0
0x7BC246: lea     ecx, [esp+2Ch+a3]
0x7BC24A: push    ecx
0x7BC24B: call    sub_772630
0x7BC250: mov     edx, [esp+30h+a3]
0x7BC254: push    2
0x7BC256: push    3
0x7BC258: push    ebx
0x7BC259: push    edx
0x7BC25A: mov     byte ptr [esp+40h+var_4], 2
0x7BC25F: call    sub_801110
0x7BC264: mov     ecx, [esi+70h]; this
0x7BC267: mov     eax, [esp+40h+a3]
0x7BC26B: mov     edx, [ecx+14h]
0x7BC26E: add     esp, 14h
0x7BC271: push    eax; a3
0x7BC272: push    edx; a2
0x7BC273: call    sub_760010
0x7BC278: lea     eax, [esp+2Ch+var_10]
0x7BC27C: push    eax
0x7BC27D: call    sub_772630
0x7BC282: add     esp, 4
0x7BC285: mov     edi, eax
0x7BC287: mov     eax, [esp+2Ch+a3]
0x7BC28B: cmp     eax, [edi]
0x7BC28D: mov     byte ptr [esp+2Ch+var_4], 3
0x7BC292: jz      short loc_7BC2BB
0x7BC294: cmp     eax, ebx
0x7BC296: jz      short loc_7BC2AA
0x7BC298: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BC29C: mov     ecx, eax
0x7BC29E: add     eax, 5Ch ; '\'
0x7BC2A1: cmp     [eax], ebx
0x7BC2A3: jnz     short loc_7BC2AA
0x7BC2A5: call    sub_772560
0x7BC2AA: mov     eax, [edi]
0x7BC2AC: cmp     eax, ebx
0x7BC2AE: mov     [esp+2Ch+a3], eax
0x7BC2B2: jz      short loc_7BC2BB
0x7BC2B4: add     [eax+5Ch], ebp
0x7BC2B7: mov     eax, [esp+2Ch+a3]
0x7BC2BB: mov     ecx, [esp+2Ch+var_10]
0x7BC2BF: cmp     ecx, ebx
0x7BC2C1: mov     byte ptr [esp+2Ch+var_4], 2
0x7BC2C6: jz      short loc_7BC2DD
0x7BC2C8: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7BC2CC: cmp     [ecx+5Ch], ebx
0x7BC2CF: lea     eax, [ecx+5Ch]
0x7BC2D2: jnz     short loc_7BC2D9
0x7BC2D4: call    sub_772560
0x7BC2D9: mov     eax, [esp+2Ch+a3]
0x7BC2DD: push    2
0x7BC2DF: push    3
0x7BC2E1: push    ebp
0x7BC2E2: push    eax
0x7BC2E3: call    sub_801110
0x7BC2E8: mov     ecx, [esi+70h]; this
0x7BC2EB: mov     edx, [esp+3Ch+a3]
0x7BC2EF: mov     eax, [ecx+14h]
0x7BC2F2: add     esp, 10h
0x7BC2F5: push    edx; a3
0x7BC2F6: push    eax; a2
0x7BC2F7: call    sub_760010
0x7BC2FC: mov     edi, [esi+70h]
0x7BC2FF: cmp     [edi+30h], ebx
0x7BC302: jnz     short loc_7BC30C
0x7BC304: call    sub_772DF0
0x7BC309: mov     [edi+30h], eax
0x7BC30C: mov     ecx, [edi+30h]
0x7BC30F: push    ebx
0x7BC310: push    ebp
0x7BC311: push    7
0x7BC313: call    sub_772CD0
0x7BC318: mov     edi, [esi+70h]
0x7BC31B: cmp     [edi+30h], ebx
0x7BC31E: jnz     short loc_7BC328
0x7BC320: call    sub_772DF0
0x7BC325: mov     [edi+30h], eax
0x7BC328: mov     ecx, [edi+30h]
0x7BC32B: push    ebx
0x7BC32C: push    4
0x7BC32E: push    17h
0x7BC330: call    sub_772CD0
0x7BC335: mov     edi, [esi+70h]
0x7BC338: cmp     [edi+30h], ebx
0x7BC33B: jnz     short loc_7BC345
0x7BC33D: call    sub_772DF0
0x7BC342: mov     [edi+30h], eax
0x7BC345: mov     ecx, [edi+30h]
0x7BC348: push    ebx
0x7BC349: push    ebx
0x7BC34A: push    0Eh
0x7BC34C: call    sub_772CD0
0x7BC351: mov     edi, [esi+70h]
0x7BC354: cmp     [edi+30h], ebx
0x7BC357: jnz     short loc_7BC361
0x7BC359: call    sub_772DF0
0x7BC35E: mov     [edi+30h], eax
0x7BC361: mov     ecx, [edi+30h]
0x7BC364: push    ebx
0x7BC365: push    ebp
0x7BC366: push    1Bh
0x7BC368: call    sub_772CD0
0x7BC36D: mov     edi, [esi+70h]
0x7BC370: cmp     [edi+30h], ebx
0x7BC373: jnz     short loc_7BC37D
0x7BC375: call    sub_772DF0
0x7BC37A: mov     [edi+30h], eax
0x7BC37D: mov     ecx, [edi+30h]
0x7BC380: push    ebx
0x7BC381: push    5
0x7BC383: push    13h
0x7BC385: call    sub_772CD0
0x7BC38A: mov     edi, [esi+70h]
0x7BC38D: cmp     [edi+30h], ebx
0x7BC390: jnz     short loc_7BC39A
0x7BC392: call    sub_772DF0
0x7BC397: mov     [edi+30h], eax
0x7BC39A: mov     ecx, [edi+30h]
0x7BC39D: push    ebx
0x7BC39E: push    6
0x7BC3A0: push    14h
0x7BC3A2: call    sub_772CD0
0x7BC3A7: mov     edi, [esi+70h]
0x7BC3AA: cmp     [edi+30h], ebx
0x7BC3AD: jnz     short loc_7BC3B7
0x7BC3AF: call    sub_772DF0
0x7BC3B4: mov     [edi+30h], eax
0x7BC3B7: mov     ecx, [edi+30h]
0x7BC3BA: push    ebx
0x7BC3BB: push    ebx
0x7BC3BC: push    34h ; '4'
0x7BC3BE: call    sub_772CD0
0x7BC3C3: mov     edi, [esi+70h]
0x7BC3C6: cmp     [edi+30h], ebx
0x7BC3C9: jnz     short loc_7BC3D3
0x7BC3CB: call    sub_772DF0
0x7BC3D0: mov     [edi+30h], eax
0x7BC3D3: mov     ecx, [edi+30h]
0x7BC3D6: push    ebx
0x7BC3D7: push    ebx
0x7BC3D8: push    0Fh
0x7BC3DA: call    sub_772CD0
0x7BC3DF: mov     edi, [esi+70h]
0x7BC3E2: cmp     [edi+30h], ebx
0x7BC3E5: jnz     short loc_7BC3EF
0x7BC3E7: call    sub_772DF0
0x7BC3EC: mov     [edi+30h], eax
0x7BC3EF: mov     ecx, [edi+30h]
0x7BC3F2: push    ebx
0x7BC3F3: push    7
0x7BC3F5: push    0A8h ; '¨'
0x7BC3FA: call    sub_772CD0
0x7BC3FF: mov     eax, [esp+2Ch+a3]
0x7BC403: cmp     eax, ebx
0x7BC405: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC40A: jz      short loc_7BC41E
0x7BC40C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BC410: mov     ecx, eax
0x7BC412: add     eax, 5Ch ; '\'
0x7BC415: cmp     [eax], ebx
0x7BC417: jnz     short loc_7BC41E
0x7BC419: call    sub_772560
0x7BC41E: mov     ebx, [esi+70h]
0x7BC421: mov     ebp, [esi+7Ch]
0x7BC424: mov     edi, [ebx+58h]
0x7BC427: cmp     edi, ebp
0x7BC429: jz      short loc_7BC45C
0x7BC42B: test    edi, edi
0x7BC42D: jz      short loc_7BC44B
0x7BC42F: lea     ecx, [edi+4]
0x7BC432: push    ecx; lpAddend
0x7BC433: call    dword ptr ds:0A2807Ch
0x7BC439: test    eax, eax
0x7BC43B: jnz     short loc_7BC44B
0x7BC43D: test    edi, edi
0x7BC43F: jz      short loc_7BC44B
0x7BC441: mov     edx, [edi]
0x7BC443: mov     eax, [edx]
0x7BC445: push    1
0x7BC447: mov     ecx, edi
0x7BC449: call    eax
0x7BC44B: test    ebp, ebp
0x7BC44D: mov     [ebx+58h], ebp
0x7BC450: jz      short loc_7BC45C
0x7BC452: add     ebp, 4
0x7BC455: push    ebp; lpAddend
0x7BC456: call    dword ptr ds:0A28078h
0x7BC45C: cmp     dword ptr [esi+0ACh], 0
0x7BC463: jnz     loc_7BC62F
0x7BC469: lea     ecx, [esp+2Ch+var_10]
0x7BC46D: push    ecx
0x7BC46E: call    sub_7606A0
0x7BC473: add     esp, 4
0x7BC476: mov     edi, eax
0x7BC478: mov     ecx, [esi+0ACh]
0x7BC47E: cmp     ecx, [edi]
0x7BC480: mov     byte ptr [esp+2Ch+var_4], 4
0x7BC485: jz      short loc_7BC4A6
0x7BC487: test    ecx, ecx
0x7BC489: jz      short loc_7BC496
0x7BC48B: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BC48F: jnz     short loc_7BC496
0x7BC491: call    sub_7604D0
0x7BC496: mov     eax, [edi]
0x7BC498: test    eax, eax
0x7BC49A: mov     [esi+0ACh], eax
0x7BC4A0: jz      short loc_7BC4A6
0x7BC4A2: add     dword ptr [eax+60h], 1
0x7BC4A6: mov     eax, [esp+2Ch+var_10]
0x7BC4AA: test    eax, eax
0x7BC4AC: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC4B1: jz      short loc_7BC4C6
0x7BC4B3: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BC4B7: mov     ecx, eax
0x7BC4B9: add     eax, 60h ; '`'
0x7BC4BC: cmp     dword ptr [eax], 0
0x7BC4BF: jnz     short loc_7BC4C6
0x7BC4C1: call    sub_7604D0
0x7BC4C6: lea     edx, [esp+2Ch+a3]
0x7BC4CA: push    edx
0x7BC4CB: call    sub_772630
0x7BC4D0: mov     eax, [esp+30h+a3]
0x7BC4D4: push    2
0x7BC4D6: push    3
0x7BC4D8: push    0
0x7BC4DA: push    eax
0x7BC4DB: mov     byte ptr [esp+40h+var_4], 5
0x7BC4E0: call    sub_801110
0x7BC4E5: mov     ecx, [esi+0ACh]; this
0x7BC4EB: mov     edx, [esp+40h+a3]
0x7BC4EF: mov     eax, [ecx+14h]
0x7BC4F2: add     esp, 14h
0x7BC4F5: push    edx; a3
0x7BC4F6: push    eax; a2
0x7BC4F7: call    sub_760010
0x7BC4FC: mov     edi, [esi+0ACh]
0x7BC502: cmp     dword ptr [edi+30h], 0
0x7BC506: jnz     short loc_7BC510
0x7BC508: call    sub_772DF0
0x7BC50D: mov     [edi+30h], eax
0x7BC510: mov     ecx, [edi+30h]
0x7BC513: push    0
0x7BC515: push    0
0x7BC517: push    7
0x7BC519: call    sub_772CD0
0x7BC51E: mov     edi, [esi+0ACh]
0x7BC524: cmp     dword ptr [edi+30h], 0
0x7BC528: jnz     short loc_7BC532
0x7BC52A: call    sub_772DF0
0x7BC52F: mov     [edi+30h], eax
0x7BC532: mov     ecx, [edi+30h]
0x7BC535: push    0
0x7BC537: push    0
0x7BC539: push    0Eh
0x7BC53B: call    sub_772CD0
0x7BC540: mov     edi, [esi+0ACh]
0x7BC546: cmp     dword ptr [edi+30h], 0
0x7BC54A: jnz     short loc_7BC554
0x7BC54C: call    sub_772DF0
0x7BC551: mov     [edi+30h], eax
0x7BC554: mov     ecx, [edi+30h]
0x7BC557: push    0
0x7BC559: push    1
0x7BC55B: push    1Bh
0x7BC55D: call    sub_772CD0
0x7BC562: mov     edi, [esi+0ACh]
0x7BC568: cmp     dword ptr [edi+30h], 0
0x7BC56C: jnz     short loc_7BC576
0x7BC56E: call    sub_772DF0
0x7BC573: mov     [edi+30h], eax
0x7BC576: mov     ecx, [edi+30h]
0x7BC579: push    0
0x7BC57B: push    5
0x7BC57D: push    13h
0x7BC57F: call    sub_772CD0
0x7BC584: mov     edi, [esi+0ACh]
0x7BC58A: cmp     dword ptr [edi+30h], 0
0x7BC58E: jnz     short loc_7BC598
0x7BC590: call    sub_772DF0
0x7BC595: mov     [edi+30h], eax
0x7BC598: mov     ecx, [edi+30h]
0x7BC59B: push    0
0x7BC59D: push    2
0x7BC59F: push    14h
0x7BC5A1: call    sub_772CD0
0x7BC5A6: mov     edi, [esi+0ACh]
0x7BC5AC: cmp     dword ptr [edi+30h], 0
0x7BC5B0: jnz     short loc_7BC5BA
0x7BC5B2: call    sub_772DF0
0x7BC5B7: mov     [edi+30h], eax
0x7BC5BA: mov     ecx, [edi+30h]
0x7BC5BD: push    0
0x7BC5BF: push    0
0x7BC5C1: push    34h ; '4'
0x7BC5C3: call    sub_772CD0
0x7BC5C8: mov     edi, [esi+0ACh]
0x7BC5CE: cmp     dword ptr [edi+30h], 0
0x7BC5D2: jnz     short loc_7BC5DC
0x7BC5D4: call    sub_772DF0
0x7BC5D9: mov     [edi+30h], eax
0x7BC5DC: mov     ecx, [edi+30h]
0x7BC5DF: push    0
0x7BC5E1: push    0
0x7BC5E3: push    0Fh
0x7BC5E5: call    sub_772CD0
0x7BC5EA: mov     edi, [esi+0ACh]
0x7BC5F0: cmp     dword ptr [edi+30h], 0
0x7BC5F4: jnz     short loc_7BC5FE
0x7BC5F6: call    sub_772DF0
0x7BC5FB: mov     [edi+30h], eax
0x7BC5FE: mov     ecx, [edi+30h]
0x7BC601: push    0
0x7BC603: push    7
0x7BC605: push    0A8h ; '¨'
0x7BC60A: call    sub_772CD0
0x7BC60F: mov     eax, [esp+2Ch+a3]
0x7BC613: test    eax, eax
0x7BC615: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC61A: jz      short loc_7BC62F
0x7BC61C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BC620: mov     ecx, eax
0x7BC622: add     eax, 5Ch ; '\'
0x7BC625: cmp     dword ptr [eax], 0
0x7BC628: jnz     short loc_7BC62F
0x7BC62A: call    sub_772560
0x7BC62F: mov     ebx, [esi+0ACh]
0x7BC635: mov     ebp, [esi+80h]
0x7BC63B: mov     edi, [ebx+58h]
0x7BC63E: cmp     edi, ebp
0x7BC640: jz      short loc_7BC673
0x7BC642: test    edi, edi
0x7BC644: jz      short loc_7BC662
0x7BC646: lea     ecx, [edi+4]
0x7BC649: push    ecx; lpAddend
0x7BC64A: call    dword ptr ds:0A2807Ch
0x7BC650: test    eax, eax
0x7BC652: jnz     short loc_7BC662
0x7BC654: test    edi, edi
0x7BC656: jz      short loc_7BC662
0x7BC658: mov     edx, [edi]
0x7BC65A: mov     eax, [edx]
0x7BC65C: push    1
0x7BC65E: mov     ecx, edi
0x7BC660: call    eax
0x7BC662: test    ebp, ebp
0x7BC664: mov     [ebx+58h], ebp
0x7BC667: jz      short loc_7BC673
0x7BC669: add     ebp, 4
0x7BC66C: push    ebp; lpAddend
0x7BC66D: call    dword ptr ds:0A28078h
0x7BC673: mov     ebx, [esi+0ACh]
0x7BC679: mov     ebp, [esi+98h]
0x7BC67F: mov     edi, [ebx+44h]
0x7BC682: cmp     edi, ebp
0x7BC684: jz      short loc_7BC6B7
0x7BC686: test    edi, edi
0x7BC688: jz      short loc_7BC6A6
0x7BC68A: lea     ecx, [edi+4]
0x7BC68D: push    ecx; lpAddend
0x7BC68E: call    dword ptr ds:0A2807Ch
0x7BC694: test    eax, eax
0x7BC696: jnz     short loc_7BC6A6
0x7BC698: test    edi, edi
0x7BC69A: jz      short loc_7BC6A6
0x7BC69C: mov     edx, [edi]
0x7BC69E: mov     eax, [edx]
0x7BC6A0: push    1
0x7BC6A2: mov     ecx, edi
0x7BC6A4: call    eax
0x7BC6A6: test    ebp, ebp
0x7BC6A8: mov     [ebx+44h], ebp
0x7BC6AB: jz      short loc_7BC6B7
0x7BC6AD: add     ebp, 4
0x7BC6B0: push    ebp; lpAddend
0x7BC6B1: call    dword ptr ds:0A28078h
0x7BC6B7: cmp     dword ptr [esi+0B4h], 0
0x7BC6BE: jnz     loc_7BC896
0x7BC6C4: lea     ecx, [esp+2Ch+var_10]
0x7BC6C8: push    ecx
0x7BC6C9: call    sub_7606A0
0x7BC6CE: add     esp, 4
0x7BC6D1: mov     edi, eax
0x7BC6D3: mov     ecx, [esi+0B4h]
0x7BC6D9: cmp     ecx, [edi]
0x7BC6DB: mov     byte ptr [esp+2Ch+var_4], 6
0x7BC6E0: jz      short loc_7BC701
0x7BC6E2: test    ecx, ecx
0x7BC6E4: jz      short loc_7BC6F1
0x7BC6E6: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BC6EA: jnz     short loc_7BC6F1
0x7BC6EC: call    sub_7604D0
0x7BC6F1: mov     eax, [edi]
0x7BC6F3: test    eax, eax
0x7BC6F5: mov     [esi+0B4h], eax
0x7BC6FB: jz      short loc_7BC701
0x7BC6FD: add     dword ptr [eax+60h], 1
0x7BC701: mov     eax, [esp+2Ch+var_10]
0x7BC705: test    eax, eax
0x7BC707: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC70C: jz      short loc_7BC721
0x7BC70E: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BC712: mov     ecx, eax
0x7BC714: add     eax, 60h ; '`'
0x7BC717: cmp     dword ptr [eax], 0
0x7BC71A: jnz     short loc_7BC721
0x7BC71C: call    sub_7604D0
0x7BC721: lea     edx, [esp+2Ch+var_10]
0x7BC725: push    edx
0x7BC726: call    sub_772630
0x7BC72B: add     esp, 4
0x7BC72E: mov     eax, [eax]
0x7BC730: test    eax, eax
0x7BC732: jz      short loc_7BC740
0x7BC734: mov     edi, eax
0x7BC736: add     dword ptr [edi+5Ch], 1
0x7BC73A: mov     [esp+2Ch+var_14], edi
0x7BC73E: jmp     short loc_7BC744
0x7BC740: mov     edi, [esp+2Ch+var_14]
0x7BC744: mov     eax, [esp+2Ch+var_10]
0x7BC748: test    eax, eax
0x7BC74A: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC74F: jz      short loc_7BC764
0x7BC751: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BC755: mov     ecx, eax
0x7BC757: add     eax, 5Ch ; '\'
0x7BC75A: cmp     dword ptr [eax], 0
0x7BC75D: jnz     short loc_7BC764
0x7BC75F: call    sub_772560
0x7BC764: push    2
0x7BC766: push    3
0x7BC768: push    0
0x7BC76A: push    edi
0x7BC76B: call    sub_801110
0x7BC770: mov     ecx, [esi+0B4h]; this
0x7BC776: mov     eax, [ecx+14h]
0x7BC779: add     esp, 10h
0x7BC77C: push    edi; a3
0x7BC77D: push    eax; a2
0x7BC77E: call    sub_760010
0x7BC783: mov     edi, [esi+0B4h]
0x7BC789: cmp     dword ptr [edi+30h], 0
0x7BC78D: jnz     short loc_7BC797
0x7BC78F: call    sub_772DF0
0x7BC794: mov     [edi+30h], eax
0x7BC797: mov     ecx, [edi+30h]
0x7BC79A: push    0
0x7BC79C: push    1
0x7BC79E: push    1Bh
0x7BC7A0: call    sub_772CD0
0x7BC7A5: mov     edi, [esi+0B4h]
0x7BC7AB: cmp     dword ptr [edi+30h], 0
0x7BC7AF: jnz     short loc_7BC7B9
0x7BC7B1: call    sub_772DF0
0x7BC7B6: mov     [edi+30h], eax
0x7BC7B9: mov     ecx, [edi+30h]
0x7BC7BC: push    0
0x7BC7BE: push    2
0x7BC7C0: push    13h
0x7BC7C2: call    sub_772CD0
0x7BC7C7: mov     edi, [esi+0B4h]
0x7BC7CD: cmp     dword ptr [edi+30h], 0
0x7BC7D1: jnz     short loc_7BC7DB
0x7BC7D3: call    sub_772DF0
0x7BC7D8: mov     [edi+30h], eax
0x7BC7DB: mov     ecx, [edi+30h]
0x7BC7DE: push    0
0x7BC7E0: push    2
0x7BC7E2: push    14h
0x7BC7E4: call    sub_772CD0
0x7BC7E9: mov     edi, [esi+0B4h]
0x7BC7EF: cmp     dword ptr [edi+30h], 0
0x7BC7F3: jnz     short loc_7BC7FD
0x7BC7F5: call    sub_772DF0
0x7BC7FA: mov     [edi+30h], eax
0x7BC7FD: mov     ecx, [edi+30h]
0x7BC800: push    0
0x7BC802: push    0
0x7BC804: push    0Fh
0x7BC806: call    sub_772CD0
0x7BC80B: mov     edi, [esi+0B4h]
0x7BC811: cmp     dword ptr [edi+30h], 0
0x7BC815: jnz     short loc_7BC81F
0x7BC817: call    sub_772DF0
0x7BC81C: mov     [edi+30h], eax
0x7BC81F: mov     ecx, [edi+30h]
0x7BC822: push    0
0x7BC824: push    1
0x7BC826: push    7
0x7BC828: call    sub_772CD0
0x7BC82D: mov     edi, [esi+0B4h]
0x7BC833: cmp     dword ptr [edi+30h], 0
0x7BC837: jnz     short loc_7BC841
0x7BC839: call    sub_772DF0
0x7BC83E: mov     [edi+30h], eax
0x7BC841: mov     ecx, [edi+30h]
0x7BC844: push    0
0x7BC846: push    0
0x7BC848: push    0Eh
0x7BC84A: call    sub_772CD0
0x7BC84F: mov     edi, [esi+0B4h]
0x7BC855: cmp     dword ptr [edi+30h], 0
0x7BC859: jnz     short loc_7BC863
0x7BC85B: call    sub_772DF0
0x7BC860: mov     [edi+30h], eax
0x7BC863: mov     ecx, [edi+30h]
0x7BC866: push    0
0x7BC868: push    4
0x7BC86A: push    17h
0x7BC86C: call    sub_772CD0
0x7BC871: mov     edi, [esi+0B4h]
0x7BC877: cmp     dword ptr [edi+30h], 0
0x7BC87B: jnz     short loc_7BC885
0x7BC87D: call    sub_772DF0
0x7BC882: mov     [edi+30h], eax
0x7BC885: mov     ecx, [edi+30h]
0x7BC888: push    0
0x7BC88A: push    0
0x7BC88C: push    0A8h ; '¨'
0x7BC891: call    sub_772CD0
0x7BC896: mov     ebx, [esi+0B4h]
0x7BC89C: mov     ebp, [esi+8Ch]
0x7BC8A2: mov     edi, [ebx+58h]
0x7BC8A5: cmp     edi, ebp
0x7BC8A7: jz      short loc_7BC8DA
0x7BC8A9: test    edi, edi
0x7BC8AB: jz      short loc_7BC8C9
0x7BC8AD: lea     ecx, [edi+4]
0x7BC8B0: push    ecx; lpAddend
0x7BC8B1: call    dword ptr ds:0A2807Ch
0x7BC8B7: test    eax, eax
0x7BC8B9: jnz     short loc_7BC8C9
0x7BC8BB: test    edi, edi
0x7BC8BD: jz      short loc_7BC8C9
0x7BC8BF: mov     edx, [edi]
0x7BC8C1: mov     eax, [edx]
0x7BC8C3: push    1
0x7BC8C5: mov     ecx, edi
0x7BC8C7: call    eax
0x7BC8C9: test    ebp, ebp
0x7BC8CB: mov     [ebx+58h], ebp
0x7BC8CE: jz      short loc_7BC8DA
0x7BC8D0: add     ebp, 4
0x7BC8D3: push    ebp; lpAddend
0x7BC8D4: call    dword ptr ds:0A28078h
0x7BC8DA: mov     ebx, [esi+0B4h]
0x7BC8E0: mov     ebp, [esi+0A4h]
0x7BC8E6: mov     edi, [ebx+44h]
0x7BC8E9: cmp     edi, ebp
0x7BC8EB: jz      short loc_7BC91E
0x7BC8ED: test    edi, edi
0x7BC8EF: jz      short loc_7BC90D
0x7BC8F1: lea     ecx, [edi+4]
0x7BC8F4: push    ecx; lpAddend
0x7BC8F5: call    dword ptr ds:0A2807Ch
0x7BC8FB: test    eax, eax
0x7BC8FD: jnz     short loc_7BC90D
0x7BC8FF: test    edi, edi
0x7BC901: jz      short loc_7BC90D
0x7BC903: mov     edx, [edi]
0x7BC905: mov     eax, [edx]
0x7BC907: push    1
0x7BC909: mov     ecx, edi
0x7BC90B: call    eax
0x7BC90D: test    ebp, ebp
0x7BC90F: mov     [ebx+44h], ebp
0x7BC912: jz      short loc_7BC91E
0x7BC914: add     ebp, 4
0x7BC917: push    ebp; lpAddend
0x7BC918: call    dword ptr ds:0A28078h
0x7BC91E: mov     eax, [esi+0B8h]
0x7BC924: test    eax, eax
0x7BC926: jnz     loc_7BCAD2
0x7BC92C: lea     ecx, [esp+2Ch+var_10]
0x7BC930: push    ecx
0x7BC931: call    sub_7606A0
0x7BC936: add     esp, 4
0x7BC939: mov     edi, eax
0x7BC93B: mov     ecx, [esi+0B8h]
0x7BC941: cmp     ecx, [edi]
0x7BC943: mov     byte ptr [esp+2Ch+var_4], 8
0x7BC948: jz      short loc_7BC969
0x7BC94A: test    ecx, ecx
0x7BC94C: jz      short loc_7BC959
0x7BC94E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BC952: jnz     short loc_7BC959
0x7BC954: call    sub_7604D0
0x7BC959: mov     eax, [edi]
0x7BC95B: test    eax, eax
0x7BC95D: mov     [esi+0B8h], eax
0x7BC963: jz      short loc_7BC969
0x7BC965: add     dword ptr [eax+60h], 1
0x7BC969: mov     eax, [esp+2Ch+var_10]
0x7BC96D: test    eax, eax
0x7BC96F: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC974: jz      short loc_7BC989
0x7BC976: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BC97A: mov     ecx, eax
0x7BC97C: add     eax, 60h ; '`'
0x7BC97F: cmp     dword ptr [eax], 0
0x7BC982: jnz     short loc_7BC989
0x7BC984: call    sub_7604D0
0x7BC989: lea     edx, [esp+2Ch+var_10]
0x7BC98D: push    edx
0x7BC98E: call    sub_772630
0x7BC993: add     esp, 4
0x7BC996: mov     ebx, eax
0x7BC998: mov     edi, [esp+2Ch+var_14]
0x7BC99C: cmp     edi, [ebx]
0x7BC99E: mov     byte ptr [esp+2Ch+var_4], 9
0x7BC9A3: jz      short loc_7BC9C4
0x7BC9A5: test    edi, edi
0x7BC9A7: jz      short loc_7BC9B6
0x7BC9A9: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7BC9AD: jnz     short loc_7BC9B6
0x7BC9AF: mov     ecx, edi
0x7BC9B1: call    sub_772560
0x7BC9B6: mov     edi, [ebx]
0x7BC9B8: test    edi, edi
0x7BC9BA: mov     [esp+2Ch+var_14], edi
0x7BC9BE: jz      short loc_7BC9C4
0x7BC9C0: add     dword ptr [edi+5Ch], 1
0x7BC9C4: mov     eax, [esp+2Ch+var_10]
0x7BC9C8: test    eax, eax
0x7BC9CA: mov     byte ptr [esp+2Ch+var_4], 0
0x7BC9CF: jz      short loc_7BC9E4
0x7BC9D1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BC9D5: mov     ecx, eax
0x7BC9D7: add     eax, 5Ch ; '\'
0x7BC9DA: cmp     dword ptr [eax], 0
0x7BC9DD: jnz     short loc_7BC9E4
0x7BC9DF: call    sub_772560
0x7BC9E4: push    2
0x7BC9E6: push    3
0x7BC9E8: push    0
0x7BC9EA: push    edi
0x7BC9EB: call    sub_801110
0x7BC9F0: mov     ecx, [esi+0B8h]; this
0x7BC9F6: mov     eax, [ecx+14h]
0x7BC9F9: add     esp, 10h
0x7BC9FC: push    edi; a3
0x7BC9FD: push    eax; a2
0x7BC9FE: call    sub_760010
0x7BCA03: mov     edi, [esi+0B8h]
0x7BCA09: cmp     dword ptr [edi+30h], 0
0x7BCA0D: jnz     short loc_7BCA17
0x7BCA0F: call    sub_772DF0
0x7BCA14: mov     [edi+30h], eax
0x7BCA17: mov     ecx, [edi+30h]
0x7BCA1A: push    0
0x7BCA1C: push    0
0x7BCA1E: push    0Fh
0x7BCA20: call    sub_772CD0
0x7BCA25: mov     edi, [esi+0B8h]
0x7BCA2B: cmp     dword ptr [edi+30h], 0
0x7BCA2F: jnz     short loc_7BCA39
0x7BCA31: call    sub_772DF0
0x7BCA36: mov     [edi+30h], eax
0x7BCA39: mov     ecx, [edi+30h]
0x7BCA3C: push    0
0x7BCA3E: push    0
0x7BCA40: push    1Bh
0x7BCA42: call    sub_772CD0
0x7BCA47: mov     edi, [esi+0B8h]
0x7BCA4D: cmp     dword ptr [edi+30h], 0
0x7BCA51: jnz     short loc_7BCA5B
0x7BCA53: call    sub_772DF0
0x7BCA58: mov     [edi+30h], eax
0x7BCA5B: mov     ecx, [edi+30h]
0x7BCA5E: push    0
0x7BCA60: push    1
0x7BCA62: push    7
0x7BCA64: call    sub_772CD0
0x7BCA69: mov     edi, [esi+0B8h]
0x7BCA6F: cmp     dword ptr [edi+30h], 0
0x7BCA73: jnz     short loc_7BCA7D
0x7BCA75: call    sub_772DF0
0x7BCA7A: mov     [edi+30h], eax
0x7BCA7D: mov     ecx, [edi+30h]
0x7BCA80: push    0
0x7BCA82: push    0
0x7BCA84: push    0Eh
0x7BCA86: call    sub_772CD0
0x7BCA8B: mov     edi, [esi+0B8h]
0x7BCA91: cmp     dword ptr [edi+30h], 0
0x7BCA95: jnz     short loc_7BCA9F
0x7BCA97: call    sub_772DF0
0x7BCA9C: mov     [edi+30h], eax
0x7BCA9F: mov     ecx, [edi+30h]
0x7BCAA2: push    0
0x7BCAA4: push    4
0x7BCAA6: push    17h
0x7BCAA8: call    sub_772CD0
0x7BCAAD: mov     edi, [esi+0B8h]
0x7BCAB3: cmp     dword ptr [edi+30h], 0
0x7BCAB7: jnz     short loc_7BCAC1
0x7BCAB9: call    sub_772DF0
0x7BCABE: mov     [edi+30h], eax
0x7BCAC1: mov     ecx, [edi+30h]
0x7BCAC4: push    0
0x7BCAC6: push    8
0x7BCAC8: push    0A8h ; '¨'
0x7BCACD: call    sub_772CD0
0x7BCAD2: mov     ebx, [esi+0B8h]
0x7BCAD8: mov     ebp, [esi+0CCh]
0x7BCADE: mov     edi, [ebx+58h]
0x7BCAE1: cmp     edi, ebp
0x7BCAE3: jz      short loc_7BCB16
0x7BCAE5: test    edi, edi
0x7BCAE7: jz      short loc_7BCB05
0x7BCAE9: lea     ecx, [edi+4]
0x7BCAEC: push    ecx; lpAddend
0x7BCAED: call    dword ptr ds:0A2807Ch
0x7BCAF3: test    eax, eax
0x7BCAF5: jnz     short loc_7BCB05
0x7BCAF7: test    edi, edi
0x7BCAF9: jz      short loc_7BCB05
0x7BCAFB: mov     edx, [edi]
0x7BCAFD: mov     eax, [edx]
0x7BCAFF: push    1
0x7BCB01: mov     ecx, edi
0x7BCB03: call    eax
0x7BCB05: test    ebp, ebp
0x7BCB07: mov     [ebx+58h], ebp
0x7BCB0A: jz      short loc_7BCB16
0x7BCB0C: add     ebp, 4
0x7BCB0F: push    ebp; lpAddend
0x7BCB10: call    dword ptr ds:0A28078h
0x7BCB16: mov     ebx, [esi+0B8h]
0x7BCB1C: mov     ebp, [esi+0D0h]
0x7BCB22: mov     edi, [ebx+44h]
0x7BCB25: cmp     edi, ebp
0x7BCB27: jz      short loc_7BCB5A
0x7BCB29: test    edi, edi
0x7BCB2B: jz      short loc_7BCB49
0x7BCB2D: lea     ecx, [edi+4]
0x7BCB30: push    ecx; lpAddend
0x7BCB31: call    dword ptr ds:0A2807Ch
0x7BCB37: test    eax, eax
0x7BCB39: jnz     short loc_7BCB49
0x7BCB3B: test    edi, edi
0x7BCB3D: jz      short loc_7BCB49
0x7BCB3F: mov     edx, [edi]
0x7BCB41: mov     eax, [edx]
0x7BCB43: push    1
0x7BCB45: mov     ecx, edi
0x7BCB47: call    eax
0x7BCB49: test    ebp, ebp
0x7BCB4B: mov     [ebx+44h], ebp
0x7BCB4E: jz      short loc_7BCB5A
0x7BCB50: add     ebp, 4
0x7BCB53: push    ebp; lpAddend
0x7BCB54: call    dword ptr ds:0A28078h
0x7BCB5A: cmp     dword ptr [esi+0BCh], 0
0x7BCB61: jnz     loc_7BCD51
0x7BCB67: lea     ecx, [esp+2Ch+var_10]
0x7BCB6B: push    ecx
0x7BCB6C: call    sub_7606A0
0x7BCB71: add     esp, 4
0x7BCB74: mov     edi, eax
0x7BCB76: mov     ecx, [esi+0BCh]
0x7BCB7C: cmp     ecx, [edi]
0x7BCB7E: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x7BCB83: jz      short loc_7BCBA4
0x7BCB85: test    ecx, ecx
0x7BCB87: jz      short loc_7BCB94
0x7BCB89: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BCB8D: jnz     short loc_7BCB94
0x7BCB8F: call    sub_7604D0
0x7BCB94: mov     eax, [edi]
0x7BCB96: test    eax, eax
0x7BCB98: mov     [esi+0BCh], eax
0x7BCB9E: jz      short loc_7BCBA4
0x7BCBA0: add     dword ptr [eax+60h], 1
0x7BCBA4: mov     eax, [esp+2Ch+var_10]
0x7BCBA8: test    eax, eax
0x7BCBAA: mov     byte ptr [esp+2Ch+var_4], 0
0x7BCBAF: jz      short loc_7BCBC4
0x7BCBB1: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BCBB5: mov     ecx, eax
0x7BCBB7: add     eax, 60h ; '`'
0x7BCBBA: cmp     dword ptr [eax], 0
0x7BCBBD: jnz     short loc_7BCBC4
0x7BCBBF: call    sub_7604D0
0x7BCBC4: lea     edx, [esp+2Ch+var_10]
0x7BCBC8: push    edx
0x7BCBC9: call    sub_772630
0x7BCBCE: add     esp, 4
0x7BCBD1: mov     ebx, eax
0x7BCBD3: mov     edi, [esp+2Ch+var_14]
0x7BCBD7: cmp     edi, [ebx]
0x7BCBD9: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x7BCBDE: jz      short loc_7BCBFF
0x7BCBE0: test    edi, edi
0x7BCBE2: jz      short loc_7BCBF1
0x7BCBE4: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7BCBE8: jnz     short loc_7BCBF1
0x7BCBEA: mov     ecx, edi
0x7BCBEC: call    sub_772560
0x7BCBF1: mov     edi, [ebx]
0x7BCBF3: test    edi, edi
0x7BCBF5: mov     [esp+2Ch+var_14], edi
0x7BCBF9: jz      short loc_7BCBFF
0x7BCBFB: add     dword ptr [edi+5Ch], 1
0x7BCBFF: mov     eax, [esp+2Ch+var_10]
0x7BCC03: test    eax, eax
0x7BCC05: mov     byte ptr [esp+2Ch+var_4], 0
0x7BCC0A: jz      short loc_7BCC1F
0x7BCC0C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BCC10: mov     ecx, eax
0x7BCC12: add     eax, 5Ch ; '\'
0x7BCC15: cmp     dword ptr [eax], 0
0x7BCC18: jnz     short loc_7BCC1F
0x7BCC1A: call    sub_772560
0x7BCC1F: push    2
0x7BCC21: push    3
0x7BCC23: push    0
0x7BCC25: push    edi
0x7BCC26: call    sub_801110
0x7BCC2B: mov     ecx, [esi+0BCh]; this
0x7BCC31: mov     eax, [ecx+14h]
0x7BCC34: add     esp, 10h
0x7BCC37: push    edi; a3
0x7BCC38: push    eax; a2
0x7BCC39: call    sub_760010
0x7BCC3E: mov     edi, [esi+0BCh]
0x7BCC44: cmp     dword ptr [edi+30h], 0
0x7BCC48: jnz     short loc_7BCC52
0x7BCC4A: call    sub_772DF0
0x7BCC4F: mov     [edi+30h], eax
0x7BCC52: mov     ecx, [edi+30h]
0x7BCC55: push    0
0x7BCC57: push    1
0x7BCC59: push    1Bh
0x7BCC5B: call    sub_772CD0
0x7BCC60: mov     edi, [esi+0BCh]
0x7BCC66: cmp     dword ptr [edi+30h], 0
0x7BCC6A: jnz     short loc_7BCC74
0x7BCC6C: call    sub_772DF0
0x7BCC71: mov     [edi+30h], eax
0x7BCC74: mov     ecx, [edi+30h]
0x7BCC77: push    0
0x7BCC79: push    2
0x7BCC7B: push    13h
0x7BCC7D: call    sub_772CD0
0x7BCC82: mov     edi, [esi+0BCh]
0x7BCC88: cmp     dword ptr [edi+30h], 0
0x7BCC8C: jnz     short loc_7BCC96
0x7BCC8E: call    sub_772DF0
0x7BCC93: mov     [edi+30h], eax
0x7BCC96: mov     ecx, [edi+30h]
0x7BCC99: push    0
0x7BCC9B: push    2
0x7BCC9D: push    14h
0x7BCC9F: call    sub_772CD0
0x7BCCA4: mov     edi, [esi+0BCh]
0x7BCCAA: cmp     dword ptr [edi+30h], 0
0x7BCCAE: jnz     short loc_7BCCB8
0x7BCCB0: call    sub_772DF0
0x7BCCB5: mov     [edi+30h], eax
0x7BCCB8: mov     ecx, [edi+30h]
0x7BCCBB: push    0
0x7BCCBD: push    0
0x7BCCBF: push    0Fh
0x7BCCC1: call    sub_772CD0
0x7BCCC6: mov     edi, [esi+0BCh]
0x7BCCCC: cmp     dword ptr [edi+30h], 0
0x7BCCD0: jnz     short loc_7BCCDA
0x7BCCD2: call    sub_772DF0
0x7BCCD7: mov     [edi+30h], eax
0x7BCCDA: mov     ecx, [edi+30h]
0x7BCCDD: push    0
0x7BCCDF: push    1
0x7BCCE1: push    7
0x7BCCE3: call    sub_772CD0
0x7BCCE8: mov     edi, [esi+0BCh]
0x7BCCEE: cmp     dword ptr [edi+30h], 0
0x7BCCF2: jnz     short loc_7BCCFC
0x7BCCF4: call    sub_772DF0
0x7BCCF9: mov     [edi+30h], eax
0x7BCCFC: mov     ecx, [edi+30h]
0x7BCCFF: push    0
0x7BCD01: push    0
0x7BCD03: push    0Eh
0x7BCD05: call    sub_772CD0
0x7BCD0A: mov     edi, [esi+0BCh]
0x7BCD10: cmp     dword ptr [edi+30h], 0
0x7BCD14: jnz     short loc_7BCD1E
0x7BCD16: call    sub_772DF0
0x7BCD1B: mov     [edi+30h], eax
0x7BCD1E: mov     ecx, [edi+30h]
0x7BCD21: push    0
0x7BCD23: push    4
0x7BCD25: push    17h
0x7BCD27: call    sub_772CD0
0x7BCD2C: mov     edi, [esi+0BCh]
0x7BCD32: cmp     dword ptr [edi+30h], 0
0x7BCD36: jnz     short loc_7BCD40
0x7BCD38: call    sub_772DF0
0x7BCD3D: mov     [edi+30h], eax
0x7BCD40: mov     ecx, [edi+30h]
0x7BCD43: push    0
0x7BCD45: push    8
0x7BCD47: push    0A8h ; '¨'
0x7BCD4C: call    sub_772CD0
0x7BCD51: mov     ebx, [esi+0BCh]
0x7BCD57: mov     ebp, [esi+0C4h]
0x7BCD5D: mov     edi, [ebx+58h]
0x7BCD60: cmp     edi, ebp
0x7BCD62: jz      short loc_7BCD95
0x7BCD64: test    edi, edi
0x7BCD66: jz      short loc_7BCD84
0x7BCD68: lea     ecx, [edi+4]
0x7BCD6B: push    ecx; lpAddend
0x7BCD6C: call    dword ptr ds:0A2807Ch
0x7BCD72: test    eax, eax
0x7BCD74: jnz     short loc_7BCD84
0x7BCD76: test    edi, edi
0x7BCD78: jz      short loc_7BCD84
0x7BCD7A: mov     edx, [edi]
0x7BCD7C: mov     eax, [edx]
0x7BCD7E: push    1
0x7BCD80: mov     ecx, edi
0x7BCD82: call    eax
0x7BCD84: test    ebp, ebp
0x7BCD86: mov     [ebx+58h], ebp
0x7BCD89: jz      short loc_7BCD95
0x7BCD8B: add     ebp, 4
0x7BCD8E: push    ebp; lpAddend
0x7BCD8F: call    dword ptr ds:0A28078h
0x7BCD95: mov     ebx, [esi+0BCh]
0x7BCD9B: mov     ebp, [esi+0D4h]
0x7BCDA1: mov     edi, [ebx+44h]
0x7BCDA4: cmp     edi, ebp
0x7BCDA6: jz      short loc_7BCDD9
0x7BCDA8: test    edi, edi
0x7BCDAA: jz      short loc_7BCDC8
0x7BCDAC: lea     ecx, [edi+4]
0x7BCDAF: push    ecx; lpAddend
0x7BCDB0: call    dword ptr ds:0A2807Ch
0x7BCDB6: test    eax, eax
0x7BCDB8: jnz     short loc_7BCDC8
0x7BCDBA: test    edi, edi
0x7BCDBC: jz      short loc_7BCDC8
0x7BCDBE: mov     edx, [edi]
0x7BCDC0: mov     eax, [edx]
0x7BCDC2: push    1
0x7BCDC4: mov     ecx, edi
0x7BCDC6: call    eax
0x7BCDC8: test    ebp, ebp
0x7BCDCA: mov     [ebx+44h], ebp
0x7BCDCD: jz      short loc_7BCDD9
0x7BCDCF: add     ebp, 4
0x7BCDD2: push    ebp; lpAddend
0x7BCDD3: call    dword ptr ds:0A28078h
0x7BCDD9: cmp     dword ptr [esi+0C0h], 0
0x7BCDE0: jnz     loc_7BCFD0
0x7BCDE6: lea     ecx, [esp+2Ch+var_10]
0x7BCDEA: push    ecx
0x7BCDEB: call    sub_7606A0
0x7BCDF0: add     esp, 4
0x7BCDF3: mov     edi, eax
0x7BCDF5: mov     ecx, [esi+0C0h]
0x7BCDFB: cmp     ecx, [edi]
0x7BCDFD: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x7BCE02: jz      short loc_7BCE23
0x7BCE04: test    ecx, ecx
0x7BCE06: jz      short loc_7BCE13
0x7BCE08: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BCE0C: jnz     short loc_7BCE13
0x7BCE0E: call    sub_7604D0
0x7BCE13: mov     eax, [edi]
0x7BCE15: test    eax, eax
0x7BCE17: mov     [esi+0C0h], eax
0x7BCE1D: jz      short loc_7BCE23
0x7BCE1F: add     dword ptr [eax+60h], 1
0x7BCE23: mov     eax, [esp+2Ch+var_10]
0x7BCE27: test    eax, eax
0x7BCE29: mov     byte ptr [esp+2Ch+var_4], 0
0x7BCE2E: jz      short loc_7BCE43
0x7BCE30: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BCE34: mov     ecx, eax
0x7BCE36: add     eax, 60h ; '`'
0x7BCE39: cmp     dword ptr [eax], 0
0x7BCE3C: jnz     short loc_7BCE43
0x7BCE3E: call    sub_7604D0
0x7BCE43: lea     edx, [esp+2Ch+var_10]
0x7BCE47: push    edx
0x7BCE48: call    sub_772630
0x7BCE4D: add     esp, 4
0x7BCE50: mov     ebx, eax
0x7BCE52: mov     edi, [esp+2Ch+var_14]
0x7BCE56: cmp     edi, [ebx]
0x7BCE58: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x7BCE5D: jz      short loc_7BCE7E
0x7BCE5F: test    edi, edi
0x7BCE61: jz      short loc_7BCE70
0x7BCE63: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x7BCE67: jnz     short loc_7BCE70
0x7BCE69: mov     ecx, edi
0x7BCE6B: call    sub_772560
0x7BCE70: mov     edi, [ebx]
0x7BCE72: test    edi, edi
0x7BCE74: mov     [esp+2Ch+var_14], edi
0x7BCE78: jz      short loc_7BCE7E
0x7BCE7A: add     dword ptr [edi+5Ch], 1
0x7BCE7E: mov     eax, [esp+2Ch+var_10]
0x7BCE82: test    eax, eax
0x7BCE84: mov     byte ptr [esp+2Ch+var_4], 0
0x7BCE89: jz      short loc_7BCE9E
0x7BCE8B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BCE8F: mov     ecx, eax
0x7BCE91: add     eax, 5Ch ; '\'
0x7BCE94: cmp     dword ptr [eax], 0
0x7BCE97: jnz     short loc_7BCE9E
0x7BCE99: call    sub_772560
0x7BCE9E: push    2
0x7BCEA0: push    3
0x7BCEA2: push    0
0x7BCEA4: push    edi
0x7BCEA5: call    sub_801110
0x7BCEAA: mov     ecx, [esi+0C0h]; this
0x7BCEB0: mov     eax, [ecx+14h]
0x7BCEB3: add     esp, 10h
0x7BCEB6: push    edi; a3
0x7BCEB7: push    eax; a2
0x7BCEB8: call    sub_760010
0x7BCEBD: mov     edi, [esi+0C0h]
0x7BCEC3: cmp     dword ptr [edi+30h], 0
0x7BCEC7: jnz     short loc_7BCED1
0x7BCEC9: call    sub_772DF0
0x7BCECE: mov     [edi+30h], eax
0x7BCED1: mov     ecx, [edi+30h]
0x7BCED4: push    0
0x7BCED6: push    0
0x7BCED8: push    0Fh
0x7BCEDA: call    sub_772CD0
0x7BCEDF: mov     edi, [esi+0C0h]
0x7BCEE5: cmp     dword ptr [edi+30h], 0
0x7BCEE9: jnz     short loc_7BCEF3
0x7BCEEB: call    sub_772DF0
0x7BCEF0: mov     [edi+30h], eax
0x7BCEF3: mov     ecx, [edi+30h]
0x7BCEF6: push    0
0x7BCEF8: push    1
0x7BCEFA: push    1Bh
0x7BCEFC: call    sub_772CD0
0x7BCF01: mov     edi, [esi+0C0h]
0x7BCF07: cmp     dword ptr [edi+30h], 0
0x7BCF0B: jnz     short loc_7BCF15
0x7BCF0D: call    sub_772DF0
0x7BCF12: mov     [edi+30h], eax
0x7BCF15: mov     ecx, [edi+30h]
0x7BCF18: push    0
0x7BCF1A: push    1
0x7BCF1C: push    13h
0x7BCF1E: call    sub_772CD0
0x7BCF23: mov     edi, [esi+0C0h]
0x7BCF29: cmp     dword ptr [edi+30h], 0
0x7BCF2D: jnz     short loc_7BCF37
0x7BCF2F: call    sub_772DF0
0x7BCF34: mov     [edi+30h], eax
0x7BCF37: mov     ecx, [edi+30h]
0x7BCF3A: push    0
0x7BCF3C: push    6
0x7BCF3E: push    14h
0x7BCF40: call    sub_772CD0
0x7BCF45: mov     edi, [esi+0C0h]
0x7BCF4B: cmp     dword ptr [edi+30h], 0
0x7BCF4F: jnz     short loc_7BCF59
0x7BCF51: call    sub_772DF0
0x7BCF56: mov     [edi+30h], eax
0x7BCF59: mov     ecx, [edi+30h]
0x7BCF5C: push    0
0x7BCF5E: push    1
0x7BCF60: push    7
0x7BCF62: call    sub_772CD0
0x7BCF67: mov     edi, [esi+0C0h]
0x7BCF6D: cmp     dword ptr [edi+30h], 0
0x7BCF71: jnz     short loc_7BCF7B
0x7BCF73: call    sub_772DF0
0x7BCF78: mov     [edi+30h], eax
0x7BCF7B: mov     ecx, [edi+30h]
0x7BCF7E: push    0
0x7BCF80: push    0
0x7BCF82: push    0Eh
0x7BCF84: call    sub_772CD0
0x7BCF89: mov     edi, [esi+0C0h]
0x7BCF8F: cmp     dword ptr [edi+30h], 0
0x7BCF93: jnz     short loc_7BCF9D
0x7BCF95: call    sub_772DF0
0x7BCF9A: mov     [edi+30h], eax
0x7BCF9D: mov     ecx, [edi+30h]
0x7BCFA0: push    0
0x7BCFA2: push    4
0x7BCFA4: push    17h
0x7BCFA6: call    sub_772CD0
0x7BCFAB: mov     edi, [esi+0C0h]
0x7BCFB1: cmp     dword ptr [edi+30h], 0
0x7BCFB5: jnz     short loc_7BCFBF
0x7BCFB7: call    sub_772DF0
0x7BCFBC: mov     [edi+30h], eax
0x7BCFBF: mov     ecx, [edi+30h]
0x7BCFC2: push    0
0x7BCFC4: push    8
0x7BCFC6: push    0A8h ; '¨'
0x7BCFCB: call    sub_772CD0
0x7BCFD0: mov     ebx, [esi+0C0h]
0x7BCFD6: mov     ebp, [esi+0C8h]
0x7BCFDC: mov     edi, [ebx+58h]
0x7BCFDF: cmp     edi, ebp
0x7BCFE1: jz      short loc_7BD014
0x7BCFE3: test    edi, edi
0x7BCFE5: jz      short loc_7BD003
0x7BCFE7: lea     ecx, [edi+4]
0x7BCFEA: push    ecx; lpAddend
0x7BCFEB: call    dword ptr ds:0A2807Ch
0x7BCFF1: test    eax, eax
0x7BCFF3: jnz     short loc_7BD003
0x7BCFF5: test    edi, edi
0x7BCFF7: jz      short loc_7BD003
0x7BCFF9: mov     edx, [edi]
0x7BCFFB: mov     eax, [edx]
0x7BCFFD: push    1
0x7BCFFF: mov     ecx, edi
0x7BD001: call    eax
0x7BD003: test    ebp, ebp
0x7BD005: mov     [ebx+58h], ebp
0x7BD008: jz      short loc_7BD014
0x7BD00A: add     ebp, 4
0x7BD00D: push    ebp; lpAddend
0x7BD00E: call    dword ptr ds:0A28078h
0x7BD014: mov     ebp, [esi+0D8h]
0x7BD01A: mov     esi, [esi+0C0h]
0x7BD020: mov     edi, [esi+44h]
0x7BD023: cmp     edi, ebp
0x7BD025: jz      short loc_7BD058
0x7BD027: test    edi, edi
0x7BD029: jz      short loc_7BD047
0x7BD02B: lea     ecx, [edi+4]
0x7BD02E: push    ecx; lpAddend
0x7BD02F: call    dword ptr ds:0A2807Ch
0x7BD035: test    eax, eax
0x7BD037: jnz     short loc_7BD047
0x7BD039: test    edi, edi
0x7BD03B: jz      short loc_7BD047
0x7BD03D: mov     edx, [edi]
0x7BD03F: mov     eax, [edx]
0x7BD041: push    1
0x7BD043: mov     ecx, edi
0x7BD045: call    eax
0x7BD047: test    ebp, ebp
0x7BD049: mov     [esi+44h], ebp
0x7BD04C: jz      short loc_7BD058
0x7BD04E: add     ebp, 4
0x7BD051: push    ebp; lpAddend
0x7BD052: call    dword ptr ds:0A28078h
0x7BD058: mov     ecx, [esp+2Ch+var_14]
0x7BD05C: or      eax, 0FFFFFFFFh
0x7BD05F: test    ecx, ecx
0x7BD061: mov     [esp+2Ch+var_4], eax
0x7BD065: jz      short loc_7BD071
0x7BD067: add     [ecx+5Ch], eax
0x7BD06A: jnz     short loc_7BD071
0x7BD06C: call    sub_772560
0x7BD071: mov     al, 1
0x7BD073: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7BD077: mov     large fs:0, ecx
0x7BD07E: pop     ecx
0x7BD07F: pop     edi
0x7BD080: pop     esi
0x7BD081: pop     ebp
0x7BD082: pop     ebx
0x7BD083: add     esp, 18h
0x7BD086: retn
