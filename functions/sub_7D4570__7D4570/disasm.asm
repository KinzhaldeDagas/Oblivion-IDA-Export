0x7D4570: sub     esp, 1Ch
0x7D4573: push    ebx
0x7D4574: mov     ebx, [esp+20h+arg_0]
0x7D4578: test    ebx, ebx
0x7D457A: push    ebp
0x7D457B: mov     ebp, ecx
0x7D457D: jz      loc_7D46AD
0x7D4583: fldz
0x7D4585: fcomp   dword ptr [ebp+0D8h]
0x7D458B: fnstsw  ax
0x7D458D: test    ah, 5
0x7D4590: jp      loc_7D46AD
0x7D4596: cmp     dword ptr [ebp+114h], 0
0x7D459D: push    esi
0x7D459E: push    edi
0x7D459F: jnz     short loc_7D45E2
0x7D45A1: mov     eax, ds:0B43104h
0x7D45A6: mov     ecx, ds:0B42F50h; this
0x7D45AC: push    16h; a3
0x7D45AE: push    eax; a2
0x7D45AF: call    BSTextureManager_GetDefaultRenderTarget
0x7D45B4: mov     edi, eax
0x7D45B6: mov     ecx, edi
0x7D45B8: call    BSRenderedTexture__UseTextureToRender
0x7D45BD: mov     esi, [eax]
0x7D45BF: mov     ecx, ds:0B42F50h
0x7D45C5: mov     [esp+2Ch+arg_0], eax
0x7D45C9: add     esi, 6Ch ; 'l'
0x7D45CC: call    sub_7C1360
0x7D45D1: mov     ecx, [esp+2Ch+arg_0]
0x7D45D5: mov     edx, [esi]
0x7D45D7: push    eax
0x7D45D8: call    edx
0x7D45DA: push    edi
0x7D45DB: mov     ecx, ebp
0x7D45DD: call    sub_499310
0x7D45E2: mov     eax, [ebp+114h]
0x7D45E8: push    eax
0x7D45E9: mov     ecx, ebx
0x7D45EB: call    sub_7C5A60
0x7D45F0: lea     esi, [ebx+0ECh]
0x7D45F6: mov     ecx, 7
0x7D45FB: lea     edi, [esp+2Ch+a2]
0x7D45FF: rep movsd
0x7D4601: lea     ecx, [esp+2Ch+arg_0]
0x7D4605: push    ecx
0x7D4606: mov     ecx, ebp
0x7D4608: call    sub_405AD0
0x7D460D: mov     edx, [eax]
0x7D460F: mov     eax, [esp+2Ch+arg_0]
0x7D4613: test    eax, eax
0x7D4615: fld     dword ptr [edx+0F8h]
0x7D461B: mov     edi, ds:0A2807Ch
0x7D4621: fstp    [esp+2Ch+var_8]
0x7D4625: jz      short loc_7D4641
0x7D4627: mov     esi, eax
0x7D4629: add     eax, 4
0x7D462C: push    eax; lpAddend
0x7D462D: call    edi ; InterlockedDecrement
0x7D462F: test    eax, eax
0x7D4631: jnz     short loc_7D4641
0x7D4633: test    esi, esi
0x7D4635: jz      short loc_7D4641
0x7D4637: mov     eax, [esi]
0x7D4639: mov     edx, [eax]
0x7D463B: push    1
0x7D463D: mov     ecx, esi
0x7D463F: call    edx
0x7D4641: lea     eax, [esp+2Ch+a2]
0x7D4645: push    eax; a2
0x7D4646: mov     ecx, ebx; this
0x7D4648: call    Camera_SetFrustum
0x7D464D: lea     ecx, [esp+2Ch+arg_0]
0x7D4651: push    ecx
0x7D4652: mov     ecx, ebp
0x7D4654: call    sub_405AD0
0x7D4659: mov     eax, [eax]
0x7D465B: mov     edx, [eax+88h]
0x7D4661: add     eax, 88h ; 'ˆ'
0x7D4666: mov     [ebx+54h], edx
0x7D4669: mov     ecx, [eax+4]
0x7D466C: mov     [ebx+58h], ecx
0x7D466F: mov     edx, [eax+8]
0x7D4672: mov     eax, [esp+2Ch+arg_0]
0x7D4676: test    eax, eax
0x7D4678: mov     [ebx+5Ch], edx
0x7D467B: jz      short loc_7D4697
0x7D467D: mov     esi, eax
0x7D467F: add     eax, 4
0x7D4682: push    eax; lpAddend
0x7D4683: call    edi ; InterlockedDecrement
0x7D4685: test    eax, eax
0x7D4687: jnz     short loc_7D4697
0x7D4689: test    esi, esi
0x7D468B: jz      short loc_7D4697
0x7D468D: mov     eax, [esi]
0x7D468F: mov     edx, [eax]
0x7D4691: push    1
0x7D4693: mov     ecx, esi
0x7D4695: call    edx
0x7D4697: mov     eax, [ebx]
0x7D4699: mov     edx, [eax+84h]
0x7D469F: push    0FFFFFFFFh
0x7D46A1: mov     ecx, ebx
0x7D46A3: mov     [ebx+144h], ebp
0x7D46A9: call    edx
0x7D46AB: pop     edi
0x7D46AC: pop     esi
0x7D46AD: pop     ebp
0x7D46AE: pop     ebx
0x7D46AF: add     esp, 1Ch
0x7D46B2: retn    8
