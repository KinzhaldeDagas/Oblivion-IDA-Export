0x40D800: sub     esp, 10h
0x40D803: push    ebx
0x40D804: push    ebp
0x40D805: push    esi
0x40D806: push    edi
0x40D807: mov     ebp, ecx
0x40D809: call    InterfaceManager_IsMenuMode
0x40D80E: push    eax; a1
0x40D80F: call    SetHavokPaused
0x40D814: add     esp, 4
0x40D817: call    InterfaceManager_IsMenuMode
0x40D81C: xor     ebx, ebx
0x40D81E: test    al, al
0x40D820: jz      short loc_40D88C
0x40D822: cmp     byte_B3341C, bl
0x40D828: jz      short loc_40D884
0x40D82A: push    ebx; a2
0x40D82B: mov     ecx, offset ActorProcessManager_ptr; this
0x40D830: call    sub_673A50
0x40D835: mov     ecx, eax; this
0x40D837: call    sub_7616D0
0x40D83C: mov     esi, eax
0x40D83E: cmp     esi, ebx
0x40D840: jz      short loc_40D877
0x40D842: cmp     [esi+4], ebx
0x40D845: jnz     short loc_40D84B
0x40D847: cmp     [esi], ebx
0x40D849: jz      short loc_40D877
0x40D84B: mov     edi, [esi]
0x40D84D: mov     ecx, edi; this
0x40D84F: call    Actor__GetProcessLevel
0x40D854: test    eax, eax
0x40D856: jnz     short loc_40D870
0x40D858: mov     eax, [edi]
0x40D85A: mov     edx, [eax+154h]
0x40D860: mov     ecx, edi
0x40D862: call    edx
0x40D864: test    eax, eax
0x40D866: jz      short loc_40D870
0x40D868: mov     ecx, [edi+58h]
0x40D86B: call    sub_651DD0
0x40D870: mov     esi, [esi+4]
0x40D873: cmp     esi, ebx
0x40D875: jnz     short loc_40D842
0x40D877: mov     eax, TESDataHandler_g_PlayerRef
0x40D87C: mov     ecx, [eax+58h]
0x40D87F: call    sub_651DD0
0x40D884: mov     byte_B3341C, bl
0x40D88A: jmp     short loc_40D893
0x40D88C: mov     byte_B3341C, 1
0x40D893: call    SleepMax0x14Milliseconds
0x40D898: add     dword_B02C54, 1
0x40D89F: call    ds:GetTickCount
0x40D8A5: push    eax
0x40D8A6: mov     ecx, offset TimeInfo
0x40D8AB: call    sub_47D170
0x40D8B0: fld     flt_B33E9C
0x40D8B6: movzx   ecx, byte_B333B8
0x40D8BD: push    ecx; char
0x40D8BE: push    ecx
0x40D8BF: fstp    [esp+28h+a2]; float
0x40D8C2: call    sub_889810
0x40D8C7: mov     ecx, [ebp+20h]; this
0x40D8CA: add     esp, 8
0x40D8CD: call    InputGlobals__PollAndUpdateInputState
0x40D8D2: mov     ecx, ioManager; this
0x40D8D8: call    IOManager_ProcessThreads
0x40D8DD: cmp     byte_B333B8, bl
0x40D8E3: jz      short loc_40D908
0x40D8E5: fld     flt_B02D90
0x40D8EB: fstp    flt_B075E8
0x40D8F1: fld     flt_B02D98
0x40D8F7: fstp    flt_B075EC
0x40D8FD: fld     flt_B02DA0
0x40D903: jmp     loc_40D9A4
0x40D908: mov     ecx, TES
0x40D90E: call    TES__GetCurrentWorldspace
0x40D913: test    eax, eax
0x40D915: jz      short loc_40D94D
0x40D917: mov     ecx, TES
0x40D91D: call    TES__GetCurrentWorldspace
0x40D922: mov     ecx, eax
0x40D924: call    TESWorldSpace_GetParentWorldpsace
0x40D929: test    eax, eax
0x40D92B: jz      short loc_40D94D
0x40D92D: fld     flt_B02DA8
0x40D933: fstp    flt_B075E8
0x40D939: fld     flt_B02DB0
0x40D93F: fstp    flt_B075EC
0x40D945: fld     flt_B02DB8
0x40D94B: jmp     short loc_40D9A4
0x40D94D: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40D953: cmp     ecx, ebx
0x40D955: jz      short loc_40D996
0x40D957: call    TESObjectREFR_GetParentCell
0x40D95C: test    eax, eax
0x40D95E: jz      short loc_40D996
0x40D960: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40D966: call    TESObjectREFR_GetParentCell
0x40D96B: mov     ecx, eax; this
0x40D96D: call    TESObjectCELL_IsInterior
0x40D972: test    al, al
0x40D974: jz      short loc_40D996
0x40D976: fld     flt_B02DC0
0x40D97C: fstp    flt_B075E8
0x40D982: fld     flt_B02DC8
0x40D988: fstp    flt_B075EC
0x40D98E: fld     flt_B02DD0
0x40D994: jmp     short loc_40D9A4
0x40D996: fld1
0x40D998: fst     flt_B075E8
0x40D99E: fst     flt_B075EC
0x40D9A4: push    3
0x40D9A6: fstp    flt_B075F0
0x40D9AC: call    nullsub_returnTrue_0arg
0x40D9B1: mov     edx, g_worldScenegraph
0x40D9B7: mov     esi, [edx+0DCh]
0x40D9BD: mov     edi, g_textureManager
0x40D9C3: add     esp, 4
0x40D9C6: call    InterfaceManager_IsMenuMode
0x40D9CB: mov     ecx, edi
0x40D9CD: push    eax
0x40D9CE: push    esi
0x40D9CF: call    sub_7C1F50
0x40D9D4: call    InterfaceManager_IsMenuMode
0x40D9D9: test    al, al
0x40D9DB: jz      loc_40DA6C
0x40D9E1: push    1; arg1
0x40D9E3: push    ebx; canCreate
0x40D9E4: call    InterfaceManager_GetSingleton
0x40D9E9: add     esp, 8
0x40D9EC: cmp     byte ptr [eax+8], 4
0x40D9F0: jz      short loc_40DA6C
0x40D9F2: call    InterfaceManager__IsOpenedMenuDialogue
0x40D9F7: test    al, al
0x40D9F9: jnz     short loc_40DA6C
0x40D9FB: push    ebx
0x40D9FC: push    40Ch
0x40DA01: call    sub_5790E0
0x40DA06: add     esp, 8
0x40DA09: test    al, al
0x40DA0B: jnz     short loc_40DA6C
0x40DA0D: push    ebx
0x40DA0E: push    414h
0x40DA13: call    sub_5790E0
0x40DA18: add     esp, 8
0x40DA1B: test    al, al
0x40DA1D: jnz     short loc_40DA6C
0x40DA1F: push    ebx
0x40DA20: push    3F3h
0x40DA25: call    sub_5790E0
0x40DA2A: add     esp, 8
0x40DA2D: test    al, al
0x40DA2F: jnz     short loc_40DA6C
0x40DA31: push    ebx
0x40DA32: push    3E9h
0x40DA37: call    sub_5790E0
0x40DA3C: add     esp, 8
0x40DA3F: test    al, al
0x40DA41: jnz     short loc_40DA6C
0x40DA43: call    sub_579BC0
0x40DA48: test    al, al
0x40DA4A: jnz     short loc_40DA6C
0x40DA4C: cmp     byte_B33397, bl
0x40DA52: jnz     short loc_40DA78
0x40DA54: cmp     byte_B33396, bl
0x40DA5A: jz      loc_40DB37
0x40DA60: mov     ecx, ebp
0x40DA62: call    sub_40D160
0x40DA67: jmp     loc_40DB37
0x40DA6C: cmp     byte_B33397, bl
0x40DA72: jz      loc_40DB37
0x40DA78: call    InterfaceManager_IsMenuMode
0x40DA7D: test    al, al
0x40DA7F: jz      short loc_40DAC9
0x40DA81: push    ebx
0x40DA82: push    414h
0x40DA87: call    sub_5790E0
0x40DA8C: add     esp, 8
0x40DA8F: test    al, al
0x40DA91: jnz     short loc_40DAC9
0x40DA93: call    InterfaceManager__IsOpenedMenuDialogue
0x40DA98: test    al, al
0x40DA9A: jnz     short loc_40DAC9
0x40DA9C: push    ebx
0x40DA9D: push    40Ch
0x40DAA2: call    sub_5790E0
0x40DAA7: add     esp, 8
0x40DAAA: test    al, al
0x40DAAC: jnz     short loc_40DAC9
0x40DAAE: push    ebx
0x40DAAF: push    414h
0x40DAB4: call    sub_5790E0
0x40DAB9: add     esp, 8
0x40DABC: test    al, al
0x40DABE: jnz     short loc_40DAC9
0x40DAC0: call    sub_579BC0
0x40DAC5: test    al, al
0x40DAC7: jz      short loc_40DB37
0x40DAC9: mov     ecx, dword_B3A6B0
0x40DACF: push    2
0x40DAD1: call    sub_572E70
0x40DAD6: test    al, al
0x40DAD8: jnz     short loc_40DB37
0x40DADA: mov     eax, menuRenderedTexture
0x40DADF: cmp     eax, ebx
0x40DAE1: jz      short loc_40DB31
0x40DAE3: mov     ecx, g_textureManager; this
0x40DAE9: push    eax; a2
0x40DAEA: call    sub_7C1EE0
0x40DAEF: mov     esi, menuRenderedTexture
0x40DAF5: cmp     esi, ebx
0x40DAF7: jz      short loc_40DB1B
0x40DAF9: lea     eax, [esi+4]
0x40DAFC: push    eax; lpAddend
0x40DAFD: call    ds:InterlockedDecrement
0x40DB03: test    eax, eax
0x40DB05: jnz     short loc_40DB15
0x40DB07: cmp     esi, ebx
0x40DB09: jz      short loc_40DB15
0x40DB0B: mov     edx, [esi]
0x40DB0D: mov     eax, [edx]
0x40DB0F: push    1
0x40DB11: mov     ecx, esi
0x40DB13: call    eax
0x40DB15: mov     menuRenderedTexture, ebx
0x40DB1B: cmp     byte_B42D54, bl
0x40DB21: jz      short loc_40DB2B
0x40DB23: fldz
0x40DB25: fstp    flt_B42D50
0x40DB2B: mov     byte_B42D54, bl
0x40DB31: mov     byte_B33397, bl
0x40DB37: push    2
0x40DB39: call    nullsub_returnTrue_0arg
0x40DB3E: mov     ecx, dword_B3A6B0
0x40DB44: add     esp, 4
0x40DB47: push    1
0x40DB49: call    sub_572F60
0x40DB4E: cmp     dword_B3F940, ebx
0x40DB54: jz      short loc_40DB5B
0x40DB56: call    sub_701AB0
0x40DB5B: call    InterfaceManager_IsMenuMode
0x40DB60: test    al, al
0x40DB62: jnz     short loc_40DBAA
0x40DB64: mov     ecx, TES
0x40DB6A: cmp     [ecx+51h], bl
0x40DB6D: jnz     short loc_40DB74
0x40DB6F: cmp     [ecx+52h], bl
0x40DB72: jz      short loc_40DB80
0x40DB74: cmp     [ecx+52h], bl
0x40DB77: jnz     short loc_40DB80
0x40DB79: push    ebx
0x40DB7A: push    ebx
0x40DB7B: call    sub_445DF0
0x40DB80: mov     ecx, g_worldScenegraph
0x40DB86: call    sub_411330
0x40DB8B: fld     flt_B33E9C
0x40DB91: push    ecx
0x40DB92: mov     ecx, offset TimeGlobals
0x40DB97: fstp    [esp+24h+var_24]; float
0x40DB9A: call    sub_4029E0
0x40DB9F: mov     ecx, TES
0x40DBA5: call    sub_440400
0x40DBAA: push    ebx
0x40DBAB: call    InterfaceManager_IsMenuMode
0x40DBB0: mov     ecx, [ebp+24h]
0x40DBB3: push    eax
0x40DBB4: call    sub_6AE860
0x40DBB9: mov     byte_BA7A04, bl
0x40DBBF: mov     byte_B3C089, bl
0x40DBC5: mov     byte_B3B77C, bl
0x40DBCB: mov     byte_B333B8, bl
0x40DBD1: call    sub_4F5DB0
0x40DBD6: mov     ecx, TES
0x40DBDC: call    ScriptRunner_RunScript
0x40DBE1: mov     ecx, offset ActorProcessManager_ptr
0x40DBE6: mov     dword_B3BCF4, ebx
0x40DBEC: call    sub_674A20
0x40DBF1: mov     dword_B3BCF4, 32h ; '2'
0x40DBFB: call    InterfaceManager_IsMenuMode
0x40DC00: test    al, al
0x40DC02: jz      short loc_40DC15
0x40DC04: mov     ecx, dword_B3A6B0
0x40DC0A: push    2
0x40DC0C: call    sub_572E30
0x40DC11: test    al, al
0x40DC13: jz      short loc_40DC61
0x40DC15: mov     ecx, offset ActorProcessManager_ptr
0x40DC1A: mov     dword_B333BC, ebx
0x40DC20: mov     dword_B3BCF4, 64h ; 'd'
0x40DC2A: call    sub_678510
0x40DC2F: mov     ecx, offset ActorProcessManager_ptr
0x40DC34: mov     dword_B3BCF4, 0C8h ; 'È'
0x40DC3E: call    sub_674A20
0x40DC43: mov     ecx, offset ActorProcessManager_ptr
0x40DC48: mov     dword_B3BCF4, 12Ch
0x40DC52: call    sub_674950
0x40DC57: mov     dword_B3BCF4, 190h
0x40DC61: call    InterfaceManager_IsMenuMode
0x40DC66: test    al, al
0x40DC68: mov     ecx, TESDataHandler_g_PlayerRef
0x40DC6E: jz      short loc_40DC7A
0x40DC70: call    sub_65E900
0x40DC75: jmp     loc_40DD53
0x40DC7A: mov     edx, [ecx]
0x40DC7C: mov     eax, [edx+154h]
0x40DC82: call    eax
0x40DC84: test    eax, eax
0x40DC86: jz      short loc_40DCA2
0x40DC88: mov     ecx, TESDataHandler_g_PlayerRef
0x40DC8E: fld     flt_B33E9C
0x40DC94: mov     edx, [ecx]
0x40DC96: mov     eax, [edx+228h]
0x40DC9C: push    ecx
0x40DC9D: fstp    [esp+24h+var_24]
0x40DCA0: call    eax
0x40DCA2: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40DCA8: call    TESObjectREFR_GetParentCell
0x40DCAD: mov     esi, eax
0x40DCAF: cmp     esi, ebx
0x40DCB1: mov     eax, TESDataHandler_g_PlayerRef
0x40DCB6: mov     ecx, [eax+2Ch]
0x40DCB9: mov     [esp+20h+var_C], ecx
0x40DCBD: mov     edx, [eax+30h]
0x40DCC0: mov     [esp+20h+var_8], edx
0x40DCC4: mov     eax, [eax+34h]
0x40DCC7: mov     [esp+20h+var_4], eax
0x40DCCB: jz      loc_40DD53
0x40DCD1: mov     ecx, esi; this
0x40DCD3: call    TESObjectCELL_IsInterior
0x40DCD8: test    al, al
0x40DCDA: jnz     short loc_40DD53
0x40DCDC: lea     ecx, [esp+20h+var_C]
0x40DCE0: push    ecx
0x40DCE1: mov     ecx, esi
0x40DCE3: call    sub_4CC540
0x40DCE8: test    al, al
0x40DCEA: jnz     short loc_40DD53
0x40DCEC: push    1; int
0x40DCEE: mov     ecx, esi; this
0x40DCF0: call    TESObjectCELL_GetWorldSpace
0x40DCF5: fld     [esp+24h+var_8]
0x40DCF9: mov     ecx, TESDataHandler
0x40DCFF: push    eax; int
0x40DD00: sub     esp, 8
0x40DD03: fstp    [esp+30h+var_2C]; int
0x40DD07: fld     [esp+30h+var_C]
0x40DD0B: fstp    [esp+30h+var_30]; int
0x40DD0E: call    sub_44A270
0x40DD13: mov     esi, eax
0x40DD15: cmp     esi, ebx
0x40DD17: jz      short loc_40DD53
0x40DD19: mov     al, [esi+26h]
0x40DD1C: cmp     al, 3
0x40DD1E: jz      short loc_40DD36
0x40DD20: cmp     al, 6
0x40DD22: jz      short loc_40DD36
0x40DD24: mov     ecx, TES
0x40DD2A: push    1
0x40DD2C: lea     edx, [esp+24h+var_C]
0x40DD30: push    edx
0x40DD31: call    sub_444FB0
0x40DD36: mov     eax, TESDataHandler_g_PlayerRef
0x40DD3B: push    eax; Concurrency::details::SchedulerBase *
0x40DD3C: mov     ecx, esi
0x40DD3E: call    sub_4D35D0
0x40DD43: call    InitBSShaderAccumulator
0x40DD48: cmp     eax, ebx
0x40DD4A: jz      short loc_40DD53
0x40DD4C: mov     ecx, eax
0x40DD4E: call    sub_7AA4D0
0x40DD53: mov     ecx, g_worldScenegraph
0x40DD59: mov     esi, [ecx+0DCh]
0x40DD5F: call    InterfaceManager_IsMenuMode
0x40DD64: push    eax; float
0x40DD65: push    esi; int
0x40DD66: call    sub_55FA50
0x40DD6B: add     esp, 8
0x40DD6E: call    InterfaceManager_IsMenuMode
0x40DD73: test    al, al
0x40DD75: jnz     loc_40DE3F
0x40DD7B: mov     eax, TESDataHandler_g_PlayerRef
0x40DD80: cmp     [eax+7F8h], bl
0x40DD86: jnz     loc_40DE3F
0x40DD8C: mov     ecx, TES
0x40DD92: push    1
0x40DD94: add     eax, 2Ch ; ','
0x40DD97: push    eax
0x40DD98: call    sub_444FB0
0x40DD9D: mov     ecx, TES
0x40DDA3: cmp     [ecx+51h], bl
0x40DDA6: jnz     short loc_40DDB1
0x40DDA8: cmp     [ecx+52h], bl
0x40DDAB: jz      loc_40DE3F
0x40DDB1: cmp     [ecx+34h], ebx
0x40DDB4: jnz     loc_40DE3F
0x40DDBA: call    TES__GetCurrentWorldspace
0x40DDBF: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40DDC5: mov     esi, eax
0x40DDC7: call    TESObjectREFR_GetWorldSpace
0x40DDCC: cmp     eax, esi
0x40DDCE: jz      short loc_40DE3F
0x40DDD0: mov     ecx, TESDataHandler_g_PlayerRef
0x40DDD6: mov     edx, [ecx]
0x40DDD8: mov     eax, [edx+174h]
0x40DDDE: lea     esi, [ecx+20h]
0x40DDE1: call    eax
0x40DDE3: mov     ecx, TESDataHandler_g_PlayerRef
0x40DDE9: mov     edx, [ecx]
0x40DDEB: mov     edi, eax
0x40DDED: mov     eax, [edx+174h]
0x40DDF3: push    ebx; char
0x40DDF4: call    eax
0x40DDF6: mov     ecx, TES
0x40DDFC: push    eax; float *
0x40DDFD: call    TES__GetCurrentWorldspace
0x40DE02: mov     ecx, eax; this
0x40DE04: call    TESWorldSpace__GetCellAtPos
0x40DE09: mov     ecx, [esi]
0x40DE0B: mov     edx, [esi+4]
0x40DE0E: push    eax; int
0x40DE0F: sub     esp, 0Ch
0x40DE12: mov     eax, esp
0x40DE14: mov     [eax], ecx
0x40DE16: mov     ecx, [esi+8]
0x40DE19: mov     [eax+4], edx
0x40DE1C: mov     edx, [edi]
0x40DE1E: mov     [eax+8], ecx
0x40DE21: mov     ecx, [edi+4]
0x40DE24: sub     esp, 0Ch
0x40DE27: mov     eax, esp
0x40DE29: mov     [eax], edx
0x40DE2B: mov     edx, [edi+8]
0x40DE2E: mov     [eax+4], ecx
0x40DE31: mov     ecx, TESDataHandler_g_PlayerRef; int
0x40DE37: mov     [eax+8], edx
0x40DE3A: call    sub_66EAF0
0x40DE3F: call    InterfaceManager_IsMenuMode
0x40DE44: test    al, al
0x40DE46: jz      short loc_40DE62
0x40DE48: call    InterfaceManager__IsOpenedMenuDialogue
0x40DE4D: test    al, al
0x40DE4F: jnz     short loc_40DE62
0x40DE51: mov     ecx, dword_B3A6B0
0x40DE57: push    2
0x40DE59: call    sub_572E30
0x40DE5E: test    al, al
0x40DE60: jz      short loc_40DEA6
0x40DE62: fld     flt_B33E9C
0x40DE68: push    ecx
0x40DE69: mov     ecx, offset ActorProcessManager_ptr
0x40DE6E: fstp    [esp+24h+var_24]
0x40DE71: call    sub_67ACA0
0x40DE76: call    InterfaceManager_IsMenuMode
0x40DE7B: test    al, al
0x40DE7D: jz      short loc_40DE83
0x40DE7F: fldz
0x40DE81: jmp     short loc_40DE8F
0x40DE83: fld     flt_B06530
0x40DE89: fmul    flt_B33E9C
0x40DE8F: fstp    [esp+20h+var_10]
0x40DE93: push    ecx
0x40DE94: fld     [esp+24h+var_10]
0x40DE98: mov     ecx, TES
0x40DE9E: fstp    [esp+24h+var_24]; float
0x40DEA1: call    sub_4424D0
0x40DEA6: call    InterfaceManager_IsMenuMode
0x40DEAB: test    al, al
0x40DEAD: jnz     short loc_40DEC6
0x40DEAF: fld     flt_B33E9C
0x40DEB5: push    1; a3
0x40DEB7: push    ecx
0x40DEB8: mov     ecx, MagicProjectileRoot; this
0x40DEBE: fstp    [esp+28h+a2]; a2
0x40DEC1: call    NiAVObject_UpdateNiAVObject
0x40DEC6: mov     eax, dword_B3F940
0x40DECB: cmp     eax, ebx
0x40DECD: jz      short loc_40DEDE
0x40DECF: mov     al, [eax+1B0h]
0x40DED5: test    al, al
0x40DED7: jz      short loc_40DEDE
0x40DED9: call    sub_701AD0
0x40DEDE: call    sub_578FE0
0x40DEE3: cmp     eax, 3F4h
0x40DEE8: jnz     short loc_40DEFA
0x40DEEA: call    ProcessSleepWaitMenu
0x40DEEF: test    al, al
0x40DEF1: jz      short loc_40DEFA
0x40DEF3: mov     ecx, ebp
0x40DEF5: call    sub_40D160
0x40DEFA: mov     ecx, ebp
0x40DEFC: call    InterfaceMgr_ShowDebugText
0x40DF01: call    sub_5791A0
0x40DF06: call    sub_5791E0
0x40DF0B: call    sub_579220
0x40DF10: cmp     byte_B3B72A, bl
0x40DF16: jz      short loc_40DF52
0x40DF18: mov     ecx, TES
0x40DF1E: push    ebx
0x40DF1F: push    1
0x40DF21: push    1
0x40DF23: mov     byte_B3B72A, bl
0x40DF29: call    sub_440AF0
0x40DF2E: mov     ecx, ioManager
0x40DF34: push    5
0x40DF36: call    sub_434020
0x40DF3B: fld     flt_B33A48
0x40DF41: push    ecx
0x40DF42: mov     ecx, dword_B3A6B0
0x40DF48: fstp    [esp+24h+var_24]; float
0x40DF4B: push    2; int
0x40DF4D: call    sub_5732D0
0x40DF52: mov     ecx, ebp
0x40DF54: call    sub_40D4D0
0x40DF59: cmp     byte_B34FA7, bl
0x40DF5F: jz      short loc_40DF6C
0x40DF61: call    sub_497E70
0x40DF66: mov     byte_B34FA7, bl
0x40DF6C: pop     edi
0x40DF6D: pop     esi
0x40DF6E: pop     ebp
0x40DF6F: pop     ebx
0x40DF70: add     esp, 10h
0x40DF73: retn
