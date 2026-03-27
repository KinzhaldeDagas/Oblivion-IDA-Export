0x5AA3A0: sub     esp, 20h
0x5AA3A3: fld     dword ptr ds:0A53954h
0x5AA3A9: push    ebx; a3
0x5AA3AA: push    esi; a3
0x5AA3AB: push    edi; a3
0x5AA3AC: push    ecx
0x5AA3AD: mov     esi, ecx
0x5AA3AF: fstp    [esp+30h+a2]; a3
0x5AA3B2: mov     eax, [esi+2Ch]
0x5AA3B5: mov     ecx, [esi+4]; this
0x5AA3B8: mov     ebx, [eax+38h]
0x5AA3BB: or      edi, 0FFFFFFFFh
0x5AA3BE: push    0FAFh; a2
0x5AA3C3: mov     [esp+34h+var_10], 0; a3
0x5AA3CB: mov     [esp+34h+a3], edi; a3
0x5AA3CF: call    Tile_SetFloat
0x5AA3D4: fld     dword ptr ds:0A53954h
0x5AA3DA: push    ecx
0x5AA3DB: mov     ecx, [esi+4]; this
0x5AA3DE: fstp    [esp+30h+a2]; a3
0x5AA3E1: push    0FB0h; a2
0x5AA3E6: call    Tile_SetFloat
0x5AA3EB: fld     dword ptr ds:0A53954h
0x5AA3F1: push    ecx
0x5AA3F2: mov     ecx, [esi+4]; this
0x5AA3F5: fstp    [esp+30h+a2]; a3
0x5AA3F8: push    0FB1h; a2
0x5AA3FD: call    Tile_SetFloat
0x5AA402: fld     dword ptr ds:0A53954h
0x5AA408: push    ecx
0x5AA409: mov     ecx, [esi+4]; this
0x5AA40C: fstp    [esp+30h+a2]; a3
0x5AA40F: push    0FB2h; a2
0x5AA414: call    Tile_SetFloat
0x5AA419: fld     dword ptr ds:0A53954h
0x5AA41F: push    ecx
0x5AA420: mov     ecx, [esi+4]; this
0x5AA423: fstp    [esp+30h+a2]; a3
0x5AA426: push    0FBBh; a2
0x5AA42B: call    Tile_SetFloat
0x5AA430: fld     dword ptr ds:0A53954h
0x5AA436: push    ecx
0x5AA437: mov     ecx, [esi+4]; this
0x5AA43A: fstp    [esp+30h+a2]; a3
0x5AA43D: push    0FBCh; a2
0x5AA442: call    Tile_SetFloat
0x5AA447: fld     dword ptr ds:0A53954h
0x5AA44D: push    ecx
0x5AA44E: mov     ecx, [esi+4]; this
0x5AA451: fstp    [esp+30h+a2]; a3
0x5AA454: push    0FBDh; a2
0x5AA459: call    Tile_SetFloat
0x5AA45E: fld     dword ptr ds:0A53954h
0x5AA464: push    ecx
0x5AA465: mov     ecx, [esi+4]; this
0x5AA468: fstp    [esp+30h+a2]; a3
0x5AA46B: push    0FBEh; a2
0x5AA470: call    Tile_SetFloat
0x5AA475: fld     dword ptr ds:0A53954h
0x5AA47B: push    ecx
0x5AA47C: mov     ecx, [esi+4]; this
0x5AA47F: fstp    [esp+30h+a2]; a3
0x5AA482: push    0FBFh; a2
0x5AA487: call    Tile_SetFloat
0x5AA48C: fld     dword ptr ds:0A53954h
0x5AA492: push    ecx
0x5AA493: mov     ecx, [esi+38h]; this
0x5AA496: fstp    [esp+30h+a2]; a3
0x5AA499: push    0FAFh; a2
0x5AA49E: call    Tile_SetFloat
0x5AA4A3: fld     dword ptr ds:0A53954h
0x5AA4A9: push    ecx
0x5AA4AA: mov     ecx, [esi+38h]; this
0x5AA4AD: fstp    [esp+30h+a2]; a3
0x5AA4B0: push    0FB0h; a2
0x5AA4B5: call    Tile_SetFloat
0x5AA4BA: fld     dword ptr ds:0A53954h
0x5AA4C0: push    ecx
0x5AA4C1: mov     ecx, [esi+38h]; this
0x5AA4C4: fstp    [esp+30h+a2]; a3
0x5AA4C7: push    0FB1h; a2
0x5AA4CC: call    Tile_SetFloat
0x5AA4D1: fld     dword ptr ds:0A53954h
0x5AA4D7: push    ecx
0x5AA4D8: mov     ecx, [esi+38h]; this
0x5AA4DB: fstp    [esp+30h+a2]; a3
0x5AA4DE: push    0FB2h; a2
0x5AA4E3: call    Tile_SetFloat
0x5AA4E8: test    ebx, ebx
0x5AA4EA: mov     ecx, [esi+54h]
0x5AA4ED: mov     [esp+2Ch+var_4], ecx
0x5AA4F1: mov     byte ptr [esp+2Ch+var_20+3], 0
0x5AA4F6: jz      loc_5AA824
0x5AA4FC: push    ebp
0x5AA4FD: jmp     short loc_5AA504
0x5AA4FF: align 10h
0x5AA500: mov     ebx, [esp+30h+var_C]
0x5AA504: mov     edx, [ebx+4]
0x5AA507: lea     eax, [ebx+8]
0x5AA50A: mov     ebx, [eax]
0x5AA50C: push    0FB7h
0x5AA511: mov     ecx, ebx
0x5AA513: mov     [esp+34h+var_C], edx
0x5AA517: mov     [esp+34h+var_14], ebx; a3
0x5AA51B: call    Tile_GetFloat
0x5AA520: call    Double_To_SInt32
0x5AA525: test    ebx, ebx
0x5AA527: mov     ebp, eax
0x5AA529: mov     [esp+30h+var_18], ebp
0x5AA52D: mov     [esp+30h+var_8], ebp; a3
0x5AA531: jz      short loc_5AA581
0x5AA533: push    0; a3
0x5AA535: push    0FB9h
0x5AA53A: mov     ecx, ebx
0x5AA53C: call    Tile_GetFloat
0x5AA541: call    Double_To_SInt32
0x5AA546: mov     ecx, ds:0B333C4h; this
0x5AA54C: push    eax; a2
0x5AA54D: call    GetInventoryEntryOfItem
0x5AA552: mov     ebx, eax
0x5AA554: test    ebx, ebx
0x5AA556: jz      short loc_5AA57D
0x5AA558: mov     eax, [ebx+8]
0x5AA55B: push    eax
0x5AA55C: lea     ecx, [esp+34h+var_18]
0x5AA560: push    ecx
0x5AA561: call    sub_5AA210
0x5AA566: add     esp, 8
0x5AA569: mov     ecx, ebx
0x5AA56B: call    ContainerEntryExtraData_DestroyDataTable
0x5AA570: push    ebx
0x5AA571: call    FormHeapFree
0x5AA576: mov     ebp, [esp+34h+var_18]
0x5AA57A: add     esp, 4
0x5AA57D: mov     ebx, [esp+30h+var_14]
0x5AA581: cmp     ebp, [esp+30h+var_10]
0x5AA585: jz      loc_5AA742
0x5AA58B: mov     eax, [esp+30h+arg_0]
0x5AA58F: test    eax, ebp
0x5AA591: jz      loc_5AA742
0x5AA597: cmp     ebp, 1
0x5AA59A: jnz     short loc_5AA5B1
0x5AA59C: fild    [esp+30h+a3]
0x5AA5A0: push    ecx
0x5AA5A1: mov     ecx, [esi+4]
0x5AA5A4: fstp    [esp+34h+var_34]
0x5AA5A7: push    0FAFh
0x5AA5AC: jmp     loc_5AA736
0x5AA5B1: cmp     ebp, 2
0x5AA5B4: jnz     short loc_5AA5CB
0x5AA5B6: fild    [esp+30h+a3]
0x5AA5BA: push    ecx
0x5AA5BB: mov     ecx, [esi+4]
0x5AA5BE: fstp    [esp+34h+var_34]
0x5AA5C1: push    0FB0h
0x5AA5C6: jmp     loc_5AA736
0x5AA5CB: cmp     eax, 4
0x5AA5CE: jz      loc_5AA694
0x5AA5D4: cmp     eax, 8
0x5AA5D7: jz      loc_5AA694
0x5AA5DD: cmp     eax, 0Fh
0x5AA5E0: jl      loc_5AA742
0x5AA5E6: cmp     ebp, 4
0x5AA5E9: jnz     short loc_5AA600
0x5AA5EB: fild    [esp+30h+a3]
0x5AA5EF: push    ecx
0x5AA5F0: mov     ecx, [esi+4]
0x5AA5F3: fstp    [esp+34h+var_34]
0x5AA5F6: push    0FB1h
0x5AA5FB: jmp     loc_5AA736
0x5AA600: cmp     ebp, 5
0x5AA603: jnz     short loc_5AA60E
0x5AA605: push    ecx
0x5AA606: mov     ecx, [esi+4]
0x5AA609: jmp     loc_5AA72A
0x5AA60E: cmp     ebp, 6
0x5AA611: jnz     short loc_5AA628
0x5AA613: fild    [esp+30h+a3]
0x5AA617: push    ecx
0x5AA618: mov     ecx, [esi+4]
0x5AA61B: fstp    [esp+34h+var_34]
0x5AA61E: push    0FBBh
0x5AA623: jmp     loc_5AA736
0x5AA628: cmp     ebp, 8
0x5AA62B: jnz     short loc_5AA642
0x5AA62D: fild    [esp+30h+a3]
0x5AA631: push    ecx
0x5AA632: mov     ecx, [esi+4]
0x5AA635: fstp    [esp+34h+var_34]
0x5AA638: push    0FBCh
0x5AA63D: jmp     loc_5AA736
0x5AA642: cmp     ebp, 9
0x5AA645: jnz     short loc_5AA65C
0x5AA647: fild    [esp+30h+a3]
0x5AA64B: push    ecx
0x5AA64C: mov     ecx, [esi+4]
0x5AA64F: fstp    [esp+34h+var_34]
0x5AA652: push    0FBDh
0x5AA657: jmp     loc_5AA736
0x5AA65C: cmp     ebp, 0Ah
0x5AA65F: jnz     short loc_5AA676
0x5AA661: fild    [esp+30h+a3]
0x5AA665: push    ecx
0x5AA666: mov     ecx, [esi+4]
0x5AA669: fstp    [esp+34h+var_34]
0x5AA66C: push    0FBEh
0x5AA671: jmp     loc_5AA736
0x5AA676: cmp     ebp, 0Bh
0x5AA679: jnz     loc_5AA742
0x5AA67F: fild    [esp+30h+a3]
0x5AA683: push    ecx
0x5AA684: mov     ecx, [esi+4]
0x5AA687: fstp    [esp+34h+var_34]
0x5AA68A: push    0FBFh
0x5AA68F: jmp     loc_5AA736
0x5AA694: cmp     ebp, 4
0x5AA697: jnz     short loc_5AA6AE
0x5AA699: fild    [esp+30h+a3]
0x5AA69D: push    ecx
0x5AA69E: mov     ecx, [esi+38h]
0x5AA6A1: fstp    [esp+34h+var_34]
0x5AA6A4: push    0FAFh
0x5AA6A9: jmp     loc_5AA736
0x5AA6AE: cmp     ebp, 5
0x5AA6B1: jnz     short loc_5AA6C5
0x5AA6B3: fild    [esp+30h+a3]
0x5AA6B7: push    ecx
0x5AA6B8: mov     ecx, [esi+38h]
0x5AA6BB: fstp    [esp+34h+var_34]
0x5AA6BE: push    0FB0h
0x5AA6C3: jmp     short loc_5AA736
0x5AA6C5: cmp     ebp, 6
0x5AA6C8: jnz     short loc_5AA6DC
0x5AA6CA: fild    [esp+30h+a3]
0x5AA6CE: push    ecx
0x5AA6CF: mov     ecx, [esi+38h]
0x5AA6D2: fstp    [esp+34h+var_34]
0x5AA6D5: push    0FB1h
0x5AA6DA: jmp     short loc_5AA736
0x5AA6DC: cmp     ebp, 8
0x5AA6DF: jnz     short loc_5AA6F3
0x5AA6E1: fild    [esp+30h+a3]
0x5AA6E5: push    ecx
0x5AA6E6: mov     ecx, [esi+38h]
0x5AA6E9: fstp    [esp+34h+var_34]
0x5AA6EC: push    0FAFh
0x5AA6F1: jmp     short loc_5AA736
0x5AA6F3: cmp     ebp, 9
0x5AA6F6: jnz     short loc_5AA70A
0x5AA6F8: fild    [esp+30h+a3]
0x5AA6FC: push    ecx
0x5AA6FD: mov     ecx, [esi+38h]
0x5AA700: fstp    [esp+34h+var_34]
0x5AA703: push    0FB0h
0x5AA708: jmp     short loc_5AA736
0x5AA70A: cmp     ebp, 0Ah
0x5AA70D: jnz     short loc_5AA721
0x5AA70F: fild    [esp+30h+a3]
0x5AA713: push    ecx
0x5AA714: mov     ecx, [esi+38h]
0x5AA717: fstp    [esp+34h+var_34]
0x5AA71A: push    0FB1h
0x5AA71F: jmp     short loc_5AA736
0x5AA721: cmp     ebp, 0Bh
0x5AA724: jnz     short loc_5AA742
0x5AA726: push    ecx
0x5AA727: mov     ecx, [esi+38h]; this
0x5AA72A: fild    [esp+34h+a3]
0x5AA72E: fstp    [esp+34h+var_34]; a3
0x5AA731: push    0FB2h; a2
0x5AA736: call    Tile_SetFloat
0x5AA73B: add     edi, 1
0x5AA73E: mov     [esp+30h+a3], edi; a3
0x5AA742: mov     edx, [esp+30h+arg_0]
0x5AA746: test    [esp+30h+var_8], edx
0x5AA74A: push    ecx
0x5AA74B: mov     [esp+34h+var_10], ebp; a3
0x5AA74F: mov     ecx, ebx; this
0x5AA751: jz      loc_5AA7E5
0x5AA757: fld     dword ptr ds:0A379B4h
0x5AA75D: fstp    [esp+34h+var_34]; a3
0x5AA760: push    0FB6h; a2
0x5AA765: call    Tile_SetFloat
0x5AA76A: fild    [esp+30h+a3]
0x5AA76E: push    ecx
0x5AA76F: mov     ecx, ebx; this
0x5AA771: fstp    [esp+34h+var_34]; a3
0x5AA774: push    0FAAh; a2
0x5AA779: call    Tile_SetFloat
0x5AA77E: add     edi, 1
0x5AA781: cmp     edi, [esp+30h+var_4]
0x5AA785: mov     [esp+30h+a3], edi
0x5AA789: jle     loc_5AA818
0x5AA78F: cmp     byte ptr [esp+30h+var_20+3], 0
0x5AA794: jnz     loc_5AA818
0x5AA79A: push    1; arg1
0x5AA79C: push    0; canCreate
0x5AA79E: call    InterfaceManager_GetSingleton
0x5AA7A3: push    1; arg1
0x5AA7A5: push    0; canCreate
0x5AA7A7: call    InterfaceManager_GetSingleton
0x5AA7AC: add     dword ptr [eax+8Ch], 1
0x5AA7B3: add     eax, 8Ch ; 'Œ'
0x5AA7B8: mov     eax, [eax]
0x5AA7BA: test    eax, eax
0x5AA7BC: mov     [esp+40h+var_8], eax
0x5AA7C0: fild    [esp+40h+var_8]
0x5AA7C4: jge     short loc_5AA7CC
0x5AA7C6: fadd    dword ptr ds:0A2FC78h
0x5AA7CC: add     esp, 0Ch
0x5AA7CF: fstp    [esp+34h+var_34]; a3
0x5AA7D2: push    0FF0h; a2
0x5AA7D7: mov     ecx, ebx; this
0x5AA7D9: call    Tile_SetFloat
0x5AA7DE: mov     byte ptr [esp+30h+var_20+3], 1
0x5AA7E3: jmp     short loc_5AA818
0x5AA7E5: fld1
0x5AA7E7: fstp    [esp+34h+var_34]; a3
0x5AA7EA: push    0FB6h; a2
0x5AA7EF: call    Tile_SetFloat
0x5AA7F4: cmp     ebp, [esp+30h+arg_0]
0x5AA7F8: push    ecx
0x5AA7F9: mov     ecx, ebx; this
0x5AA7FB: jle     short loc_5AA805
0x5AA7FD: fld     dword ptr ds:0A6B040h
0x5AA803: jmp     short loc_5AA80B
0x5AA805: fld     dword ptr ds:0A53954h
0x5AA80B: fstp    [esp+34h+var_34]; a3
0x5AA80E: push    0FAAh; a2
0x5AA813: call    Tile_SetFloat
0x5AA818: cmp     [esp+30h+var_C], 0
0x5AA81D: jnz     loc_5AA500
0x5AA823: pop     ebp
0x5AA824: xor     ecx, ecx
0x5AA826: add     edi, 0FFFFFFFFh
0x5AA829: test    edi, edi
0x5AA82B: setl    cl
0x5AA82E: sub     ecx, 1
0x5AA831: and     ecx, edi
0x5AA833: mov     [esp+2Ch+arg_0], ecx; a3
0x5AA837: fild    [esp+2Ch+arg_0]
0x5AA83B: push    ecx
0x5AA83C: mov     ecx, [esi+2Ch]; this
0x5AA83F: fstp    [esp+30h+a2]; a3
0x5AA842: push    0FAEh; a2
0x5AA847: call    Tile_SetFloat
0x5AA84C: xor     edx, edx
0x5AA84E: test    edi, edi
0x5AA850: setl    dl
0x5AA853: push    ecx
0x5AA854: mov     ecx, [esi+4]; this
0x5AA857: sub     edx, 1
0x5AA85A: and     edx, edi
0x5AA85C: mov     [esp+30h+arg_0], edx; a3
0x5AA860: fild    [esp+30h+arg_0]
0x5AA864: fstp    [esp+30h+a2]; a3
0x5AA867: push    0FB3h; a2
0x5AA86C: call    Tile_SetFloat
0x5AA871: mov     ecx, [esi+4]
0x5AA874: push    0FBFh
0x5AA879: call    Tile_GetFloat
0x5AA87E: fcomp   dword ptr ds:0A53954h
0x5AA884: fnstsw  ax
0x5AA886: test    ah, 44h
0x5AA889: jp      short loc_5AA8AA
0x5AA88B: mov     edi, [esi+4]
0x5AA88E: push    0FB3h
0x5AA893: mov     ecx, edi
0x5AA895: call    Tile_GetFloat
0x5AA89A: push    ecx
0x5AA89B: fstp    [esp+30h+a2]; a3
0x5AA89E: push    0FBFh; a2
0x5AA8A3: mov     ecx, edi; this
0x5AA8A5: call    Tile_SetFloat
0x5AA8AA: mov     ecx, [esi+4]
0x5AA8AD: push    0FBEh
0x5AA8B2: call    Tile_GetFloat
0x5AA8B7: fcomp   dword ptr ds:0A53954h
0x5AA8BD: fnstsw  ax
0x5AA8BF: test    ah, 44h
0x5AA8C2: jp      short loc_5AA8E3
0x5AA8C4: mov     edi, [esi+4]
0x5AA8C7: push    0FBFh
0x5AA8CC: mov     ecx, edi
0x5AA8CE: call    Tile_GetFloat
0x5AA8D3: push    ecx
0x5AA8D4: fstp    [esp+30h+a2]; a3
0x5AA8D7: push    0FBEh; a2
0x5AA8DC: mov     ecx, edi; this
0x5AA8DE: call    Tile_SetFloat
0x5AA8E3: mov     ecx, [esi+4]
0x5AA8E6: push    0FBDh
0x5AA8EB: call    Tile_GetFloat
0x5AA8F0: fcomp   dword ptr ds:0A53954h
0x5AA8F6: fnstsw  ax
0x5AA8F8: test    ah, 44h
0x5AA8FB: jp      short loc_5AA91C
0x5AA8FD: mov     edi, [esi+4]
0x5AA900: push    0FBEh
0x5AA905: mov     ecx, edi
0x5AA907: call    Tile_GetFloat
0x5AA90C: push    ecx
0x5AA90D: fstp    [esp+30h+a2]; a3
0x5AA910: push    0FBDh; a2
0x5AA915: mov     ecx, edi; this
0x5AA917: call    Tile_SetFloat
0x5AA91C: mov     ecx, [esi+4]
0x5AA91F: push    0FBCh
0x5AA924: call    Tile_GetFloat
0x5AA929: fcomp   dword ptr ds:0A53954h
0x5AA92F: fnstsw  ax
0x5AA931: test    ah, 44h
0x5AA934: jp      short loc_5AA955
0x5AA936: mov     edi, [esi+4]
0x5AA939: push    0FBDh
0x5AA93E: mov     ecx, edi
0x5AA940: call    Tile_GetFloat
0x5AA945: push    ecx
0x5AA946: fstp    [esp+30h+a2]; a3
0x5AA949: push    0FBCh; a2
0x5AA94E: mov     ecx, edi; this
0x5AA950: call    Tile_SetFloat
0x5AA955: mov     ecx, [esi+4]
0x5AA958: push    0FBBh
0x5AA95D: call    Tile_GetFloat
0x5AA962: fcomp   dword ptr ds:0A53954h
0x5AA968: fnstsw  ax
0x5AA96A: test    ah, 44h
0x5AA96D: jp      short loc_5AA98E
0x5AA96F: mov     edi, [esi+4]
0x5AA972: push    0FBCh
0x5AA977: mov     ecx, edi
0x5AA979: call    Tile_GetFloat
0x5AA97E: push    ecx
0x5AA97F: fstp    [esp+30h+a2]; a3
0x5AA982: push    0FBBh; a2
0x5AA987: mov     ecx, edi; this
0x5AA989: call    Tile_SetFloat
0x5AA98E: mov     ecx, [esi+4]
0x5AA991: push    0FB2h
0x5AA996: call    Tile_GetFloat
0x5AA99B: fcomp   dword ptr ds:0A53954h
0x5AA9A1: fnstsw  ax
0x5AA9A3: test    ah, 44h
0x5AA9A6: jp      short loc_5AA9C7
0x5AA9A8: mov     edi, [esi+4]
0x5AA9AB: push    0FBBh
0x5AA9B0: mov     ecx, edi
0x5AA9B2: call    Tile_GetFloat
0x5AA9B7: push    ecx
0x5AA9B8: fstp    [esp+30h+a2]; a3
0x5AA9BB: push    0FB2h; a2
0x5AA9C0: mov     ecx, edi; this
0x5AA9C2: call    Tile_SetFloat
0x5AA9C7: mov     ecx, [esi+4]
0x5AA9CA: push    0FB1h
0x5AA9CF: call    Tile_GetFloat
0x5AA9D4: fcomp   dword ptr ds:0A53954h
0x5AA9DA: fnstsw  ax
0x5AA9DC: test    ah, 44h
0x5AA9DF: jp      short loc_5AAA00
0x5AA9E1: mov     edi, [esi+4]
0x5AA9E4: push    0FB2h
0x5AA9E9: mov     ecx, edi
0x5AA9EB: call    Tile_GetFloat
0x5AA9F0: push    ecx
0x5AA9F1: fstp    [esp+30h+a2]; a3
0x5AA9F4: push    0FB1h; a2
0x5AA9F9: mov     ecx, edi; this
0x5AA9FB: call    Tile_SetFloat
0x5AAA00: mov     ecx, [esi+4]
0x5AAA03: push    0FB0h
0x5AAA08: call    Tile_GetFloat
0x5AAA0D: fcomp   dword ptr ds:0A53954h
0x5AAA13: fnstsw  ax
0x5AAA15: test    ah, 44h
0x5AAA18: jp      short loc_5AAA39
0x5AAA1A: mov     edi, [esi+4]
0x5AAA1D: push    0FB1h
0x5AAA22: mov     ecx, edi
0x5AAA24: call    Tile_GetFloat
0x5AAA29: push    ecx
0x5AAA2A: fstp    [esp+30h+a2]; a3
0x5AAA2D: push    0FB0h; a2
0x5AAA32: mov     ecx, edi; this
0x5AAA34: call    Tile_SetFloat
0x5AAA39: mov     ecx, [esi+4]
0x5AAA3C: push    0FAFh
0x5AAA41: call    Tile_GetFloat
0x5AAA46: fcomp   dword ptr ds:0A53954h
0x5AAA4C: fnstsw  ax
0x5AAA4E: test    ah, 44h
0x5AAA51: jp      short loc_5AAA72
0x5AAA53: mov     edi, [esi+4]
0x5AAA56: push    0FB0h
0x5AAA5B: mov     ecx, edi
0x5AAA5D: call    Tile_GetFloat
0x5AAA62: push    ecx
0x5AAA63: fstp    [esp+30h+a2]; a3
0x5AAA66: push    0FAFh; a2
0x5AAA6B: mov     ecx, edi; this
0x5AAA6D: call    Tile_SetFloat
0x5AAA72: mov     ecx, [esi+38h]
0x5AAA75: push    0FB2h
0x5AAA7A: call    Tile_GetFloat
0x5AAA7F: fcomp   dword ptr ds:0A53954h
0x5AAA85: fnstsw  ax
0x5AAA87: test    ah, 44h
0x5AAA8A: jp      short loc_5AAAAA
0x5AAA8C: mov     ecx, [esi+4]
0x5AAA8F: push    0FB3h
0x5AAA94: call    Tile_GetFloat
0x5AAA99: push    ecx
0x5AAA9A: mov     ecx, [esi+38h]; this
0x5AAA9D: fstp    [esp+30h+a2]; a3
0x5AAAA0: push    0FB2h; a2
0x5AAAA5: call    Tile_SetFloat
0x5AAAAA: mov     ecx, [esi+38h]
0x5AAAAD: push    0FB1h
0x5AAAB2: call    Tile_GetFloat
0x5AAAB7: fcomp   dword ptr ds:0A53954h
0x5AAABD: fnstsw  ax
0x5AAABF: test    ah, 44h
0x5AAAC2: jp      short loc_5AAAE2
0x5AAAC4: mov     ecx, [esi+38h]
0x5AAAC7: push    0FB2h
0x5AAACC: call    Tile_GetFloat
0x5AAAD1: push    ecx
0x5AAAD2: mov     ecx, [esi+38h]; this
0x5AAAD5: fstp    [esp+30h+a2]; a3
0x5AAAD8: push    0FB1h; a2
0x5AAADD: call    Tile_SetFloat
0x5AAAE2: mov     ecx, [esi+38h]
0x5AAAE5: push    0FB0h
0x5AAAEA: call    Tile_GetFloat
0x5AAAEF: fcomp   dword ptr ds:0A53954h
0x5AAAF5: fnstsw  ax
0x5AAAF7: test    ah, 44h
0x5AAAFA: jp      short loc_5AAB1A
0x5AAAFC: mov     ecx, [esi+38h]
0x5AAAFF: push    0FB1h
0x5AAB04: call    Tile_GetFloat
0x5AAB09: push    ecx
0x5AAB0A: mov     ecx, [esi+38h]; this
0x5AAB0D: fstp    [esp+30h+a2]; a3
0x5AAB10: push    0FB0h; a2
0x5AAB15: call    Tile_SetFloat
0x5AAB1A: mov     ecx, [esi+38h]
0x5AAB1D: push    0FAFh
0x5AAB22: call    Tile_GetFloat
0x5AAB27: fcomp   dword ptr ds:0A53954h
0x5AAB2D: fnstsw  ax
0x5AAB2F: test    ah, 44h
0x5AAB32: jp      short loc_5AAB52
0x5AAB34: mov     ecx, [esi+38h]
0x5AAB37: push    0FB0h
0x5AAB3C: call    Tile_GetFloat
0x5AAB41: push    ecx
0x5AAB42: mov     ecx, [esi+38h]; this
0x5AAB45: fstp    [esp+30h+a2]; a3
0x5AAB48: push    0FAFh; a2
0x5AAB4D: call    Tile_SetFloat
0x5AAB52: pop     edi
0x5AAB53: pop     esi
0x5AAB54: pop     ebx
0x5AAB55: add     esp, 20h
0x5AAB58: retn    4
