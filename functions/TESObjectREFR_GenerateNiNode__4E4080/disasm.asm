0x4E4080: push    0FFFFFFFFh
0x4E4082: push    offset TESObjectREFR_GenerateNiNode_SEH
0x4E4087: mov     eax, large fs:0
0x4E408D: push    eax
0x4E408E: sub     esp, 48h
0x4E4091: push    ebx
0x4E4092: push    ebp
0x4E4093: push    esi
0x4E4094: push    edi; int
0x4E4095: mov     eax, ds:0B30AACh
0x4E409A: xor     eax, esp
0x4E409C: push    eax; int
0x4E409D: lea     eax, [esp+68h+var_C]
0x4E40A1: mov     large fs:0, eax
0x4E40A7: mov     ebp, ecx
0x4E40A9: mov     ecx, [ebp+8]
0x4E40AC: mov     eax, ecx
0x4E40AE: shr     eax, 0Bh
0x4E40B1: shr     ecx, 5
0x4E40B4: and     al, 1
0x4E40B6: test    cl, 1
0x4E40B9: jnz     loc_4E467A
0x4E40BF: test    al, al
0x4E40C1: jnz     loc_4E467A
0x4E40C7: mov     ebx, [ebp+3Ch]
0x4E40CA: xor     edi, edi
0x4E40CC: cmp     ebx, edi
0x4E40CE: mov     [esp+68h+var_50], ebx
0x4E40D2: jz      short loc_4E40DE
0x4E40D4: lea     eax, [ebx+4]
0x4E40D7: push    eax; lpAddend
0x4E40D8: call    dword ptr ds:0A28078h
0x4E40DE: cmp     ebx, edi
0x4E40E0: mov     [esp+68h+var_4], edi
0x4E40E4: jnz     loc_4E4640
0x4E40EA: mov     esi, [ebp+1Ch]
0x4E40ED: cmp     esi, edi
0x4E40EF: mov     [esp+68h+var_54], esi
0x4E40F3: jz      loc_4E4640
0x4E40F9: mov     ecx, esi
0x4E40FB: mov     edx, [ecx]
0x4E40FD: mov     eax, [edx+114h]
0x4E4103: push    ebp
0x4E4104: call    eax
0x4E4106: push    eax; a2
0x4E4107: lea     ecx, [esp+6Ch+var_50]; this
0x4E410B: call    NiSmartPointer_Set??
0x4E4110: mov     ebx, [esp+68h+var_50]
0x4E4114: push    ebx
0x4E4115: mov     ecx, ebp
0x4E4117: call    sub_4D7D10
0x4E411C: push    ebx
0x4E411D: call    sub_4D9800
0x4E4122: add     esp, 4
0x4E4125: cmp     ebx, edi
0x4E4127: jz      loc_4E4640
0x4E412D: mov     edx, [ebp+0]
0x4E4130: mov     eax, [edx+190h]
0x4E4136: mov     ecx, ebp
0x4E4138: mov     [esp+68h+var_4C], edi
0x4E413C: call    eax
0x4E413E: test    al, al
0x4E4140: jz      short loc_4E41C0
0x4E4142: mov     [esp+68h+Src], edi
0x4E4146: mov     word ptr [esp+68h+var_44], di
0x4E414B: mov     word ptr [esp+68h+var_44+2], di
0x4E4150: mov     ecx, [ebp+1Ch]
0x4E4153: mov     eax, [ecx+0Ch]
0x4E4156: mov     esi, [ebp+0Ch]
0x4E4159: push    eax
0x4E415A: mov     ecx, ebp; this
0x4E415C: mov     byte ptr [esp+6Ch+var_4], 1
0x4E4161: call    TESObjectREFR_GetName
0x4E4166: push    eax
0x4E4167: push    esi; ArgList
0x4E4168: lea     edx, [esp+74h+Src]
0x4E416C: push    offset a08xS08x; "(%08X) -> %s (%08X)"
0x4E4171: push    edx; int
0x4E4172: call    BSStringT_Static_Format
0x4E4177: mov     eax, [esp+7Ch+Src]
0x4E417B: add     esp, 14h
0x4E417E: push    eax; Src
0x4E417F: mov     ecx, ebx
0x4E4181: call    NiObjectNET_SetName
0x4E4186: mov     ecx, [ebp+1Ch]
0x4E4189: cmp     byte ptr [ecx+4], 24h ; '$'
0x4E418D: jnz     short loc_4E41AE
0x4E418F: mov     eax, [ebp+3Ch]
0x4E4192: mov     esi, [ebp+0]
0x4E4195: push    eax
0x4E4196: mov     ecx, ebp
0x4E4198: mov     [esp+6Ch+var_4C], ebp
0x4E419C: add     esi, 274h
0x4E41A2: call    sub_625850
0x4E41A7: mov     edx, [esi]
0x4E41A9: mov     ecx, ebp
0x4E41AB: push    eax
0x4E41AC: call    edx
0x4E41AE: lea     ecx, [esp+68h+Src]; void *
0x4E41B2: mov     byte ptr [esp+68h+var_4], 0
0x4E41B7: call    BSStringT_Clear
0x4E41BC: mov     esi, [esp+68h+var_54]
0x4E41C0: push    offset dword_A7D0EC
0x4E41C5: mov     ecx, ebx
0x4E41C7: call    NiObjectNET_GetExtraData
0x4E41CC: cmp     eax, edi
0x4E41CE: jz      short loc_4E41FA
0x4E41D0: mov     eax, [eax+0Ch]
0x4E41D3: shr     eax, 4
0x4E41D6: test    al, 1
0x4E41D8: jz      short loc_4E41FA
0x4E41DA: mov     ecx, [ebp+8]
0x4E41DD: shr     ecx, 7
0x4E41E0: test    cl, 1
0x4E41E3: push    ebx
0x4E41E4: jnz     short loc_4E41F0
0x4E41E6: call    sub_4E26F0
0x4E41EB: add     esp, 4
0x4E41EE: jmp     short loc_4E4235
0x4E41F0: call    sub_4DE1C0
0x4E41F5: add     esp, 4
0x4E41F8: jmp     short loc_4E4235
0x4E41FA: mov     ecx, ebp
0x4E41FC: call    sub_4D6700
0x4E4201: test    al, al
0x4E4203: jz      short loc_4E4235
0x4E4205: push    edi; Seed
0x4E4206: call    GetRandomLargeInteger?
0x4E420B: cdq
0x4E420C: mov     ecx, 3E8h
0x4E4211: idiv    ecx
0x4E4213: mov     [esp+6Ch+var_54], edx
0x4E4217: fild    [esp+6Ch+var_54]
0x4E421B: fdiv    qword ptr ds:0A309F0h
0x4E4221: fstp    [esp+6Ch+var_54]
0x4E4225: fld     [esp+6Ch+var_54]
0x4E4229: fstp    [esp+6Ch+var_6C]; float
0x4E422C: push    ebx; int
0x4E422D: call    sub_4DE3C0
0x4E4232: add     esp, 8
0x4E4235: cmp     byte ptr [esi+4], 21h ; '!'
0x4E4239: jnz     short loc_4E4244
0x4E423B: push    ebx
0x4E423C: call    sub_480770
0x4E4241: add     esp, 4
0x4E4244: mov     edx, [ebp+2Ch]
0x4E4247: mov     [ebx+54h], edx
0x4E424A: mov     eax, [ebp+30h]
0x4E424D: mov     [ebx+58h], eax
0x4E4250: mov     ecx, [ebp+34h]
0x4E4253: lea     edx, [esp+68h+var_30]
0x4E4257: mov     [ebx+5Ch], ecx
0x4E425A: push    edx
0x4E425B: mov     ecx, ebp
0x4E425D: call    sub_4D7AF0
0x4E4262: mov     esi, eax
0x4E4264: lea     edi, [ebx+30h]
0x4E4267: mov     ecx, 9
0x4E426C: rep movsd
0x4E426E: mov     ecx, ebp
0x4E4270: call    sub_4D6F20
0x4E4275: test    al, al
0x4E4277: jz      short loc_4E42E5
0x4E4279: push    1
0x4E427B: push    1
0x4E427D: push    0
0x4E427F: push    ebx
0x4E4280: call    sub_88CEB0
0x4E4285: fldz
0x4E4287: add     esp, 10h
0x4E428A: push    0; a3
0x4E428C: push    ecx
0x4E428D: mov     ecx, ebx; this
0x4E428F: fstp    [esp+70h+a2]; a2
0x4E4292: call    NiAVObject_UpdateNiAVObject
0x4E4297: fldz
0x4E4299: push    0; a3
0x4E429B: push    ecx
0x4E429C: mov     ecx, ebx; this
0x4E429E: fstp    [esp+70h+a2]; a2
0x4E42A1: call    NiAVObject_UpdateNiAVObject
0x4E42A6: push    1
0x4E42A8: push    1
0x4E42AA: push    1
0x4E42AC: push    ebx
0x4E42AD: call    sub_88CEB0
0x4E42B2: add     esp, 10h
0x4E42B5: lea     eax, [ebx+20h]
0x4E42B8: push    eax
0x4E42B9: lea     ecx, [esp+6Ch+Src]
0x4E42BD: push    ecx
0x4E42BE: lea     esi, [ebp+2Ch]
0x4E42C1: mov     ecx, esi
0x4E42C3: call    sub_4121A0
0x4E42C8: lea     edx, [esp+68h+Src]
0x4E42CC: push    edx
0x4E42CD: mov     ecx, esi
0x4E42CF: call    sub_4121D0
0x4E42D4: mov     eax, [esi]
0x4E42D6: mov     [ebx+54h], eax
0x4E42D9: mov     ecx, [esi+4]
0x4E42DC: mov     [ebx+58h], ecx
0x4E42DF: mov     edx, [esi+8]
0x4E42E2: mov     [ebx+5Ch], edx
0x4E42E5: push    1
0x4E42E7: push    ebx
0x4E42E8: call    sub_897A20
0x4E42ED: add     esp, 8
0x4E42F0: push    offset off_A3CEB0
0x4E42F5: mov     ecx, ebx
0x4E42F7: call    NiObjectNET_GetExtraData
0x4E42FC: push    eax
0x4E42FD: push    offset dword_B35ACC
0x4E4302: call    NiRTTI_Cast
0x4E4307: add     esp, 8
0x4E430A: test    eax, eax
0x4E430C: jz      short loc_4E4313
0x4E430E: mov     [eax+0Ch], ebp
0x4E4311: jmp     short loc_4E4343
0x4E4313: push    10h; Size
0x4E4315: call    FormHeapAlloc
0x4E431A: add     esp, 4
0x4E431D: mov     [esp+68h+Src], eax
0x4E4321: test    eax, eax
0x4E4323: mov     byte ptr [esp+68h+var_4], 2
0x4E4328: jz      short loc_4E4334
0x4E432A: push    ebp
0x4E432B: mov     ecx, eax
0x4E432D: call    sub_4D67C0
0x4E4332: jmp     short loc_4E4336
0x4E4334: xor     eax, eax
0x4E4336: push    eax
0x4E4337: mov     ecx, ebx
0x4E4339: mov     byte ptr [esp+6Ch+var_4], 0
0x4E433E: call    NiNode_AddNiExtraData
0x4E4343: push    ebx
0x4E4344: call    sub_7B8910
0x4E4349: mov     eax, [ebp+1Ch]
0x4E434C: add     esp, 4
0x4E434F: cmp     eax, ds:0B35EA4h
0x4E4355: jz      short loc_4E435F
0x4E4357: cmp     eax, ds:0B35EB4h
0x4E435D: jnz     short loc_4E4364
0x4E435F: or      word ptr [ebx+18h], 1
0x4E4364: mov     eax, [ebp+0]
0x4E4367: mov     edx, [eax+170h]
0x4E436D: mov     ecx, ebp
0x4E436F: call    edx
0x4E4371: cmp     byte ptr [eax+4], 23h ; '#'
0x4E4375: jnz     short loc_4E4384
0x4E4377: mov     eax, [ebp+0]
0x4E437A: mov     edx, [eax+170h]
0x4E4380: mov     ecx, ebp
0x4E4382: call    edx
0x4E4384: lea     esi, [ebp+44h]
0x4E4387: mov     ecx, esi; this
0x4E4389: mov     [esp+68h+var_54], esi
0x4E438D: call    ExtraDataList_GetTeleport
0x4E4392: test    eax, eax
0x4E4394: jz      short loc_4E43BF
0x4E4396: mov     ecx, esi; this
0x4E4398: call    ExtraDataList_GetTeleport
0x4E439D: mov     ecx, eax
0x4E439F: call    sub_42B460
0x4E43A4: test    eax, eax
0x4E43A6: jz      short loc_4E43BF
0x4E43A8: mov     ecx, esi; this
0x4E43AA: call    ExtraDataList_GetTeleport
0x4E43AF: push    1
0x4E43B1: mov     ecx, eax
0x4E43B3: call    sub_42B460
0x4E43B8: mov     ecx, eax
0x4E43BA: call    sub_4CCA60
0x4E43BF: mov     ecx, ebp; int
0x4E43C1: call    sub_4E3490
0x4E43C6: mov     ecx, ebp; this
0x4E43C8: call    TESObjectREFR_GetScale
0x4E43CD: fstp    [esp+68h+Src]
0x4E43D1: fld     [esp+68h+Src]
0x4E43D5: mov     eax, [ebx]
0x4E43D7: mov     edx, [eax+50h]
0x4E43DA: fabs
0x4E43DC: fstp    [esp+68h+Src]
0x4E43E0: mov     ecx, ebx
0x4E43E2: fld     [esp+68h+Src]
0x4E43E6: fstp    dword ptr [ebx+60h]
0x4E43E9: call    edx
0x4E43EB: mov     eax, [ebp+0]
0x4E43EE: mov     edx, [eax+190h]
0x4E43F4: mov     ecx, ebp
0x4E43F6: call    edx
0x4E43F8: test    al, al
0x4E43FA: jz      short loc_4E4445
0x4E43FC: mov     eax, [ebp+1Ch]
0x4E43FF: cmp     byte ptr [eax+4], 23h ; '#'
0x4E4403: jnz     short loc_4E4445
0x4E4405: mov     edx, [ebp+0]
0x4E4408: mov     eax, [edx+13Ch]
0x4E440E: push    0
0x4E4410: mov     ecx, ebp
0x4E4412: call    eax
0x4E4414: mov     esi, eax
0x4E4416: test    esi, esi
0x4E4418: jz      short loc_4E4438
0x4E441A: mov     edx, [ebp+0]
0x4E441D: mov     eax, [edx+198h]
0x4E4423: mov     edi, [esi]
0x4E4425: push    1
0x4E4427: push    0
0x4E4429: mov     ecx, ebp
0x4E442B: call    eax
0x4E442D: mov     edx, [edi+9Ch]
0x4E4433: mov     ecx, esi
0x4E4435: push    eax
0x4E4436: call    edx
0x4E4438: mov     ecx, [ebp+1Ch]
0x4E443B: push    ebp
0x4E443C: call    sub_528550
0x4E4441: mov     esi, [esp+68h+var_54]
0x4E4445: mov     ecx, ebx; this
0x4E4447: call    NiAVObject_InitializePropertyState
0x4E444C: mov     eax, [ebp+0]
0x4E444F: mov     edx, [eax+190h]
0x4E4455: mov     ecx, ebp
0x4E4457: call    edx
0x4E4459: test    al, al
0x4E445B: jz      loc_4E4636
0x4E4461: mov     eax, [ebp+3Ch]
0x4E4464: push    eax
0x4E4465: mov     ecx, ebp
0x4E4467: call    sub_5EA1A0
0x4E446C: mov     ecx, [ebp+58h]
0x4E446F: test    ecx, ecx
0x4E4471: jz      short loc_4E4496
0x4E4473: mov     eax, [ecx]
0x4E4475: mov     edx, [eax+8]
0x4E4478: call    edx
0x4E447A: test    eax, eax
0x4E447C: jnz     short loc_4E4496
0x4E447E: mov     esi, [ebp+58h]
0x4E4481: test    esi, esi
0x4E4483: jz      short loc_4E4496
0x4E4485: push    ebp
0x4E4486: mov     ecx, esi
0x4E4488: call    sub_634CB0
0x4E448D: mov     eax, [esi]
0x4E448F: mov     edx, [eax+5Ch]
0x4E4492: mov     ecx, esi
0x4E4494: call    edx
0x4E4496: mov     ecx, [esp+68h+var_4C]
0x4E449A: test    ecx, ecx
0x4E449C: jz      short loc_4E44A3
0x4E449E: call    sub_6258D0
0x4E44A3: mov     eax, [ebp+0]
0x4E44A6: mov     edx, [eax+198h]
0x4E44AC: push    0
0x4E44AE: mov     ecx, ebp
0x4E44B0: call    edx
0x4E44B2: test    al, al
0x4E44B4: jz      loc_4E4605
0x4E44BA: mov     eax, [ebp+0]
0x4E44BD: mov     edx, [eax+164h]
0x4E44C3: mov     ecx, ebp
0x4E44C5: call    edx
0x4E44C7: test    eax, eax
0x4E44C9: jz      loc_4E4605
0x4E44CF: mov     eax, [ebp+0]
0x4E44D2: mov     edx, [eax+164h]
0x4E44D8: push    20h ; ' '
0x4E44DA: mov     ecx, ebp
0x4E44DC: call    edx
0x4E44DE: mov     ecx, eax
0x4E44E0: call    sub_470D00
0x4E44E5: test    al, al
0x4E44E7: jz      loc_4E4605
0x4E44ED: mov     eax, [ebp+0]
0x4E44F0: mov     edx, [eax+164h]
0x4E44F6: mov     ecx, ebp
0x4E44F8: call    edx
0x4E44FA: fldz
0x4E44FC: push    ecx
0x4E44FD: fstp    [esp+6Ch+var_6C]; float
0x4E4500: mov     esi, eax
0x4E4502: push    5; int
0x4E4504: mov     ecx, esi
0x4E4506: call    sub_470FC0
0x4E450B: fldz
0x4E450D: push    0FFFFFFFFh
0x4E450F: push    ecx
0x4E4510: fstp    [esp+70h+a2]
0x4E4513: push    0FFFFFFFFh
0x4E4515: push    20h ; ' '
0x4E4517: push    0
0x4E4519: mov     ecx, esi
0x4E451B: call    sub_474AB0
0x4E4520: push    0
0x4E4522: mov     ecx, esi
0x4E4524: call    sub_4706E0
0x4E4529: mov     edi, eax
0x4E452B: test    edi, edi
0x4E452D: jz      loc_4E4605
0x4E4533: mov     eax, [ebp+0]
0x4E4536: mov     edx, [eax+278h]
0x4E453C: mov     ecx, ebp
0x4E453E: call    edx
0x4E4540: test    al, al
0x4E4542: jnz     short loc_4E457E
0x4E4544: fld     dword ptr [edi+30h]
0x4E4547: sub     esp, 8
0x4E454A: fstp    [esp+70h+Src]
0x4E454E: mov     ecx, esi; this
0x4E4550: fld     [esp+70h+Src]
0x4E4554: fstp    dword ptr [edi+48h]
0x4E4557: fld     dword ptr [edi+30h]
0x4E455A: fstp    [esp+70h+Src]
0x4E455E: fld     [esp+70h+Src]
0x4E4562: fstp    [esp+70h+var_6C]; float
0x4E4566: fldz
0x4E4568: fstp    [esp+70h+a2]; float
0x4E456B: push    ebp; int
0x4E456C: call    sub_476D10
0x4E4571: push    ebp; a2
0x4E4572: mov     ecx, esi; this
0x4E4574: call    sub_474510
0x4E4579: jmp     loc_4E4605
0x4E457E: mov     edi, [edi+68h]
0x4E4581: push    1; ArgList
0x4E4583: mov     ecx, edi
0x4E4585: call    sub_51AE20
0x4E458A: sub     esp, 8
0x4E458D: fstp    [esp+70h+var_6C]; float
0x4E4591: mov     ecx, esi; this
0x4E4593: fldz
0x4E4595: fstp    [esp+70h+a2]; float
0x4E4598: push    ebp; int
0x4E4599: call    sub_476D10
0x4E459E: push    ebp; a2
0x4E459F: mov     ecx, esi; this
0x4E45A1: call    sub_474510
0x4E45A6: fld     dword ptr [ebp+28h]
0x4E45A9: push    ecx
0x4E45AA: lea     ecx, [esp+6Ch+var_30]
0x4E45AE: fstp    [esp+6Ch+var_6C]; float
0x4E45B1: call    NiMatrix33_InitRotationTransform
0x4E45B6: fldz
0x4E45B8: fst     [esp+68h+Src]
0x4E45BC: lea     eax, [esp+68h+Src]
0x4E45C0: fld1
0x4E45C2: push    eax
0x4E45C3: lea     ecx, [esp+6Ch+var_3C]
0x4E45C7: fstp    [esp+6Ch+var_44]
0x4E45CB: push    ecx
0x4E45CC: lea     ecx, [esp+70h+var_30]
0x4E45D0: fstp    [esp+70h+var_40]
0x4E45D4: call    sub_7101F0
0x4E45D9: mov     edx, [eax]
0x4E45DB: fldz
0x4E45DD: mov     [esp+68h+Src], edx
0x4E45E1: mov     ecx, [eax+4]
0x4E45E4: push    0; int
0x4E45E6: push    ecx
0x4E45E7: fstp    [esp+70h+a2]; float
0x4E45EA: mov     [esp+70h+var_44], ecx
0x4E45EE: mov     edx, [eax+8]
0x4E45F1: push    1; int
0x4E45F3: lea     eax, [esp+74h+Src]
0x4E45F7: push    eax; int
0x4E45F8: push    ebx; int
0x4E45F9: mov     [esp+7Ch+var_40], edx
0x4E45FD: call    sub_8AB440
0x4E4602: add     esp, 14h
0x4E4605: mov     edx, [ebp+0]
0x4E4608: mov     eax, [edx+198h]
0x4E460E: push    0
0x4E4610: mov     ecx, ebp
0x4E4612: call    eax
0x4E4614: test    al, al
0x4E4616: jnz     short loc_4E4629
0x4E4618: mov     edx, [ebp+0]
0x4E461B: mov     eax, [edx+19Ch]
0x4E4621: mov     ecx, ebp
0x4E4623: call    eax
0x4E4625: test    al, al
0x4E4627: jz      short loc_4E4632
0x4E4629: push    0
0x4E462B: mov     ecx, ebp
0x4E462D: call    sub_4DE100
0x4E4632: mov     esi, [esp+68h+var_54]
0x4E4636: push    ebp
0x4E4637: mov     ecx, esi
0x4E4639: call    ExtraDataList_RestoreSavedAnimationData
0x4E463E: xor     edi, edi
0x4E4640: cmp     ebx, edi
0x4E4642: mov     [esp+68h+var_4], 0FFFFFFFFh
0x4E464A: jz      short loc_4E4664
0x4E464C: lea     ecx, [ebx+4]
0x4E464F: push    ecx; lpAddend
0x4E4650: call    dword ptr ds:0A2807Ch
0x4E4656: test    eax, eax
0x4E4658: jnz     short loc_4E4664
0x4E465A: mov     edx, [ebx]
0x4E465C: mov     eax, [edx]
0x4E465E: push    1
0x4E4660: mov     ecx, ebx
0x4E4662: call    eax
0x4E4664: mov     eax, ebx
0x4E4666: mov     ecx, [esp+68h+var_C]
0x4E466A: mov     large fs:0, ecx
0x4E4671: pop     ecx
0x4E4672: pop     edi
0x4E4673: pop     esi
0x4E4674: pop     ebp
0x4E4675: pop     ebx
0x4E4676: add     esp, 54h
0x4E4679: retn
0x4E467A: xor     eax, eax
0x4E467C: mov     ecx, [esp+68h+var_C]
0x4E4680: mov     large fs:0, ecx
0x4E4687: pop     ecx
0x4E4688: pop     edi
0x4E4689: pop     esi
0x4E468A: pop     ebp
0x4E468B: pop     ebx
0x4E468C: add     esp, 54h
0x4E468F: retn
