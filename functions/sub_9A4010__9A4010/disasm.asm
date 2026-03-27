0x9A4010: push    esi
0x9A4011: mov     esi, ecx
0x9A4013: mov     ecx, [esp+4+arg_8]
0x9A4017: test    ecx, ecx
0x9A4019: jnz     short loc_9A4024
0x9A401B: mov     eax, 1
0x9A4020: pop     esi
0x9A4021: retn    20h ; ' '
0x9A4024: push    edi
0x9A4025: mov     edi, [esp+8+arg_4]
0x9A4029: mov     eax, [edi+0Ch]
0x9A402C: push    eax
0x9A402D: call    NiObjectNET_GetExtraData
0x9A4032: test    eax, eax
0x9A4034: jnz     short loc_9A4040
0x9A4036: pop     edi
0x9A4037: mov     eax, 80000010h
0x9A403C: pop     esi
0x9A403D: retn    20h ; ' '
0x9A4040: push    ebx
0x9A4041: push    eax
0x9A4042: push    edi
0x9A4043: mov     ecx, esi
0x9A4045: call    sub_9A9040
0x9A404A: cmp     byte_B4295B, 0
0x9A4051: mov     ebx, [edi+14h]
0x9A4054: mov     esi, eax
0x9A4056: jnz     short loc_9A405D
0x9A4058: call    sub_783C70
0x9A405D: and     ebx, 0FFh
0x9A4063: mov     eax, 3
0x9A4068: cmp     dword_B428D8[ebx*4], eax
0x9A406F: jnz     short loc_9A4092
0x9A4071: mov     ecx, [esi]
0x9A4073: fild    dword ptr [esi]
0x9A4075: test    ecx, ecx
0x9A4077: jge     short loc_9A407F
0x9A4079: fadd    ds:flt_A2FC78
0x9A407F: mov     edx, [esp+0Ch+arg_0]
0x9A4083: pop     ebx
0x9A4084: shl     edx, 4
0x9A4087: pop     edi
0x9A4088: fstp    dword ptr [edx+0BAAA70h]
0x9A408E: pop     esi
0x9A408F: retn    20h ; ' '
0x9A4092: cmp     byte_B4295B, 0
0x9A4099: mov     ebx, [edi+14h]
0x9A409C: jnz     short loc_9A40A3
0x9A409E: call    sub_783C70
0x9A40A3: and     ebx, 0FFh
0x9A40A9: mov     eax, 4
0x9A40AE: cmp     dword_B428D8[ebx*4], eax
0x9A40B5: jnz     short loc_9A40CC
0x9A40B7: mov     ecx, [esp+0Ch+arg_0]
0x9A40BB: fld     dword ptr [esi]
0x9A40BD: pop     ebx
0x9A40BE: shl     ecx, 4
0x9A40C1: pop     edi
0x9A40C2: fstp    dword ptr [ecx+0BAAA70h]
0x9A40C8: pop     esi
0x9A40C9: retn    20h ; ' '
0x9A40CC: mov     ecx, edi
0x9A40CE: call    sub_783340
0x9A40D3: test    al, al
0x9A40D5: jz      short loc_9A40FA
0x9A40D7: mov     eax, [esp+0Ch+arg_0]
0x9A40DB: fld     dword ptr [esi]
0x9A40DD: shl     eax, 4
0x9A40E0: fstp    dword ptr [eax+0BAAA70h]
0x9A40E6: pop     ebx
0x9A40E7: fld     dword ptr [esi+4]
0x9A40EA: pop     edi
0x9A40EB: fstp    dword ptr [eax+0BAAA74h]
0x9A40F1: mov     eax, 5
0x9A40F6: pop     esi
0x9A40F7: retn    20h ; ' '
0x9A40FA: mov     ecx, edi
0x9A40FC: call    sub_783370
0x9A4101: test    al, al
0x9A4103: jz      short loc_9A4131
0x9A4105: fld     dword ptr [esi]
0x9A4107: mov     eax, [esp+0Ch+arg_0]
0x9A410B: shl     eax, 4
0x9A410E: fstp    dword ptr [eax+0BAAA70h]
0x9A4114: pop     ebx
0x9A4115: fld     dword ptr [esi+4]
0x9A4118: pop     edi
0x9A4119: fstp    dword ptr [eax+0BAAA74h]
0x9A411F: fld     dword ptr [esi+8]
0x9A4122: pop     esi
0x9A4123: fstp    dword ptr [eax+0BAAA78h]
0x9A4129: mov     eax, 6
0x9A412E: retn    20h ; ' '
0x9A4131: mov     ecx, edi
0x9A4133: call    sub_7833A0
0x9A4138: test    al, al
0x9A413A: jz      short loc_9A4171
0x9A413C: fld     dword ptr [esi]
0x9A413E: mov     eax, [esp+0Ch+arg_0]
0x9A4142: shl     eax, 4
0x9A4145: fstp    dword ptr [eax+0BAAA70h]
0x9A414B: pop     ebx
0x9A414C: fld     dword ptr [esi+4]
0x9A414F: pop     edi
0x9A4150: fstp    dword ptr [eax+0BAAA74h]
0x9A4156: fld     dword ptr [esi+8]
0x9A4159: fstp    dword ptr [eax+0BAAA78h]
0x9A415F: fld     dword ptr [esi+0Ch]
0x9A4162: pop     esi
0x9A4163: fstp    dword ptr [eax+0BAAA7Ch]
0x9A4169: mov     eax, 7
0x9A416E: retn    20h ; ' '
0x9A4171: mov     ecx, edi
0x9A4173: call    sub_782DE0
0x9A4178: test    al, al
0x9A417A: jz      loc_9A4210
0x9A4180: fld     dword ptr [esi]
0x9A4182: mov     eax, [esp+0Ch+arg_0]
0x9A4186: shl     eax, 6
0x9A4189: fstp    dword ptr [eax+0BAA9E0h]
0x9A418F: pop     ebx
0x9A4190: fld     dword ptr [esi+4]
0x9A4193: pop     edi
0x9A4194: fstp    dword ptr [eax+0BAA9E4h]
0x9A419A: fld     dword ptr [esi+8]
0x9A419D: fstp    dword ptr [eax+0BAA9E8h]
0x9A41A3: fldz
0x9A41A5: fst     dword ptr [eax+0BAA9ECh]
0x9A41AB: fld     dword ptr [esi+0Ch]
0x9A41AE: fstp    dword ptr [eax+0BAA9F0h]
0x9A41B4: fld     dword ptr [esi+10h]
0x9A41B7: fstp    dword ptr [eax+0BAA9F4h]
0x9A41BD: fld     dword ptr [esi+14h]
0x9A41C0: fstp    dword ptr [eax+0BAA9F8h]
0x9A41C6: fst     dword ptr [eax+0BAA9FCh]
0x9A41CC: fld     dword ptr [esi+18h]
0x9A41CF: fstp    dword ptr [eax+0BAAA00h]
0x9A41D5: fld     dword ptr [esi+1Ch]
0x9A41D8: fstp    dword ptr [eax+0BAAA04h]
0x9A41DE: fld     dword ptr [esi+20h]
0x9A41E1: pop     esi
0x9A41E2: fstp    dword ptr [eax+0BAAA08h]
0x9A41E8: fst     dword ptr [eax+0BAAA0Ch]
0x9A41EE: fst     dword ptr [eax+0BAAA10h]
0x9A41F4: fst     dword ptr [eax+0BAAA14h]
0x9A41FA: fstp    dword ptr [eax+0BAAA18h]
0x9A4200: fld1
0x9A4202: fstp    dword ptr [eax+0BAAA1Ch]
0x9A4208: mov     eax, 8
0x9A420D: retn    20h ; ' '
0x9A4210: mov     ecx, edi
0x9A4212: call    sub_782E10
0x9A4217: test    al, al
0x9A4219: jz      loc_9A42C0
0x9A421F: fld     dword ptr [esi]
0x9A4221: mov     eax, [esp+0Ch+arg_0]
0x9A4225: shl     eax, 6
0x9A4228: fstp    dword ptr [eax+0BAA9E0h]
0x9A422E: pop     ebx
0x9A422F: fld     dword ptr [esi+4]
0x9A4232: pop     edi
0x9A4233: fstp    dword ptr [eax+0BAA9E4h]
0x9A4239: fld     dword ptr [esi+8]
0x9A423C: fstp    dword ptr [eax+0BAA9E8h]
0x9A4242: fld     dword ptr [esi+0Ch]
0x9A4245: fstp    dword ptr [eax+0BAA9ECh]
0x9A424B: fld     dword ptr [esi+10h]
0x9A424E: fstp    dword ptr [eax+0BAA9F0h]
0x9A4254: fld     dword ptr [esi+14h]
0x9A4257: fstp    dword ptr [eax+0BAA9F4h]
0x9A425D: fld     dword ptr [esi+18h]
0x9A4260: fstp    dword ptr [eax+0BAA9F8h]
0x9A4266: fld     dword ptr [esi+1Ch]
0x9A4269: fstp    dword ptr [eax+0BAA9FCh]
0x9A426F: fld     dword ptr [esi+20h]
0x9A4272: fstp    dword ptr [eax+0BAAA00h]
0x9A4278: fld     dword ptr [esi+24h]
0x9A427B: fstp    dword ptr [eax+0BAAA04h]
0x9A4281: fld     dword ptr [esi+28h]
0x9A4284: fstp    dword ptr [eax+0BAAA08h]
0x9A428A: fld     dword ptr [esi+2Ch]
0x9A428D: fstp    dword ptr [eax+0BAAA0Ch]
0x9A4293: fld     dword ptr [esi+30h]
0x9A4296: fstp    dword ptr [eax+0BAAA10h]
0x9A429C: fld     dword ptr [esi+34h]
0x9A429F: fstp    dword ptr [eax+0BAAA14h]
0x9A42A5: fld     dword ptr [esi+38h]
0x9A42A8: fstp    dword ptr [eax+0BAAA18h]
0x9A42AE: fld     dword ptr [esi+3Ch]
0x9A42B1: pop     esi
0x9A42B2: fstp    dword ptr [eax+0BAAA1Ch]
0x9A42B8: mov     eax, 9
0x9A42BD: retn    20h ; ' '
0x9A42C0: mov     ecx, edi
0x9A42C2: call    sub_7833D0
0x9A42C7: test    al, al
0x9A42C9: jz      short loc_9A4300
0x9A42CB: fld     dword ptr [esi]
0x9A42CD: mov     eax, [esp+0Ch+arg_0]
0x9A42D1: shl     eax, 4
0x9A42D4: fstp    dword ptr [eax+0BAAA70h]
0x9A42DA: pop     ebx
0x9A42DB: fld     dword ptr [esi+4]
0x9A42DE: pop     edi
0x9A42DF: fstp    dword ptr [eax+0BAAA74h]
0x9A42E5: fld     dword ptr [esi+8]
0x9A42E8: fstp    dword ptr [eax+0BAAA78h]
0x9A42EE: fld     dword ptr [esi+0Ch]
0x9A42F1: pop     esi
0x9A42F2: fstp    dword ptr [eax+0BAAA7Ch]
0x9A42F8: mov     eax, 0Ah
0x9A42FD: retn    20h ; ' '
0x9A4300: pop     ebx
0x9A4301: pop     edi
0x9A4302: xor     eax, eax
0x9A4304: pop     esi
0x9A4305: retn    20h ; ' '
