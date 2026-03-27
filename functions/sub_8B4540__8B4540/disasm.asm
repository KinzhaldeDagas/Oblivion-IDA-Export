0x8B4540: fld     [esp+arg_C]
0x8B4544: sub     esp, 40h
0x8B4547: fcomp   dword ptr ds:0A2FAA8h
0x8B454D: fnstsw  ax
0x8B454F: test    ah, 41h
0x8B4552: jp      short loc_8B455D
0x8B4554: mov     eax, 1
0x8B4559: add     esp, 40h
0x8B455C: retn
0x8B455D: push    ebx
0x8B455E: push    ebp
0x8B455F: push    esi
0x8B4560: xor     esi, esi
0x8B4562: push    edi
0x8B4563: mov     edi, [esp+50h+arg_8]
0x8B4567: cmp     edi, esi
0x8B4569: mov     ebp, 80000000h
0x8B456E: mov     [esp+50h+var_3C], esi
0x8B4572: mov     [esp+50h+var_38], esi
0x8B4576: mov     [esp+50h+var_34], ebp
0x8B457A: jle     short loc_8B4596
0x8B457C: xor     eax, eax
0x8B457E: cmp     edi, esi
0x8B4580: setl    al
0x8B4583: push    10h
0x8B4585: dec     eax
0x8B4586: and     eax, edi
0x8B4588: push    eax
0x8B4589: lea     eax, [esp+58h+var_3C]
0x8B458D: push    eax
0x8B458E: call    sub_8A6E40
0x8B4593: add     esp, 0Ch
0x8B4596: mov     eax, [esp+50h+arg_0]
0x8B459A: mov     edx, [esp+50h+arg_4]
0x8B459E: xor     ebx, ebx
0x8B45A0: cmp     edi, 4
0x8B45A3: mov     [esp+50h+var_38], edi
0x8B45A7: jl      loc_8B4663
0x8B45AD: lea     esi, [edi-4]
0x8B45B0: shr     esi, 2
0x8B45B3: xor     ecx, ecx
0x8B45B5: inc     esi
0x8B45B6: lea     ebx, ds:0[esi*4]
0x8B45BD: mov     [esp+50h+var_40], ebx
0x8B45C1: mov     ebx, [eax]
0x8B45C3: mov     ebp, [esp+50h+var_3C]
0x8B45C7: mov     [ecx+ebp], ebx
0x8B45CA: mov     ebx, [eax+4]
0x8B45CD: mov     ebp, [esp+50h+var_3C]
0x8B45D1: mov     [ecx+ebp+4], ebx
0x8B45D5: mov     ebx, [eax+8]
0x8B45D8: mov     ebp, [esp+50h+var_3C]
0x8B45DC: mov     [ecx+ebp+8], ebx
0x8B45E0: mov     ebx, [eax+edx]
0x8B45E3: mov     ebp, [esp+50h+var_3C]
0x8B45E7: mov     [ecx+ebp+10h], ebx
0x8B45EB: mov     ebx, [eax+edx+4]
0x8B45EF: mov     ebp, [esp+50h+var_3C]
0x8B45F3: mov     [ecx+ebp+14h], ebx
0x8B45F7: mov     ebx, [eax+edx+8]
0x8B45FB: mov     ebp, [esp+50h+var_3C]
0x8B45FF: mov     [ecx+ebp+18h], ebx
0x8B4603: mov     ebp, [esp+50h+var_3C]
0x8B4607: add     eax, edx
0x8B4609: mov     ebx, [eax+edx]
0x8B460C: mov     [ecx+ebp+20h], ebx
0x8B4610: mov     ebx, [eax+edx+4]
0x8B4614: mov     ebp, [esp+50h+var_3C]
0x8B4618: add     eax, edx
0x8B461A: mov     [ecx+ebp+24h], ebx
0x8B461E: mov     ebx, [eax+8]
0x8B4621: mov     ebp, [esp+50h+var_3C]
0x8B4625: mov     [ecx+ebp+28h], ebx
0x8B4629: mov     ebx, [eax+edx]
0x8B462C: mov     ebp, [esp+50h+var_3C]
0x8B4630: add     eax, edx
0x8B4632: mov     [ecx+ebp+30h], ebx
0x8B4636: mov     ebx, [eax+4]
0x8B4639: mov     ebp, [esp+50h+var_3C]
0x8B463D: mov     [ecx+ebp+34h], ebx
0x8B4641: mov     ebx, [eax+8]
0x8B4644: mov     ebp, [esp+50h+var_3C]
0x8B4648: mov     [ecx+ebp+38h], ebx
0x8B464C: add     eax, edx
0x8B464E: add     ecx, 40h ; '@'
0x8B4651: dec     esi
0x8B4652: jnz     loc_8B45C1
0x8B4658: mov     ebx, [esp+50h+var_40]
0x8B465C: xor     esi, esi
0x8B465E: mov     ebp, 80000000h
0x8B4663: cmp     ebx, edi
0x8B4665: jge     short loc_8B469E
0x8B4667: mov     ecx, ebx
0x8B4669: mov     esi, edi
0x8B466B: shl     ecx, 4
0x8B466E: sub     esi, ebx
0x8B4670: mov     ebx, [eax]
0x8B4672: mov     ebp, [esp+50h+var_3C]
0x8B4676: mov     [ecx+ebp], ebx
0x8B4679: mov     ebx, [eax+4]
0x8B467C: mov     ebp, [esp+50h+var_3C]
0x8B4680: mov     [ecx+ebp+4], ebx
0x8B4684: mov     ebx, [eax+8]
0x8B4687: mov     ebp, [esp+50h+var_3C]
0x8B468B: mov     [ecx+ebp+8], ebx
0x8B468F: add     eax, edx
0x8B4691: add     ecx, 10h
0x8B4694: dec     esi
0x8B4695: jnz     short loc_8B4670
0x8B4697: mov     ebp, 80000000h
0x8B469C: xor     esi, esi
0x8B469E: mov     ecx, [esp+50h+var_3C]
0x8B46A2: push    1
0x8B46A4: lea     edx, [esp+54h+var_30]
0x8B46A8: push    edx
0x8B46A9: lea     eax, [esp+58h+var_18]
0x8B46AD: mov     [esp+58h+var_24], ecx
0x8B46B1: push    eax
0x8B46B2: lea     ecx, [esp+5Ch+var_24]
0x8B46B6: push    ecx
0x8B46B7: mov     [esp+60h+var_1C], 10h
0x8B46BF: mov     [esp+60h+var_20], edi
0x8B46C3: mov     [esp+60h+var_18], esi
0x8B46C7: mov     [esp+60h+var_14], esi
0x8B46CB: mov     [esp+60h+var_10], ebp
0x8B46CF: mov     [esp+60h+var_C], esi
0x8B46D3: mov     [esp+60h+var_8], esi
0x8B46D7: mov     [esp+60h+var_4], ebp
0x8B46DB: mov     [esp+60h+var_30], esi
0x8B46DF: mov     [esp+60h+var_2C], esi
0x8B46E3: mov     [esp+60h+var_28], ebp
0x8B46E7: call    sub_8F2010
0x8B46EC: mov     edi, [esp+60h+arg_10]
0x8B46F0: mov     edx, [esp+60h+arg_C]
0x8B46F4: push    edi; int
0x8B46F5: push    edx; float
0x8B46F6: lea     eax, [esp+68h+var_18]
0x8B46FA: push    eax; int
0x8B46FB: call    sub_8B43E0
0x8B4700: mov     ecx, [esp+6Ch+arg_C]
0x8B4704: mov     eax, [esp+6Ch+var_28]
0x8B4708: mov     ebx, large fs:2Ch
0x8B470F: add     esp, 1Ch
0x8B4712: test    ebp, eax
0x8B4714: mov     [edi+4], ecx
0x8B4717: mov     edi, ds:0BA9DE4h
0x8B471D: jnz     short loc_8B4747
0x8B471F: mov     edx, [ebx+edi*4]
0x8B4722: mov     ecx, [edx+19Ch]
0x8B4728: cmp     ecx, esi
0x8B472A: jnz     short loc_8B4732
0x8B472C: mov     ecx, ds:0BA7D9Ch
0x8B4732: and     eax, 3FFFFFFFh
0x8B4737: push    14h
0x8B4739: shl     eax, 4
0x8B473C: push    eax
0x8B473D: mov     eax, [esp+58h+var_30]
0x8B4741: push    eax
0x8B4742: call    sub_8A75D0
0x8B4747: lea     ecx, [esp+50h+var_18]
0x8B474B: call    sub_8B44C0
0x8B4750: mov     eax, [esp+50h+var_34]
0x8B4754: test    ebp, eax
0x8B4756: jnz     short loc_8B4780
0x8B4758: mov     ecx, [ebx+edi*4]
0x8B475B: mov     ecx, [ecx+19Ch]
0x8B4761: cmp     ecx, esi
0x8B4763: jnz     short loc_8B476B
0x8B4765: mov     ecx, ds:0BA7D9Ch
0x8B476B: mov     edx, [esp+50h+var_3C]
0x8B476F: and     eax, 3FFFFFFFh
0x8B4774: push    14h
0x8B4776: shl     eax, 4
0x8B4779: push    eax
0x8B477A: push    edx
0x8B477B: call    sub_8A75D0
0x8B4780: pop     edi
0x8B4781: pop     esi
0x8B4782: pop     ebp
0x8B4783: xor     eax, eax
0x8B4785: pop     ebx
0x8B4786: add     esp, 40h
0x8B4789: retn
