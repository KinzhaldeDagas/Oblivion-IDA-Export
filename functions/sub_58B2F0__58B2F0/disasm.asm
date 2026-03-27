0x58B2F0: fld     dword ptr ds:0A379B4h
0x58B2F6: push    ebx
0x58B2F7: push    esi
0x58B2F8: mov     esi, [esp+8+arg_0]
0x58B2FC: cmp     esi, 0FADh
0x58B302: push    edi
0x58B303: mov     edi, ecx
0x58B305: jz      loc_58B556
0x58B30B: cmp     esi, 0FACh
0x58B311: jz      loc_58B556
0x58B317: cmp     esi, 0FABh
0x58B31D: jz      loc_58B562
0x58B323: mov     eax, [edi]
0x58B325: fstp    st
0x58B327: mov     edx, [eax+0Ch]
0x58B32A: call    edx
0x58B32C: cmp     eax, 387h
0x58B331: jnz     short loc_58B36F
0x58B333: cmp     esi, 0FD4h
0x58B339: jz      short loc_58B363
0x58B33B: cmp     esi, 0FD5h
0x58B341: jz      short loc_58B363
0x58B343: cmp     esi, 0FD6h
0x58B349: jz      short loc_58B363
0x58B34B: cmp     esi, 0FD7h
0x58B351: jz      short loc_58B363
0x58B353: cmp     esi, 0FD8h
0x58B359: jz      short loc_58B363
0x58B35B: cmp     esi, 0FD3h
0x58B361: jnz     short loc_58B36F
0x58B363: or      dword ptr [edi+2Ch], 2
0x58B367: mov     eax, edi
0x58B369: pop     edi
0x58B36A: pop     esi
0x58B36B: pop     ebx
0x58B36C: retn    0Ch
0x58B36F: cmp     esi, 0FCBh
0x58B375: jz      short loc_58B38F
0x58B377: cmp     esi, 0FCAh
0x58B37D: jz      short loc_58B38F
0x58B37F: cmp     esi, 0FDAh
0x58B385: jz      short loc_58B38F
0x58B387: cmp     esi, 0FD9h
0x58B38D: jnz     short loc_58B3B7
0x58B38F: mov     eax, [edi]
0x58B391: mov     edx, [eax+0Ch]
0x58B394: mov     ecx, edi
0x58B396: call    edx
0x58B398: cmp     eax, 386h
0x58B39D: jz      loc_58B52A
0x58B3A3: mov     eax, [edi]
0x58B3A5: mov     edx, [eax+0Ch]
0x58B3A8: mov     ecx, edi
0x58B3AA: call    edx
0x58B3AC: cmp     eax, 385h
0x58B3B1: jz      loc_58B52A
0x58B3B7: cmp     esi, 0FA4h
0x58B3BD: jnz     short loc_58B3F2
0x58B3BF: mov     eax, [edi]
0x58B3C1: mov     edx, [eax+0Ch]
0x58B3C4: mov     ecx, edi
0x58B3C6: call    edx
0x58B3C8: cmp     eax, 386h
0x58B3CD: jz      short loc_58B3E3
0x58B3CF: mov     eax, [edi]
0x58B3D1: mov     edx, [eax+0Ch]
0x58B3D4: mov     ecx, edi
0x58B3D6: call    edx
0x58B3D8: cmp     eax, 385h
0x58B3DD: jnz     loc_58B50A
0x58B3E3: or      dword ptr [edi+2Ch], 100h
0x58B3EA: mov     eax, edi
0x58B3EC: pop     edi
0x58B3ED: pop     esi
0x58B3EE: pop     ebx
0x58B3EF: retn    0Ch
0x58B3F2: cmp     esi, 0FC8h
0x58B3F8: jnz     short loc_58B43D
0x58B3FA: mov     eax, [edi]
0x58B3FC: mov     edx, [eax+0Ch]
0x58B3FF: mov     ecx, edi
0x58B401: call    edx
0x58B403: cmp     eax, 386h
0x58B408: jz      short loc_58B42E
0x58B40A: mov     eax, [edi]
0x58B40C: mov     edx, [eax+0Ch]
0x58B40F: mov     ecx, edi
0x58B411: call    edx
0x58B413: cmp     eax, 385h
0x58B418: jz      short loc_58B42E
0x58B41A: mov     eax, [edi]
0x58B41C: mov     edx, [eax+0Ch]
0x58B41F: mov     ecx, edi
0x58B421: call    edx
0x58B423: cmp     eax, 387h
0x58B428: jnz     loc_58B50A
0x58B42E: or      dword ptr [edi+2Ch], 200h
0x58B435: mov     eax, edi
0x58B437: pop     edi
0x58B438: pop     esi
0x58B439: pop     ebx
0x58B43A: retn    0Ch
0x58B43D: cmp     esi, 0FA1h
0x58B443: jz      loc_58B51E
0x58B449: cmp     esi, 0FA3h
0x58B44F: jz      loc_58B51E
0x58B455: cmp     esi, 0FA7h
0x58B45B: jz      loc_58B512
0x58B461: cmp     esi, 0FCCh
0x58B467: jz      loc_58B512
0x58B46D: cmp     esi, 0FCDh
0x58B473: jz      loc_58B512
0x58B479: cmp     esi, 0FCEh
0x58B47F: jz      loc_58B512
0x58B485: cmp     esi, 0FE6h
0x58B48B: jnz     short loc_58B4E1
0x58B48D: mov     eax, [edi]
0x58B48F: mov     edx, [eax+0Ch]
0x58B492: mov     ecx, edi
0x58B494: call    edx
0x58B496: cmp     eax, 386h
0x58B49B: jnz     short loc_58B4B5
0x58B49D: push    esi
0x58B49E: mov     ecx, edi
0x58B4A0: call    sub_588C10
0x58B4A5: test    eax, eax
0x58B4A7: jz      short loc_58B4B5
0x58B4A9: or      dword ptr [edi+2Ch], 20h
0x58B4AD: mov     eax, edi
0x58B4AF: pop     edi
0x58B4B0: pop     esi
0x58B4B1: pop     ebx
0x58B4B2: retn    0Ch
0x58B4B5: mov     eax, [edi]
0x58B4B7: mov     edx, [eax+0Ch]
0x58B4BA: mov     ecx, edi
0x58B4BC: call    edx
0x58B4BE: cmp     eax, 388h
0x58B4C3: jnz     short loc_58B50A
0x58B4C5: push    0FE6h
0x58B4CA: mov     ecx, edi
0x58B4CC: call    sub_588C10
0x58B4D1: test    eax, eax
0x58B4D3: jz      short loc_58B50A
0x58B4D5: or      dword ptr [edi+2Ch], 40h
0x58B4D9: mov     eax, edi
0x58B4DB: pop     edi
0x58B4DC: pop     esi
0x58B4DD: pop     ebx
0x58B4DE: retn    0Ch
0x58B4E1: cmp     esi, 0FA8h
0x58B4E7: jnz     short loc_58B50A
0x58B4E9: mov     ecx, edi
0x58B4EB: call    Tile_GetParentMenu
0x58B4F0: mov     esi, eax
0x58B4F2: test    esi, esi
0x58B4F4: jz      short loc_58B50A
0x58B4F6: fld     [esp+0Ch+arg_4]
0x58B4FA: mov     ebx, [esi]
0x58B4FC: push    edi
0x58B4FD: call    Double_To_SInt32
0x58B502: push    eax
0x58B503: mov     eax, [ebx+4]
0x58B506: mov     ecx, esi
0x58B508: call    eax
0x58B50A: pop     edi
0x58B50B: pop     esi
0x58B50C: xor     eax, eax
0x58B50E: pop     ebx
0x58B50F: retn    0Ch
0x58B512: or      dword ptr [edi+2Ch], 8
0x58B516: mov     eax, edi
0x58B518: pop     edi
0x58B519: pop     esi
0x58B51A: pop     ebx
0x58B51B: retn    0Ch
0x58B51E: or      dword ptr [edi+2Ch], 4
0x58B522: mov     eax, edi
0x58B524: pop     edi
0x58B525: pop     esi
0x58B526: pop     ebx
0x58B527: retn    0Ch
0x58B52A: push    0FA4h
0x58B52F: mov     ecx, edi
0x58B531: call    Tile_GetFloat
0x58B536: fcomp   dword ptr ds:0A379B4h
0x58B53C: fnstsw  ax
0x58B53E: test    ah, 44h
0x58B541: jp      short loc_58B54A
0x58B543: or      dword ptr [edi+2Ch], 100h
0x58B54A: or      dword ptr [edi+2Ch], 10h
0x58B54E: mov     eax, edi
0x58B550: pop     edi
0x58B551: pop     esi
0x58B552: pop     ebx
0x58B553: retn    0Ch
0x58B556: cmp     esi, 0FABh
0x58B55C: jnz     loc_58B642
0x58B562: mov     ecx, [edi+10h]
0x58B565: fld     [esp+0Ch+arg_4]
0x58B569: test    ecx, ecx
0x58B56B: fstp    [esp+0Ch+arg_4]
0x58B56F: mov     eax, edi
0x58B571: jz      short loc_58B5EF
0x58B573: fldz
0x58B575: mov     ebx, ecx
0x58B577: cmp     dword ptr [ebx+10h], 0
0x58B57B: jz      short loc_58B5ED
0x58B57D: mov     esi, [eax+18h]
0x58B580: mov     eax, esi
0x58B582: test    eax, eax
0x58B584: jz      short loc_58B5E4
0x58B586: mov     edx, [eax+8]
0x58B589: lea     ecx, [eax+8]
0x58B58C: movzx   ecx, word ptr [edx+18h]
0x58B590: cmp     cx, 0FA6h
0x58B595: mov     eax, [eax]
0x58B597: jz      short loc_58B5A1
0x58B599: ja      short loc_58B5E4
0x58B59B: test    eax, eax
0x58B59D: jnz     short loc_58B586
0x58B59F: jmp     short loc_58B5E4
0x58B5A1: fld     dword ptr [edx+4]
0x58B5A4: fstp    [esp+0Ch+arg_0]
0x58B5A8: fld     st(1)
0x58B5AA: fcomp   [esp+0Ch+arg_0]
0x58B5AE: fnstsw  ax
0x58B5B0: test    ah, 44h
0x58B5B3: jp      short loc_58B5E4
0x58B5B5: mov     eax, esi
0x58B5B7: test    eax, eax
0x58B5B9: jz      short loc_58B5D4
0x58B5BB: mov     edx, [eax+8]
0x58B5BE: lea     ecx, [eax+8]
0x58B5C1: movzx   ecx, word ptr [edx+18h]
0x58B5C5: cmp     cx, 0FABh
0x58B5CA: mov     eax, [eax]
0x58B5CC: jz      short loc_58B639
0x58B5CE: ja      short loc_58B5D4
0x58B5D0: test    eax, eax
0x58B5D2: jnz     short loc_58B5BB
0x58B5D4: fst     [esp+0Ch+arg_0]
0x58B5D8: fld     [esp+0Ch+arg_0]
0x58B5DC: fadd    [esp+0Ch+arg_4]
0x58B5E0: fstp    [esp+0Ch+arg_4]
0x58B5E4: mov     eax, ebx
0x58B5E6: mov     ebx, [eax+10h]
0x58B5E9: test    ebx, ebx
0x58B5EB: jnz     short loc_58B577
0x58B5ED: fstp    st
0x58B5EF: mov     ecx, edi
0x58B5F1: fstp    st
0x58B5F3: call    Tile_GetParentMenu
0x58B5F8: mov     esi, eax
0x58B5FA: mov     eax, edi
0x58B5FC: lea     esp, [esp+0]
0x58B600: mov     ecx, [eax+10h]
0x58B603: test    ecx, ecx
0x58B605: jz      short loc_58B613
0x58B607: cmp     dword ptr [ecx+10h], 0
0x58B60B: jz      short loc_58B613
0x58B60D: mov     eax, ecx
0x58B60F: test    eax, eax
0x58B611: jnz     short loc_58B600
0x58B613: test    esi, esi
0x58B615: jz      short loc_58B644
0x58B617: test    eax, eax
0x58B619: jz      short loc_58B644
0x58B61B: cmp     eax, edi
0x58B61D: jz      short loc_58B644
0x58B61F: fld     [esp+0Ch+arg_4]
0x58B623: fild    dword ptr [esi+18h]
0x58B626: fcomp   st(1)
0x58B628: fnstsw  ax
0x58B62A: test    ah, 5
0x58B62D: jp      short loc_58B642
0x58B62F: call    Double_To_SInt32
0x58B634: mov     [esi+18h], eax
0x58B637: jmp     short loc_58B644
0x58B639: fld     dword ptr [edx+4]
0x58B63C: fstp    [esp+0Ch+arg_0]
0x58B640: jmp     short loc_58B5D8
0x58B642: fstp    st
0x58B644: push    0FA4h
0x58B649: mov     ecx, edi
0x58B64B: call    Tile_GetFloat
0x58B650: fcomp   dword ptr ds:0A379B4h
0x58B656: fnstsw  ax
0x58B658: test    ah, 44h
0x58B65B: jp      short loc_58B664
0x58B65D: or      dword ptr [edi+2Ch], 100h
0x58B664: or      dword ptr [edi+2Ch], 1
0x58B668: mov     eax, edi
0x58B66A: pop     edi
0x58B66B: pop     esi
0x58B66C: pop     ebx
0x58B66D: retn    0Ch
