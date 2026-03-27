0x7BF1B0: push    0FFFFFFFFh
0x7BF1B2: push    offset SEH_7BF1B0
0x7BF1B7: mov     eax, large fs:0
0x7BF1BD: push    eax
0x7BF1BE: sub     esp, 0Ch
0x7BF1C1: push    ebx
0x7BF1C2: push    ebp
0x7BF1C3: push    esi
0x7BF1C4: push    edi
0x7BF1C5: mov     eax, ds:0B30AACh
0x7BF1CA: xor     eax, esp
0x7BF1CC: push    eax
0x7BF1CD: lea     eax, [esp+2Ch+var_C]
0x7BF1D1: mov     large fs:0, eax
0x7BF1D7: mov     ebx, ecx
0x7BF1D9: xor     esi, esi
0x7BF1DB: xor     edi, edi
0x7BF1DD: mov     [esp+2Ch+var_18], esi
0x7BF1E1: lea     eax, [esp+2Ch+var_14]
0x7BF1E5: push    eax
0x7BF1E6: mov     [esp+30h+var_4], edi
0x7BF1EA: call    sub_7606A0
0x7BF1EF: add     esp, 4
0x7BF1F2: mov     ebp, eax
0x7BF1F4: mov     ecx, [ebx+0D4h]; this
0x7BF1FA: cmp     ecx, [ebp+0]
0x7BF1FD: mov     byte ptr [esp+2Ch+var_4], 1
0x7BF202: jz      short loc_7BF224
0x7BF204: cmp     ecx, edi
0x7BF206: jz      short loc_7BF213
0x7BF208: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF20C: jnz     short loc_7BF213
0x7BF20E: call    sub_7604D0
0x7BF213: mov     ebp, [ebp+0]
0x7BF216: cmp     ebp, edi
0x7BF218: mov     [ebx+0D4h], ebp
0x7BF21E: jz      short loc_7BF224
0x7BF220: add     dword ptr [ebp+60h], 1
0x7BF224: mov     eax, [esp+2Ch+var_14]
0x7BF228: cmp     eax, edi
0x7BF22A: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF22F: jz      short loc_7BF243
0x7BF231: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF235: mov     ecx, eax; this
0x7BF237: add     eax, 60h ; '`'
0x7BF23A: cmp     [eax], edi
0x7BF23C: jnz     short loc_7BF243
0x7BF23E: call    sub_7604D0
0x7BF243: lea     ecx, [esp+2Ch+var_14]
0x7BF247: push    ecx
0x7BF248: call    sub_772630
0x7BF24D: add     esp, 4
0x7BF250: mov     eax, [eax]
0x7BF252: cmp     eax, edi
0x7BF254: jz      short loc_7BF260
0x7BF256: mov     esi, eax
0x7BF258: add     dword ptr [esi+5Ch], 1
0x7BF25C: mov     [esp+2Ch+var_18], esi
0x7BF260: mov     eax, [esp+2Ch+var_14]
0x7BF264: cmp     eax, edi
0x7BF266: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF26B: jz      short loc_7BF27F
0x7BF26D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF271: mov     ecx, eax
0x7BF273: add     eax, 5Ch ; '\'
0x7BF276: cmp     [eax], edi
0x7BF278: jnz     short loc_7BF27F
0x7BF27A: call    sub_772560
0x7BF27F: push    2
0x7BF281: push    3
0x7BF283: push    edi
0x7BF284: push    esi
0x7BF285: call    sub_801110
0x7BF28A: add     esp, 10h
0x7BF28D: push    edi
0x7BF28E: mov     ecx, esi
0x7BF290: call    sub_771640
0x7BF295: mov     ecx, [ebx+0D4h]; this
0x7BF29B: mov     edx, [ecx+14h]
0x7BF29E: push    esi; a3
0x7BF29F: push    edx; a2
0x7BF2A0: call    sub_760010
0x7BF2A5: lea     eax, [esp+2Ch+var_14]
0x7BF2A9: push    eax
0x7BF2AA: call    sub_7606A0
0x7BF2AF: add     esp, 4
0x7BF2B2: mov     ebp, eax
0x7BF2B4: mov     ecx, [ebx+0D8h]; this
0x7BF2BA: cmp     ecx, [ebp+0]
0x7BF2BD: mov     byte ptr [esp+2Ch+var_4], 3
0x7BF2C2: jz      short loc_7BF2E4
0x7BF2C4: cmp     ecx, edi
0x7BF2C6: jz      short loc_7BF2D3
0x7BF2C8: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF2CC: jnz     short loc_7BF2D3
0x7BF2CE: call    sub_7604D0
0x7BF2D3: mov     ebp, [ebp+0]
0x7BF2D6: cmp     ebp, edi
0x7BF2D8: mov     [ebx+0D8h], ebp
0x7BF2DE: jz      short loc_7BF2E4
0x7BF2E0: add     dword ptr [ebp+60h], 1
0x7BF2E4: mov     eax, [esp+2Ch+var_14]
0x7BF2E8: cmp     eax, edi
0x7BF2EA: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF2EF: jz      short loc_7BF303
0x7BF2F1: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF2F5: mov     ecx, eax; this
0x7BF2F7: add     eax, 60h ; '`'
0x7BF2FA: cmp     [eax], edi
0x7BF2FC: jnz     short loc_7BF303
0x7BF2FE: call    sub_7604D0
0x7BF303: lea     ecx, [esp+2Ch+var_14]
0x7BF307: push    ecx
0x7BF308: call    sub_772630
0x7BF30D: add     esp, 4
0x7BF310: mov     ebp, eax
0x7BF312: cmp     esi, [ebp+0]
0x7BF315: mov     byte ptr [esp+2Ch+var_4], 4
0x7BF31A: jz      short loc_7BF33C
0x7BF31C: cmp     esi, edi
0x7BF31E: jz      short loc_7BF32D
0x7BF320: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF324: jnz     short loc_7BF32D
0x7BF326: mov     ecx, esi
0x7BF328: call    sub_772560
0x7BF32D: mov     esi, [ebp+0]
0x7BF330: cmp     esi, edi
0x7BF332: mov     [esp+2Ch+var_18], esi
0x7BF336: jz      short loc_7BF33C
0x7BF338: add     dword ptr [esi+5Ch], 1
0x7BF33C: mov     eax, [esp+2Ch+var_14]
0x7BF340: cmp     eax, edi
0x7BF342: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF347: jz      short loc_7BF35B
0x7BF349: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF34D: mov     ecx, eax
0x7BF34F: add     eax, 5Ch ; '\'
0x7BF352: cmp     [eax], edi
0x7BF354: jnz     short loc_7BF35B
0x7BF356: call    sub_772560
0x7BF35B: push    2
0x7BF35D: push    3
0x7BF35F: push    edi
0x7BF360: push    esi
0x7BF361: call    sub_801110
0x7BF366: add     esp, 10h
0x7BF369: push    edi
0x7BF36A: mov     ecx, esi
0x7BF36C: call    sub_771640
0x7BF371: mov     ecx, [ebx+0D8h]; this
0x7BF377: mov     edx, [ecx+14h]
0x7BF37A: push    esi; a3
0x7BF37B: push    edx; a2
0x7BF37C: call    sub_760010
0x7BF381: lea     eax, [esp+2Ch+var_14]
0x7BF385: push    eax
0x7BF386: call    sub_7606A0
0x7BF38B: add     esp, 4
0x7BF38E: mov     ebp, eax
0x7BF390: mov     ecx, [ebx+0DCh]; this
0x7BF396: cmp     ecx, [ebp+0]
0x7BF399: mov     byte ptr [esp+2Ch+var_4], 5
0x7BF39E: jz      short loc_7BF3C0
0x7BF3A0: cmp     ecx, edi
0x7BF3A2: jz      short loc_7BF3AF
0x7BF3A4: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF3A8: jnz     short loc_7BF3AF
0x7BF3AA: call    sub_7604D0
0x7BF3AF: mov     ebp, [ebp+0]
0x7BF3B2: cmp     ebp, edi
0x7BF3B4: mov     [ebx+0DCh], ebp
0x7BF3BA: jz      short loc_7BF3C0
0x7BF3BC: add     dword ptr [ebp+60h], 1
0x7BF3C0: mov     eax, [esp+2Ch+var_14]
0x7BF3C4: cmp     eax, edi
0x7BF3C6: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF3CB: jz      short loc_7BF3DF
0x7BF3CD: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF3D1: mov     ecx, eax; this
0x7BF3D3: add     eax, 60h ; '`'
0x7BF3D6: cmp     [eax], edi
0x7BF3D8: jnz     short loc_7BF3DF
0x7BF3DA: call    sub_7604D0
0x7BF3DF: lea     ecx, [esp+2Ch+var_14]
0x7BF3E3: push    ecx
0x7BF3E4: call    sub_772630
0x7BF3E9: add     esp, 4
0x7BF3EC: mov     ebp, eax
0x7BF3EE: cmp     esi, [ebp+0]
0x7BF3F1: mov     byte ptr [esp+2Ch+var_4], 6
0x7BF3F6: jz      short loc_7BF418
0x7BF3F8: cmp     esi, edi
0x7BF3FA: jz      short loc_7BF409
0x7BF3FC: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF400: jnz     short loc_7BF409
0x7BF402: mov     ecx, esi
0x7BF404: call    sub_772560
0x7BF409: mov     esi, [ebp+0]
0x7BF40C: cmp     esi, edi
0x7BF40E: mov     [esp+2Ch+var_18], esi
0x7BF412: jz      short loc_7BF418
0x7BF414: add     dword ptr [esi+5Ch], 1
0x7BF418: mov     eax, [esp+2Ch+var_14]
0x7BF41C: cmp     eax, edi
0x7BF41E: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF423: jz      short loc_7BF437
0x7BF425: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF429: mov     ecx, eax
0x7BF42B: add     eax, 5Ch ; '\'
0x7BF42E: cmp     [eax], edi
0x7BF430: jnz     short loc_7BF437
0x7BF432: call    sub_772560
0x7BF437: push    2
0x7BF439: push    3
0x7BF43B: push    edi
0x7BF43C: push    esi
0x7BF43D: call    sub_801110
0x7BF442: add     esp, 10h
0x7BF445: push    edi
0x7BF446: mov     ecx, esi
0x7BF448: call    sub_771640
0x7BF44D: mov     ecx, [ebx+0DCh]; this
0x7BF453: mov     edx, [ecx+14h]
0x7BF456: push    esi; a3
0x7BF457: push    edx; a2
0x7BF458: call    sub_760010
0x7BF45D: lea     eax, [esp+2Ch+var_14]
0x7BF461: push    eax
0x7BF462: call    sub_7606A0
0x7BF467: add     esp, 4
0x7BF46A: mov     ebp, eax
0x7BF46C: mov     ecx, [ebx+0E0h]; this
0x7BF472: cmp     ecx, [ebp+0]
0x7BF475: mov     byte ptr [esp+2Ch+var_4], 7
0x7BF47A: jz      short loc_7BF49C
0x7BF47C: cmp     ecx, edi
0x7BF47E: jz      short loc_7BF48B
0x7BF480: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF484: jnz     short loc_7BF48B
0x7BF486: call    sub_7604D0
0x7BF48B: mov     ebp, [ebp+0]
0x7BF48E: cmp     ebp, edi
0x7BF490: mov     [ebx+0E0h], ebp
0x7BF496: jz      short loc_7BF49C
0x7BF498: add     dword ptr [ebp+60h], 1
0x7BF49C: mov     eax, [esp+2Ch+var_14]
0x7BF4A0: cmp     eax, edi
0x7BF4A2: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF4A7: jz      short loc_7BF4BB
0x7BF4A9: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF4AD: mov     ecx, eax; this
0x7BF4AF: add     eax, 60h ; '`'
0x7BF4B2: cmp     [eax], edi
0x7BF4B4: jnz     short loc_7BF4BB
0x7BF4B6: call    sub_7604D0
0x7BF4BB: lea     ecx, [esp+2Ch+var_14]
0x7BF4BF: push    ecx
0x7BF4C0: call    sub_772630
0x7BF4C5: add     esp, 4
0x7BF4C8: mov     ebp, eax
0x7BF4CA: cmp     esi, [ebp+0]
0x7BF4CD: mov     byte ptr [esp+2Ch+var_4], 8
0x7BF4D2: jz      short loc_7BF4F4
0x7BF4D4: cmp     esi, edi
0x7BF4D6: jz      short loc_7BF4E5
0x7BF4D8: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF4DC: jnz     short loc_7BF4E5
0x7BF4DE: mov     ecx, esi
0x7BF4E0: call    sub_772560
0x7BF4E5: mov     esi, [ebp+0]
0x7BF4E8: cmp     esi, edi
0x7BF4EA: mov     [esp+2Ch+var_18], esi
0x7BF4EE: jz      short loc_7BF4F4
0x7BF4F0: add     dword ptr [esi+5Ch], 1
0x7BF4F4: mov     eax, [esp+2Ch+var_14]
0x7BF4F8: cmp     eax, edi
0x7BF4FA: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF4FF: jz      short loc_7BF513
0x7BF501: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF505: mov     ecx, eax
0x7BF507: add     eax, 5Ch ; '\'
0x7BF50A: cmp     [eax], edi
0x7BF50C: jnz     short loc_7BF513
0x7BF50E: call    sub_772560
0x7BF513: push    2
0x7BF515: push    3
0x7BF517: push    edi
0x7BF518: push    esi
0x7BF519: call    sub_801110
0x7BF51E: xor     edx, edx
0x7BF520: add     esp, 10h
0x7BF523: cmp     ds:0B43071h, dl
0x7BF529: mov     ecx, esi
0x7BF52B: setnz   dl
0x7BF52E: push    edx
0x7BF52F: call    sub_771640
0x7BF534: mov     ecx, [ebx+0E0h]; this
0x7BF53A: mov     eax, [ecx+14h]
0x7BF53D: push    esi; a3
0x7BF53E: push    eax; a2
0x7BF53F: call    sub_760010
0x7BF544: mov     ecx, [ebx+0E4h]; this
0x7BF54A: or      ebp, 0FFFFFFFFh
0x7BF54D: cmp     ecx, edi
0x7BF54F: jz      short loc_7BF561
0x7BF551: add     [ecx+60h], ebp
0x7BF554: jnz     short loc_7BF55B
0x7BF556: call    sub_7604D0
0x7BF55B: mov     [ebx+0E4h], edi
0x7BF561: mov     ecx, [ebx+0E8h]; this
0x7BF567: cmp     ecx, edi
0x7BF569: jz      short loc_7BF57B
0x7BF56B: add     [ecx+60h], ebp
0x7BF56E: jnz     short loc_7BF575
0x7BF570: call    sub_7604D0
0x7BF575: mov     [ebx+0E8h], edi
0x7BF57B: mov     ecx, [ebx+0ECh]; this
0x7BF581: cmp     ecx, edi
0x7BF583: jz      short loc_7BF595
0x7BF585: add     [ecx+60h], ebp
0x7BF588: jnz     short loc_7BF58F
0x7BF58A: call    sub_7604D0
0x7BF58F: mov     [ebx+0ECh], edi
0x7BF595: cmp     byte ptr [ebx+120h], 0
0x7BF59C: jz      loc_7BF6A1
0x7BF5A2: lea     ecx, [esp+2Ch+var_14]
0x7BF5A6: push    ecx
0x7BF5A7: call    sub_7606A0
0x7BF5AC: add     esp, 4
0x7BF5AF: mov     ebp, eax
0x7BF5B1: mov     ecx, [ebx+0F0h]; this
0x7BF5B7: cmp     ecx, [ebp+0]
0x7BF5BA: mov     byte ptr [esp+2Ch+var_4], 9
0x7BF5BF: jz      short loc_7BF5E1
0x7BF5C1: cmp     ecx, edi
0x7BF5C3: jz      short loc_7BF5D0
0x7BF5C5: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF5C9: jnz     short loc_7BF5D0
0x7BF5CB: call    sub_7604D0
0x7BF5D0: mov     eax, [ebp+0]
0x7BF5D3: cmp     eax, edi
0x7BF5D5: mov     [ebx+0F0h], eax
0x7BF5DB: jz      short loc_7BF5E1
0x7BF5DD: add     dword ptr [eax+60h], 1
0x7BF5E1: mov     eax, [esp+2Ch+var_14]
0x7BF5E5: cmp     eax, edi
0x7BF5E7: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF5EC: jz      short loc_7BF600
0x7BF5EE: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF5F2: mov     ecx, eax; this
0x7BF5F4: add     eax, 60h ; '`'
0x7BF5F7: cmp     [eax], edi
0x7BF5F9: jnz     short loc_7BF600
0x7BF5FB: call    sub_7604D0
0x7BF600: lea     edx, [esp+2Ch+var_14]
0x7BF604: push    edx
0x7BF605: call    sub_772630
0x7BF60A: add     esp, 4
0x7BF60D: mov     ebp, eax
0x7BF60F: cmp     esi, [ebp+0]
0x7BF612: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x7BF617: jz      short loc_7BF639
0x7BF619: cmp     esi, edi
0x7BF61B: jz      short loc_7BF62A
0x7BF61D: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF621: jnz     short loc_7BF62A
0x7BF623: mov     ecx, esi
0x7BF625: call    sub_772560
0x7BF62A: mov     esi, [ebp+0]
0x7BF62D: cmp     esi, edi
0x7BF62F: mov     [esp+2Ch+var_18], esi
0x7BF633: jz      short loc_7BF639
0x7BF635: add     dword ptr [esi+5Ch], 1
0x7BF639: mov     eax, [esp+2Ch+var_14]
0x7BF63D: cmp     eax, edi
0x7BF63F: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF644: jz      short loc_7BF658
0x7BF646: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF64A: mov     ecx, eax
0x7BF64C: add     eax, 5Ch ; '\'
0x7BF64F: cmp     [eax], edi
0x7BF651: jnz     short loc_7BF658
0x7BF653: call    sub_772560
0x7BF658: push    2
0x7BF65A: push    3
0x7BF65C: push    edi
0x7BF65D: push    esi
0x7BF65E: call    sub_801110
0x7BF663: mov     ecx, [esi+0Ch]
0x7BF666: add     esp, 10h
0x7BF669: push    edi
0x7BF66A: push    edi
0x7BF66B: push    2
0x7BF66D: push    5
0x7BF66F: call    sub_773100
0x7BF674: mov     ecx, [esi+0Ch]
0x7BF677: push    edi
0x7BF678: push    edi
0x7BF679: push    3
0x7BF67B: push    6
0x7BF67D: call    sub_773100
0x7BF682: mov     ecx, [esi+0Ch]
0x7BF685: push    edi
0x7BF686: push    edi
0x7BF687: push    edi
0x7BF688: push    7
0x7BF68A: call    sub_773100
0x7BF68F: mov     ecx, [ebx+0F0h]; this
0x7BF695: mov     eax, [ecx+14h]
0x7BF698: push    esi; a3
0x7BF699: push    eax; a2
0x7BF69A: call    sub_760010
0x7BF69F: jmp     short loc_7BF6BB
0x7BF6A1: mov     ecx, [ebx+0F0h]; this
0x7BF6A7: cmp     ecx, edi
0x7BF6A9: jz      short loc_7BF6BB
0x7BF6AB: add     [ecx+60h], ebp
0x7BF6AE: jnz     short loc_7BF6B5
0x7BF6B0: call    sub_7604D0
0x7BF6B5: mov     [ebx+0F0h], edi
0x7BF6BB: lea     ecx, [esp+2Ch+var_14]
0x7BF6BF: push    ecx
0x7BF6C0: call    sub_7606A0
0x7BF6C5: add     esp, 4
0x7BF6C8: mov     ebp, eax
0x7BF6CA: mov     ecx, [ebx+0F4h]; this
0x7BF6D0: cmp     ecx, [ebp+0]
0x7BF6D3: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x7BF6D8: jz      short loc_7BF6FA
0x7BF6DA: cmp     ecx, edi
0x7BF6DC: jz      short loc_7BF6E9
0x7BF6DE: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF6E2: jnz     short loc_7BF6E9
0x7BF6E4: call    sub_7604D0
0x7BF6E9: mov     eax, [ebp+0]
0x7BF6EC: cmp     eax, edi
0x7BF6EE: mov     [ebx+0F4h], eax
0x7BF6F4: jz      short loc_7BF6FA
0x7BF6F6: add     dword ptr [eax+60h], 1
0x7BF6FA: mov     eax, [esp+2Ch+var_14]
0x7BF6FE: cmp     eax, edi
0x7BF700: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF705: jz      short loc_7BF719
0x7BF707: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF70B: mov     ecx, eax; this
0x7BF70D: add     eax, 60h ; '`'
0x7BF710: cmp     [eax], edi
0x7BF712: jnz     short loc_7BF719
0x7BF714: call    sub_7604D0
0x7BF719: lea     edx, [esp+2Ch+var_14]
0x7BF71D: push    edx
0x7BF71E: call    sub_772630
0x7BF723: add     esp, 4
0x7BF726: mov     ebp, eax
0x7BF728: cmp     esi, [ebp+0]
0x7BF72B: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x7BF730: jz      short loc_7BF752
0x7BF732: cmp     esi, edi
0x7BF734: jz      short loc_7BF743
0x7BF736: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF73A: jnz     short loc_7BF743
0x7BF73C: mov     ecx, esi
0x7BF73E: call    sub_772560
0x7BF743: mov     esi, [ebp+0]
0x7BF746: cmp     esi, edi
0x7BF748: mov     [esp+2Ch+var_18], esi
0x7BF74C: jz      short loc_7BF752
0x7BF74E: add     dword ptr [esi+5Ch], 1
0x7BF752: mov     eax, [esp+2Ch+var_14]
0x7BF756: cmp     eax, edi
0x7BF758: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF75D: jz      short loc_7BF771
0x7BF75F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF763: mov     ecx, eax
0x7BF765: add     eax, 5Ch ; '\'
0x7BF768: cmp     [eax], edi
0x7BF76A: jnz     short loc_7BF771
0x7BF76C: call    sub_772560
0x7BF771: push    2
0x7BF773: push    3
0x7BF775: push    edi
0x7BF776: push    esi
0x7BF777: call    sub_801110
0x7BF77C: add     esp, 10h
0x7BF77F: push    edi
0x7BF780: mov     ecx, esi
0x7BF782: call    sub_771640
0x7BF787: mov     ecx, [ebx+0F4h]; this
0x7BF78D: mov     eax, [ecx+14h]
0x7BF790: push    esi; a3
0x7BF791: push    eax; a2
0x7BF792: call    sub_760010
0x7BF797: lea     ecx, [esp+2Ch+var_14]
0x7BF79B: push    ecx
0x7BF79C: call    sub_7606A0
0x7BF7A1: add     esp, 4
0x7BF7A4: mov     ebp, eax
0x7BF7A6: mov     ecx, [ebx+0F8h]; this
0x7BF7AC: cmp     ecx, [ebp+0]
0x7BF7AF: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x7BF7B4: jz      short loc_7BF7D6
0x7BF7B6: cmp     ecx, edi
0x7BF7B8: jz      short loc_7BF7C5
0x7BF7BA: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF7BE: jnz     short loc_7BF7C5
0x7BF7C0: call    sub_7604D0
0x7BF7C5: mov     ebp, [ebp+0]
0x7BF7C8: cmp     ebp, edi
0x7BF7CA: mov     [ebx+0F8h], ebp
0x7BF7D0: jz      short loc_7BF7D6
0x7BF7D2: add     dword ptr [ebp+60h], 1
0x7BF7D6: mov     eax, [esp+2Ch+var_14]
0x7BF7DA: cmp     eax, edi
0x7BF7DC: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF7E1: jz      short loc_7BF7F5
0x7BF7E3: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF7E7: mov     ecx, eax; this
0x7BF7E9: add     eax, 60h ; '`'
0x7BF7EC: cmp     [eax], edi
0x7BF7EE: jnz     short loc_7BF7F5
0x7BF7F0: call    sub_7604D0
0x7BF7F5: lea     edx, [esp+2Ch+var_14]
0x7BF7F9: push    edx
0x7BF7FA: call    sub_772630
0x7BF7FF: add     esp, 4
0x7BF802: mov     ebp, eax
0x7BF804: cmp     esi, [ebp+0]
0x7BF807: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x7BF80C: jz      short loc_7BF82E
0x7BF80E: cmp     esi, edi
0x7BF810: jz      short loc_7BF81F
0x7BF812: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF816: jnz     short loc_7BF81F
0x7BF818: mov     ecx, esi
0x7BF81A: call    sub_772560
0x7BF81F: mov     esi, [ebp+0]
0x7BF822: cmp     esi, edi
0x7BF824: mov     [esp+2Ch+var_18], esi
0x7BF828: jz      short loc_7BF82E
0x7BF82A: add     dword ptr [esi+5Ch], 1
0x7BF82E: mov     eax, [esp+2Ch+var_14]
0x7BF832: cmp     eax, edi
0x7BF834: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF839: jz      short loc_7BF84D
0x7BF83B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF83F: mov     ecx, eax
0x7BF841: add     eax, 5Ch ; '\'
0x7BF844: cmp     [eax], edi
0x7BF846: jnz     short loc_7BF84D
0x7BF848: call    sub_772560
0x7BF84D: push    2
0x7BF84F: push    3
0x7BF851: push    edi
0x7BF852: push    esi
0x7BF853: call    sub_801110
0x7BF858: xor     eax, eax
0x7BF85A: add     esp, 10h
0x7BF85D: cmp     ds:0B43071h, al
0x7BF863: mov     ecx, esi
0x7BF865: setnz   al
0x7BF868: push    eax
0x7BF869: call    sub_771640
0x7BF86E: mov     ecx, [ebx+0F8h]; this
0x7BF874: mov     edx, [ecx+14h]
0x7BF877: push    esi; a3
0x7BF878: push    edx; a2
0x7BF879: call    sub_760010
0x7BF87E: lea     eax, [esp+2Ch+var_14]
0x7BF882: push    eax
0x7BF883: call    sub_772630
0x7BF888: add     esp, 4
0x7BF88B: mov     ebp, eax
0x7BF88D: cmp     esi, [ebp+0]
0x7BF890: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x7BF895: jz      short loc_7BF8B7
0x7BF897: cmp     esi, edi
0x7BF899: jz      short loc_7BF8A8
0x7BF89B: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF89F: jnz     short loc_7BF8A8
0x7BF8A1: mov     ecx, esi
0x7BF8A3: call    sub_772560
0x7BF8A8: mov     esi, [ebp+0]
0x7BF8AB: cmp     esi, edi
0x7BF8AD: mov     [esp+2Ch+var_18], esi
0x7BF8B1: jz      short loc_7BF8B7
0x7BF8B3: add     dword ptr [esi+5Ch], 1
0x7BF8B7: mov     eax, [esp+2Ch+var_14]
0x7BF8BB: cmp     eax, edi
0x7BF8BD: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF8C2: jz      short loc_7BF8D6
0x7BF8C4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF8C8: mov     ecx, eax
0x7BF8CA: add     eax, 5Ch ; '\'
0x7BF8CD: cmp     [eax], edi
0x7BF8CF: jnz     short loc_7BF8D6
0x7BF8D1: call    sub_772560
0x7BF8D6: push    2
0x7BF8D8: push    3
0x7BF8DA: push    1
0x7BF8DC: push    esi
0x7BF8DD: call    sub_801110
0x7BF8E2: add     esp, 10h
0x7BF8E5: push    edi
0x7BF8E6: mov     ecx, esi
0x7BF8E8: call    sub_771640
0x7BF8ED: mov     ecx, [ebx+0F8h]; this
0x7BF8F3: mov     edx, [ecx+14h]
0x7BF8F6: push    esi; a3
0x7BF8F7: push    edx; a2
0x7BF8F8: call    sub_760010
0x7BF8FD: lea     eax, [esp+2Ch+var_14]
0x7BF901: push    eax
0x7BF902: call    sub_772630
0x7BF907: add     esp, 4
0x7BF90A: mov     ebp, eax
0x7BF90C: cmp     esi, [ebp+0]
0x7BF90F: mov     byte ptr [esp+2Ch+var_4], 10h
0x7BF914: jz      short loc_7BF936
0x7BF916: cmp     esi, edi
0x7BF918: jz      short loc_7BF927
0x7BF91A: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF91E: jnz     short loc_7BF927
0x7BF920: mov     ecx, esi
0x7BF922: call    sub_772560
0x7BF927: mov     esi, [ebp+0]
0x7BF92A: cmp     esi, edi
0x7BF92C: mov     [esp+2Ch+var_18], esi
0x7BF930: jz      short loc_7BF936
0x7BF932: add     dword ptr [esi+5Ch], 1
0x7BF936: mov     eax, [esp+2Ch+var_14]
0x7BF93A: cmp     eax, edi
0x7BF93C: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF941: jz      short loc_7BF955
0x7BF943: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BF947: mov     ecx, eax
0x7BF949: add     eax, 5Ch ; '\'
0x7BF94C: cmp     [eax], edi
0x7BF94E: jnz     short loc_7BF955
0x7BF950: call    sub_772560
0x7BF955: push    2
0x7BF957: push    3
0x7BF959: push    2
0x7BF95B: push    esi
0x7BF95C: call    sub_801110
0x7BF961: add     esp, 10h
0x7BF964: push    edi
0x7BF965: mov     ecx, esi
0x7BF967: call    sub_771640
0x7BF96C: mov     ecx, [ebx+0F8h]; this
0x7BF972: mov     edx, [ecx+14h]
0x7BF975: push    esi; a3
0x7BF976: push    edx; a2
0x7BF977: call    sub_760010
0x7BF97C: lea     eax, [esp+2Ch+var_14]
0x7BF980: push    eax
0x7BF981: call    sub_7606A0
0x7BF986: add     esp, 4
0x7BF989: mov     ebp, eax
0x7BF98B: mov     ecx, [ebx+0FCh]; this
0x7BF991: cmp     ecx, [ebp+0]
0x7BF994: mov     byte ptr [esp+2Ch+var_4], 11h
0x7BF999: jz      short loc_7BF9BB
0x7BF99B: cmp     ecx, edi
0x7BF99D: jz      short loc_7BF9AA
0x7BF99F: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BF9A3: jnz     short loc_7BF9AA
0x7BF9A5: call    sub_7604D0
0x7BF9AA: mov     ebp, [ebp+0]
0x7BF9AD: cmp     ebp, edi
0x7BF9AF: mov     [ebx+0FCh], ebp
0x7BF9B5: jz      short loc_7BF9BB
0x7BF9B7: add     dword ptr [ebp+60h], 1
0x7BF9BB: mov     eax, [esp+2Ch+var_14]
0x7BF9BF: cmp     eax, edi
0x7BF9C1: mov     byte ptr [esp+2Ch+var_4], 0
0x7BF9C6: jz      short loc_7BF9DA
0x7BF9C8: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BF9CC: mov     ecx, eax; this
0x7BF9CE: add     eax, 60h ; '`'
0x7BF9D1: cmp     [eax], edi
0x7BF9D3: jnz     short loc_7BF9DA
0x7BF9D5: call    sub_7604D0
0x7BF9DA: lea     ecx, [esp+2Ch+var_14]
0x7BF9DE: push    ecx
0x7BF9DF: call    sub_772630
0x7BF9E4: add     esp, 4
0x7BF9E7: mov     ebp, eax
0x7BF9E9: cmp     esi, [ebp+0]
0x7BF9EC: mov     byte ptr [esp+2Ch+var_4], 12h
0x7BF9F1: jz      short loc_7BFA13
0x7BF9F3: cmp     esi, edi
0x7BF9F5: jz      short loc_7BFA04
0x7BF9F7: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BF9FB: jnz     short loc_7BFA04
0x7BF9FD: mov     ecx, esi
0x7BF9FF: call    sub_772560
0x7BFA04: mov     esi, [ebp+0]
0x7BFA07: cmp     esi, edi
0x7BFA09: mov     [esp+2Ch+var_18], esi
0x7BFA0D: jz      short loc_7BFA13
0x7BFA0F: add     dword ptr [esi+5Ch], 1
0x7BFA13: mov     eax, [esp+2Ch+var_14]
0x7BFA17: cmp     eax, edi
0x7BFA19: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFA1E: jz      short loc_7BFA32
0x7BFA20: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BFA24: mov     ecx, eax
0x7BFA26: add     eax, 5Ch ; '\'
0x7BFA29: cmp     [eax], edi
0x7BFA2B: jnz     short loc_7BFA32
0x7BFA2D: call    sub_772560
0x7BFA32: push    2
0x7BFA34: push    3
0x7BFA36: push    edi
0x7BFA37: push    esi
0x7BFA38: call    sub_801110
0x7BFA3D: add     esp, 10h
0x7BFA40: push    edi
0x7BFA41: mov     ecx, esi
0x7BFA43: call    sub_771640
0x7BFA48: mov     ecx, [ebx+0FCh]; this
0x7BFA4E: mov     edx, [ecx+14h]
0x7BFA51: push    esi; a3
0x7BFA52: push    edx; a2
0x7BFA53: call    sub_760010
0x7BFA58: lea     eax, [esp+2Ch+var_14]
0x7BFA5C: push    eax
0x7BFA5D: call    sub_7606A0
0x7BFA62: add     esp, 4
0x7BFA65: mov     ebp, eax
0x7BFA67: mov     ecx, [ebx+100h]; this
0x7BFA6D: cmp     ecx, [ebp+0]
0x7BFA70: mov     byte ptr [esp+2Ch+var_4], 13h
0x7BFA75: jz      short loc_7BFA97
0x7BFA77: cmp     ecx, edi
0x7BFA79: jz      short loc_7BFA86
0x7BFA7B: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BFA7F: jnz     short loc_7BFA86
0x7BFA81: call    sub_7604D0
0x7BFA86: mov     ebp, [ebp+0]
0x7BFA89: cmp     ebp, edi
0x7BFA8B: mov     [ebx+100h], ebp
0x7BFA91: jz      short loc_7BFA97
0x7BFA93: add     dword ptr [ebp+60h], 1
0x7BFA97: mov     eax, [esp+2Ch+var_14]
0x7BFA9B: cmp     eax, edi
0x7BFA9D: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFAA2: jz      short loc_7BFAB6
0x7BFAA4: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BFAA8: mov     ecx, eax; this
0x7BFAAA: add     eax, 60h ; '`'
0x7BFAAD: cmp     [eax], edi
0x7BFAAF: jnz     short loc_7BFAB6
0x7BFAB1: call    sub_7604D0
0x7BFAB6: lea     ecx, [esp+2Ch+var_14]
0x7BFABA: push    ecx
0x7BFABB: call    sub_772630
0x7BFAC0: add     esp, 4
0x7BFAC3: mov     ebp, eax
0x7BFAC5: cmp     esi, [ebp+0]
0x7BFAC8: mov     byte ptr [esp+2Ch+var_4], 14h
0x7BFACD: jz      short loc_7BFAEF
0x7BFACF: cmp     esi, edi
0x7BFAD1: jz      short loc_7BFAE0
0x7BFAD3: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BFAD7: jnz     short loc_7BFAE0
0x7BFAD9: mov     ecx, esi
0x7BFADB: call    sub_772560
0x7BFAE0: mov     esi, [ebp+0]
0x7BFAE3: cmp     esi, edi
0x7BFAE5: mov     [esp+2Ch+var_18], esi
0x7BFAE9: jz      short loc_7BFAEF
0x7BFAEB: add     dword ptr [esi+5Ch], 1
0x7BFAEF: mov     eax, [esp+2Ch+var_14]
0x7BFAF3: cmp     eax, edi
0x7BFAF5: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFAFA: jz      short loc_7BFB0E
0x7BFAFC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BFB00: mov     ecx, eax
0x7BFB02: add     eax, 5Ch ; '\'
0x7BFB05: cmp     [eax], edi
0x7BFB07: jnz     short loc_7BFB0E
0x7BFB09: call    sub_772560
0x7BFB0E: push    2
0x7BFB10: push    3
0x7BFB12: push    edi
0x7BFB13: push    esi
0x7BFB14: call    sub_801110
0x7BFB19: add     esp, 10h
0x7BFB1C: push    edi
0x7BFB1D: mov     ecx, esi
0x7BFB1F: call    sub_771640
0x7BFB24: mov     ecx, [ebx+100h]; this
0x7BFB2A: mov     edx, [ecx+14h]
0x7BFB2D: push    esi; a3
0x7BFB2E: push    edx; a2
0x7BFB2F: call    sub_760010
0x7BFB34: lea     eax, [esp+2Ch+var_14]
0x7BFB38: push    eax
0x7BFB39: call    sub_772630
0x7BFB3E: add     esp, 4
0x7BFB41: mov     ebp, eax
0x7BFB43: cmp     esi, [ebp+0]
0x7BFB46: mov     byte ptr [esp+2Ch+var_4], 15h
0x7BFB4B: jz      short loc_7BFB6D
0x7BFB4D: cmp     esi, edi
0x7BFB4F: jz      short loc_7BFB5E
0x7BFB51: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BFB55: jnz     short loc_7BFB5E
0x7BFB57: mov     ecx, esi
0x7BFB59: call    sub_772560
0x7BFB5E: mov     esi, [ebp+0]
0x7BFB61: cmp     esi, edi
0x7BFB63: mov     [esp+2Ch+var_18], esi
0x7BFB67: jz      short loc_7BFB6D
0x7BFB69: add     dword ptr [esi+5Ch], 1
0x7BFB6D: mov     eax, [esp+2Ch+var_14]
0x7BFB71: cmp     eax, edi
0x7BFB73: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFB78: jz      short loc_7BFB8C
0x7BFB7A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BFB7E: mov     ecx, eax
0x7BFB80: add     eax, 5Ch ; '\'
0x7BFB83: cmp     [eax], edi
0x7BFB85: jnz     short loc_7BFB8C
0x7BFB87: call    sub_772560
0x7BFB8C: push    2
0x7BFB8E: push    3
0x7BFB90: push    1
0x7BFB92: push    esi
0x7BFB93: call    sub_801110
0x7BFB98: add     esp, 10h
0x7BFB9B: push    edi
0x7BFB9C: mov     ecx, esi
0x7BFB9E: call    sub_771640
0x7BFBA3: mov     ecx, [ebx+100h]; this
0x7BFBA9: mov     edx, [ecx+14h]
0x7BFBAC: push    esi; a3
0x7BFBAD: push    edx; a2
0x7BFBAE: call    sub_760010
0x7BFBB3: lea     eax, [esp+2Ch+var_14]
0x7BFBB7: push    eax
0x7BFBB8: call    sub_7606A0
0x7BFBBD: add     esp, 4
0x7BFBC0: mov     ebp, eax
0x7BFBC2: mov     ecx, [ebx+104h]; this
0x7BFBC8: cmp     ecx, [ebp+0]
0x7BFBCB: mov     byte ptr [esp+2Ch+var_4], 16h
0x7BFBD0: jz      short loc_7BFBF2
0x7BFBD2: cmp     ecx, edi
0x7BFBD4: jz      short loc_7BFBE1
0x7BFBD6: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BFBDA: jnz     short loc_7BFBE1
0x7BFBDC: call    sub_7604D0
0x7BFBE1: mov     ebp, [ebp+0]
0x7BFBE4: cmp     ebp, edi
0x7BFBE6: mov     [ebx+104h], ebp
0x7BFBEC: jz      short loc_7BFBF2
0x7BFBEE: add     dword ptr [ebp+60h], 1
0x7BFBF2: mov     eax, [esp+2Ch+var_14]
0x7BFBF6: cmp     eax, edi
0x7BFBF8: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFBFD: jz      short loc_7BFC11
0x7BFBFF: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7BFC03: mov     ecx, eax; this
0x7BFC05: add     eax, 60h ; '`'
0x7BFC08: cmp     [eax], edi
0x7BFC0A: jnz     short loc_7BFC11
0x7BFC0C: call    sub_7604D0
0x7BFC11: lea     ecx, [esp+2Ch+var_10]
0x7BFC15: push    ecx
0x7BFC16: call    sub_772630
0x7BFC1B: add     esp, 4
0x7BFC1E: mov     ebp, eax
0x7BFC20: cmp     esi, [ebp+0]
0x7BFC23: mov     byte ptr [esp+2Ch+var_4], 17h
0x7BFC28: jz      short loc_7BFC4A
0x7BFC2A: cmp     esi, edi
0x7BFC2C: jz      short loc_7BFC3B
0x7BFC2E: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7BFC32: jnz     short loc_7BFC3B
0x7BFC34: mov     ecx, esi
0x7BFC36: call    sub_772560
0x7BFC3B: mov     esi, [ebp+0]
0x7BFC3E: cmp     esi, edi
0x7BFC40: mov     [esp+2Ch+var_18], esi
0x7BFC44: jz      short loc_7BFC4A
0x7BFC46: add     dword ptr [esi+5Ch], 1
0x7BFC4A: mov     eax, [esp+2Ch+var_10]
0x7BFC4E: cmp     eax, edi
0x7BFC50: mov     byte ptr [esp+2Ch+var_4], 0
0x7BFC55: jz      short loc_7BFC69
0x7BFC57: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7BFC5B: mov     ecx, eax
0x7BFC5D: add     eax, 5Ch ; '\'
0x7BFC60: cmp     [eax], edi
0x7BFC62: jnz     short loc_7BFC69
0x7BFC64: call    sub_772560
0x7BFC69: push    2
0x7BFC6B: push    3
0x7BFC6D: push    0
0x7BFC6F: push    esi
0x7BFC70: call    sub_801110
0x7BFC75: add     esp, 10h
0x7BFC78: push    0
0x7BFC7A: mov     ecx, esi
0x7BFC7C: call    sub_771640
0x7BFC81: mov     ecx, [ebx+104h]; this
0x7BFC87: mov     edx, [ecx+14h]
0x7BFC8A: push    esi; a3
0x7BFC8B: push    edx; a2
0x7BFC8C: call    sub_760010
0x7BFC91: lea     edi, [ebx+0D4h]
0x7BFC97: mov     [esp+2Ch+var_14], 0Dh
0x7BFC9F: nop
0x7BFCA0: mov     ebp, [edi]
0x7BFCA2: test    ebp, ebp
0x7BFCA4: jz      loc_7BFD41
0x7BFCAA: cmp     dword ptr [ebp+30h], 0
0x7BFCAE: jnz     short loc_7BFCB8
0x7BFCB0: call    sub_772DF0
0x7BFCB5: mov     [ebp+30h], eax
0x7BFCB8: mov     ecx, [ebp+30h]
0x7BFCBB: push    0
0x7BFCBD: push    0
0x7BFCBF: push    7
0x7BFCC1: call    sub_772CD0
0x7BFCC6: mov     ebp, [edi]
0x7BFCC8: cmp     dword ptr [ebp+30h], 0
0x7BFCCC: jnz     short loc_7BFCD6
0x7BFCCE: call    sub_772DF0
0x7BFCD3: mov     [ebp+30h], eax
0x7BFCD6: mov     ecx, [ebp+30h]
0x7BFCD9: push    0
0x7BFCDB: push    0
0x7BFCDD: push    0Eh
0x7BFCDF: call    sub_772CD0
0x7BFCE4: mov     ebp, [edi]
0x7BFCE6: cmp     dword ptr [ebp+30h], 0
0x7BFCEA: jnz     short loc_7BFCF4
0x7BFCEC: call    sub_772DF0
0x7BFCF1: mov     [ebp+30h], eax
0x7BFCF4: mov     ecx, [ebp+30h]
0x7BFCF7: push    0
0x7BFCF9: push    0
0x7BFCFB: push    1Bh
0x7BFCFD: call    sub_772CD0
0x7BFD02: mov     ebp, [edi]
0x7BFD04: cmp     dword ptr [ebp+30h], 0
0x7BFD08: jnz     short loc_7BFD12
0x7BFD0A: call    sub_772DF0
0x7BFD0F: mov     [ebp+30h], eax
0x7BFD12: mov     ecx, [ebp+30h]
0x7BFD15: push    0
0x7BFD17: push    0
0x7BFD19: push    0Fh
0x7BFD1B: call    sub_772CD0
0x7BFD20: mov     ebp, [edi]
0x7BFD22: cmp     dword ptr [ebp+30h], 0
0x7BFD26: jnz     short loc_7BFD30
0x7BFD28: call    sub_772DF0
0x7BFD2D: mov     [ebp+30h], eax
0x7BFD30: mov     ecx, [ebp+30h]
0x7BFD33: push    0
0x7BFD35: push    0Fh
0x7BFD37: push    0A8h ; '¨'
0x7BFD3C: call    sub_772CD0
0x7BFD41: add     edi, 4
0x7BFD44: sub     [esp+2Ch+var_14], 1
0x7BFD49: jnz     loc_7BFCA0
0x7BFD4F: mov     eax, [ebx]
0x7BFD51: mov     edx, [eax+0B8h]
0x7BFD57: mov     ecx, ebx
0x7BFD59: call    edx
0x7BFD5B: or      eax, 0FFFFFFFFh
0x7BFD5E: test    esi, esi
0x7BFD60: mov     [esp+2Ch+var_4], eax
0x7BFD64: jz      short loc_7BFD72
0x7BFD66: add     [esi+5Ch], eax
0x7BFD69: jnz     short loc_7BFD72
0x7BFD6B: mov     ecx, esi
0x7BFD6D: call    sub_772560
0x7BFD72: mov     al, 1
0x7BFD74: mov     ecx, [esp+2Ch+var_C]
0x7BFD78: mov     large fs:0, ecx
0x7BFD7F: pop     ecx
0x7BFD80: pop     edi
0x7BFD81: pop     esi
0x7BFD82: pop     ebp
0x7BFD83: pop     ebx
0x7BFD84: add     esp, 18h
0x7BFD87: retn
