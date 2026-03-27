0x5C3E10: push    0FFFFFFFFh
0x5C3E12: push    offset SEH_5C3E10
0x5C3E17: mov     eax, large fs:0
0x5C3E1D: push    eax
0x5C3E1E: sub     esp, 1Ch
0x5C3E21: push    ebx
0x5C3E22: push    ebp
0x5C3E23: push    esi
0x5C3E24: push    edi
0x5C3E25: mov     eax, ds:0B30AACh
0x5C3E2A: xor     eax, esp
0x5C3E2C: push    eax; ArgList
0x5C3E2D: lea     eax, [esp+3Ch+var_C]
0x5C3E31: mov     large fs:0, eax
0x5C3E37: mov     edi, ecx
0x5C3E39: mov     ecx, ds:0B333C4h
0x5C3E3F: mov     eax, [ecx]
0x5C3E41: mov     edx, [eax+170h]
0x5C3E47: call    edx
0x5C3E49: mov     esi, eax
0x5C3E4B: xor     ebx, ebx
0x5C3E4D: mov     [esp+3Ch+var_20], esi
0x5C3E51: mov     [esp+3Ch+var_28], ebx
0x5C3E55: mov     [esp+3Ch+var_4], ebx
0x5C3E59: mov     [esp+3Ch+var_24], ebx
0x5C3E5D: mov     ecx, ds:0B333C4h
0x5C3E63: mov     eax, [ecx]
0x5C3E65: mov     edx, [eax+130h]
0x5C3E6B: push    ebx
0x5C3E6C: mov     byte ptr [esp+40h+var_4], 1
0x5C3E71: call    edx
0x5C3E73: test    eax, eax
0x5C3E75: jz      loc_5C431D
0x5C3E7B: mov     eax, [esi+0E8h]
0x5C3E81: lea     esi, [eax+0A8h]
0x5C3E87: or      ebp, 0FFFFFFFFh
0x5C3E8A: cmp     esi, ebx
0x5C3E8C: jz      short loc_5C3EC1
0x5C3E8E: mov     edi, edi
0x5C3E90: cmp     ebp, [edi+87Ch]
0x5C3E96: jz      loc_5C3F93
0x5C3E9C: cmp     esi, ebx
0x5C3E9E: jz      short loc_5C3EB2
0x5C3EA0: mov     ecx, [esi]
0x5C3EA2: cmp     ecx, ebx
0x5C3EA4: jz      short loc_5C3EB2
0x5C3EA6: call    sub_51ED80
0x5C3EAB: test    al, al
0x5C3EAD: jz      short loc_5C3EB2
0x5C3EAF: add     ebp, 1
0x5C3EB2: cmp     ebp, [edi+87Ch]
0x5C3EB8: jz      short loc_5C3EBD
0x5C3EBA: mov     esi, [esi+4]
0x5C3EBD: cmp     esi, ebx
0x5C3EBF: jnz     short loc_5C3E90
0x5C3EC1: mov     ebp, [esp+3Ch+var_20]
0x5C3EC5: mov     eax, [ebp+0E8h]
0x5C3ECB: mov     esi, [eax+0A8h]
0x5C3ED1: cmp     esi, ebx
0x5C3ED3: jz      loc_5C431D
0x5C3ED9: mov     eax, [esi+1Ch]
0x5C3EDC: cmp     eax, ebx
0x5C3EDE: jnz     short loc_5C3EE5
0x5C3EE0: mov     eax, offset EmptyString
0x5C3EE5: push    eax
0x5C3EE6: mov     eax, ds:0B38F90h
0x5C3EEB: push    0FB4h
0x5C3EF0: sub     esp, 8
0x5C3EF3: mov     ecx, esp; this
0x5C3EF5: mov     [esp+4Ch+var_18], esp
0x5C3EF9: push    ebx; a3
0x5C3EFA: push    eax; a2
0x5C3EFB: mov     [ecx], ebx
0x5C3EFD: mov     [ecx+4], bx
0x5C3F01: mov     [ecx+6], bx
0x5C3F05: call    BSStringT_Set
0x5C3F0A: mov     eax, ds:0B38F70h
0x5C3F0F: sub     esp, 8
0x5C3F12: mov     ecx, esp; this
0x5C3F14: mov     [esp+54h+var_1C], esp
0x5C3F18: push    ebx; a3
0x5C3F19: push    eax; a2
0x5C3F1A: mov     byte ptr [esp+5Ch+var_4], 3
0x5C3F1F: mov     [ecx], ebx
0x5C3F21: mov     [ecx+4], bx
0x5C3F25: mov     [ecx+6], bx
0x5C3F29: call    BSStringT_Set
0x5C3F2E: mov     ecx, edi
0x5C3F30: mov     byte ptr [esp+54h+var_4], 1
0x5C3F35: call    sub_5C3440
0x5C3F3A: mov     ecx, eax
0x5C3F3C: call    Tile_SetString
0x5C3F41: mov     [ebp+1D0h], esi
0x5C3F47: mov     ecx, ds:0B333C4h
0x5C3F4D: mov     edx, [ecx]
0x5C3F4F: mov     eax, [edx+130h]
0x5C3F55: push    ebx
0x5C3F56: call    eax
0x5C3F58: movzx   eax, word ptr [eax+0B6h]
0x5C3F5F: test    eax, eax
0x5C3F61: mov     [esp+3Ch+var_1C], eax
0x5C3F65: jbe     loc_5C4254
0x5C3F6B: mov     ecx, ds:0B333C4h
0x5C3F71: mov     edx, [ecx]
0x5C3F73: mov     eax, [edx+130h]
0x5C3F79: push    0
0x5C3F7B: call    eax
0x5C3F7D: movzx   ecx, word ptr [eax+0B6h]
0x5C3F84: cmp     ecx, ebx
0x5C3F86: ja      loc_5C401C
0x5C3F8C: xor     ebp, ebp
0x5C3F8E: jmp     loc_5C4025
0x5C3F93: cmp     esi, ebx
0x5C3F95: jz      loc_5C3EC1
0x5C3F9B: mov     esi, [esi]
0x5C3F9D: cmp     esi, ebx
0x5C3F9F: jz      loc_5C431D
0x5C3FA5: mov     eax, [esi+1Ch]
0x5C3FA8: cmp     eax, ebx
0x5C3FAA: jnz     short loc_5C3FB1
0x5C3FAC: mov     eax, offset EmptyString
0x5C3FB1: push    eax
0x5C3FB2: mov     eax, ds:0B38F90h
0x5C3FB7: push    0FB4h
0x5C3FBC: sub     esp, 8
0x5C3FBF: mov     ecx, esp; this
0x5C3FC1: mov     [esp+4Ch+var_1C], esp
0x5C3FC5: push    ebx; a3
0x5C3FC6: push    eax; a2
0x5C3FC7: mov     [ecx], ebx
0x5C3FC9: mov     [ecx+4], bx
0x5C3FCD: mov     [ecx+6], bx
0x5C3FD1: call    BSStringT_Set
0x5C3FD6: mov     eax, ds:0B38F70h
0x5C3FDB: sub     esp, 8
0x5C3FDE: mov     ecx, esp; this
0x5C3FE0: mov     [esp+54h+var_18], esp
0x5C3FE4: push    ebx; a3
0x5C3FE5: push    eax; a2
0x5C3FE6: mov     byte ptr [esp+5Ch+var_4], 2
0x5C3FEB: mov     [ecx], ebx
0x5C3FED: mov     [ecx+4], bx
0x5C3FF1: mov     [ecx+6], bx
0x5C3FF5: call    BSStringT_Set
0x5C3FFA: mov     ecx, edi
0x5C3FFC: mov     byte ptr [esp+54h+var_4], 1
0x5C4001: call    sub_5C3440
0x5C4006: mov     ecx, eax
0x5C4008: call    Tile_SetString
0x5C400D: mov     eax, [esp+3Ch+var_20]
0x5C4011: mov     [eax+1D0h], esi
0x5C4017: jmp     loc_5C3F47
0x5C401C: mov     edx, [eax+0B0h]
0x5C4022: mov     ebp, [edx+ebx*4]
0x5C4025: mov     esi, [ebp+8]
0x5C4028: mov     edi, offset aFacegeneyeleft; "FaceGenEyeLeft"
0x5C402D: mov     ecx, 0Fh
0x5C4032: xor     eax, eax
0x5C4034: repe cmpsb
0x5C4036: jnz     short loc_5C407C
0x5C4038: mov     edx, [ebp+0]
0x5C403B: mov     eax, [edx+10h]
0x5C403E: mov     ecx, ebp
0x5C4040: call    eax
0x5C4042: mov     esi, eax
0x5C4044: mov     eax, [esp+3Ch+var_28]
0x5C4048: cmp     eax, esi
0x5C404A: jz      short loc_5C407C
0x5C404C: test    eax, eax
0x5C404E: jz      short loc_5C406A
0x5C4050: add     eax, 4
0x5C4053: push    eax; lpAddend
0x5C4054: call    dword ptr ds:0A2807Ch
0x5C405A: test    eax, eax
0x5C405C: jnz     short loc_5C406A
0x5C405E: mov     ecx, [esp+3Ch+var_28]
0x5C4062: mov     edx, [ecx]
0x5C4064: mov     eax, [edx]
0x5C4066: push    1
0x5C4068: call    eax
0x5C406A: test    esi, esi
0x5C406C: mov     [esp+3Ch+var_28], esi
0x5C4070: jz      short loc_5C407C
0x5C4072: add     esi, 4
0x5C4075: push    esi; lpAddend
0x5C4076: call    dword ptr ds:0A28078h
0x5C407C: mov     esi, [ebp+8]
0x5C407F: mov     edi, offset aFacegeneyerigh; "FaceGenEyeRight"
0x5C4084: mov     ecx, 10h
0x5C4089: xor     edx, edx
0x5C408B: repe cmpsb
0x5C408D: jnz     short loc_5C40D1
0x5C408F: mov     eax, [ebp+0]
0x5C4092: mov     edx, [eax+10h]
0x5C4095: mov     ecx, ebp
0x5C4097: call    edx
0x5C4099: mov     edi, [esp+3Ch+var_24]
0x5C409D: mov     esi, eax
0x5C409F: cmp     edi, esi
0x5C40A1: jz      short loc_5C40D1
0x5C40A3: test    edi, edi
0x5C40A5: jz      short loc_5C40BF
0x5C40A7: lea     eax, [edi+4]
0x5C40AA: push    eax; lpAddend
0x5C40AB: call    dword ptr ds:0A2807Ch
0x5C40B1: test    eax, eax
0x5C40B3: jnz     short loc_5C40BF
0x5C40B5: mov     edx, [edi]
0x5C40B7: mov     eax, [edx]
0x5C40B9: push    1
0x5C40BB: mov     ecx, edi
0x5C40BD: call    eax
0x5C40BF: test    esi, esi
0x5C40C1: mov     [esp+3Ch+var_24], esi
0x5C40C5: jz      short loc_5C40D1
0x5C40C7: add     esi, 4
0x5C40CA: push    esi; lpAddend
0x5C40CB: call    dword ptr ds:0A28078h
0x5C40D1: add     ebx, 1
0x5C40D4: cmp     ebx, [esp+3Ch+var_1C]
0x5C40D8: jb      loc_5C3F6B
0x5C40DE: mov     edi, [esp+3Ch+var_28]
0x5C40E2: test    edi, edi
0x5C40E4: mov     esi, [esp+3Ch+var_24]
0x5C40E8: jz      loc_5C425C
0x5C40EE: test    esi, esi
0x5C40F0: jz      loc_5C425C
0x5C40F6: xor     esi, esi
0x5C40F8: mov     dword ptr [esp+3Ch+ArgList], esi
0x5C40FC: mov     word ptr [esp+3Ch+var_10], si
0x5C4101: mov     word ptr [esp+3Ch+var_10+2], si
0x5C4106: mov     ecx, [esp+3Ch+var_20]
0x5C410A: mov     eax, [ecx+1D0h]
0x5C4110: cmp     eax, esi
0x5C4112: mov     byte ptr [esp+3Ch+var_4], 4
0x5C4117: jz      short loc_5C413A
0x5C4119: mov     eax, [eax+28h]
0x5C411C: cmp     eax, esi
0x5C411E: jnz     short loc_5C4125
0x5C4120: mov     eax, offset EmptyString
0x5C4125: push    eax; ArgList
0x5C4126: lea     edx, [esp+40h+ArgList]
0x5C412A: push    offset aTexturesS; "Textures\\%s"
0x5C412F: push    edx; int
0x5C4130: call    BSStringT_Static_Format
0x5C4135: add     esp, 0Ch
0x5C4138: jmp     short loc_5C414C
0x5C413A: lea     eax, [esp+3Ch+ArgList]
0x5C413E: push    offset aTexturesCharac; "Textures\\Characters\\Eyes\\EyeDefault."...
0x5C4143: push    eax; int
0x5C4144: call    BSStringT_Static_Format
0x5C4149: add     esp, 8
0x5C414C: mov     ebp, dword ptr [esp+3Ch+ArgList]
0x5C4150: push    esi; char
0x5C4151: push    esi; char
0x5C4152: push    ebp; ArgList
0x5C4153: lea     ecx, [esp+48h+var_20]
0x5C4157: push    ecx; int
0x5C4158: mov     ecx, ds:0B333A0h
0x5C415E: call    sub_442890
0x5C4163: mov     eax, [esp+3Ch+var_20]
0x5C4167: test    eax, eax
0x5C4169: mov     bl, 5
0x5C416B: mov     byte ptr [esp+3Ch+var_4], bl
0x5C416F: jz      loc_5C421F
0x5C4175: push    30h ; '0'; Size
0x5C4177: call    FormHeapAlloc
0x5C417C: add     esp, 4
0x5C417F: mov     [esp+3Ch+var_18], eax
0x5C4183: test    eax, eax
0x5C4185: mov     byte ptr [esp+3Ch+var_4], 6
0x5C418A: jz      short loc_5C4197
0x5C418C: mov     ecx, eax
0x5C418E: call    NiTexturingProperty__NiTexturingProperty
0x5C4193: mov     esi, eax
0x5C4195: jmp     short loc_5C4199
0x5C4197: xor     esi, esi
0x5C4199: mov     edx, [esp+3Ch+var_20]
0x5C419D: push    edx
0x5C419E: mov     ecx, esi
0x5C41A0: mov     byte ptr [esp+40h+var_4], bl
0x5C41A4: call    NiTexturingProperty__SetUnk08
0x5C41A9: push    3
0x5C41AB: mov     ecx, esi
0x5C41AD: call    sub_405870
0x5C41B2: push    2; a2
0x5C41B4: mov     ecx, esi; this
0x5C41B6: call    sub_405900
0x5C41BB: mov     edi, [esp+3Ch+var_28]
0x5C41BF: push    6
0x5C41C1: mov     ecx, edi
0x5C41C3: call    NiNode_GetNiPropertyByID
0x5C41C8: test    eax, eax
0x5C41CA: jz      short loc_5C41E3
0x5C41CC: push    6
0x5C41CE: lea     eax, [esp+40h+var_1C]
0x5C41D2: push    eax
0x5C41D3: mov     ecx, edi
0x5C41D5: call    sub_708560
0x5C41DA: lea     ecx, [esp+3Ch+var_1C]; this
0x5C41DE: call    sub_7016A0
0x5C41E3: push    esi; a2
0x5C41E4: mov     ecx, edi; this
0x5C41E6: call    sub_405680
0x5C41EB: mov     edi, [esp+3Ch+var_24]
0x5C41EF: push    6
0x5C41F1: mov     ecx, edi
0x5C41F3: call    NiNode_GetNiPropertyByID
0x5C41F8: test    eax, eax
0x5C41FA: jz      short loc_5C4213
0x5C41FC: push    6
0x5C41FE: lea     ecx, [esp+40h+var_1C]
0x5C4202: push    ecx
0x5C4203: mov     ecx, edi
0x5C4205: call    sub_708560
0x5C420A: lea     ecx, [esp+3Ch+var_1C]; this
0x5C420E: call    sub_7016A0
0x5C4213: push    esi; a2
0x5C4214: mov     ecx, edi; this
0x5C4216: call    sub_405680
0x5C421B: mov     eax, [esp+3Ch+var_20]
0x5C421F: test    eax, eax
0x5C4221: mov     byte ptr [esp+3Ch+var_4], 4
0x5C4226: jz      short loc_5C4246
0x5C4228: mov     esi, eax
0x5C422A: add     eax, 4
0x5C422D: push    eax; lpAddend
0x5C422E: call    dword ptr ds:0A2807Ch
0x5C4234: test    eax, eax
0x5C4236: jnz     short loc_5C4246
0x5C4238: test    esi, esi
0x5C423A: jz      short loc_5C4246
0x5C423C: mov     edx, [esi]
0x5C423E: mov     eax, [edx]
0x5C4240: push    1
0x5C4242: mov     ecx, esi
0x5C4244: call    eax
0x5C4246: push    ebp
0x5C4247: mov     byte ptr [esp+40h+var_4], 1
0x5C424C: call    FormHeapFree
0x5C4251: add     esp, 4
0x5C4254: mov     esi, [esp+3Ch+var_24]
0x5C4258: mov     edi, [esp+3Ch+var_28]
0x5C425C: mov     ecx, ds:0B333C4h
0x5C4262: mov     edx, [ecx]
0x5C4264: mov     eax, [edx+130h]
0x5C426A: push    0
0x5C426C: call    eax
0x5C426E: mov     edx, [eax]
0x5C4270: mov     ecx, eax
0x5C4272: mov     eax, [edx+58h]
0x5C4275: push    offset aFacegeneyeleft; "FaceGenEyeLeft"
0x5C427A: call    eax
0x5C427C: test    eax, eax
0x5C427E: jz      short loc_5C428F
0x5C4280: push    1
0x5C4282: push    1
0x5C4284: push    1
0x5C4286: push    eax
0x5C4287: call    sub_7B8940
0x5C428C: add     esp, 10h
0x5C428F: mov     ecx, ds:0B333C4h
0x5C4295: mov     edx, [ecx]
0x5C4297: mov     eax, [edx+130h]
0x5C429D: push    0
0x5C429F: call    eax
0x5C42A1: mov     edx, [eax]
0x5C42A3: mov     ecx, eax
0x5C42A5: mov     eax, [edx+58h]
0x5C42A8: push    offset aFacegeneyerigh; "FaceGenEyeRight"
0x5C42AD: call    eax
0x5C42AF: test    eax, eax
0x5C42B1: jz      short loc_5C42C2
0x5C42B3: push    1
0x5C42B5: push    1
0x5C42B7: push    1
0x5C42B9: push    eax
0x5C42BA: call    sub_7B8940
0x5C42BF: add     esp, 10h
0x5C42C2: test    esi, esi
0x5C42C4: mov     byte ptr [esp+3Ch+var_4], 0
0x5C42C9: jz      short loc_5C42E3
0x5C42CB: lea     ecx, [esi+4]
0x5C42CE: push    ecx; lpAddend
0x5C42CF: call    dword ptr ds:0A2807Ch
0x5C42D5: test    eax, eax
0x5C42D7: jnz     short loc_5C42E3
0x5C42D9: mov     edx, [esi]
0x5C42DB: mov     eax, [edx]
0x5C42DD: push    1
0x5C42DF: mov     ecx, esi
0x5C42E1: call    eax
0x5C42E3: test    edi, edi
0x5C42E5: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x5C42ED: jz      short loc_5C4307
0x5C42EF: lea     ecx, [edi+4]
0x5C42F2: push    ecx; lpAddend
0x5C42F3: call    dword ptr ds:0A2807Ch
0x5C42F9: test    eax, eax
0x5C42FB: jnz     short loc_5C4307
0x5C42FD: mov     edx, [edi]
0x5C42FF: mov     eax, [edx]
0x5C4301: push    1
0x5C4303: mov     ecx, edi
0x5C4305: call    eax
0x5C4307: mov     al, 1
0x5C4309: mov     ecx, dword ptr [esp+3Ch+var_C]
0x5C430D: mov     large fs:0, ecx
0x5C4314: pop     ecx
0x5C4315: pop     edi
0x5C4316: pop     esi
0x5C4317: pop     ebp
0x5C4318: pop     ebx
0x5C4319: add     esp, 28h
0x5C431C: retn
0x5C431D: xor     al, al
0x5C431F: mov     ecx, dword ptr [esp+3Ch+var_C]
0x5C4323: mov     large fs:0, ecx
0x5C432A: pop     ecx
0x5C432B: pop     edi
0x5C432C: pop     esi
0x5C432D: pop     ebp
0x5C432E: pop     ebx
0x5C432F: add     esp, 28h
0x5C4332: retn
