0x4AF040: push    0FFFFFFFFh
0x4AF042: push    offset ??0TESGrass@@QAE@XZ_SEH
0x4AF047: mov     eax, large fs:0
0x4AF04D: push    eax
0x4AF04E: push    ecx
0x4AF04F: push    ebx
0x4AF050: push    esi
0x4AF051: push    edi
0x4AF052: mov     eax, ds:0B30AACh
0x4AF057: xor     eax, esp
0x4AF059: push    eax
0x4AF05A: lea     eax, [esp+20h+var_C]
0x4AF05E: mov     large fs:0, eax
0x4AF064: mov     esi, ecx
0x4AF066: mov     [esp+20h+var_10], esi
0x4AF06A: call    TESBoundObject_constr
0x4AF06F: lea     edi, [esi+24h]
0x4AF072: xor     ebx, ebx
0x4AF074: mov     ecx, edi; this
0x4AF076: mov     [esp+20h+var_4], ebx
0x4AF07A: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4AF07F: fld     dword ptr ds:0A427E4h
0x4AF085: fstp    dword ptr [esi+48h]
0x4AF088: mov     ecx, esi; this
0x4AF08A: fld     dword ptr ds:0A3D9A4h
0x4AF090: mov     byte ptr [esp+20h+var_4], 1
0x4AF095: fstp    dword ptr [esi+4Ch]
0x4AF098: mov     dword ptr [esi], offset ??_7TESGrass@@6BTESGrass@@@; const TESGrass::`vftable'{for `TESGrass'}
0x4AF09E: fld     dword ptr ds:0A3D65Ch
0x4AF0A4: mov     dword ptr [edi], offset ??_7TESGrass@@6BTESModel@@@; const TESGrass::`vftable'{for `TESModel'}
0x4AF0AA: fstp    dword ptr [esi+50h]
0x4AF0AD: mov     byte ptr [esi+4], 1Dh
0x4AF0B1: fld     dword ptr ds:0A31C80h
0x4AF0B7: mov     byte ptr [esi+3Ch], 1Eh
0x4AF0BB: fstp    dword ptr [esi+54h]
0x4AF0BE: mov     [esi+3Dh], bl
0x4AF0C1: mov     byte ptr [esi+3Eh], 5Ah ; 'Z'
0x4AF0C5: mov     [esi+40h], bx
0x4AF0C9: mov     [esi+44h], ebx
0x4AF0CC: mov     [esi+58h], bl
0x4AF0CF: call    j_TESForm_InitializeComponents
0x4AF0D4: mov     eax, esi
0x4AF0D6: mov     ecx, [esp+20h+var_C]
0x4AF0DA: mov     large fs:0, ecx
0x4AF0E1: pop     ecx
0x4AF0E2: pop     edi
0x4AF0E3: pop     esi
0x4AF0E4: pop     ebx
0x4AF0E5: add     esp, 10h
0x4AF0E8: retn
