0x4073D0: sub     esp, 4Ch
0x4073D3: cmp     ShaderPackage, 3
0x4073DA: mov     cl, byte_B333B8
0x4073E0: push    ebx
0x4073E1: push    ebp
0x4073E2: push    esi
0x4073E3: push    edi
0x4073E4: mov     [esp+5Ch+var_48], 0
0x4073EC: mov     ebx, 10h
0x4073F1: jl      short loc_407430
0x4073F3: test    byte ptr dword_B42F40, bl
0x4073F9: mov     eax, 0
0x4073FE: setnle  al
0x407401: test    al, al
0x407403: jz      short loc_407430
0x407405: test    cl, cl
0x407407: jz      short loc_407430
0x407409: and     dword_B42F40, 0FFFFFFEFh
0x407410: push    0
0x407412: mov     byte_B333F6, al
0x407417: call    GetShadowSceneNode
0x40741C: add     esp, 4
0x40741F: mov     ecx, eax
0x407421: call    sub_7C5EF0
0x407426: mov     eax, g_Renderer
0x40742B: push    0
0x40742D: push    eax
0x40742E: jmp     short loc_407467
0x407430: cmp     byte_B333F6, 0
0x407437: jz      short loc_407472
0x407439: test    cl, cl
0x40743B: jnz     short loc_407472
0x40743D: or      dword_B42F40, ebx
0x407443: mov     eax, dword_B06F04
0x407448: mov     byte_B333F6, cl
0x40744E: mov     ecx, TES
0x407454: cmp     dword ptr [ecx+34h], 0
0x407458: jnz     short loc_40745F
0x40745A: mov     eax, dword_B06EFC
0x40745F: mov     edx, g_Renderer
0x407465: push    eax
0x407466: push    edx
0x407467: mov     ecx, g_textureManager
0x40746D: call    BSTextureManager_ReserveShadowMaps
0x407472: call    InitBSShaderAccumulator
0x407477: cmp     byte_B42CDB, 0
0x40747E: jnz     loc_407A72
0x407484: cmp     ShaderPackage, 3
0x40748B: jl      loc_407A72
0x407491: test    byte ptr dword_B42F40, bl
0x407497: mov     eax, 0
0x40749C: setnle  al
0x40749F: test    al, al
0x4074A1: jz      loc_407A72
0x4074A7: mov     ecx, offset ActorProcessManager_ptr
0x4074AC: call    sub_6747C0
0x4074B1: xor     edi, edi
0x4074B3: push    edi
0x4074B4: mov     ebp, eax
0x4074B6: call    GetShadowSceneNode
0x4074BB: mov     ebx, eax
0x4074BD: add     esp, 4
0x4074C0: mov     ecx, ebx
0x4074C2: mov     [esp+5Ch+var_3C], ebx
0x4074C6: call    sub_7C5BE0
0x4074CB: mov     eax, TES
0x4074D0: cmp     [eax+34h], edi
0x4074D3: mov     esi, dword_B06F04
0x4074D9: jnz     short loc_4074E1
0x4074DB: mov     esi, dword_B06EFC
0x4074E1: mov     ecx, g_Renderer
0x4074E7: push    esi
0x4074E8: push    ecx
0x4074E9: mov     ecx, g_textureManager
0x4074EF: mov     [esp+64h+var_44], esi
0x4074F3: call    BSTextureManager_ReserveShadowMaps
0x4074F8: cmp     esi, edi
0x4074FA: jnz     short loc_407508
0x4074FC: mov     ecx, ebx
0x4074FE: call    sub_7C7880
0x407503: jmp     loc_407A72
0x407508: mov     ecx, TESDataHandler_g_PlayerRef
0x40750E: cmp     byte ptr [ecx+588h], 0
0x407515: mov     [esp+5Ch+var_38], edi
0x407519: jnz     short loc_40752E
0x40751B: call    sub_65D650
0x407520: test    al, al
0x407522: jz      loc_4075CE
0x407528: mov     ecx, TESDataHandler_g_PlayerRef
0x40752E: mov     edx, [ecx]
0x407530: mov     eax, [edx+380h]
0x407536: call    eax
0x407538: test    eax, eax
0x40753A: jz      short loc_40757B
0x40753C: mov     ecx, TESDataHandler_g_PlayerRef
0x407542: mov     edx, [ecx]
0x407544: mov     eax, [edx+18Ch]
0x40754A: call    eax
0x40754C: cmp     eax, 4
0x40754F: jz      short loc_4075CE
0x407551: mov     ecx, TESDataHandler_g_PlayerRef
0x407557: mov     edx, [ecx]
0x407559: mov     eax, [edx+18Ch]
0x40755F: call    eax
0x407561: cmp     eax, 3
0x407564: jz      short loc_4075CE
0x407566: mov     ecx, TESDataHandler_g_PlayerRef
0x40756C: mov     edx, [ecx]
0x40756E: mov     eax, [edx+18Ch]
0x407574: call    eax
0x407576: cmp     eax, 5
0x407579: jz      short loc_4075CE
0x40757B: mov     ecx, TESDataHandler_g_PlayerRef; this
0x407581: call    Actor_GetRefractionAmount
0x407586: test    al, al
0x407588: jnz     short loc_4075CE
0x40758A: mov     ecx, TESDataHandler_g_PlayerRef
0x407590: mov     edx, [ecx]
0x407592: mov     eax, [edx+284h]
0x407598: push    2Fh ; '/'
0x40759A: call    eax
0x40759C: mov     [esp+5Ch+var_2C], eax
0x4075A0: fild    [esp+5Ch+var_2C]
0x4075A4: fcomp   ds:SrcStr
0x4075AA: fnstsw  ax
0x4075AC: test    ah, 44h
0x4075AF: jp      short loc_4075CE
0x4075B1: mov     ecx, TESDataHandler_g_PlayerRef
0x4075B7: push    edi
0x4075B8: call    PlayerCharacter_GetPlayerNode
0x4075BD: push    eax
0x4075BE: mov     ecx, ebx
0x4075C0: call    ShadowSceneNodeAddShadowCaster
0x4075C5: mov     [esp+5Ch+var_38], eax
0x4075C9: mov     edi, 1
0x4075CE: mov     esi, [ebp+0]
0x4075D1: test    esi, esi
0x4075D3: jz      loc_40767D
0x4075D9: lea     esp, [esp+0]
0x4075E0: cmp     edi, [esp+5Ch+var_44]
0x4075E4: jge     loc_40767D
0x4075EA: mov     edx, [esi]
0x4075EC: mov     eax, [edx+154h]
0x4075F2: mov     ecx, esi
0x4075F4: call    eax
0x4075F6: test    eax, eax
0x4075F8: jz      short loc_40766B
0x4075FA: mov     ecx, esi
0x4075FC: call    sub_5EA5E0
0x407601: test    al, al
0x407603: jz      short loc_40766B
0x407605: mov     edx, [esi]
0x407607: mov     eax, [edx+380h]
0x40760D: mov     ecx, esi
0x40760F: call    eax
0x407611: test    eax, eax
0x407613: jz      short loc_407626
0x407615: mov     edx, [esi]
0x407617: mov     eax, [edx+18Ch]
0x40761D: mov     ecx, esi
0x40761F: call    eax
0x407621: cmp     eax, 4
0x407624: jz      short loc_40766B
0x407626: mov     ecx, esi; this
0x407628: call    Actor_GetRefractionAmount
0x40762D: test    al, al
0x40762F: jnz     short loc_40766B
0x407631: mov     edx, [esi]
0x407633: mov     eax, [edx+284h]
0x407639: push    2Fh ; '/'
0x40763B: mov     ecx, esi
0x40763D: call    eax
0x40763F: mov     [esp+5Ch+var_2C], eax
0x407643: fild    [esp+5Ch+var_2C]
0x407647: fcomp   ds:SrcStr
0x40764D: fnstsw  ax
0x40764F: test    ah, 44h
0x407652: jp      short loc_40766B
0x407654: mov     edx, [esi]
0x407656: mov     eax, [edx+154h]
0x40765C: mov     ecx, esi
0x40765E: call    eax
0x407660: push    eax
0x407661: mov     ecx, ebx
0x407663: call    ShadowSceneNodeAddShadowCaster
0x407668: add     edi, 1
0x40766B: mov     ebp, [ebp+4]
0x40766E: test    ebp, ebp
0x407670: jz      short loc_40767D
0x407672: mov     esi, [ebp+0]
0x407675: test    esi, esi
0x407677: jnz     loc_4075E0
0x40767D: mov     ecx, [esp+5Ch+var_38]
0x407681: push    ecx
0x407682: mov     ecx, ebx
0x407684: call    sub_7C6DE0
0x407689: mov     ecx, TESDataHandler_g_PlayerRef
0x40768F: push    1
0x407691: call    PlayerCharacter_GetPlayerNode
0x407696: test    eax, eax
0x407698: mov     [esp+5Ch+var_38], eax
0x40769C: jz      loc_407A72
0x4076A2: mov     eax, g_worldScenegraph
0x4076A7: mov     ecx, [eax+0E4h]
0x4076AD: mov     edx, [eax+0DCh]
0x4076B3: mov     [ecx+0Ch], edx
0x4076B6: mov     al, byte ptr dword_B35C00
0x4076BB: mov     esi, 1
0x4076C0: push    esi
0x4076C1: push    0
0x4076C3: mov     [esp+64h+var_2C], ecx
0x4076C7: mov     ecx, TES
0x4076CD: and     al, 1
0x4076CF: push    0
0x4076D1: mov     [esp+68h+var_4C], al
0x4076D5: call    sub_442A30
0x4076DA: mov     eax, dword_B35C00
0x4076DF: mov     ecx, TES
0x4076E5: push    esi
0x4076E6: shr     eax, 3
0x4076E9: push    0
0x4076EB: and     al, 1
0x4076ED: push    3
0x4076EF: mov     [esp+68h+var_4B], al
0x4076F3: call    sub_442A30
0x4076F8: mov     eax, TES
0x4076FD: mov     ecx, [eax+5Ch]
0x407700: mov     eax, [ecx+4]
0x407703: mov     cl, [eax+18h]
0x407706: or      [eax+18h], si
0x40770A: and     cl, 1
0x40770D: mov     [esp+5Ch+var_4A], cl
0x407711: mov     ecx, [esp+5Ch+var_38]
0x407715: mov     al, [ecx+18h]
0x407718: or      [ecx+18h], si
0x40771C: and     al, 1
0x40771E: mov     [esp+5Ch+var_49], al
0x407722: mov     eax, dword_B36094
0x407727: test    eax, eax
0x407729: mov     [esp+5Ch+var_14], eax
0x40772D: mov     byte_B0727C, 0
0x407734: mov     byte ptr [esp+5Ch+var_30], 0
0x407739: jz      short loc_407752
0x40773B: mov     dl, [eax+18h]
0x40773E: and     dl, 1
0x407741: cmp     byte_B06F14, 0
0x407748: mov     byte ptr [esp+5Ch+var_30], dl
0x40774C: jnz     short loc_407752
0x40774E: or      [eax+18h], si
0x407752: mov     ecx, [esp+5Ch+var_3C]
0x407756: call    sub_7C5AB0
0x40775B: mov     esi, eax
0x40775D: test    esi, esi
0x40775F: mov     [esp+5Ch+var_40], 0
0x407767: jz      loc_4079CF
0x40776D: lea     ecx, [ecx+0]
0x407770: lea     eax, [esp+5Ch+var_28]
0x407774: push    eax
0x407775: mov     ecx, esi
0x407777: call    sub_405AD0
0x40777C: mov     ebp, [eax]
0x40777E: mov     eax, [esp+5Ch+var_28]
0x407782: test    eax, eax
0x407784: jz      short loc_4077A4
0x407786: mov     edi, eax
0x407788: add     eax, 4
0x40778B: push    eax; lpAddend
0x40778C: call    ds:InterlockedDecrement
0x407792: test    eax, eax
0x407794: jnz     short loc_4077A4
0x407796: test    edi, edi
0x407798: jz      short loc_4077A4
0x40779A: mov     edx, [edi]
0x40779C: mov     eax, [edx]
0x40779E: push    1
0x4077A0: mov     ecx, edi
0x4077A2: call    eax
0x4077A4: test    ebp, ebp
0x4077A6: jz      loc_4079BC
0x4077AC: fld     dword ptr [esi+0E0h]
0x4077B2: fld     flt_B2C680
0x4077B8: fcompp
0x4077BA: fnstsw  ax
0x4077BC: test    ah, 41h
0x4077BF: jp      short loc_4077D4
0x4077C1: fld     dword ptr [esi+0DCh]
0x4077C7: fcomp   ds:dbl_A2FC80
0x4077CD: fnstsw  ax
0x4077CF: test    ah, 41h
0x4077D2: jnp     short loc_4077F1
0x4077D4: lea     ecx, [esp+5Ch+var_24]
0x4077D8: push    ecx
0x4077D9: mov     ecx, esi
0x4077DB: call    sub_405AD0
0x4077E0: mov     edx, [eax]
0x4077E2: or      [esp+5Ch+var_48], 1
0x4077E7: test    byte ptr [edx+18h], 1
0x4077EB: jz      short loc_4077F1
0x4077ED: mov     bl, 1
0x4077EF: jmp     short loc_4077F3
0x4077F1: xor     bl, bl
0x4077F3: test    byte ptr [esp+5Ch+var_48], 1
0x4077F8: jz      short loc_407823
0x4077FA: mov     edi, [esp+5Ch+var_24]
0x4077FE: and     [esp+5Ch+var_48], 0FFFFFFFEh
0x407803: test    edi, edi
0x407805: jz      short loc_407823
0x407807: lea     eax, [edi+4]
0x40780A: push    eax; lpAddend
0x40780B: call    ds:InterlockedDecrement
0x407811: test    eax, eax
0x407813: jnz     short loc_407823
0x407815: test    edi, edi
0x407817: jz      short loc_407823
0x407819: mov     edx, [edi]
0x40781B: mov     eax, [edx]
0x40781D: push    1
0x40781F: mov     ecx, edi
0x407821: call    eax
0x407823: test    bl, bl
0x407825: jz      short loc_40786D
0x407827: mov     ecx, [esi+130h]
0x40782D: test    byte ptr [ecx+18h], 1
0x407831: jz      short loc_407837
0x407833: push    1
0x407835: jmp     short loc_407860
0x407837: mov     edx, [esp+5Ch+var_40]
0x40783B: cmp     edx, [esp+5Ch+var_44]
0x40783F: jge     short loc_40785E
0x407841: lea     eax, [esp+5Ch+var_20]
0x407845: push    eax
0x407846: mov     ecx, esi
0x407848: call    sub_405AD0
0x40784D: mov     eax, [eax]
0x40784F: and     word ptr [eax+18h], 0FFFEh
0x407855: lea     ecx, [esp+5Ch+var_20]; this
0x407859: call    sub_7016A0
0x40785E: push    0; float
0x407860: fldz
0x407862: push    ecx
0x407863: mov     ecx, esi
0x407865: fstp    [esp+64h+var_64]; float
0x407868: call    sub_7D1ED0
0x40786D: mov     ecx, [esp+5Ch+var_44]
0x407871: cmp     [esp+5Ch+var_40], ecx
0x407875: jge     short loc_4078A0
0x407877: lea     edx, [esp+5Ch+var_34]
0x40787B: push    edx
0x40787C: mov     ecx, esi
0x40787E: call    sub_405AD0
0x407883: mov     eax, [eax]
0x407885: or      [esp+5Ch+var_48], 2
0x40788A: test    byte ptr [eax+18h], 1
0x40788E: jnz     short loc_4078A0
0x407890: mov     ecx, [esi+130h]
0x407896: test    byte ptr [ecx+18h], 1
0x40789A: jnz     short loc_4078A0
0x40789C: mov     bl, 1
0x40789E: jmp     short loc_4078A2
0x4078A0: xor     bl, bl
0x4078A2: test    byte ptr [esp+5Ch+var_48], 2
0x4078A7: mov     edi, [esp+5Ch+var_34]
0x4078AB: jz      short loc_4078D2
0x4078AD: and     [esp+5Ch+var_48], 0FFFFFFFDh
0x4078B2: test    edi, edi
0x4078B4: jz      short loc_4078D2
0x4078B6: lea     edx, [edi+4]
0x4078B9: push    edx; lpAddend
0x4078BA: call    ds:InterlockedDecrement
0x4078C0: test    eax, eax
0x4078C2: jnz     short loc_4078D2
0x4078C4: test    edi, edi
0x4078C6: jz      short loc_4078D2
0x4078C8: mov     eax, [edi]
0x4078CA: mov     edx, [eax]
0x4078CC: push    1
0x4078CE: mov     ecx, edi
0x4078D0: call    edx
0x4078D2: test    bl, bl
0x4078D4: jz      loc_407983
0x4078DA: mov     eax, [esi+130h]
0x4078E0: mov     ecx, [eax+20h]
0x4078E3: mov     edx, [eax+24h]
0x4078E6: mov     edi, [eax+28h]
0x4078E9: mov     eax, [eax+2Ch]
0x4078EC: sub     esp, 0Ch
0x4078EF: mov     [esp+68h+var_4], eax
0x4078F3: mov     eax, esp
0x4078F5: mov     [eax], ecx
0x4078F7: mov     [eax+4], edx
0x4078FA: push    0
0x4078FC: mov     ecx, esi
0x4078FE: mov     [eax+8], edi
0x407901: call    ShadowLight_LightProjection?
0x407906: mov     ecx, [esp+5Ch+var_2C]
0x40790A: push    ecx
0x40790B: mov     ecx, esi
0x40790D: call    ShadowSceneLight_CullProcess
0x407912: cmp     word ptr [esi+118h], 0FFh
0x40791B: jz      short loc_40796A
0x40791D: fld     dword ptr [esi+0D8h]
0x407923: fcomp   ds:dbl_A30068
0x407929: fnstsw  ax
0x40792B: test    ah, 1
0x40792E: jnz     short loc_40796A
0x407930: add     [esp+5Ch+var_40], 1
0x407935: mov     ecx, esi
0x407937: call    sub_7D5ED0
0x40793C: mov     edx, g_worldScenegraph
0x407942: push    edx
0x407943: mov     ecx, esi
0x407945: call    ShadowSceneLight_AddToScene????
0x40794A: cmp     byte_B06F0C, 0
0x407951: jz      short loc_407961
0x407953: mov     eax, [esi+130h]
0x407959: push    eax
0x40795A: mov     ecx, esi
0x40795C: call    ShadowSceneLight_AddToScene????
0x407961: mov     ecx, esi
0x407963: call    sub_7D6A40
0x407968: jmp     short loc_4079BC
0x40796A: lea     ecx, [esp+5Ch+var_1C]
0x40796E: push    ecx
0x40796F: mov     ecx, esi
0x407971: call    sub_405AD0
0x407976: mov     eax, [eax]
0x407978: or      word ptr [eax+18h], 1
0x40797D: mov     eax, [esp+5Ch+var_1C]
0x407981: jmp     short loc_40799A
0x407983: lea     ecx, [esp+5Ch+var_18]
0x407987: push    ecx
0x407988: mov     ecx, esi
0x40798A: call    sub_405AD0
0x40798F: mov     eax, [eax]
0x407991: or      word ptr [eax+18h], 1
0x407996: mov     eax, [esp+5Ch+var_18]
0x40799A: test    eax, eax
0x40799C: jz      short loc_4079BC
0x40799E: mov     esi, eax
0x4079A0: add     eax, 4
0x4079A3: push    eax; lpAddend
0x4079A4: call    ds:InterlockedDecrement
0x4079AA: test    eax, eax
0x4079AC: jnz     short loc_4079BC
0x4079AE: test    esi, esi
0x4079B0: jz      short loc_4079BC
0x4079B2: mov     edx, [esi]
0x4079B4: mov     eax, [edx]
0x4079B6: push    1
0x4079B8: mov     ecx, esi
0x4079BA: call    eax
0x4079BC: mov     ecx, [esp+5Ch+var_3C]
0x4079C0: call    sub_7C5B50
0x4079C5: mov     esi, eax
0x4079C7: test    esi, esi
0x4079C9: jnz     loc_407770
0x4079CF: cmp     [esp+5Ch+var_4C], 0
0x4079D4: jnz     short loc_4079E7
0x4079D6: mov     ecx, TES
0x4079DC: push    1
0x4079DE: push    1
0x4079E0: push    0
0x4079E2: call    sub_442A30
0x4079E7: cmp     [esp+5Ch+var_4B], 0
0x4079EC: jnz     short loc_4079FF
0x4079EE: mov     ecx, TES
0x4079F4: push    1
0x4079F6: push    1
0x4079F8: push    3
0x4079FA: call    sub_442A30
0x4079FF: cmp     [esp+5Ch+var_4A], 0
0x407A04: mov     ecx, TES
0x407A0A: mov     edx, [ecx+5Ch]
0x407A0D: mov     eax, [edx+4]
0x407A10: jz      short loc_407A19
0x407A12: or      word ptr [eax+18h], 1
0x407A17: jmp     short loc_407A1F
0x407A19: and     word ptr [eax+18h], 0FFFEh
0x407A1F: mov     ecx, [esp+5Ch+var_14]
0x407A23: test    ecx, ecx
0x407A25: jz      short loc_407A31
0x407A27: mov     eax, [esp+5Ch+var_30]
0x407A2B: push    eax
0x407A2C: call    sub_404CD0
0x407A31: push    3
0x407A33: mov     byte_B0727C, 1
0x407A3A: call    nullsub_returnTrue_0arg
0x407A3F: mov     ecx, [esp+60h+var_2C]
0x407A43: add     esp, 4
0x407A46: push    ecx
0x407A47: mov     ecx, [esp+60h+var_3C]
0x407A4B: call    sub_7C6770
0x407A50: push    2
0x407A52: call    nullsub_returnTrue_0arg
0x407A57: mov     eax, [esp+60h+var_38]
0x407A5B: add     esp, 4
0x407A5E: cmp     [esp+5Ch+var_49], 0
0x407A63: jz      short loc_407A6C
0x407A65: or      word ptr [eax+18h], 1
0x407A6A: jmp     short loc_407A72
0x407A6C: and     word ptr [eax+18h], 0FFFEh
0x407A72: cmp     bDynWinRelfections?, 0
0x407A79: jz      short loc_407AD0
0x407A7B: call    InterfaceManager_IsMenuMode
0x407A80: test    al, al
0x407A82: jz      short loc_407AAC
0x407A84: call    InterfaceManager__IsOpenedMenuDialogue
0x407A89: test    al, al
0x407A8B: jnz     short loc_407AAC
0x407A8D: mov     ecx, dword_B3A6B0
0x407A93: push    2
0x407A95: call    sub_572E30
0x407A9A: test    al, al
0x407A9C: jnz     short loc_407AAC
0x407A9E: call    Sky_CreateOrGetGlobalObject
0x407AA3: cmp     byte ptr [eax+100h], 0
0x407AAA: jz      short loc_407AD0
0x407AAC: fld     flt_B06530
0x407AB2: push    ecx
0x407AB3: fmul    flt_B33E9C
0x407AB9: fstp    [esp+60h+var_14]
0x407ABD: fld     [esp+60h+var_14]
0x407AC1: fstp    [esp+60h+var_60]; float
0x407AC4: call    Sky_CreateOrGetGlobalObject
0x407AC9: mov     ecx, eax
0x407ACB: call    sub_543A00
0x407AD0: pop     edi
0x407AD1: pop     esi
0x407AD2: pop     ebp
0x407AD3: pop     ebx
0x407AD4: add     esp, 4Ch
0x407AD7: retn
