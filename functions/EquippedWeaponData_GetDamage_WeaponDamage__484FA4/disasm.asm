0x484FA4: mov     eax, [esi]
0x484FA6: mov     edx, [eax+288h]
0x484FAC: push    7
0x484FAE: mov     ecx, esi
0x484FB0: call    edx
0x484FB2: fstp    dword ptr [esp+arg_C+4]
0x484FB6: mov     ecx, esi; this
0x484FB8: call    Actor_GetFatigueFraction
0x484FBD: fstp    dword ptr [esp+arg_C]
0x484FC1: mov     edi, [ebx+8]
0x484FC4: cmp     byte ptr [edi+90h], 5
0x484FCB: mov     eax, [esi]
0x484FCD: mov     edx, [eax+288h]
0x484FD3: mov     ecx, esi
0x484FD5: jnz     short loc_484FDB
0x484FD7: push    3
0x484FD9: jmp     short loc_484FDD
0x484FDB: push    0
0x484FDD: call    edx
0x484FDF: fstp    [esp+4+arg_20]
0x484FE3: push    ebp
0x484FE4: mov     ebp, [esi]
0x484FE6: mov     ecx, edi
0x484FE8: call    TESObjectWEAP_GetWeaponSkillAV
0x484FED: push    eax
0x484FEE: mov     eax, [ebp+288h]
0x484FF4: mov     ecx, esi
0x484FF6: call    eax
0x484FF8: fstp    [esp+4+arg_14]
0x484FFC: mov     edx, [edi+88h]
0x485002: mov     eax, [edx+10h]
0x485005: lea     ecx, [edi+88h]
0x48500B: call    eax
0x48500D: push    0
0x48500F: mov     ecx, ebx
0x485011: movzx   ebp, ax
0x485014: call    ContainerEntryExtraData_GetHealth
0x485019: push    edi
0x48501A: fstp    qword ptr [esp+8+arg_18]
0x48501E: call    TESHealthForm_GetHealthForForm
0x485023: add     esp, 4
0x485026: test    eax, eax
0x485028: mov     [esp+4+arg_8], eax
0x48502C: fild    [esp+4+arg_8]
0x485030: jge     short loc_485038
0x485032: fadd    dword ptr ds:0A2FC78h
0x485038: fdivr   qword ptr [esp+4+arg_18]
0x48503C: push    0; float
0x48503E: sub     esp, 8
0x485041: fstp    [esp+10h+arg_8]
0x485045: fld     [esp+10h+arg_28]
0x485049: fstp    [esp+10h+var_C]; float
0x48504D: fld     [esp+10h+arg_8]
0x485051: fstp    [esp+10h+var_10]; float
0x485054: fld     dword ptr [esp+10h+arg_C]
0x485058: push    ebp; int
0x485059: push    ecx
0x48505A: fstp    [esp+18h+var_18]; float
0x48505D: fld     [esp+18h+arg_24]
0x485061: call    Double_To_SInt32
0x485066: fld     dword ptr [esp+18h+arg_C+4]
0x48506A: push    eax; int
0x48506B: call    Double_To_SInt32
0x485070: fld     [esp+1Ch+arg_14]
0x485074: push    eax; int
0x485075: call    Double_To_SInt32
0x48507A: push    eax; int
0x48507B: call    Calc_WeaponDamage
0x485080: add     esp, 20h
0x485083: pop     ebp
0x485084: jmp     EquippedWeaponData_GetDamage___AddAttackBonus_
