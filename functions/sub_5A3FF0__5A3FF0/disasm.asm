0x5A3FF0: push    0FFFFFFFFh
0x5A3FF2: push    offset SEH_5A3FF0
0x5A3FF7: mov     eax, large fs:0
0x5A3FFD: push    eax
0x5A3FFE: sub     esp, 64h
0x5A4001: push    ebx
0x5A4002: push    ebp
0x5A4003: push    esi
0x5A4004: push    edi; a3
0x5A4005: mov     eax, ds:0B30AACh
0x5A400A: xor     eax, esp
0x5A400C: push    eax; a3
0x5A400D: lea     eax, [esp+84h+var_C]
0x5A4011: mov     large fs:0, eax
0x5A4017: push    3F3h
0x5A401C: mov     [esp+88h+var_60], 0FAEh
0x5A4024: mov     [esp+88h+var_5C], 0FAFh
0x5A402C: mov     [esp+88h+var_58], 0FB0h
0x5A4034: mov     [esp+88h+var_54], 0FB1h
0x5A403C: mov     [esp+88h+var_50], 0FB2h
0x5A4044: mov     [esp+88h+var_4C], 0FB3h
0x5A404C: mov     [esp+88h+var_48], 0FB4h
0x5A4054: mov     [esp+88h+var_44], 0FB5h
0x5A405C: mov     [esp+88h+var_40], 0FB6h
0x5A4064: mov     [esp+88h+var_3C], 0FB7h
0x5A406C: mov     [esp+88h+var_38], 0FB8h
0x5A4074: mov     [esp+88h+var_34], 0FB9h
0x5A407C: mov     [esp+88h+var_30], 0FBAh
0x5A4084: mov     [esp+88h+var_2C], 0FBBh
0x5A408C: mov     [esp+88h+var_28], 0FBCh
0x5A4094: mov     [esp+88h+var_24], 0FBDh
0x5A409C: mov     [esp+88h+var_20], 0FBEh
0x5A40A4: mov     [esp+88h+var_1C], 0FBFh
0x5A40AC: mov     [esp+88h+var_18], 0FC0h
0x5A40B4: mov     [esp+88h+var_14], 0FC1h
0x5A40BC: mov     [esp+88h+var_10], 0FC2h
0x5A40C4: call    Menu_GetOpenMenuTile
0x5A40C9: mov     esi, eax
0x5A40CB: xor     edi, edi
0x5A40CD: add     esp, 4
0x5A40D0: cmp     esi, edi
0x5A40D2: jz      short loc_5A410B
0x5A40D4: mov     ecx, esi
0x5A40D6: call    Tile_GetParentMenu
0x5A40DB: test    eax, eax
0x5A40DD: jz      short loc_5A410B
0x5A40DF: mov     ebp, [esp+84h+arg_10]
0x5A40E6: cmp     ebp, 4
0x5A40E9: jz      short loc_5A4112
0x5A40EB: mov     ecx, esi
0x5A40ED: call    Tile_GetParentMenu
0x5A40F2: cmp     dword ptr [eax+24h], 8
0x5A40F6: jz      short loc_5A414A
0x5A40F8: mov     ecx, esi
0x5A40FA: call    Tile_GetParentMenu
0x5A40FF: mov     ebx, 1
0x5A4104: cmp     [eax+24h], ebx
0x5A4107: jz      short loc_5A414A
0x5A4109: jmp     short loc_5A4117
0x5A410B: mov     ebp, [esp+84h+arg_10]
0x5A4112: mov     ebx, 1
0x5A4117: push    edi
0x5A4118: push    3F1h
0x5A411D: call    sub_5790E0
0x5A4122: add     esp, 8
0x5A4125: test    al, al
0x5A4127: jz      loc_5A4247
0x5A412D: push    3F1h
0x5A4132: call    Menu_GetOpenMenuTile
0x5A4137: add     esp, 4
0x5A413A: mov     ecx, eax
0x5A413C: call    Tile_GetParentMenu
0x5A4141: cmp     [eax+24h], ebx
0x5A4144: jnz     loc_5A4247
0x5A414A: push    2B0h; Size
0x5A414F: call    FormHeapAlloc
0x5A4154: add     esp, 4
0x5A4157: mov     [esp+84h+var_6C], eax
0x5A415B: cmp     eax, edi
0x5A415D: mov     [esp+84h+var_4], edi
0x5A4164: jz      short loc_5A4175
0x5A4166: mov     ecx, eax
0x5A4168: call    sub_5A3F40
0x5A416D: mov     ebx, eax
0x5A416F: mov     [esp+84h+var_70], ebx
0x5A4173: jmp     short loc_5A417B
0x5A4175: mov     [esp+84h+var_70], edi
0x5A4179: mov     ebx, edi
0x5A417B: mov     eax, [esp+84h+a2]
0x5A4182: push    edi; a3
0x5A4183: push    eax; a2
0x5A4184: mov     ecx, ebx; this
0x5A4186: mov     [esp+8Ch+var_4], 0FFFFFFFFh
0x5A4191: call    BSStringT_Set
0x5A4196: mov     esi, [esp+84h+arg_14]
0x5A419D: cmp     esi, edi
0x5A419F: mov     ecx, [esp+84h+arg_4]
0x5A41A6: mov     edx, [esp+84h+arg_C]
0x5A41AD: mov     [ebx+8], ecx
0x5A41B0: mov     [ebx+2ACh], edx
0x5A41B6: jz      short loc_5A4226
0x5A41B8: cmp     ebp, 3
0x5A41BB: mov     eax, ebp
0x5A41BD: jz      short loc_5A4226
0x5A41BF: lea     edi, [ebx+60h]
0x5A41C2: add     ebx, 0Ch
0x5A41C5: test    eax, eax
0x5A41C7: mov     [ebx], eax
0x5A41C9: jnz     short loc_5A41E0
0x5A41CB: add     dword ptr [esi], 4
0x5A41CE: mov     eax, [esi]
0x5A41D0: fild    dword ptr [eax-4]
0x5A41D3: push    ecx
0x5A41D4: mov     ecx, edi
0x5A41D6: fstp    [esp+88h+var_88]; float
0x5A41D9: call    Tile_Property_SetFloatValue?
0x5A41DE: jmp     short loc_5A420F
0x5A41E0: cmp     eax, 1
0x5A41E3: jnz     short loc_5A41FA
0x5A41E5: add     dword ptr [esi], 4
0x5A41E8: mov     eax, [esi]
0x5A41EA: fld     dword ptr [eax-4]
0x5A41ED: push    ecx
0x5A41EE: mov     ecx, edi
0x5A41F0: fstp    [esp+88h+var_88]; float
0x5A41F3: call    Tile_Property_SetFloatValue?
0x5A41F8: jmp     short loc_5A420F
0x5A41FA: cmp     eax, 2
0x5A41FD: jnz     short loc_5A420F
0x5A41FF: add     dword ptr [esi], 4
0x5A4202: mov     eax, [esi]
0x5A4204: mov     eax, [eax-4]
0x5A4207: push    eax
0x5A4208: mov     ecx, edi
0x5A420A: call    sub_58CA50
0x5A420F: add     dword ptr [esi], 4
0x5A4212: mov     eax, [esi]
0x5A4214: mov     eax, [eax-4]
0x5A4217: add     ebx, 4
0x5A421A: add     edi, 1Ch
0x5A421D: cmp     eax, 3
0x5A4220: jnz     short loc_5A41C5
0x5A4222: mov     ebx, [esp+84h+var_70]
0x5A4226: push    ebx
0x5A4227: mov     ecx, offset dword_B3B334
0x5A422C: call    BSSimpleList_PushBack
0x5A4231: mov     al, 1
0x5A4233: mov     ecx, [esp+84h+var_C]
0x5A4237: mov     large fs:0, ecx
0x5A423E: pop     ecx
0x5A423F: pop     edi
0x5A4240: pop     esi
0x5A4241: pop     ebp
0x5A4242: pop     ebx
0x5A4243: add     esp, 70h
0x5A4246: retn
0x5A4247: cmp     esi, edi
0x5A4249: jz      short loc_5A4254
0x5A424B: mov     edx, [esi]
0x5A424D: mov     eax, [edx]
0x5A424F: push    ebx; a3
0x5A4250: mov     ecx, esi
0x5A4252: call    eax
0x5A4254: push    ebx; arg1
0x5A4255: push    edi; canCreate
0x5A4256: call    InterfaceManager_GetSingleton
0x5A425B: mov     esi, eax
0x5A425D: call    InterfaceManager_GetDepth
0x5A4262: fstp    [esp+8Ch+var_70]
0x5A4266: mov     [esp+8Ch+Str], edi
0x5A426A: mov     [esp+8Ch+var_64], di
0x5A426F: mov     [esp+8Ch+var_62], di
0x5A4274: mov     ecx, [esp+8Ch+a2]
0x5A427B: push    ecx
0x5A427C: push    offset aDataMenusGener; "Data\\Menus\\Generic"
0x5A4281: lea     edx, [esp+94h+Str]
0x5A4285: push    offset aSS_2; "%s\\%s"
0x5A428A: push    edx; int
0x5A428B: mov     [esp+9Ch+var_4], ebx
0x5A4292: call    BSStringT_Static_Format
0x5A4297: mov     ecx, [esi+68h]; TileWindow *
0x5A429A: mov     esi, [esp+9Ch+Str]
0x5A429E: add     esp, 18h
0x5A42A1: push    esi; Str
0x5A42A2: call    Menu_LoadXML
0x5A42A7: mov     edi, eax
0x5A42A9: mov     ecx, edi
0x5A42AB: call    Tile_GetParentMenu
0x5A42B0: mov     ebp, eax
0x5A42B2: test    ebp, ebp
0x5A42B4: mov     [esp+84h+var_6C], ebp
0x5A42B8: jz      loc_5A44B7
0x5A42BE: mov     eax, [ebp+0]
0x5A42C1: mov     edx, [eax+34h]
0x5A42C4: mov     ecx, ebp
0x5A42C6: call    edx
0x5A42C8: cmp     eax, 3F3h
0x5A42CD: jnz     loc_5A44A7
0x5A42D3: push    0; int
0x5A42D5: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A42DA: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A42DF: push    0; int
0x5A42E1: push    edi; void *
0x5A42E2: call    OblivionDynamicCast
0x5A42E7: add     esp, 14h
0x5A42EA: push    eax
0x5A42EB: mov     ecx, ebp
0x5A42ED: call    Menu_SetTileMenu
0x5A42F2: push    0; int
0x5A42F4: push    offset ??_R0?AVGenericMenu@@@8; struct TypeDescriptor *
0x5A42F9: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A42FE: push    0; int
0x5A4300: push    ebp; void *
0x5A4301: call    OblivionDynamicCast
0x5A4306: add     esp, 14h
0x5A4309: push    0FA5h
0x5A430E: mov     ecx, edi
0x5A4310: mov     esi, eax
0x5A4312: call    Tile_GetFloat
0x5A4317: fcomp   dword ptr ds:0A69770h
0x5A431D: fnstsw  ax
0x5A431F: test    ah, 44h
0x5A4322: jnp     short loc_5A433D
0x5A4324: push    0FA5h
0x5A4329: mov     ecx, edi
0x5A432B: call    Tile_GetFloat
0x5A4330: fcomp   qword ptr ds:0A69778h
0x5A4336: fnstsw  ax
0x5A4338: test    ah, 44h
0x5A433B: jp      short loc_5A4351
0x5A433D: fld     [esp+84h+var_70]
0x5A4341: push    ecx
0x5A4342: fstp    [esp+88h+var_88]; a3
0x5A4345: push    0FABh; a2
0x5A434A: mov     ecx, edi; this
0x5A434C: call    Tile_SetFloat
0x5A4351: mov     eax, [esp+84h+arg_4]
0x5A4358: mov     ecx, [esp+84h+arg_C]
0x5A435F: mov     [esi+28h], eax
0x5A4362: mov     [esi+34h], ecx
0x5A4365: mov     esi, [esp+84h+arg_14]
0x5A436C: test    esi, esi
0x5A436E: jz      loc_5A43FC
0x5A4374: mov     eax, [esp+84h+arg_10]
0x5A437B: cmp     eax, 4
0x5A437E: jz      loc_5A4406
0x5A4384: cmp     eax, 3
0x5A4387: jz      loc_5A445C
0x5A438D: lea     ebx, [esp+84h+var_60]
0x5A4391: test    eax, eax
0x5A4393: jnz     short loc_5A43B5
0x5A4395: add     dword ptr [esi], 4
0x5A4398: mov     eax, [esi]
0x5A439A: mov     edx, [eax-4]
0x5A439D: mov     ecx, [ebx]
0x5A439F: mov     [esp+84h+var_70], edx
0x5A43A3: fild    [esp+84h+var_70]
0x5A43A7: push    ecx
0x5A43A8: fstp    [esp+88h+var_88]; a3
0x5A43AB: push    ecx; a2
0x5A43AC: mov     ecx, edi; this
0x5A43AE: call    Tile_SetFloat
0x5A43B3: jmp     short loc_5A43EA
0x5A43B5: cmp     eax, 1
0x5A43B8: jnz     short loc_5A43D2
0x5A43BA: add     dword ptr [esi], 4
0x5A43BD: mov     ecx, [ebx]
0x5A43BF: mov     eax, [esi]
0x5A43C1: fld     dword ptr [eax-4]
0x5A43C4: push    ecx
0x5A43C5: fstp    [esp+88h+var_88]; a3
0x5A43C8: push    ecx; a2
0x5A43C9: mov     ecx, edi; this
0x5A43CB: call    Tile_SetFloat
0x5A43D0: jmp     short loc_5A43EA
0x5A43D2: cmp     eax, 2
0x5A43D5: jnz     short loc_5A43ED
0x5A43D7: add     dword ptr [esi], 4
0x5A43DA: mov     eax, [esi]
0x5A43DC: mov     eax, [eax-4]
0x5A43DF: mov     ecx, [ebx]
0x5A43E1: push    eax
0x5A43E2: push    ecx
0x5A43E3: mov     ecx, edi
0x5A43E5: call    Tile_SetString
0x5A43EA: add     ebx, 4
0x5A43ED: add     dword ptr [esi], 4
0x5A43F0: mov     eax, [esi]
0x5A43F2: mov     eax, [eax-4]
0x5A43F5: cmp     eax, 3
0x5A43F8: jnz     short loc_5A4391
0x5A43FA: jmp     short loc_5A445C
0x5A43FC: cmp     [esp+84h+arg_10], 4
0x5A4404: jnz     short loc_5A445C
0x5A4406: add     dword ptr [esi], 4
0x5A4409: mov     eax, [esi]
0x5A440B: mov     ebx, [eax-4]
0x5A440E: test    ebx, ebx
0x5A4410: jz      short loc_5A445C
0x5A4412: lea     ebp, [esp+84h+var_60]
0x5A4416: mov     ecx, ebx
0x5A4418: call    sub_589770
0x5A441D: test    al, al
0x5A441F: mov     eax, [ebp+0]
0x5A4422: jz      short loc_5A4432
0x5A4424: mov     ebx, [ebx+8]
0x5A4427: push    ebx
0x5A4428: push    eax
0x5A4429: mov     ecx, edi
0x5A442B: call    Tile_SetString
0x5A4430: jmp     short loc_5A4449
0x5A4432: fld     dword ptr [ebx+4]
0x5A4435: push    ecx
0x5A4436: fstp    [esp+88h+var_70]
0x5A443A: mov     ecx, edi; this
0x5A443C: fld     [esp+88h+var_70]
0x5A4440: fstp    [esp+88h+var_88]; a3
0x5A4443: push    eax; a2
0x5A4444: call    Tile_SetFloat
0x5A4449: add     dword ptr [esi], 4
0x5A444C: mov     eax, [esi]
0x5A444E: mov     ebx, [eax-4]
0x5A4451: add     ebp, 4
0x5A4454: test    ebx, ebx
0x5A4456: jnz     short loc_5A4416
0x5A4458: mov     ebp, [esp+84h+var_6C]
0x5A445C: push    0; char
0x5A445E: mov     ecx, ebp; int
0x5A4460: call    EnableMenu
0x5A4465: fld     dword ptr ds:0A379B4h
0x5A446B: push    ecx
0x5A446C: fstp    [esp+88h+var_88]; a3
0x5A446F: push    0FA1h; a2
0x5A4474: mov     ecx, edi; this
0x5A4476: call    Tile_SetFloat
0x5A447B: push    0; float
0x5A447D: mov     ecx, edi
0x5A447F: call    sub_58FBA0
0x5A4484: mov     ecx, [esp+84h+Str]
0x5A4488: push    ecx
0x5A4489: call    FormHeapFree
0x5A448E: add     esp, 4
0x5A4491: mov     al, 1
0x5A4493: mov     ecx, [esp+84h+var_C]
0x5A4497: mov     large fs:0, ecx
0x5A449E: pop     ecx
0x5A449F: pop     edi
0x5A44A0: pop     esi
0x5A44A1: pop     ebp
0x5A44A2: pop     ebx
0x5A44A3: add     esp, 70h
0x5A44A6: retn
0x5A44A7: cmp     dword ptr [ebp+4], 0
0x5A44AB: jz      short loc_5A44B7
0x5A44AD: mov     edx, [ebp+0]
0x5A44B0: mov     eax, [edx]
0x5A44B2: push    ebx
0x5A44B3: mov     ecx, ebp
0x5A44B5: call    eax
0x5A44B7: push    esi
0x5A44B8: call    FormHeapFree
0x5A44BD: add     esp, 4
0x5A44C0: xor     al, al
0x5A44C2: mov     ecx, [esp+84h+var_C]
0x5A44C6: mov     large fs:0, ecx
0x5A44CD: pop     ecx
0x5A44CE: pop     edi
0x5A44CF: pop     esi
0x5A44D0: pop     ebp
0x5A44D1: pop     ebx
0x5A44D2: add     esp, 70h
0x5A44D5: retn
