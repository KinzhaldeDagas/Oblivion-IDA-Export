0x811640: sub     esp, 3DCh
0x811646: mov     eax, ds:0B30AACh
0x81164B: xor     eax, esp
0x81164D: mov     [esp+3DCh+var_4], eax
0x811654: push    ebx
0x811655: push    ebp
0x811656: push    esi
0x811657: push    edi
0x811658: xor     esi, esi
0x81165A: push    44h ; 'D'
0x81165C: lea     eax, [esp+3F0h+var_334]
0x811663: mov     edi, ecx
0x811665: push    esi
0x811666: mov     ebx, offset aTallgrass1xVDi; "tallgrass\\1x\\v\\DistantLOD.v.hlsl"
0x81166B: push    eax
0x81166C: mov     [esp+3F8h+var_3D8], edi
0x811670: mov     [esp+3F8h+var_33C], ebx
0x811677: mov     [esp+3F8h+var_338], esi
0x81167E: call    __memset
0x811683: push    3Ch ; '<'
0x811685: lea     ecx, [esp+3FCh+var_2E0]
0x81168C: push    esi
0x81168D: push    ecx
0x81168E: mov     [esp+404h+var_2F0], ebx
0x811695: mov     [esp+404h+var_2EC], offset aBillboard_0; "BILLBOARD"
0x8116A0: mov     [esp+404h+var_2E8], esi
0x8116A7: mov     [esp+404h+var_2E4], esi
0x8116AE: call    __memset
0x8116B3: push    3Ch ; '<'
0x8116B5: lea     edx, [esp+408h+var_294]
0x8116BC: push    esi
0x8116BD: mov     ebp, offset aVs_2_0_0; "VS_2_0"
0x8116C2: push    edx
0x8116C3: mov     [esp+410h+var_2A4], ebx
0x8116CA: mov     [esp+410h+var_2A0], ebp
0x8116D1: mov     [esp+410h+var_29C], esi
0x8116D8: mov     [esp+410h+var_298], esi
0x8116DF: call    __memset
0x8116E4: push    34h ; '4'
0x8116E6: lea     eax, [esp+414h+var_240]
0x8116ED: push    esi
0x8116EE: push    eax
0x8116EF: mov     [esp+41Ch+var_258], ebx
0x8116F6: mov     [esp+41Ch+var_254], ebp
0x8116FD: mov     [esp+41Ch+var_250], esi
0x811704: mov     [esp+41Ch+var_24C], offset aBillboard_0; "BILLBOARD"
0x81170F: mov     [esp+41Ch+var_248], esi
0x811716: mov     [esp+41Ch+var_244], esi
0x81171D: call    __memset
0x811722: push    3Ch ; '<'
0x811724: lea     ecx, [esp+420h+var_3C4]
0x811728: push    esi
0x811729: mov     ebx, offset aTallgrass1xPHi; "tallgrass\\1x\\p\\highDetail.p.hlsl"
0x81172E: push    ecx
0x81172F: mov     [esp+428h+FullPath], ebx
0x811733: mov     [esp+428h+var_3D0], esi
0x811737: mov     [esp+428h+var_3CC], esi
0x81173B: mov     [esp+428h+var_3C8], esi
0x81173F: call    __memset
0x811744: push    38h ; '8'
0x811746: lea     edx, [esp+42Ch+var_374]
0x81174D: push    esi
0x81174E: push    edx
0x81174F: mov     [esp+434h+var_388], ebx
0x811756: mov     [esp+434h+var_384], offset aPs_2_0_0; "PS_2_0"
0x811761: mov     [esp+434h+var_380], esi
0x811768: mov     [esp+434h+var_37C], esi
0x81176F: mov     [esp+434h+var_378], esi
0x811776: call    __memset
0x81177B: add     esp, 48h
0x81177E: cmp     dword ptr ds:0B42F48h, 1
0x811785: jnz     loc_8118CD
0x81178B: lea     eax, [edi+8Ch]
0x811791: xor     ebp, ebp
0x811793: lea     ebx, [esp+3ECh+var_338]
0x81179A: mov     [esp+3ECh+var_3DC], eax
0x81179E: jmp     short loc_8117A6
0x8117A0: mov     edi, [esp+3ECh+var_3D8]
0x8117A4: xor     esi, esi
0x8117A6: mov     edx, [ebx-4]
0x8117A9: lea     ecx, [esp+3ECh+FileName]
0x8117B0: push    ecx; int
0x8117B1: push    edx; FullPath
0x8117B2: call    sub_801030
0x8117B7: push    ebp
0x8117B8: lea     eax, [esp+3F8h+var_108]
0x8117BF: push    offset aDistlod103i_vs; "DISTLOD1%03i.vso"
0x8117C4: push    eax
0x8117C5: call    __sprintf
0x8117CA: add     esp, 14h
0x8117CD: push    esi; int
0x8117CE: push    esi; int
0x8117CF: lea     ecx, [esp+3F4h+var_108]
0x8117D6: push    ecx; int
0x8117D7: push    offset aVs_1_1; "vs_1_1"
0x8117DC: push    ebx; int
0x8117DD: lea     edx, [esp+400h+FileName]
0x8117E4: push    edx; lpFileName
0x8117E5: mov     ecx, edi
0x8117E7: call    CreateVertexShader
0x8117EC: mov     edi, eax
0x8117EE: mov     eax, [esp+3ECh+var_3DC]
0x8117F2: mov     esi, [eax]
0x8117F4: cmp     esi, edi
0x8117F6: jz      short loc_81182C
0x8117F8: test    esi, esi
0x8117FA: jz      short loc_811818
0x8117FC: lea     ecx, [esi+4]
0x8117FF: push    ecx; lpAddend
0x811800: call    dword ptr ds:0A2807Ch
0x811806: test    eax, eax
0x811808: jnz     short loc_811818
0x81180A: test    esi, esi
0x81180C: jz      short loc_811818
0x81180E: mov     edx, [esi]
0x811810: mov     eax, [edx]
0x811812: push    1
0x811814: mov     ecx, esi
0x811816: call    eax
0x811818: test    edi, edi
0x81181A: mov     ecx, [esp+3ECh+var_3DC]
0x81181E: mov     [ecx], edi
0x811820: jz      short loc_81182C
0x811822: add     edi, 4
0x811825: push    edi; lpAddend
0x811826: call    dword ptr ds:0A28078h
0x81182C: add     [esp+3ECh+var_3DC], 4
0x811831: add     ebp, 1
0x811834: add     ebx, 4Ch ; 'L'
0x811837: cmp     ebp, 2
0x81183A: jl      loc_8117A0
0x811840: mov     eax, [esp+3ECh+FullPath]
0x811844: lea     edx, [esp+3ECh+FileName]
0x81184B: push    edx; int
0x81184C: push    eax; FullPath
0x81184D: call    sub_801030
0x811852: push    0
0x811854: lea     ecx, [esp+3F8h+var_108]
0x81185B: push    offset aDistlod103i_ps; "DISTLOD1%03i.pso"
0x811860: push    ecx
0x811861: call    __sprintf
0x811866: mov     ebx, [esp+400h+var_3D8]
0x81186A: add     esp, 14h
0x81186D: push    0; int
0x81186F: push    0; int
0x811871: lea     edx, [esp+3F4h+var_108]
0x811878: push    edx; int
0x811879: push    offset aPs_1_3; "ps_1_3"
0x81187E: lea     eax, [esp+3FCh+var_3D0]
0x811882: push    eax; int
0x811883: lea     ecx, [esp+400h+FileName]
0x81188A: push    ecx; lpFileName
0x81188B: mov     ecx, ebx
0x81188D: call    CreatePixelShader
0x811892: mov     esi, [ebx+9Ch]
0x811898: mov     edi, eax
0x81189A: cmp     esi, edi
0x81189C: jz      loc_811A17
0x8118A2: test    esi, esi
0x8118A4: jz      short loc_8118C2
0x8118A6: lea     edx, [esi+4]
0x8118A9: push    edx; lpAddend
0x8118AA: call    dword ptr ds:0A2807Ch
0x8118B0: test    eax, eax
0x8118B2: jnz     short loc_8118C2
0x8118B4: test    esi, esi
0x8118B6: jz      short loc_8118C2
0x8118B8: mov     eax, [esi]
0x8118BA: mov     edx, [eax]
0x8118BC: push    1
0x8118BE: mov     ecx, esi
0x8118C0: call    edx
0x8118C2: mov     [ebx+9Ch], edi
0x8118C8: jmp     loc_811A09
0x8118CD: lea     eax, [edi+94h]
0x8118D3: mov     ebp, 2
0x8118D8: lea     ebx, [esp+3ECh+var_2A0]
0x8118DF: mov     [esp+3ECh+var_3DC], eax
0x8118E3: jmp     short loc_8118EB
0x8118E5: mov     edi, [esp+3ECh+var_3D8]
0x8118E9: xor     esi, esi
0x8118EB: mov     edx, [ebx-4]
0x8118EE: lea     ecx, [esp+3ECh+FileName]
0x8118F5: push    ecx; int
0x8118F6: push    edx; FullPath
0x8118F7: call    sub_801030
0x8118FC: push    ebp
0x8118FD: lea     eax, [esp+3F8h+var_108]
0x811904: push    offset aDistlod203i_vs; "DISTLOD2%03i.vso"
0x811909: push    eax
0x81190A: call    __sprintf
0x81190F: add     esp, 14h
0x811912: push    esi; int
0x811913: push    esi; int
0x811914: lea     ecx, [esp+3F4h+var_108]
0x81191B: push    ecx; int
0x81191C: push    offset aVs_2_0; "vs_2_0"
0x811921: push    ebx; int
0x811922: lea     edx, [esp+400h+FileName]
0x811929: push    edx; lpFileName
0x81192A: mov     ecx, edi
0x81192C: call    CreateVertexShader
0x811931: mov     edi, eax
0x811933: mov     eax, [esp+3ECh+var_3DC]
0x811937: mov     esi, [eax]
0x811939: cmp     esi, edi
0x81193B: jz      short loc_811971
0x81193D: test    esi, esi
0x81193F: jz      short loc_81195D
0x811941: lea     ecx, [esi+4]
0x811944: push    ecx; lpAddend
0x811945: call    dword ptr ds:0A2807Ch
0x81194B: test    eax, eax
0x81194D: jnz     short loc_81195D
0x81194F: test    esi, esi
0x811951: jz      short loc_81195D
0x811953: mov     edx, [esi]
0x811955: mov     eax, [edx]
0x811957: push    1
0x811959: mov     ecx, esi
0x81195B: call    eax
0x81195D: test    edi, edi
0x81195F: mov     ecx, [esp+3ECh+var_3DC]
0x811963: mov     [ecx], edi
0x811965: jz      short loc_811971
0x811967: add     edi, 4
0x81196A: push    edi; lpAddend
0x81196B: call    dword ptr ds:0A28078h
0x811971: add     [esp+3ECh+var_3DC], 4
0x811976: add     ebp, 1
0x811979: add     ebx, 4Ch ; 'L'
0x81197C: cmp     ebp, 4
0x81197F: jl      loc_8118E5
0x811985: mov     eax, [esp+3ECh+var_388]
0x811989: lea     edx, [esp+3ECh+FileName]
0x811990: push    edx; int
0x811991: push    eax; FullPath
0x811992: call    sub_801030
0x811997: push    1
0x811999: lea     ecx, [esp+3F8h+var_108]
0x8119A0: push    offset aDistlod203i_ps; "DISTLOD2%03i.pso"
0x8119A5: push    ecx
0x8119A6: call    __sprintf
0x8119AB: mov     ebx, [esp+400h+var_3D8]
0x8119AF: add     esp, 14h
0x8119B2: push    0; int
0x8119B4: push    0; int
0x8119B6: lea     edx, [esp+3F4h+var_108]
0x8119BD: push    edx; int
0x8119BE: push    offset aPs_2_0; "ps_2_0"
0x8119C3: lea     eax, [esp+3FCh+var_384]
0x8119C7: push    eax; int
0x8119C8: lea     ecx, [esp+400h+FileName]
0x8119CF: push    ecx; lpFileName
0x8119D0: mov     ecx, ebx
0x8119D2: call    CreatePixelShader
0x8119D7: mov     esi, [ebx+0A0h]
0x8119DD: mov     edi, eax
0x8119DF: cmp     esi, edi
0x8119E1: jz      short loc_811A17
0x8119E3: test    esi, esi
0x8119E5: jz      short loc_811A03
0x8119E7: lea     edx, [esi+4]
0x8119EA: push    edx; lpAddend
0x8119EB: call    dword ptr ds:0A2807Ch
0x8119F1: test    eax, eax
0x8119F3: jnz     short loc_811A03
0x8119F5: test    esi, esi
0x8119F7: jz      short loc_811A03
0x8119F9: mov     eax, [esi]
0x8119FB: mov     edx, [eax]
0x8119FD: push    1
0x8119FF: mov     ecx, esi
0x811A01: call    edx
0x811A03: mov     [ebx+0A0h], edi
0x811A09: test    edi, edi
0x811A0B: jz      short loc_811A17
0x811A0D: add     edi, 4
0x811A10: push    edi; lpAddend
0x811A11: call    dword ptr ds:0A28078h
0x811A17: mov     ecx, [esp+3ECh+var_4]
0x811A1E: pop     edi
0x811A1F: pop     esi
0x811A20: pop     ebp
0x811A21: pop     ebx
0x811A22: xor     ecx, esp
0x811A24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x811A29: add     esp, 3DCh
0x811A2F: retn
