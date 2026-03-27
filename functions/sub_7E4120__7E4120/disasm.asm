0x7E4120: push    0FFFFFFFFh
0x7E4122: push    offset SEH_7E4120
0x7E4127: mov     eax, large fs:0
0x7E412D: push    eax
0x7E412E: sub     esp, 6Ch
0x7E4131: push    ebx
0x7E4132: push    ebp
0x7E4133: push    esi
0x7E4134: push    edi
0x7E4135: mov     eax, ds:0B30AACh
0x7E413A: xor     eax, esp
0x7E413C: push    eax
0x7E413D: lea     eax, [esp+8Ch+var_C]
0x7E4144: mov     large fs:0, eax
0x7E414A: mov     ecx, ds:0B42F48h
0x7E4150: test    ecx, ecx
0x7E4152: jnz     short loc_7E416D
0x7E4154: xor     eax, eax
0x7E4156: mov     ecx, [esp+8Ch+var_C]
0x7E415D: mov     large fs:0, ecx
0x7E4164: pop     ecx
0x7E4165: pop     edi
0x7E4166: pop     esi
0x7E4167: pop     ebp
0x7E4168: pop     ebx
0x7E4169: add     esp, 78h
0x7E416C: retn
0x7E416D: mov     eax, ds:0B46014h
0x7E4172: test    eax, eax
0x7E4174: jnz     loc_7E44A5
0x7E417A: mov     eax, ds:0B4600Ch
0x7E417F: test    eax, eax
0x7E4181: jnz     short loc_7E4197
0x7E4183: cmp     ecx, 2
0x7E4186: setl    al
0x7E4189: sub     eax, 1
0x7E418C: and     eax, 50h
0x7E418F: add     eax, 28h ; '('
0x7E4192: mov     ds:0B4600Ch, eax
0x7E4197: movzx   eax, ax
0x7E419A: movzx   edi, ax
0x7E419D: lea     ebp, [edi+edi]
0x7E41A0: xor     ecx, ecx
0x7E41A2: lea     eax, [ebp+ebp*2+0]
0x7E41A6: mov     edx, 2
0x7E41AB: mul     edx
0x7E41AD: seto    cl
0x7E41B0: lea     esi, ds:0[edi*4]
0x7E41B7: mov     [esp+8Ch+var_68], ebp
0x7E41BB: mov     [esp+8Ch+var_6C], esi
0x7E41BF: neg     ecx
0x7E41C1: or      ecx, eax
0x7E41C3: push    ecx; Size
0x7E41C4: call    FormHeapAlloc
0x7E41C9: mov     ebx, eax
0x7E41CB: xor     ecx, ecx
0x7E41CD: mov     eax, esi
0x7E41CF: mov     edx, 0Ch
0x7E41D4: mul     edx
0x7E41D6: seto    cl
0x7E41D9: mov     [esp+90h+var_70], ebx
0x7E41DD: neg     ecx
0x7E41DF: or      ecx, eax
0x7E41E1: push    ecx; Size
0x7E41E2: call    FormHeapAlloc
0x7E41E7: mov     [esp+94h+var_74], eax
0x7E41EB: xor     ecx, ecx
0x7E41ED: mov     eax, esi
0x7E41EF: mov     edx, 8
0x7E41F4: mul     edx
0x7E41F6: seto    cl
0x7E41F9: neg     ecx
0x7E41FB: or      ecx, eax
0x7E41FD: push    ecx; Size
0x7E41FE: call    FormHeapAlloc
0x7E4203: add     esp, 0Ch
0x7E4206: test    edi, edi
0x7E4208: mov     [esp+8Ch+var_64], eax
0x7E420C: jle     loc_7E434E
0x7E4212: fld     dword ptr ds:0A30634h
0x7E4218: lea     ecx, [eax+10h]
0x7E421B: fst     [esp+8Ch+var_40]
0x7E421F: mov     eax, [esp+8Ch+var_74]
0x7E4223: fst     [esp+8Ch+var_3C]
0x7E4227: xor     esi, esi
0x7E4229: fldz
0x7E422B: lea     edx, [ebx+4]
0x7E422E: fst     [esp+8Ch+var_38]
0x7E4232: add     eax, 18h
0x7E4235: fld1
0x7E4237: mov     ebx, [esp+8Ch+var_38]
0x7E423B: fst     [esp+8Ch+var_34]
0x7E423F: mov     [esp+8Ch+var_78], edi
0x7E4243: fst     [esp+8Ch+var_28]
0x7E4247: fst     [esp+8Ch+var_24]
0x7E424B: fst     [esp+8Ch+var_18]
0x7E424F: fst     [esp+8Ch+var_58]
0x7E4253: fst     [esp+8Ch+var_50]
0x7E4257: fst     [esp+8Ch+var_4C]
0x7E425B: fstp    [esp+8Ch+var_44]
0x7E425F: fxch    st(1)
0x7E4261: fst     [esp+8Ch+var_30]
0x7E4265: fstp    [esp+8Ch+var_1C]
0x7E4269: fst     [esp+8Ch+var_2C]
0x7E426D: fst     [esp+8Ch+var_20]
0x7E4271: fst     [esp+8Ch+var_14]
0x7E4275: fst     [esp+8Ch+var_60]
0x7E4279: fst     [esp+8Ch+var_5C]
0x7E427D: fst     [esp+8Ch+var_54]
0x7E4281: fstp    [esp+8Ch+var_48]
0x7E4285: mov     edi, [esp+8Ch+var_40]
0x7E4289: mov     [eax-18h], edi
0x7E428C: mov     edi, [esp+8Ch+var_3C]
0x7E4290: mov     [eax-14h], edi
0x7E4293: mov     edi, [esp+8Ch+var_34]
0x7E4297: mov     [eax-0Ch], edi
0x7E429A: mov     edi, [esp+8Ch+var_30]
0x7E429E: mov     [eax-8], edi
0x7E42A1: mov     edi, [esp+8Ch+var_2C]
0x7E42A5: mov     [eax-4], edi
0x7E42A8: mov     edi, [esp+8Ch+var_28]
0x7E42AC: mov     [eax], edi
0x7E42AE: mov     edi, [esp+8Ch+var_24]
0x7E42B2: mov     [eax+4], edi
0x7E42B5: mov     edi, [esp+8Ch+var_20]
0x7E42B9: mov     [eax+8], edi
0x7E42BC: mov     edi, [esp+8Ch+var_1C]
0x7E42C0: mov     [eax+0Ch], edi
0x7E42C3: mov     edi, [esp+8Ch+var_18]
0x7E42C7: mov     [eax+10h], edi
0x7E42CA: mov     edi, [esp+8Ch+var_14]
0x7E42CE: mov     [eax+14h], edi
0x7E42D1: mov     edi, [esp+8Ch+var_60]
0x7E42D5: mov     [eax-10h], ebx
0x7E42D8: mov     [ecx-10h], edi
0x7E42DB: mov     edi, [esp+8Ch+var_5C]
0x7E42DF: mov     [ecx-0Ch], edi
0x7E42E2: mov     edi, [esp+8Ch+var_58]
0x7E42E6: mov     [ecx-8], edi
0x7E42E9: mov     edi, [esp+8Ch+var_54]
0x7E42ED: mov     [ecx-4], edi
0x7E42F0: mov     edi, [esp+8Ch+var_50]
0x7E42F4: mov     [ecx], edi
0x7E42F6: mov     edi, [esp+8Ch+var_4C]
0x7E42FA: mov     [ecx+4], edi
0x7E42FD: mov     edi, [esp+8Ch+var_48]
0x7E4301: mov     [ecx+8], edi
0x7E4304: mov     edi, [esp+8Ch+var_44]
0x7E4308: mov     [ecx+0Ch], edi
0x7E430B: lea     edi, [esi+1]
0x7E430E: mov     [edx-2], di
0x7E4312: lea     edi, [esi+2]
0x7E4315: lea     ebp, [esi+3]
0x7E4318: mov     [edx-4], si
0x7E431C: mov     [edx+4], si
0x7E4320: mov     [edx], di
0x7E4323: mov     [edx+2], bp
0x7E4327: mov     [edx+6], di
0x7E432B: add     esi, 4
0x7E432E: add     eax, 30h ; '0'
0x7E4331: add     ecx, 20h ; ' '
0x7E4334: add     edx, 0Ch
0x7E4337: sub     [esp+8Ch+var_78], 1
0x7E433C: jnz     loc_7E4285
0x7E4342: mov     ebx, [esp+8Ch+var_70]
0x7E4346: mov     esi, [esp+8Ch+var_6C]
0x7E434A: mov     ebp, [esp+8Ch+var_68]
0x7E434E: push    58h ; 'X'; Size
0x7E4350: call    FormHeapAlloc
0x7E4355: add     esp, 4
0x7E4358: mov     [esp+8Ch+var_68], eax
0x7E435C: xor     edi, edi
0x7E435E: cmp     eax, edi
0x7E4360: mov     [esp+8Ch+var_4], edi
0x7E4367: jz      short loc_7E4386
0x7E4369: mov     ecx, [esp+8Ch+var_64]
0x7E436D: mov     edx, [esp+8Ch+var_74]
0x7E4371: push    ebx
0x7E4372: push    ebp
0x7E4373: push    edi
0x7E4374: push    1
0x7E4376: push    ecx
0x7E4377: push    edi
0x7E4378: push    edi
0x7E4379: push    edx
0x7E437A: push    esi
0x7E437B: mov     ecx, eax
0x7E437D: call    sub_71FB40
0x7E4382: mov     ebx, eax
0x7E4384: jmp     short loc_7E4388
0x7E4386: xor     ebx, ebx
0x7E4388: or      ebp, 0FFFFFFFFh
0x7E438B: push    2Ch ; ','; Size
0x7E438D: mov     [esp+90h+var_4], ebp
0x7E4394: call    FormHeapAlloc
0x7E4399: add     esp, 4
0x7E439C: mov     [esp+8Ch+var_64], eax
0x7E43A0: cmp     eax, edi
0x7E43A2: mov     [esp+8Ch+var_4], 1
0x7E43AD: jz      short loc_7E43BB
0x7E43AF: push    1
0x7E43B1: push    esi
0x7E43B2: mov     ecx, eax
0x7E43B4: call    sub_7E3AE0
0x7E43B9: mov     edi, eax
0x7E43BB: push    1
0x7E43BD: mov     ecx, edi
0x7E43BF: mov     [esp+90h+var_4], ebp
0x7E43C6: call    sub_7263B0
0x7E43CB: lea     eax, ds:0[esi*4]
0x7E43D2: push    1; char
0x7E43D4: push    eax; Src
0x7E43D5: call    sub_7E48E0
0x7E43DA: push    eax; char
0x7E43DB: push    0; int
0x7E43DD: mov     ecx, edi
0x7E43DF: call    sub_7260B0
0x7E43E4: push    4
0x7E43E6: push    4
0x7E43E8: push    esi
0x7E43E9: push    1
0x7E43EB: push    0
0x7E43ED: push    0
0x7E43EF: push    0
0x7E43F1: mov     ecx, edi
0x7E43F3: call    sub_7262A0
0x7E43F8: push    edi
0x7E43F9: mov     ecx, ebx
0x7E43FB: call    sub_6C61E0
0x7E4400: push    0C0h ; 'À'; Size
0x7E4405: call    FormHeapAlloc
0x7E440A: add     esp, 4
0x7E440D: mov     [esp+8Ch+var_64], eax
0x7E4411: test    eax, eax
0x7E4413: mov     [esp+8Ch+var_4], 2
0x7E441E: jz      short loc_7E442C
0x7E4420: push    ebx; a2
0x7E4421: mov     ecx, eax; this
0x7E4423: call    NiTriShape_NiTriShape
0x7E4428: mov     esi, eax
0x7E442A: jmp     short loc_7E442E
0x7E442C: xor     esi, esi
0x7E442E: mov     eax, [esi+0B4h]
0x7E4434: fld     dword ptr ds:0A427E0h
0x7E443A: mov     ebx, [eax+18h]
0x7E443D: mov     ecx, [eax+0Ch]
0x7E4440: mov     edx, [eax+10h]
0x7E4443: mov     edi, [eax+14h]
0x7E4446: mov     [eax+0Ch], ecx
0x7E4449: mov     [esp+8Ch+var_10], ebx
0x7E444D: fstp    [esp+8Ch+var_10]
0x7E4451: mov     ecx, [esp+8Ch+var_10]
0x7E4455: mov     [eax+10h], edx
0x7E4458: mov     [eax+14h], edi
0x7E445B: mov     [eax+18h], ecx
0x7E445E: mov     eax, ds:0B46014h
0x7E4463: cmp     eax, esi
0x7E4465: mov     [esp+8Ch+var_4], ebp
0x7E446C: jz      short loc_7E44A5
0x7E446E: test    eax, eax
0x7E4470: jz      short loc_7E4490
0x7E4472: mov     edi, eax
0x7E4474: add     eax, 4
0x7E4477: push    eax; lpAddend
0x7E4478: call    dword ptr ds:0A2807Ch
0x7E447E: test    eax, eax
0x7E4480: jnz     short loc_7E4490
0x7E4482: test    edi, edi
0x7E4484: jz      short loc_7E4490
0x7E4486: mov     edx, [edi]
0x7E4488: mov     eax, [edx]
0x7E448A: push    1
0x7E448C: mov     ecx, edi
0x7E448E: call    eax
0x7E4490: mov     ds:0B46014h, esi
0x7E4496: add     esi, 4
0x7E4499: push    esi; lpAddend
0x7E449A: call    dword ptr ds:0A28078h
0x7E44A0: mov     eax, ds:0B46014h
0x7E44A5: mov     ecx, [esp+8Ch+var_C]
0x7E44AC: mov     large fs:0, ecx
0x7E44B3: pop     ecx
0x7E44B4: pop     edi
0x7E44B5: pop     esi
0x7E44B6: pop     ebp
0x7E44B7: pop     ebx
0x7E44B8: add     esp, 78h
0x7E44BB: retn
