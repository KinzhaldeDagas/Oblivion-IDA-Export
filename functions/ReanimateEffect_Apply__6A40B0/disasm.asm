0x6A40B0: push    0FFFFFFFFh
0x6A40B2: push    offset ReanimateEffect_Apply_SEH
0x6A40B7: mov     eax, large fs:0
0x6A40BD: push    eax
0x6A40BE: sub     esp, 8
0x6A40C1: push    ebx
0x6A40C2: push    esi
0x6A40C3: push    edi; int
0x6A40C4: mov     eax, ds:0B30AACh
0x6A40C9: xor     eax, esp
0x6A40CB: push    eax; ArgList
0x6A40CC: lea     eax, [esp+24h+var_C]
0x6A40D0: mov     large fs:0, eax
0x6A40D6: mov     ebx, ecx
0x6A40D8: mov     eax, [ebx+24h]
0x6A40DB: test    eax, eax
0x6A40DD: jnz     short loc_6A40E6
0x6A40DF: push    1
0x6A40E1: jmp     loc_6A434E
0x6A40E6: mov     ecx, [ebx+20h]; this
0x6A40E9: test    ecx, ecx
0x6A40EB: jz      loc_6A434A
0x6A40F1: call    MagicTarget_GetParentActor
0x6A40F6: mov     esi, eax
0x6A40F8: test    esi, esi
0x6A40FA: jz      loc_6A434A
0x6A4100: mov     eax, [esi]
0x6A4102: mov     edx, [eax+198h]
0x6A4108: push    0
0x6A410A: mov     ecx, esi
0x6A410C: call    edx
0x6A410E: test    al, al
0x6A4110: jz      loc_6A434A
0x6A4116: mov     eax, [esi]
0x6A4118: mov     edx, [eax+9Ch]
0x6A411E: push    0
0x6A4120: mov     ecx, esi
0x6A4122: call    edx
0x6A4124: push    4; newDeadState
0x6A4126: mov     ecx, esi; this
0x6A4128: call    Actor_HandleDeathSTate????
0x6A412D: mov     eax, [esi]
0x6A412F: mov     edx, [eax+334h]
0x6A4135: push    1
0x6A4137: mov     ecx, esi
0x6A4139: call    edx
0x6A413B: test    al, al
0x6A413D: jz      short loc_6A414D
0x6A413F: mov     eax, [esi]
0x6A4141: mov     edx, [eax+340h]
0x6A4147: push    0
0x6A4149: mov     ecx, esi
0x6A414B: call    edx
0x6A414D: mov     edi, [esi+58h]
0x6A4150: mov     eax, [edi]
0x6A4152: mov     edx, [eax+8]
0x6A4155: mov     ecx, edi
0x6A4157: call    edx
0x6A4159: test    eax, eax
0x6A415B: jnz     short loc_6A4164
0x6A415D: mov     byte ptr [edi+2A9h], 1
0x6A4164: push    1
0x6A4166: mov     ecx, esi
0x6A4168: call    sub_5E8EC0
0x6A416D: mov     ecx, [ebx+24h]
0x6A4170: mov     eax, [ecx]
0x6A4172: mov     edx, [eax+20h]
0x6A4175: mov     edi, [esi]
0x6A4177: call    edx
0x6A4179: push    eax; a4
0x6A417A: mov     eax, [edi+1E4h]
0x6A4180: mov     ecx, esi
0x6A4182: call    eax
0x6A4184: mov     edx, [esi]
0x6A4186: mov     eax, [edx+154h]
0x6A418C: mov     ecx, esi
0x6A418E: call    eax
0x6A4190: test    eax, eax
0x6A4192: jz      short loc_6A41C5
0x6A4194: mov     edx, [esi]
0x6A4196: mov     eax, [edx+154h]
0x6A419C: mov     ecx, esi
0x6A419E: call    eax
0x6A41A0: mov     edx, [eax+88h]
0x6A41A6: add     eax, 88h ; 'ˆ'
0x6A41AB: sub     esp, 0Ch
0x6A41AE: mov     ecx, esp
0x6A41B0: mov     [ecx], edx
0x6A41B2: mov     edx, [eax+4]
0x6A41B5: mov     eax, [eax+8]
0x6A41B8: mov     [ecx+4], edx
0x6A41BB: mov     [ecx+8], eax
0x6A41BE: mov     ecx, esi; this
0x6A41C0: call    TESObjectREFR_SetPosition
0x6A41C5: mov     edx, [esi]
0x6A41C7: mov     eax, [edx+148h]
0x6A41CD: mov     ecx, esi
0x6A41CF: call    eax
0x6A41D1: mov     ecx, [esi+58h]
0x6A41D4: mov     edx, [ecx]
0x6A41D6: mov     eax, [edx+484h]
0x6A41DC: push    0
0x6A41DE: call    eax
0x6A41E0: push    0
0x6A41E2: mov     ecx, esi
0x6A41E4: call    sub_5E6D70
0x6A41E9: mov     edi, [esi]
0x6A41EB: push    8
0x6A41ED: mov     ecx, esi
0x6A41EF: call    Actor_GetBaseCalcAVi
0x6A41F4: mov     edx, [esi]
0x6A41F6: mov     dword ptr [esp+24h+var_14], eax
0x6A41FA: fild    dword ptr [esp+24h+var_14]
0x6A41FE: mov     eax, [edx+288h]
0x6A4204: push    0
0x6A4206: push    8
0x6A4208: fstp    [esp+2Ch+var_14]
0x6A420C: mov     ecx, esi
0x6A420E: call    eax
0x6A4210: fsubr   [esp+24h+var_14+4]
0x6A4214: mov     edx, [edi+2A4h]
0x6A421A: push    ecx
0x6A421B: fstp    dword ptr [esp+28h+var_14+4]
0x6A421F: mov     ecx, esi
0x6A4221: fld     dword ptr [esp+28h+var_14+4]
0x6A4225: fstp    [esp+28h+var_28]
0x6A4228: push    8
0x6A422A: call    edx
0x6A422C: mov     eax, [esi]
0x6A422E: mov     edx, [eax+154h]
0x6A4234: mov     ecx, esi
0x6A4236: call    edx
0x6A4238: test    eax, eax
0x6A423A: jz      short loc_6A4257
0x6A423C: mov     ecx, esi; int
0x6A423E: call    sub_4E3490
0x6A4243: mov     eax, [esi]
0x6A4245: mov     edx, [eax+154h]
0x6A424B: mov     ecx, esi
0x6A424D: call    edx
0x6A424F: push    eax
0x6A4250: mov     ecx, esi
0x6A4252: call    sub_5EA1A0
0x6A4257: push    3Ch ; '<'; Size
0x6A4259: call    FormHeapAlloc
0x6A425E: add     esp, 4
0x6A4261: mov     dword ptr [esp+24h+var_14], eax
0x6A4265: test    eax, eax
0x6A4267: mov     [esp+24h+var_4], 0
0x6A426F: jz      short loc_6A427C
0x6A4271: mov     ecx, eax; this
0x6A4273: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6A4278: mov     edi, eax
0x6A427A: jmp     short loc_6A427E
0x6A427C: xor     edi, edi
0x6A427E: push    18h
0x6A4280: mov     ecx, edi
0x6A4282: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6A428A: call    TESPackage_SetType?
0x6A428F: or      dword ptr [edi+1Ch], 1006h
0x6A4296: push    1; a4
0x6A4298: push    1; a3
0x6A429A: push    edi; a2
0x6A429B: mov     ecx, esi; this
0x6A429D: mov     dword ptr [edi+18h], 19h
0x6A42A4: call    Actor_AddPackage?
0x6A42A9: mov     eax, [esi]
0x6A42AB: mov     edx, [eax+154h]
0x6A42B1: mov     ecx, esi
0x6A42B3: call    edx
0x6A42B5: mov     esi, eax
0x6A42B7: test    esi, esi
0x6A42B9: jz      loc_6A4353
0x6A42BF: push    0; a4
0x6A42C1: push    1; a3
0x6A42C3: push    1; a2
0x6A42C5: push    esi; a1
0x6A42C6: call    sub_88D070
0x6A42CB: mov     eax, [esi]
0x6A42CD: mov     edx, [eax+58h]
0x6A42D0: add     esp, 10h
0x6A42D3: push    offset aBip01Spine2; "Bip01 Spine2"
0x6A42D8: mov     ecx, esi
0x6A42DA: call    edx
0x6A42DC: test    eax, eax
0x6A42DE: jz      short loc_6A432A
0x6A42E0: push    eax
0x6A42E1: call    sub_47FAC0
0x6A42E6: add     esp, 4
0x6A42E9: test    eax, eax
0x6A42EB: jz      short loc_6A4353
0x6A42ED: mov     ecx, [eax+10h]
0x6A42F0: mov     [ebx+38h], ecx
0x6A42F3: mov     eax, [ecx]
0x6A42F5: mov     edx, [eax+9Ch]
0x6A42FB: push    6
0x6A42FD: call    edx
0x6A42FF: mov     ecx, [ebx+38h]
0x6A4302: lea     eax, [ebx+44h]
0x6A4305: push    eax
0x6A4306: call    sub_4D6900
0x6A430B: lea     ecx, [ebx+50h]
0x6A430E: push    ecx
0x6A430F: mov     ecx, [ebx+38h]
0x6A4312: call    sub_4D6950
0x6A4317: mov     ecx, [esp+24h+var_C]
0x6A431B: mov     large fs:0, ecx
0x6A4322: pop     ecx
0x6A4323: pop     edi
0x6A4324: pop     esi
0x6A4325: pop     ebx
0x6A4326: add     esp, 14h
0x6A4329: retn
0x6A432A: push    offset aNoBip01Spine2B; "No Bip01 Spine2 bone for reanimation. N"...
0x6A432F: call    PrintError
0x6A4334: add     esp, 4
0x6A4337: mov     ecx, [esp+24h+var_C]
0x6A433B: mov     large fs:0, ecx
0x6A4342: pop     ecx
0x6A4343: pop     edi
0x6A4344: pop     esi
0x6A4345: pop     ebx
0x6A4346: add     esp, 14h
0x6A4349: retn
0x6A434A: push    0
0x6A434C: mov     ecx, ebx
0x6A434E: call    ActiveEffect_Base_Remove
0x6A4353: mov     ecx, [esp+24h+var_C]
0x6A4357: mov     large fs:0, ecx
0x6A435E: pop     ecx
0x6A435F: pop     edi
0x6A4360: pop     esi
0x6A4361: pop     ebx
0x6A4362: add     esp, 14h
0x6A4365: retn
