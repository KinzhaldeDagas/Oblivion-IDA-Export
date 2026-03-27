0x53D260: push    0FFFFFFFFh
0x53D262: push    offset ??0Moon@@QAE@XZ_SEH
0x53D267: mov     eax, large fs:0
0x53D26D: push    eax
0x53D26E: push    ecx
0x53D26F: push    ebx
0x53D270: push    ebp
0x53D271: push    esi
0x53D272: push    edi
0x53D273: mov     eax, ds:0B30AACh
0x53D278: xor     eax, esp
0x53D27A: push    eax
0x53D27B: lea     eax, [esp+24h+var_C]
0x53D27F: mov     large fs:0, eax
0x53D285: mov     esi, ecx
0x53D287: mov     [esp+24h+var_10], esi
0x53D28B: call    ??0SkyObject@@QAE@XZ; SkyObject::SkyObject(void)
0x53D290: xor     ebp, ebp
0x53D292: mov     dword ptr [esi], offset ??_7Moon@@6B@; const Moon::`vftable'
0x53D298: mov     [esp+24h+var_4], ebp
0x53D29C: mov     [esi+8], ebp
0x53D29F: mov     [esi+0Ch], ebp
0x53D2A2: mov     [esi+10h], ebp
0x53D2A5: mov     [esi+14h], ebp
0x53D2A8: push    offset BSStringT_Clear; a5
0x53D2AD: push    offset BSStringT_constr; a4
0x53D2B2: push    8; size
0x53D2B4: push    8; a2
0x53D2B6: lea     ebx, [esi+18h]
0x53D2B9: push    ebx; a1
0x53D2BA: mov     byte ptr [esp+38h+var_4], 4
0x53D2BF: call    ArrayConstructor
0x53D2C4: mov     edi, [esp+24h+ArgList]
0x53D2C8: push    offset aOne_wan; "one_wan"
0x53D2CD: push    edi; ArgList
0x53D2CE: lea     eax, [esi+30h]
0x53D2D1: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D2D6: push    eax; int
0x53D2D7: mov     byte ptr [esp+34h+var_4], 5
0x53D2DC: call    BSStringT_Static_Format
0x53D2E1: push    offset aOne_wax; "one_wax"
0x53D2E6: push    edi; ArgList
0x53D2E7: lea     ecx, [esi+40h]
0x53D2EA: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D2EF: push    ecx; int
0x53D2F0: call    BSStringT_Static_Format
0x53D2F5: push    offset aHalf_wan; "half_wan"
0x53D2FA: push    edi; ArgList
0x53D2FB: lea     edx, [esi+28h]
0x53D2FE: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D303: push    edx; int
0x53D304: call    BSStringT_Static_Format
0x53D309: push    offset aHalf_wax; "half_wax"
0x53D30E: push    edi; ArgList
0x53D30F: lea     eax, [esi+48h]
0x53D312: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D317: push    eax; int
0x53D318: call    BSStringT_Static_Format
0x53D31D: add     esp, 40h
0x53D320: push    offset aThree_wan; "three_wan"
0x53D325: push    edi; ArgList
0x53D326: lea     ecx, [esi+20h]
0x53D329: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D32E: push    ecx; int
0x53D32F: call    BSStringT_Static_Format
0x53D334: push    offset aThree_wax; "three_wax"
0x53D339: push    edi; ArgList
0x53D33A: lea     edx, [esi+50h]
0x53D33D: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D342: push    edx; int
0x53D343: call    BSStringT_Static_Format
0x53D348: push    offset aFull; "full"
0x53D34D: push    edi; ArgList
0x53D34E: push    offset aTexturesSkyS_S; "\\Textures\\Sky\\%s_%s.dds"
0x53D353: push    ebx; int
0x53D354: call    BSStringT_Static_Format
0x53D359: fld     [esp+54h+arg_4]
0x53D35D: mov     eax, [esp+54h+arg_18]
0x53D361: fstp    dword ptr [esi+58h]
0x53D364: fld     [esp+54h+arg_8]
0x53D368: add     esp, 30h
0x53D36B: fstp    dword ptr [esi+5Ch]
0x53D36E: mov     [esi+6Ch], eax
0x53D371: fld     [esp+24h+arg_C]
0x53D375: fstp    dword ptr [esi+60h]
0x53D378: fld     [esp+24h+arg_10]
0x53D37C: fstp    dword ptr [esi+64h]
0x53D37F: fld     [esp+24h+arg_14]
0x53D383: fstp    dword ptr [esi+68h]
0x53D386: fldz
0x53D388: fstp    dword ptr [esi+74h]
0x53D38B: fld     dword ptr ds:0A32048h
0x53D391: mov     ebx, ds:0A2807Ch
0x53D397: fstp    dword ptr [esi+78h]
0x53D39A: mov     edi, [esi+8]
0x53D39D: cmp     edi, ebp
0x53D39F: jz      short loc_53D3BC
0x53D3A1: lea     ecx, [edi+4]
0x53D3A4: push    ecx; lpAddend
0x53D3A5: call    ebx ; InterlockedDecrement
0x53D3A7: test    eax, eax
0x53D3A9: jnz     short loc_53D3B9
0x53D3AB: cmp     edi, ebp
0x53D3AD: jz      short loc_53D3B9
0x53D3AF: mov     edx, [edi]
0x53D3B1: mov     eax, [edx]
0x53D3B3: push    1
0x53D3B5: mov     ecx, edi
0x53D3B7: call    eax
0x53D3B9: mov     [esi+8], ebp
0x53D3BC: mov     edi, [esi+0Ch]
0x53D3BF: cmp     edi, ebp
0x53D3C1: jz      short loc_53D3DE
0x53D3C3: lea     ecx, [edi+4]
0x53D3C6: push    ecx; lpAddend
0x53D3C7: call    ebx ; InterlockedDecrement
0x53D3C9: test    eax, eax
0x53D3CB: jnz     short loc_53D3DB
0x53D3CD: cmp     edi, ebp
0x53D3CF: jz      short loc_53D3DB
0x53D3D1: mov     edx, [edi]
0x53D3D3: mov     eax, [edx]
0x53D3D5: push    1
0x53D3D7: mov     ecx, edi
0x53D3D9: call    eax
0x53D3DB: mov     [esi+0Ch], ebp
0x53D3DE: mov     edi, [esi+10h]
0x53D3E1: cmp     edi, ebp
0x53D3E3: jz      short loc_53D400
0x53D3E5: lea     ecx, [edi+4]
0x53D3E8: push    ecx; lpAddend
0x53D3E9: call    ebx ; InterlockedDecrement
0x53D3EB: test    eax, eax
0x53D3ED: jnz     short loc_53D3FD
0x53D3EF: cmp     edi, ebp
0x53D3F1: jz      short loc_53D3FD
0x53D3F3: mov     edx, [edi]
0x53D3F5: mov     eax, [edx]
0x53D3F7: push    1
0x53D3F9: mov     ecx, edi
0x53D3FB: call    eax
0x53D3FD: mov     [esi+10h], ebp
0x53D400: mov     edi, [esi+14h]
0x53D403: cmp     edi, ebp
0x53D405: jz      short loc_53D422
0x53D407: lea     ecx, [edi+4]
0x53D40A: push    ecx; lpAddend
0x53D40B: call    ebx ; InterlockedDecrement
0x53D40D: test    eax, eax
0x53D40F: jnz     short loc_53D41F
0x53D411: cmp     edi, ebp
0x53D413: jz      short loc_53D41F
0x53D415: mov     edx, [edi]
0x53D417: mov     eax, [edx]
0x53D419: push    1
0x53D41B: mov     ecx, edi
0x53D41D: call    eax
0x53D41F: mov     [esi+14h], ebp
0x53D422: mov     eax, esi
0x53D424: mov     [esi+70h], ebp
0x53D427: mov     ecx, dword ptr [esp+24h+var_C]
0x53D42B: mov     large fs:0, ecx
0x53D432: pop     ecx
0x53D433: pop     edi
0x53D434: pop     esi
0x53D435: pop     ebp
0x53D436: pop     ebx
0x53D437: add     esp, 10h
0x53D43A: retn    1Ch
