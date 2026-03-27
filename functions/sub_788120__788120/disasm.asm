0x788120: sub     esp, 28h
0x788123: push    ebx
0x788124: push    ebp
0x788125: push    esi
0x788126: mov     esi, ecx
0x788128: mov     eax, [esi]
0x78812A: xor     ecx, ecx
0x78812C: cmp     ds:0B4297Ch, cl
0x788132: push    edi
0x788133: mov     edi, [eax+0C0h]
0x788139: mov     eax, ds:0B2B6D8h
0x78813E: setnz   cl
0x788141: movzx   ebx, di
0x788144: mov     [esp+38h+var_C], eax
0x788148: mov     [esp+38h+var_1C], ebx
0x78814C: add     cx, bx
0x78814F: movzx   edx, cx
0x788152: mov     ecx, ds:0B2B6DCh
0x788158: mov     [esp+38h+var_10], edx
0x78815C: mov     edx, ds:0B2B6E0h
0x788162: mov     [esp+38h+var_8], ecx
0x788166: mov     [esp+38h+var_4], edx
0x78816A: fld     [esp+38h+var_8]
0x78816E: fld     [esp+38h+var_C]
0x788172: call    sub_98598A
0x788177: fstp    [esp+38h+var_18]
0x78817B: fld     [esp+38h+var_18]
0x78817F: fmul    qword ptr ds:0A8BA48h
0x788185: fstp    [esp+38h+var_24]
0x788189: fld     [esp+38h+var_4]
0x78818D: call    __CIasin
0x788192: fstp    [esp+38h+var_18]
0x788196: fld     [esp+38h+var_18]
0x78819A: xor     ebp, ebp
0x78819C: fmul    qword ptr ds:0A8BA50h
0x7881A2: test    di, di
0x7881A5: mov     edi, [esp+38h+arg_0]
0x7881A9: fstp    [esp+38h+var_28]
0x7881AD: jbe     short loc_7881E7
0x7881AF: lea     ebx, [edi+78h]
0x7881B2: fld     dword ptr [esi+24h]
0x7881B5: mov     ecx, [esi+8]
0x7881B8: sub     esp, 0Ch
0x7881BB: fstp    [esp+44h+var_3C]; float
0x7881BF: fld     [esp+44h+var_28]
0x7881C3: fstp    [esp+44h+var_40]; int
0x7881C7: fld     [esp+44h+var_24]
0x7881CB: fstp    [esp+44h+var_44]; int
0x7881CE: push    ebp; float
0x7881CF: push    ebx; int
0x7881D0: call    sub_7989B0
0x7881D5: mov     eax, [esi]
0x7881D7: add     ebp, 1
0x7881DA: cmp     bp, [eax+0C0h]
0x7881E1: jb      short loc_7881B2
0x7881E3: mov     ebx, [esp+38h+var_1C]
0x7881E7: mov     eax, [esp+38h+arg_4]
0x7881EB: or      ebp, 0FFFFFFFFh
0x7881EE: cmp     ax, bp
0x7881F1: jle     short loc_78823D
0x7881F3: fld     dword ptr [esi+24h]
0x7881F6: mov     ecx, [esi+8]
0x7881F9: sub     esp, 0Ch
0x7881FC: fstp    [esp+44h+var_3C]
0x788200: lea     ebp, [edi+78h]
0x788203: fld     [esp+44h+var_28]
0x788207: fstp    [esp+44h+var_40]
0x78820B: fld     [esp+44h+var_24]
0x78820F: fstp    [esp+44h+var_44]
0x788212: push    eax
0x788213: push    ebp
0x788214: call    sub_798630
0x788219: mov     byte ptr [ebp+0], 1
0x78821D: movzx   ecx, byte ptr [esi+44h]
0x788221: mov     [esp+38h+arg_0], ecx
0x788225: mov     byte ptr [edi+0B4h], 0
0x78822C: fild    [esp+38h+arg_0]
0x788230: fstp    dword ptr [edi+7Ch]
0x788233: pop     edi
0x788234: pop     esi
0x788235: pop     ebp
0x788236: pop     ebx
0x788237: add     esp, 28h
0x78823A: retn    8
0x78823D: mov     eax, [esi+18h]
0x788240: cmp     eax, 1
0x788243: jnz     loc_788376
0x788249: fld     dword ptr ds:0A30634h
0x78824F: mov     eax, [esi+34h]
0x788252: test    eax, eax
0x788254: fst     [esp+38h+var_20]
0x788258: fstp    [esp+38h+var_18]
0x78825C: mov     [esp+38h+arg_4], ebp
0x788260: mov     [esp+38h+var_1C], ebp
0x788264: jz      short loc_78826B
0x788266: fld     dword ptr [eax+10h]
0x788269: jmp     short loc_788270
0x78826B: mov     edx, [esi]
0x78826D: fld     dword ptr [edx+14h]
0x788270: lea     eax, [esp+38h+var_1C]
0x788274: fstp    [esp+38h+arg_0]
0x788278: push    eax; int
0x788279: lea     ecx, [esp+3Ch+arg_4]
0x78827D: push    ecx; int
0x78827E: movzx   ecx, byte ptr [esi+44h]
0x788282: lea     edx, [esp+40h+var_18]
0x788286: push    edx; int
0x788287: mov     edx, [esp+44h+var_10]
0x78828B: lea     eax, [esp+44h+var_20]
0x78828F: push    eax; int
0x788290: mov     [esp+48h+var_14], ecx
0x788294: sub     esp, 10h
0x788297: fild    [esp+58h+var_14]
0x78829B: fstp    [esp+58h+var_4C]; float
0x78829F: fld     dword ptr [esi+20h]
0x7882A2: fstp    [esp+58h+var_50]; float
0x7882A6: fld     dword ptr [esi+28h]
0x7882A9: fstp    [esp+58h+var_54]; float
0x7882AD: fld     dword ptr [esi+1Ch]
0x7882B0: fstp    [esp+58h+var_58]; float
0x7882B3: push    edx; int
0x7882B4: fld     [esp+5Ch+arg_0]
0x7882B8: push    ecx
0x7882B9: fstp    [esp+60h+var_60]; float
0x7882BC: call    sub_787220
0x7882C1: mov     edx, [esp+60h+arg_4]
0x7882C5: add     esp, 28h
0x7882C8: cmp     dx, bp
0x7882CB: jz      short loc_7882DE
0x7882CD: movsx   eax, dx
0x7882D0: movzx   ecx, bx
0x7882D3: cmp     eax, ecx
0x7882D5: jge     short loc_7882DE
0x7882D7: mov     ecx, 1
0x7882DC: jmp     short loc_7882E0
0x7882DE: xor     ecx, ecx
0x7882E0: test    cl, cl
0x7882E2: lea     eax, [edi+78h]
0x7882E5: mov     [eax], cl
0x7882E7: jz      short loc_788313
0x7882E9: fld     dword ptr [esi+24h]
0x7882EC: mov     ecx, [esi+8]
0x7882EF: sub     esp, 0Ch
0x7882F2: fstp    [esp+44h+var_3C]
0x7882F6: fld     [esp+44h+var_28]
0x7882FA: fstp    [esp+44h+var_40]
0x7882FE: fld     [esp+44h+var_24]
0x788302: fstp    [esp+44h+var_44]
0x788305: push    edx
0x788306: push    eax
0x788307: call    sub_798630
0x78830C: fld     [esp+38h+var_20]
0x788310: fstp    dword ptr [edi+7Ch]
0x788313: mov     edx, [esp+38h+var_1C]
0x788317: cmp     dx, bp
0x78831A: jz      short loc_78832D
0x78831C: movsx   eax, dx
0x78831F: movzx   ecx, bx
0x788322: cmp     eax, ecx
0x788324: jge     short loc_78832D
0x788326: mov     ecx, 1
0x78832B: jmp     short loc_78832F
0x78832D: xor     ecx, ecx
0x78832F: test    cl, cl
0x788331: lea     eax, [edi+0B4h]
0x788337: mov     [eax], cl
0x788339: jz      loc_788425
0x78833F: fld     dword ptr [esi+24h]
0x788342: mov     ecx, [esi+8]
0x788345: sub     esp, 0Ch
0x788348: fstp    [esp+44h+var_3C]
0x78834C: fld     [esp+44h+var_28]
0x788350: fstp    [esp+44h+var_40]
0x788354: fld     [esp+44h+var_24]
0x788358: fstp    [esp+44h+var_44]
0x78835B: push    edx
0x78835C: push    eax
0x78835D: call    sub_798630
0x788362: fld     [esp+38h+var_18]
0x788366: fstp    dword ptr [edi+0B8h]
0x78836C: pop     edi
0x78836D: pop     esi
0x78836E: pop     ebp
0x78836F: pop     ebx
0x788370: add     esp, 28h
0x788373: retn    8
0x788376: cmp     eax, 3
0x788379: jnz     short loc_7883C6
0x78837B: fld     dword ptr [esi+24h]
0x78837E: mov     ecx, [esi+8]
0x788381: sub     esp, 0Ch
0x788384: fstp    [esp+44h+var_3C]
0x788388: lea     ebp, [edi+78h]
0x78838B: fld     [esp+44h+var_28]
0x78838F: fstp    [esp+44h+var_40]
0x788393: fld     [esp+44h+var_24]
0x788397: fstp    [esp+44h+var_44]
0x78839A: push    0
0x78839C: push    ebp
0x78839D: call    sub_798630
0x7883A2: mov     byte ptr [ebp+0], 1
0x7883A6: movzx   edx, byte ptr [esi+44h]
0x7883AA: mov     [esp+38h+arg_0], edx
0x7883AE: mov     byte ptr [edi+0B4h], 0
0x7883B5: fild    [esp+38h+arg_0]
0x7883B9: fstp    dword ptr [edi+7Ch]
0x7883BC: pop     edi
0x7883BD: pop     esi
0x7883BE: pop     ebp
0x7883BF: pop     ebx
0x7883C0: add     esp, 28h
0x7883C3: retn    8
0x7883C6: fld     dword ptr ds:0A30634h
0x7883CC: push    ecx
0x7883CD: mov     ecx, esi
0x7883CF: fstp    [esp+3Ch+var_3C]; float
0x7883D2: call    sub_787CD0
0x7883D7: mov     ecx, [esi]
0x7883D9: movzx   eax, ax
0x7883DC: cmp     ax, [ecx+0C0h]
0x7883E3: jnb     short loc_78841E
0x7883E5: fld     dword ptr [esi+24h]
0x7883E8: mov     ecx, [esi+8]
0x7883EB: sub     esp, 0Ch
0x7883EE: fstp    [esp+44h+var_3C]
0x7883F2: lea     ebp, [edi+78h]
0x7883F5: fld     [esp+44h+var_28]
0x7883F9: fstp    [esp+44h+var_40]
0x7883FD: fld     [esp+44h+var_24]
0x788401: fstp    [esp+44h+var_44]
0x788404: push    eax
0x788405: push    ebp
0x788406: call    sub_798630
0x78840B: mov     byte ptr [ebp+0], 1
0x78840F: movzx   edx, byte ptr [esi+44h]
0x788413: mov     [esp+38h+arg_0], edx
0x788417: fild    [esp+38h+arg_0]
0x78841B: fstp    dword ptr [edi+7Ch]
0x78841E: mov     byte ptr [edi+0B4h], 0
0x788425: pop     edi
0x788426: pop     esi
0x788427: pop     ebp
0x788428: pop     ebx
0x788429: add     esp, 28h
0x78842C: retn    8
