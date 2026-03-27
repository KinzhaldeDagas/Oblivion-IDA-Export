0x5B4524: cmp     dword ptr [ebp+0], 0
0x5B4528: jz      loc_5B46DE
0x5B452E: cmp     ebx, 8
0x5B4531: jge     loc_5B470D
0x5B4537: mov     esi, [eax]
0x5B4539: add     ebx, 1
0x5B453C: add     eax, 4
0x5B453F: cmp     ebx, [esp+arg_34]
0x5B4543: mov     [esp+arg_3C], 0
0x5B4548: mov     [esp+arg_2C], ebx
0x5B454C: mov     [esp+arg_28], eax
0x5B4550: jg      loc_5B45F9
0x5B4556: mov     ecx, ds:0B333C4h
0x5B455C: fldz
0x5B455E: mov     edx, [ecx+5Ch]
0x5B4561: mov     eax, [edx+2Ch]
0x5B4564: mov     ebx, [ebp+0]
0x5B4567: add     ecx, 5Ch ; '\'
0x5B456A: push    ecx
0x5B456B: fstp    [esp+4+var_4]
0x5B456E: push    0
0x5B4570: call    eax
0x5B4572: push    ecx
0x5B4573: mov     ecx, [esp+0Ch+a3]
0x5B4577: fstp    [esp+0Ch+a2]; float
0x5B457A: push    ecx; int
0x5B457B: lea     edx, [esp+10h+arg_14]
0x5B457F: push    edx; int
0x5B4580: mov     ecx, ebx
0x5B4582: call    EffectItem_GetDisplayText
0x5B4587: mov     eax, [eax]
0x5B4589: push    eax
0x5B458A: push    0FAEh
0x5B458F: mov     ecx, esi
0x5B4591: mov     [esp+10h+arg_34C], 1
0x5B459C: call    Tile_SetString
0x5B45A1: mov     eax, [esp+8+arg_14]
0x5B45A5: push    eax
0x5B45A6: mov     [esp+0Ch+arg_34C], 0FFFFFFFFh
0x5B45B1: call    FormHeapFree
0x5B45B6: mov     eax, [ebp+0]
0x5B45B9: mov     eax, [eax+1Ch]
0x5B45BC: mov     eax, [eax+48h]
0x5B45BF: xor     ecx, ecx
0x5B45C1: add     esp, 4
0x5B45C4: cmp     eax, ecx
0x5B45C6: mov     [esp+8+arg_14], ecx
0x5B45CA: mov     word ptr [esp+8+arg_18+2], cx
0x5B45CF: mov     word ptr [esp+8+arg_18], cx
0x5B45D4: jnz     short loc_5B45DB
0x5B45D6: mov     eax, offset EmptyString
0x5B45DB: push    eax
0x5B45DC: push    offset aIcons; "Icons"
0x5B45E1: lea     ecx, [esp+10h+arg_34]
0x5B45E5: push    offset aSS_2; "%s\\%s"
0x5B45EA: push    ecx
0x5B45EB: call    __sprintf
0x5B45F0: mov     ebx, dword ptr [esp+18h+ArgList]
0x5B45F4: add     esp, 10h
0x5B45F7: jmp     short loc_5B4623
0x5B45F9: mov     edx, ds:0B38BD0h
0x5B45FF: push    edx
0x5B4600: push    0FAEh
0x5B4605: mov     ecx, esi
0x5B4607: call    Tile_SetString
0x5B460C: push    offset aIcons; "Icons"
0x5B4611: lea     eax, [esp+4+arg_3C]
0x5B4615: push    offset aSSmallMagicUnk; "%s\\Small\\Magic\\unknown_icon00.dds"
0x5B461A: push    eax
0x5B461B: call    __sprintf
0x5B4620: add     esp, 0Ch
0x5B4623: lea     ecx, [esp+8+arg_34]
0x5B4627: push    ecx
0x5B4628: push    0FAFh
0x5B462D: mov     ecx, esi
0x5B462F: call    Tile_SetString
0x5B4634: fld     dword ptr ds:0A379B4h
0x5B463A: push    ecx
0x5B463B: fstp    [esp+0Ch+a2]; a3
0x5B463E: push    0FA1h; a2
0x5B4643: mov     ecx, esi; this
0x5B4645: call    Tile_SetFloat
0x5B464A: fld     dword ptr ds:0A30634h
0x5B4650: push    ecx
0x5B4651: fstp    [esp+0Ch+a2]; a3
0x5B4654: push    0FB0h; a2
0x5B4659: mov     ecx, esi; this
0x5B465B: call    Tile_SetFloat
0x5B4660: xor     eax, eax
0x5B4662: mov     [esp+8+arg_8], eax
0x5B4666: mov     word ptr [esp+8+arg_C], ax
0x5B466B: mov     word ptr [esp+8+arg_C+2], ax
0x5B4670: push    ebx; ArgList
0x5B4671: lea     edx, [esp+0Ch+arg_8]
0x5B4675: push    offset aMagicpop_effec; "magicpop_effect_%d_icon"
0x5B467A: push    edx; a3
0x5B467B: mov     [esp+14h+arg_34C], 2
0x5B4686: call    BSStringT_Static_Format
0x5B468B: mov     eax, [esp+14h+arg_8]
0x5B468F: add     esp, 0Ch
0x5B4692: push    eax; unsigned __int8 *
0x5B4693: mov     ecx, esi
0x5B4695: call    sub_589930
0x5B469A: xor     esi, esi
0x5B469C: cmp     eax, esi
0x5B469E: jz      short loc_5B46A9
0x5B46A0: mov     ecx, [eax+2Ch]
0x5B46A3: or      ecx, 10h
0x5B46A6: mov     [eax+2Ch], ecx
0x5B46A9: mov     ecx, [esp+8+arg_8]
0x5B46AD: mov     ebp, [ebp+4]
0x5B46B0: push    ecx
0x5B46B1: mov     [esp+0Ch+arg_34C], 0FFFFFFFFh
0x5B46BC: call    FormHeapFree
0x5B46C1: add     esp, 4
0x5B46C4: mov     [esp+8+arg_8], esi
0x5B46C8: mov     word ptr [esp+8+arg_C+2], si
0x5B46CD: mov     word ptr [esp+8+arg_C], si
0x5B46D2: cmp     ebp, esi
0x5B46D4: mov     esi, [esp+8+a3]
0x5B46D8: jnz     sub_5B4520
0x5B46DE: cmp     ebx, 8
0x5B46E1: jge     short loc_5B470D
0x5B46E3: mov     esi, 8
0x5B46E8: lea     ebp, [edi+ebx*4+2Ch]
0x5B46EC: sub     esi, ebx
0x5B46EE: mov     ecx, [ebp+0]; this
0x5B46F1: fld1
0x5B46F3: push    ecx
0x5B46F4: fstp    [esp+0Ch+a2]; a3
0x5B46F7: push    0FA1h; a2
0x5B46FC: add     ebp, 4
0x5B46FF: call    Tile_SetFloat
0x5B4704: sub     esi, 1
0x5B4707: jnz     short loc_5B46EE
0x5B4709: mov     esi, [esp+8+a3]
0x5B470D: mov     ebp, dword ptr [esp+8+arg_1C]
0x5B4711: test    ebp, ebp
0x5B4713: jz      loc_5B4846
0x5B4719: mov     eax, [ebp+8]
0x5B471C: push    0; int
0x5B471E: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5B4723: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4728: push    0; int
0x5B472A: push    eax; void *
0x5B472B: call    OblivionDynamicCast
0x5B4730: mov     ebx, eax
0x5B4732: mov     eax, [ebp+8]
0x5B4735: add     esp, 14h
0x5B4738: cmp     byte ptr [eax+4], 22h ; '"'
0x5B473C: setz    al
0x5B473F: test    ebx, ebx
0x5B4741: jz      loc_5B4846
0x5B4747: test    al, al
0x5B4749: jnz     loc_5B4846
0x5B474F: xor     esi, esi
0x5B4751: mov     [esp+8+arg_8], esi
0x5B4755: mov     word ptr [esp+8+arg_C], si
0x5B475A: mov     word ptr [esp+8+arg_C+2], si
0x5B475F: mov     edx, [ebx]
0x5B4761: mov     eax, [edx+10h]
0x5B4764: mov     ecx, ebx
0x5B4766: mov     [esp+8+arg_34C], 3
0x5B4771: call    eax
0x5B4773: cmp     eax, 3
0x5B4776: jnz     short loc_5B4793
0x5B4778: mov     ecx, ds:0B38BD8h
0x5B477E: push    ecx; ArgList
0x5B477F: lea     edx, [esp+0Ch+arg_8]
0x5B4783: push    offset aS; "%s"
0x5B4788: push    edx; int
0x5B4789: call    BSStringT_Static_Format
0x5B478E: add     esp, 0Ch
0x5B4791: jmp     short loc_5B4802
0x5B4793: mov     ecx, [ebx+4]
0x5B4796: mov     eax, [ecx+24h]
0x5B4799: mov     edx, [eax]
0x5B479B: add     ecx, 24h ; '$'
0x5B479E: push    esi
0x5B479F: call    edx
0x5B47A1: fstp    [esp+0Ch+arg_C]
0x5B47A5: fldz
0x5B47A7: fcomp   [esp+0Ch+arg_C]
0x5B47AB: fnstsw  ax
0x5B47AD: test    ah, 1
0x5B47B0: jnz     short loc_5B47B8
0x5B47B2: fld1
0x5B47B4: fstp    [esp+0Ch+arg_C]
0x5B47B8: mov     ecx, [esp+0Ch+arg_18]
0x5B47BC: mov     ebp, ds:0B38BC8h
0x5B47C2: movzx   ebx, word ptr [ebx+8]
0x5B47C6: mov     esi, ds:0B38BC0h
0x5B47CC: call    sub_4849C0
0x5B47D1: fdiv    [esp+0Ch+arg_C]
0x5B47D5: call    Double_To_SInt32
0x5B47DA: mov     ecx, [esp+0Ch+arg_18]
0x5B47DE: push    eax
0x5B47DF: movzx   eax, bx
0x5B47E2: push    ebp
0x5B47E3: push    eax
0x5B47E4: call    sub_4849C0
0x5B47E9: call    Double_To_SInt32
0x5B47EE: push    eax
0x5B47EF: push    esi; ArgList
0x5B47F0: lea     ecx, [esp+20h+arg_4]
0x5B47F4: push    offset aSIISI; "%s: %i/%i %s: %i"
0x5B47F9: push    ecx; int
0x5B47FA: call    BSStringT_Static_Format
0x5B47FF: add     esp, 1Ch
0x5B4802: mov     edx, [esp+8+arg_8]
0x5B4806: mov     ecx, [edi+4Ch]
0x5B4809: push    edx
0x5B480A: push    0FDEh
0x5B480F: call    Tile_SetString
0x5B4814: fld     dword ptr ds:0A379B4h
0x5B481A: mov     edi, [edi+4Ch]
0x5B481D: push    ecx
0x5B481E: fstp    [esp+0Ch+a2]; a3
0x5B4821: push    0FA1h; a2
0x5B4826: mov     ecx, edi; this
0x5B4828: call    Tile_SetFloat
0x5B482D: lea     ecx, [esp+8+arg_8]; void *
0x5B4831: mov     [esp+8+arg_34C], 0FFFFFFFFh
0x5B483C: call    BSStringT_Clear
0x5B4841: jmp     loc_5B49D1
0x5B4846: mov     eax, [esi]
0x5B4848: mov     edx, [eax+18h]
0x5B484B: mov     ecx, esi
0x5B484D: call    edx
0x5B484F: cmp     eax, 7
0x5B4852: jz      loc_5B49AC
0x5B4858: mov     eax, [esi]
0x5B485A: mov     edx, [eax+18h]
0x5B485D: mov     ecx, esi
0x5B485F: call    edx
0x5B4861: cmp     eax, 8
0x5B4864: jz      loc_5B49AC
0x5B486A: mov     eax, ds:0B333C4h
0x5B486F: mov     ebx, [eax+5Ch]
0x5B4872: push    40Dh
0x5B4877: push    0; arg1
0x5B4879: push    0; canCreate
0x5B487B: add     ebx, 1Ch
0x5B487E: call    InterfaceManager_GetSingleton
0x5B4883: add     esp, 8
0x5B4886: mov     ecx, eax
0x5B4888: call    sub_57CFB0
0x5B488D: mov     edx, [ebx]
0x5B488F: lea     ecx, [esp+8+arg_20]
0x5B4893: push    eax
0x5B4894: push    ecx
0x5B4895: mov     ecx, ds:0B333C4h
0x5B489B: push    0
0x5B489D: push    esi; a3
0x5B489E: add     ecx, 5Ch ; '\'
0x5B48A1: call    edx
0x5B48A3: test    al, al
0x5B48A5: jnz     loc_5B4954
0x5B48AB: mov     eax, [esp+18h+a3]
0x5B48AF: cmp     eax, 3
0x5B48B2: jnz     short loc_5B48FB
0x5B48B4: lea     eax, [esp+18h+arg_4]
0x5B48B8: push    eax
0x5B48B9: lea     ecx, [esi+0Ch]
0x5B48BC: call    EffectItemList_SkillReqMsg
0x5B48C1: mov     eax, [eax]
0x5B48C3: mov     ecx, [edi+4Ch]
0x5B48C6: push    eax
0x5B48C7: push    0FDEh
0x5B48CC: mov     [esp+20h+arg_33C], 4
0x5B48D7: call    Tile_SetString
0x5B48DC: lea     ecx, [esp+18h+arg_4]; void *
0x5B48E0: mov     [esp+18h+arg_33C], 0FFFFFFFFh
0x5B48EB: call    BSStringT_Clear
0x5B48F0: fld     dword ptr ds:0A379B4h
0x5B48F6: jmp     loc_5B49C0
0x5B48FB: push    eax
0x5B48FC: lea     ecx, [esp+1Ch+arg_4]
0x5B4900: push    ecx
0x5B4901: mov     ecx, esi
0x5B4903: call    Magic_CastFailureMsg
0x5B4908: mov     edx, [esp+18h+arg_4]
0x5B490C: mov     ecx, [edi+4Ch]
0x5B490F: push    edx
0x5B4910: push    0FDEh
0x5B4915: mov     [esp+20h+arg_33C], 5
0x5B4920: call    Tile_SetString
0x5B4925: fld     dword ptr ds:0A379B4h
0x5B492B: mov     edi, [edi+4Ch]
0x5B492E: push    ecx
0x5B492F: fstp    [esp+1Ch+var_1C]; a3
0x5B4932: push    0FA1h; a2
0x5B4937: mov     ecx, edi; this
0x5B4939: call    Tile_SetFloat
0x5B493E: lea     ecx, [esp+18h+arg_4]; void *
0x5B4942: mov     [esp+18h+arg_33C], 0FFFFFFFFh
0x5B494D: call    BSStringT_Clear
0x5B4952: jmp     short loc_5B49D1
0x5B4954: mov     eax, [esi]
0x5B4956: mov     edx, [eax+18h]
0x5B4959: mov     ecx, esi
0x5B495B: call    edx
0x5B495D: test    eax, eax
0x5B495F: jnz     short loc_5B49A5
0x5B4961: lea     eax, [esp+18h+arg_14]
0x5B4965: push    eax
0x5B4966: lea     ecx, [esi+0Ch]
0x5B4969: call    EffectItemList_MagicSchoolMsg
0x5B496E: mov     eax, [eax]
0x5B4970: mov     ecx, [edi+4Ch]
0x5B4973: push    eax
0x5B4974: push    0FDEh
0x5B4979: mov     [esp+20h+arg_33C], 6
0x5B4984: call    Tile_SetString
0x5B4989: lea     ecx, [esp+18h+arg_14]; void *
0x5B498D: mov     [esp+18h+arg_33C], 0FFFFFFFFh
0x5B4998: call    BSStringT_Clear
0x5B499D: fld     dword ptr ds:0A379B4h
0x5B49A3: jmp     short loc_5B49C0
0x5B49A5: push    offset word_A36430
0x5B49AA: jmp     short loc_5B49B1
0x5B49AC: push    offset EmptyString
0x5B49B1: mov     ecx, [edi+4Ch]
0x5B49B4: push    0FDEh
0x5B49B9: call    Tile_SetString
0x5B49BE: fld1
0x5B49C0: push    ecx
0x5B49C1: mov     ecx, [edi+4Ch]; this
0x5B49C4: fstp    [esp+1Ch+var_1C]; a3
0x5B49C7: push    0FA1h; a2
0x5B49CC: call    Tile_SetFloat
0x5B49D1: mov     ecx, [esp+8+arg_30]
0x5B49D5: push    0; float
0x5B49D7: call    sub_58FBA0
0x5B49DC: mov     ecx, [esp+8+arg_344]
0x5B49E3: mov     large fs:0, ecx
0x5B49EA: pop     ecx
0x5B49EB: pop     edi
0x5B49EC: pop     esi
0x5B49ED: pop     ebp
0x5B49EE: pop     ebx
0x5B49EF: mov     ecx, [esp-0Ch+arg_340]
0x5B49F6: xor     ecx, esp
0x5B49F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B49FD: add     esp, 348h
0x5B4A03: retn
