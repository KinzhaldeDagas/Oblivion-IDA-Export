0x68B440: push    0FFFFFFFFh
0x68B442: push    offset SEH_68B440
0x68B447: mov     eax, large fs:0
0x68B44D: push    eax
0x68B44E: sub     esp, 2Ch
0x68B451: push    esi
0x68B452: push    edi
0x68B453: mov     eax, ds:0B30AACh
0x68B458: xor     eax, esp
0x68B45A: push    eax
0x68B45B: lea     eax, [esp+44h+var_C]
0x68B45F: mov     large fs:0, eax
0x68B465: lea     edi, [ecx+14h]
0x68B468: mov     ecx, edi
0x68B46A: call    sub_68C6E0
0x68B46F: mov     esi, [esp+44h+arg_0]
0x68B473: mov     ecx, esi; this
0x68B475: call    TESObjectREFR_GetParentCell
0x68B47A: test    eax, eax
0x68B47C: jz      short loc_68B4CE
0x68B47E: lea     ecx, [esp+44h+var_38]
0x68B482: call    sub_67D760
0x68B487: mov     eax, [esp+44h+arg_4]
0x68B48B: mov     edx, [esi]
0x68B48D: push    0; float
0x68B48F: push    esi; int
0x68B490: push    eax; int
0x68B491: mov     eax, [edx+174h]
0x68B497: mov     ecx, esi
0x68B499: mov     [esp+50h+var_4], 0
0x68B4A1: mov     [esp+50h+var_20], 1
0x68B4A6: call    eax
0x68B4A8: push    eax; int
0x68B4A9: lea     ecx, [esp+54h+var_38]
0x68B4AD: call    sub_67EB60
0x68B4B2: push    esi
0x68B4B3: push    edi
0x68B4B4: lea     ecx, [esp+4Ch+var_38]
0x68B4B8: call    sub_67E3D0
0x68B4BD: lea     ecx, [esp+44h+var_38]; void *
0x68B4C1: mov     [esp+44h+var_4], 0FFFFFFFFh
0x68B4C9: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68B4CE: mov     ecx, [esp+44h+var_C]
0x68B4D2: mov     large fs:0, ecx
0x68B4D9: pop     ecx
0x68B4DA: pop     edi
0x68B4DB: pop     esi
0x68B4DC: add     esp, 38h
0x68B4DF: retn    0Ch
