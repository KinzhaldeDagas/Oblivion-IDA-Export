0x69F360: push    0FFFFFFFFh
0x69F362: push    offset SEH_69F360
0x69F367: mov     eax, large fs:0
0x69F36D: push    eax
0x69F36E: push    ecx
0x69F36F: push    esi
0x69F370: push    edi
0x69F371: mov     eax, ds:0B30AACh
0x69F376: xor     eax, esp
0x69F378: push    eax
0x69F379: lea     eax, [esp+1Ch+var_C]
0x69F37D: mov     large fs:0, eax
0x69F383: mov     esi, ecx
0x69F385: mov     [esp+1Ch+var_10], esi
0x69F389: call    MobilObject_constr
0x69F38E: fldz
0x69F390: mov     ecx, [esp+1Ch+arg_8]
0x69F394: fstp    dword ptr [esi+64h]
0x69F397: mov     eax, [esp+1Ch+arg_4]
0x69F39B: mov     edx, [esp+1Ch+arg_C]
0x69F39F: mov     edi, [esp+1Ch+arg_0]
0x69F3A3: mov     [esi+70h], ecx
0x69F3A6: mov     ecx, offset ActorProcessManager_ptr
0x69F3AB: mov     [esp+1Ch+var_4], 0
0x69F3B3: mov     dword ptr [esi], offset ??_7MagicProjectile@@6BMagicProjectile@@@; const MagicProjectile::`vftable'{for `MagicProjectile'}
0x69F3B9: mov     dword ptr [esi+18h], offset ??_7MagicProjectile@@6BTESChildCell@@@; const MagicProjectile::`vftable'{for `TESChildCell'}
0x69F3C0: mov     [esi+68h], edi
0x69F3C3: mov     [esi+6Ch], eax
0x69F3C6: mov     [esi+74h], edx
0x69F3C9: call    sub_673B00
0x69F3CE: fstp    dword ptr [esi+78h]
0x69F3D1: fldz
0x69F3D3: push    2ECh; a4
0x69F3D8: fst     dword ptr [esi+5Ch]
0x69F3DB: fstp    dword ptr [esi+60h]
0x69F3DE: call    FormHeapAlloc
0x69F3E3: add     esp, 4
0x69F3E6: mov     [esp+1Ch+arg_0], eax
0x69F3EA: test    eax, eax
0x69F3EC: mov     byte ptr [esp+1Ch+var_4], 1
0x69F3F1: jz      short loc_69F3FC
0x69F3F3: mov     ecx, eax; this
0x69F3F5: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x69F3FA: jmp     short loc_69F3FE
0x69F3FC: xor     eax, eax
0x69F3FE: mov     ecx, [esp+1Ch+arg_10]
0x69F402: mov     edx, [esp+1Ch+arg_14]
0x69F406: sub     esp, 0Ch
0x69F409: mov     [esi+58h], eax
0x69F40C: mov     eax, esp
0x69F40E: mov     [eax], ecx
0x69F410: mov     ecx, [esp+28h+arg_18]
0x69F414: mov     [eax+4], edx
0x69F417: mov     [eax+8], ecx
0x69F41A: mov     ecx, esi; this
0x69F41C: mov     byte ptr [esp+28h+var_4], 0
0x69F421: call    TESObjectREFR_SetPosition
0x69F426: mov     edx, [esp+1Ch+arg_1C]
0x69F42A: mov     ecx, [esp+1Ch+arg_20]
0x69F42E: sub     esp, 0Ch
0x69F431: mov     eax, esp
0x69F433: mov     [eax], edx
0x69F435: mov     edx, [esp+28h+arg_24]
0x69F439: mov     [eax+4], ecx
0x69F43C: mov     ecx, esi
0x69F43E: mov     [eax+8], edx
0x69F441: call    sub_4D89A0
0x69F446: mov     eax, [edi]
0x69F448: mov     edx, [eax+20h]
0x69F44B: mov     ecx, edi
0x69F44D: call    edx
0x69F44F: test    eax, eax
0x69F451: jz      short loc_69F462
0x69F453: mov     ecx, eax; this
0x69F455: call    TESObjectREFR_GetParentCell
0x69F45A: push    eax
0x69F45B: mov     ecx, esi
0x69F45D: call    MobileObject_ChangeCell
0x69F462: mov     ecx, esi
0x69F464: call    sub_69F100
0x69F469: push    eax; a2
0x69F46A: mov     ecx, esi; this
0x69F46C: call    TESObjectREFR_SetBaseForm
0x69F471: mov     eax, esi
0x69F473: mov     ecx, [esp+1Ch+var_C]
0x69F477: mov     large fs:0, ecx
0x69F47E: pop     ecx
0x69F47F: pop     edi
0x69F480: pop     esi
0x69F481: add     esp, 10h
0x69F484: retn    28h ; '('
