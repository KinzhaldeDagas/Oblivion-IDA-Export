0x5B4230: push    0FFFFFFFFh
0x5B4232: push    offset SEH_5B4230
0x5B4237: mov     eax, large fs:0
0x5B423D: push    eax
0x5B423E: sub     esp, 33Ch
0x5B4244: mov     eax, ds:0B30AACh
0x5B4249: xor     eax, esp
0x5B424B: mov     [esp+348h+var_10], eax
0x5B4252: push    ebx; a3
0x5B4253: push    ebp; a3
0x5B4254: push    esi; a3
0x5B4255: push    edi; a3
0x5B4256: mov     eax, ds:0B30AACh
0x5B425B: xor     eax, esp
0x5B425D: push    eax; a3
0x5B425E: lea     eax, [esp+35Ch+var_C]
0x5B4265: mov     large fs:0, eax
0x5B426B: mov     esi, [esp+35Ch+arg_0]
0x5B4272: mov     ebp, [esp+35Ch+arg_10]
0x5B4279: push    400h
0x5B427E: mov     [esp+360h+var_340], esi
0x5B4282: mov     [esp+360h+var_334], ebp
0x5B4286: call    Menu_GetOpenMenuTile
0x5B428B: mov     ebx, eax
0x5B428D: add     esp, 4
0x5B4290: test    ebx, ebx
0x5B4292: mov     [esp+35Ch+var_320], ebx
0x5B4296: jz      loc_5B49DC
0x5B429C: push    0; int
0x5B429E: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x5B42A3: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B42A8: push    0; int
0x5B42AA: mov     ecx, ebx
0x5B42AC: call    Tile_GetParentMenu
0x5B42B1: push    eax; void *
0x5B42B2: call    OblivionDynamicCast
0x5B42B7: mov     edi, eax
0x5B42B9: add     esp, 14h
0x5B42BC: test    edi, edi
0x5B42BE: jz      loc_5B49DC
0x5B42C4: fld     [esp+35Ch+arg_8]
0x5B42CB: push    ecx
0x5B42CC: fstp    [esp+360h+a2]; a3
0x5B42CF: push    0FAEh; a2
0x5B42D4: mov     ecx, ebx; this
0x5B42D6: mov     dword ptr [edi+58h], 1
0x5B42DD: call    Tile_SetFloat
0x5B42E2: fld     [esp+35Ch+arg_C]
0x5B42E9: push    ecx
0x5B42EA: fstp    [esp+360h+a2]; a3
0x5B42ED: push    0FAFh; a2
0x5B42F2: mov     ecx, ebx; this
0x5B42F4: call    Tile_SetFloat
0x5B42F9: fld     [esp+35Ch+arg_14]
0x5B4300: push    ecx
0x5B4301: fstp    [esp+360h+a2]; a3
0x5B4304: push    0FB1h; a2
0x5B4309: mov     ecx, ebx; this
0x5B430B: call    Tile_SetFloat
0x5B4310: fld     [esp+35Ch+arg_4]
0x5B4317: mov     ecx, [edi+28h]
0x5B431A: fst     dword ptr [edi+50h]
0x5B431D: push    0FCBh
0x5B4322: fstp    [esp+360h+var_33C]
0x5B4326: call    Tile_GetFloat
0x5B432B: fsubr   [esp+35Ch+var_33C]
0x5B432F: xor     ebx, ebx
0x5B4331: test    ebp, ebp
0x5B4333: fstp    dword ptr [edi+54h]
0x5B4336: jz      loc_5B44DD
0x5B433C: mov     ebp, [ebp+8]
0x5B433F: cmp     byte ptr [ebp+4], 21h ; '!'
0x5B4343: jnz     loc_5B43EF
0x5B4349: push    offset aIcon_small_dam; "icon_small_damage.dds"
0x5B434E: push    offset aIcons; "Icons"
0x5B4353: lea     eax, [esp+364h+var_218]
0x5B435A: push    offset aSS_2; "%s\\%s"
0x5B435F: push    eax
0x5B4360: call    __sprintf
0x5B4365: fld     dword ptr ds:0A379B4h
0x5B436B: mov     ecx, [edi+2Ch]; this
0x5B436E: fstp    [esp+36Ch+a2]; a3
0x5B4372: add     esp, 0Ch
0x5B4375: push    0FA1h; a2
0x5B437A: call    Tile_SetFloat
0x5B437F: lea     ecx, [esp+35Ch+var_218]
0x5B4386: push    ecx
0x5B4387: mov     ecx, [edi+2Ch]
0x5B438A: push    0FAFh
0x5B438F: call    Tile_SetString
0x5B4394: fld     dword ptr ds:0A2FE7Ch
0x5B439A: mov     ecx, [edi+2Ch]; this
0x5B439D: push    ecx
0x5B439E: fstp    [esp+360h+a2]; a3
0x5B43A1: push    0FB0h; a2
0x5B43A6: call    Tile_SetFloat
0x5B43AB: test    ebp, ebp
0x5B43AD: jz      loc_5B44D1
0x5B43B3: movsx   edx, byte ptr [ebp+90h]
0x5B43BA: mov     eax, ds:0B39A44h[edx*4]
0x5B43C1: test    eax, eax
0x5B43C3: jz      short loc_5B43DA
0x5B43C5: mov     eax, [eax]
0x5B43C7: mov     ecx, [edi+2Ch]
0x5B43CA: push    eax
0x5B43CB: push    0FAEh
0x5B43D0: call    Tile_SetString
0x5B43D5: jmp     loc_5B44D1
0x5B43DA: mov     ecx, [edi+2Ch]
0x5B43DD: xor     eax, eax
0x5B43DF: push    eax
0x5B43E0: push    0FAEh
0x5B43E5: call    Tile_SetString
0x5B43EA: jmp     loc_5B44D1
0x5B43EF: cmp     byte ptr [ebp+4], 14h
0x5B43F3: jnz     loc_5B44DD
0x5B43F9: push    offset aIcon_small_arm; "icon_small_armor.dds"
0x5B43FE: push    offset aIcons; "Icons"
0x5B4403: lea     eax, [esp+364h+var_114]
0x5B440A: push    offset aSS_2; "%s\\%s"
0x5B440F: push    eax
0x5B4410: call    __sprintf
0x5B4415: fld     dword ptr ds:0A379B4h
0x5B441B: mov     ecx, [edi+2Ch]; this
0x5B441E: fstp    [esp+36Ch+a2]; a3
0x5B4422: add     esp, 0Ch
0x5B4425: push    0FA1h; a2
0x5B442A: call    Tile_SetFloat
0x5B442F: lea     ecx, [esp+35Ch+var_114]
0x5B4436: push    ecx
0x5B4437: mov     ecx, [edi+2Ch]
0x5B443A: push    0FAFh
0x5B443F: call    Tile_SetString
0x5B4444: fld     dword ptr ds:0A2FE7Ch
0x5B444A: mov     ecx, [edi+2Ch]; this
0x5B444D: push    ecx
0x5B444E: fstp    [esp+360h+a2]; a3
0x5B4451: push    0FB0h; a2
0x5B4456: call    Tile_SetFloat
0x5B445B: xor     eax, eax
0x5B445D: cmp     ebp, eax
0x5B445F: jz      short loc_5B44D1
0x5B4461: mov     [esp+35Ch+var_348], eax
0x5B4465: mov     [esp+35Ch+var_344], ax
0x5B446A: mov     [esp+35Ch+var_342], ax
0x5B446F: mov     ebx, ds:0B38BE8h
0x5B4475: mov     ecx, ebp
0x5B4477: mov     [esp+35Ch+var_4], eax
0x5B447E: call    TESObjectARMO_ISHeavyArmor
0x5B4483: movzx   edx, al
0x5B4486: mov     eax, ds:0B084E8h[edx*4]
0x5B448D: test    eax, eax
0x5B448F: jz      short loc_5B4495
0x5B4491: mov     eax, [eax]
0x5B4493: jmp     short loc_5B4497
0x5B4495: xor     eax, eax
0x5B4497: push    ebx
0x5B4498: push    eax; ArgList
0x5B4499: lea     eax, [esp+364h+var_348]
0x5B449D: push    offset aSS; "%s %s"
0x5B44A2: push    eax; int
0x5B44A3: call    BSStringT_Static_Format
0x5B44A8: mov     ecx, [esp+36Ch+var_348]
0x5B44AC: add     esp, 10h
0x5B44AF: push    ecx
0x5B44B0: mov     ecx, [edi+2Ch]
0x5B44B3: push    0FAEh
0x5B44B8: call    Tile_SetString
0x5B44BD: lea     ecx, [esp+35Ch+var_348]; void *
0x5B44C1: mov     [esp+35Ch+var_4], 0FFFFFFFFh
0x5B44CC: call    BSStringT_Clear
0x5B44D1: mov     dword ptr [esp+35Ch+var_330+4], 1
0x5B44D9: mov     ebx, dword ptr [esp+35Ch+var_330+4]
0x5B44DD: mov     edx, [esi]
0x5B44DF: mov     eax, [edx+18h]
0x5B44E2: mov     ecx, esi
0x5B44E4: mov     [esp+35Ch+var_324], 8
0x5B44EC: call    eax
0x5B44EE: cmp     eax, 8
0x5B44F1: jnz     short loc_5B450D
0x5B44F3: mov     ecx, ds:0B333C4h
0x5B44F9: push    13h
0x5B44FB: call    Actor_GetBaseCalcAVi
0x5B4500: push    eax
0x5B4501: call    Magic_GetWortcraftMaxEffects
0x5B4506: add     esp, 4
0x5B4509: mov     [esp+arg_34], eax; int
0x5B450D: lea     ebp, [esi+10h]
0x5B4510: test    ebp, ebp
0x5B4512: jz      loc_5B46DE
0x5B4518: lea     eax, [edi+ebx*4+2Ch]
0x5B451C: jmp     short sub_5B4524
