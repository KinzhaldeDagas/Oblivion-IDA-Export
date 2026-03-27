0x6005F0: push    ebp
0x6005F1: mov     ebp, esp
0x6005F3: and     esp, 0FFFFFFF0h
0x6005F6: sub     esp, 134h
0x6005FC: mov     eax, ds:0B30AACh
0x600601: xor     eax, esp
0x600603: mov     [esp+134h+var_4], eax
0x60060A: mov     eax, [ebp+arg_0]
0x60060D: push    ebx
0x60060E: push    esi
0x60060F: mov     esi, ecx
0x600611: mov     edx, [esi]
0x600613: push    edi; int
0x600614: mov     [esp+140h+var_118], eax
0x600618: mov     eax, [edx+198h]
0x60061E: push    0
0x600620: call    eax
0x600622: test    al, al
0x600624: jnz     loc_60108B
0x60062A: mov     ecx, esi
0x60062C: mov     [esi+80h], al
0x600632: call    sub_5EF930
0x600637: mov     eax, ds:0B333C4h
0x60063C: cmp     esi, [eax+1E0h]
0x600642: jnz     short loc_60064E
0x600644: mov     dword ptr [eax+1E0h], 0
0x60064E: cmp     byte ptr ds:0B14E98h, 0
0x600655: jz      loc_600865
0x60065B: mov     edx, [esi]
0x60065D: mov     eax, [edx+170h]
0x600663: mov     ecx, esi
0x600665: xor     edi, edi
0x600667: call    eax
0x600669: mov     ebx, eax
0x60066B: test    ebx, ebx
0x60066D: jz      short loc_600681
0x60066F: mov     edx, [esi]
0x600671: mov     eax, [edx+190h]
0x600677: mov     ecx, esi
0x600679: call    eax
0x60067B: test    al, al
0x60067D: jz      short loc_600681
0x60067F: mov     edi, ebx
0x600681: mov     ecx, [edi+28h]
0x600684: shr     ecx, 1
0x600686: test    cl, 1
0x600689: jz      loc_600865
0x60068F: mov     eax, [esi+0B0h]
0x600695: cmp     eax, 3
0x600698: jz      loc_6007F5
0x60069E: cmp     eax, 5
0x6006A1: jz      loc_6007F5
0x6006A7: lea     ecx, [esi+44h]
0x6006AA: call    sub_424770
0x6006AF: mov     edx, [esi+58h]
0x6006B2: mov     ebx, [edx]
0x6006B4: mov     ecx, offset fEssentialDeathTime
0x6006B9: call    GameSetting_GetSafeFloatPointer
0x6006BE: fld     dword ptr [eax]
0x6006C0: mov     eax, [ebx+0A0h]
0x6006C6: push    ecx
0x6006C7: mov     ecx, [esi+58h]
0x6006CA: fstp    [esp+144h+duration]
0x6006CD: call    eax
0x6006CF: mov     edx, [esi]
0x6006D1: mov     eax, [edx+340h]
0x6006D7: push    0
0x6006D9: mov     ecx, esi
0x6006DB: call    eax
0x6006DD: mov     ecx, esi; int
0x6006DF: call    sub_5EAE70
0x6006E4: mov     ecx, [esi+58h]
0x6006E7: test    ecx, ecx
0x6006E9: jz      short loc_60071E
0x6006EB: mov     edx, [ecx]
0x6006ED: mov     eax, [edx+378h]
0x6006F3: call    eax
0x6006F5: test    eax, eax
0x6006F7: jz      short loc_60071E
0x6006F9: mov     ebx, [esi+58h]
0x6006FC: mov     edx, [ebx]
0x6006FE: mov     eax, [edx+37Ch]
0x600704: push    0
0x600706: mov     ecx, ebx
0x600708: call    eax
0x60070A: mov     edx, [ebx]
0x60070C: push    eax
0x60070D: mov     eax, [edx+378h]
0x600713: mov     ecx, ebx
0x600715: call    eax
0x600717: mov     ecx, eax
0x600719: call    sub_4D7300
0x60071E: mov     edx, [esi]
0x600720: mov     eax, [edx+380h]
0x600726: mov     ecx, esi
0x600728: call    eax
0x60072A: test    eax, eax
0x60072C: jnz     short loc_60073E
0x60072E: mov     edx, [esi]
0x600730: mov     eax, [edx+388h]
0x600736: mov     ecx, esi
0x600738: call    eax
0x60073A: test    eax, eax
0x60073C: jz      short loc_600745
0x60073E: mov     ecx, esi
0x600740: call    sub_5F0410
0x600745: lea     ecx, [esi+5Ch]
0x600748: call    MagicCaster_InitializeCasting???
0x60074D: push    6; newDeadState
0x60074F: mov     ecx, esi; this
0x600751: call    Actor_HandleDeathSTate????
0x600756: push    8
0x600758: mov     ecx, esi
0x60075A: call    Actor_GetBaseCalcAVi
0x60075F: mov     [esp+140h+var_114], eax
0x600763: fild    [esp+140h+var_114]
0x600767: mov     ecx, offset flt_B37D10
0x60076C: fstp    [esp+140h+var_114]
0x600770: call    GameSetting_GetSafeFloatPointer
0x600775: fld     dword ptr [eax]
0x600777: mov     edx, [esi]
0x600779: fmul    [esp+140h+var_114]
0x60077D: mov     eax, [edx+288h]
0x600783: push    8
0x600785: mov     ecx, esi
0x600787: fstp    [esp+144h+var_114]
0x60078B: call    eax
0x60078D: mov     edx, [esi]
0x60078F: fstp    dword ptr [esp+140h+var_128]
0x600793: fld     [esp+140h+var_114]
0x600797: mov     eax, [edx+2A4h]
0x60079D: fsub    dword ptr [esp+140h+var_128]
0x6007A1: push    0
0x6007A3: push    ecx
0x6007A4: mov     ecx, esi
0x6007A6: fstp    dword ptr [esp+148h+var_128]
0x6007AA: fld     dword ptr [esp+148h+var_128]
0x6007AE: fstp    [esp+148h+var_14C+4]
0x6007B1: push    8
0x6007B3: call    eax
0x6007B5: mov     ecx, ds:0B38908h
0x6007BB: push    ecx
0x6007BC: mov     ecx, esi; this
0x6007BE: call    TESObjectREFR_GetName
0x6007C3: push    eax
0x6007C4: lea     edx, [esp+148h+string]
0x6007C8: push    offset aSS; "%s %s"
0x6007CD: push    edx
0x6007CE: call    __sprintf
0x6007D3: fld     dword ptr ds:0A30634h
0x6007D9: add     esp, 0Ch
0x6007DC: fstp    [esp+144h+duration]; duration
0x6007DF: push    1; unk2
0x6007E1: lea     eax, [esp+148h+string]
0x6007E5: push    0; unk1
0x6007E7: push    eax; string
0x6007E8: call    GameUI_QueueMessage
0x6007ED: add     esp, 10h
0x6007F0: jmp     loc_600F6D
0x6007F5: push    8
0x6007F7: mov     ecx, esi
0x6007F9: call    Actor_GetBaseCalcAVi
0x6007FE: mov     edx, [esi]
0x600800: mov     dword ptr [esp+140h+var_128], eax
0x600804: fild    dword ptr [esp+140h+var_128]
0x600808: mov     eax, [edx+288h]
0x60080E: push    8
0x600810: fstp    dword ptr [esp+144h+var_128]
0x600814: mov     ecx, esi
0x600816: fld     dword ptr ds:0B37D10h
0x60081C: fmul    dword ptr [esp+144h+var_128]
0x600820: fstp    dword ptr [esp+144h+var_128]
0x600824: call    eax
0x600826: mov     edx, [esi]
0x600828: fstp    [esp+140h+var_114]
0x60082C: fld     dword ptr [esp+140h+var_128]
0x600830: mov     eax, [edx+2A4h]
0x600836: fsub    [esp+140h+var_114]
0x60083A: push    0
0x60083C: push    ecx
0x60083D: mov     ecx, esi
0x60083F: fstp    dword ptr [esp+148h+var_128]
0x600843: fld     dword ptr [esp+148h+var_128]
0x600847: fstp    [esp+148h+var_14C+4]
0x60084A: push    8
0x60084C: call    eax
0x60084E: pop     edi
0x60084F: pop     esi
0x600850: pop     ebx
0x600851: mov     ecx, [esp+134h+var_4]
0x600858: xor     ecx, esp
0x60085A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60085F: mov     esp, ebp
0x600861: pop     ebp
0x600862: retn    8
0x600865: mov     ecx, [esi+58h]
0x600868: test    ecx, ecx
0x60086A: jz      short loc_600878
0x60086C: mov     edx, [ecx]
0x60086E: mov     eax, [edx+204h]
0x600874: push    0
0x600876: call    eax
0x600878: mov     edi, [esp+140h+var_118]
0x60087C: test    edi, edi
0x60087E: jz      short loc_6008A8
0x600880: mov     ecx, [edi+58h]
0x600883: test    ecx, ecx
0x600885: jz      short loc_6008A8
0x600887: mov     edx, [ecx]
0x600889: mov     eax, [edx+3D0h]
0x60088F: call    eax
0x600891: test    eax, eax
0x600893: jz      short loc_6008A8
0x600895: mov     ecx, [edi+58h]
0x600898: mov     edx, [ecx]
0x60089A: mov     eax, [edx+3D0h]
0x6008A0: call    eax
0x6008A2: mov     [esp+140h+var_118], eax
0x6008A6: mov     edi, eax
0x6008A8: mov     ecx, esi; this
0x6008AA: call    Actor_IsNPC
0x6008AF: test    al, al
0x6008B1: jnz     short loc_6008BE
0x6008B3: mov     ecx, esi; this
0x6008B5: call    TESObjectREFR_GetOwner
0x6008BA: test    eax, eax
0x6008BC: jz      short loc_600901
0x6008BE: test    edi, edi
0x6008C0: jz      short loc_600901
0x6008C2: mov     ecx, edi; this
0x6008C4: call    Actor_IsNPC
0x6008C9: test    al, al
0x6008CB: jz      short loc_600901
0x6008CD: mov     ecx, [esi+58h]
0x6008D0: test    ecx, ecx
0x6008D2: jz      short loc_6008EB
0x6008D4: mov     edx, [ecx]
0x6008D6: mov     eax, [edx+148h]
0x6008DC: call    eax
0x6008DE: test    al, al
0x6008E0: jz      short loc_6008EB
0x6008E2: mov     byte ptr [esi+80h], 0
0x6008E9: jmp     short loc_600901
0x6008EB: push    esi
0x6008EC: mov     ecx, offset dword_B3BDB0
0x6008F1: call    sub_67CB50
0x6008F6: test    al, al
0x6008F8: setz    cl
0x6008FB: mov     [esi+80h], cl
0x600901: cmp     edi, ds:0B333C4h
0x600907: jnz     short loc_600957
0x600909: mov     edx, [esi]
0x60090B: mov     eax, [edx+1F8h]
0x600911: mov     ecx, esi
0x600913: call    eax
0x600915: test    al, al
0x600917: jnz     short loc_600957
0x600919: mov     ecx, esi; this
0x60091B: call    Actor_IsNPC
0x600920: test    al, al
0x600922: mov     eax, ds:0B333C4h
0x600927: jz      short loc_600950
0x600929: add     dword ptr [eax+670h], 1
0x600930: mov     ecx, esi
0x600932: call    sub_4DB760
0x600937: test    al, al
0x600939: jnz     short loc_600957
0x60093B: cmp     [esi+80h], al
0x600941: jz      short loc_600957
0x600943: mov     ecx, ds:0B333C4h
0x600949: call    sub_6608F0
0x60094E: jmp     short loc_600957
0x600950: add     dword ptr [eax+66Ch], 1
0x600957: mov     ecx, [esi+58h]
0x60095A: test    ecx, ecx
0x60095C: jz      short loc_600991
0x60095E: mov     edx, [ecx]
0x600960: mov     eax, [edx+378h]
0x600966: call    eax
0x600968: test    eax, eax
0x60096A: jz      short loc_600991
0x60096C: mov     ebx, [esi+58h]
0x60096F: mov     edx, [ebx]
0x600971: mov     eax, [edx+37Ch]
0x600977: push    0
0x600979: mov     ecx, ebx
0x60097B: call    eax
0x60097D: mov     edx, [ebx]
0x60097F: push    eax
0x600980: mov     eax, [edx+378h]
0x600986: mov     ecx, ebx
0x600988: call    eax
0x60098A: mov     ecx, eax
0x60098C: call    sub_4D7300
0x600991: mov     ecx, esi
0x600993: call    sub_5EA380
0x600998: cmp     esi, ds:0B333C4h
0x60099E: jz      short loc_6009A3
0x6009A0: mov     [esi+7Ch], edi
0x6009A3: mov     edx, [esi]
0x6009A5: mov     eax, [edx+380h]
0x6009AB: mov     ecx, esi
0x6009AD: call    eax
0x6009AF: test    eax, eax
0x6009B1: jnz     short loc_6009C3
0x6009B3: mov     edx, [esi]
0x6009B5: mov     eax, [edx+388h]
0x6009BB: mov     ecx, esi
0x6009BD: call    eax
0x6009BF: test    eax, eax
0x6009C1: jz      short loc_6009CA
0x6009C3: mov     ecx, esi
0x6009C5: call    sub_5F0410
0x6009CA: lea     ecx, [esi+5Ch]
0x6009CD: call    MagicCaster_InitializeCasting???
0x6009D2: push    0
0x6009D4: push    0
0x6009D6: push    20h ; ' '
0x6009D8: mov     ecx, esi
0x6009DA: call    Actor_LoadAnimGroup?
0x6009DF: movzx   ebx, ax
0x6009E2: push    ebx
0x6009E3: call    sub_51AA00
0x6009E8: add     esp, 4
0x6009EB: cmp     eax, 20h ; ' '
0x6009EE: jnz     short loc_600A16
0x6009F0: mov     edx, [esi]
0x6009F2: mov     eax, [edx+164h]
0x6009F8: mov     ecx, esi
0x6009FA: call    eax
0x6009FC: push    0FFFFFFFFh
0x6009FE: push    1
0x600A00: push    ebx
0x600A01: mov     ecx, eax
0x600A03: call    ActorAnimData_PlayAnimGroup
0x600A08: mov     ecx, [esi+58h]
0x600A0B: mov     edx, [ecx]
0x600A0D: mov     eax, [edx+194h]
0x600A13: push    esi
0x600A14: call    eax
0x600A16: mov     ecx, [esi+58h]
0x600A19: test    ecx, ecx
0x600A1B: jz      loc_600B5D
0x600A21: mov     edx, [ecx]
0x600A23: mov     eax, [edx+4B4h]
0x600A29: call    eax
0x600A2B: mov     ecx, [esi+58h]
0x600A2E: mov     edx, [ecx]
0x600A30: mov     eax, [edx+8]
0x600A33: call    eax
0x600A35: test    eax, eax
0x600A37: jnz     loc_600B5D
0x600A3D: mov     eax, ds:0B333C4h
0x600A42: cmp     esi, eax
0x600A44: jz      short loc_600A74
0x600A46: cmp     byte ptr ds:0B333B8h, 0
0x600A4D: jz      short loc_600A74
0x600A4F: push    0
0x600A51: push    eax
0x600A52: mov     ecx, esi
0x600A54: call    TesObjectREF_GetDistance
0x600A59: fstp    dword ptr [esp+140h+var_128]
0x600A5D: fld     dword ptr [esp+140h+var_128]
0x600A61: fld     dword ptr ds:0B37D78h
0x600A67: fcompp
0x600A69: fnstsw  ax
0x600A6B: test    ah, 1
0x600A6E: jnz     loc_600B5D
0x600A74: mov     edx, [esi]
0x600A76: mov     eax, [edx+170h]
0x600A7C: mov     ecx, esi
0x600A7E: call    eax
0x600A80: cmp     byte ptr [eax+4], 24h ; '$'
0x600A84: mov     ecx, esi; this
0x600A86: jnz     loc_600B4A
0x600A8C: call    Actor_IsCreature
0x600A91: test    al, al
0x600A93: jz      short loc_600AB0
0x600A95: mov     edx, [esi]
0x600A97: mov     eax, [edx+170h]
0x600A9D: mov     ecx, esi
0x600A9F: call    eax
0x600AA1: test    eax, eax
0x600AA3: jz      short loc_600AB0
0x600AA5: push    8
0x600AA7: mov     ecx, eax
0x600AA9: call    sub_51CEC0
0x600AAE: jmp     short loc_600AB2
0x600AB0: xor     eax, eax
0x600AB2: test    eax, eax
0x600AB4: mov     ecx, ds:0B33398h
0x600ABA: mov     ebx, [ecx+24h]
0x600ABD: jz      loc_600B5D
0x600AC3: test    ebx, ebx
0x600AC5: jz      loc_600B5D
0x600ACB: mov     eax, [eax+0Ch]
0x600ACE: push    0
0x600AD0: push    102h
0x600AD5: push    eax
0x600AD6: mov     ecx, ebx
0x600AD8: call    OSGLobals_PlaySound
0x600ADD: mov     edi, eax
0x600ADF: test    edi, edi
0x600AE1: jz      short loc_600B5D
0x600AE3: mov     edx, [esi]
0x600AE5: mov     eax, [edx+174h]
0x600AEB: mov     ecx, esi
0x600AED: call    eax
0x600AEF: mov     ecx, [eax]
0x600AF1: mov     edx, [eax+4]
0x600AF4: mov     eax, [eax+8]
0x600AF7: sub     esp, 0Ch
0x600AFA: mov     [esp+14Ch+var_120], eax
0x600AFE: fld     [esp+14Ch+var_120]
0x600B02: fstp    [esp+14Ch+duration]; float
0x600B06: mov     dword ptr [esp+14Ch+var_128+4], edx
0x600B0A: fld     dword ptr [esp+14Ch+var_128+4]
0x600B0E: mov     dword ptr [esp+14Ch+var_128], ecx
0x600B12: fstp    [esp+14Ch+var_14C+4]; float
0x600B16: mov     ecx, edi
0x600B18: fld     dword ptr [esp+14Ch+var_128]
0x600B1C: fstp    [esp+14Ch+var_14C]; float
0x600B1F: call    sub_6B7360
0x600B24: mov     ecx, [edi]
0x600B26: push    esi
0x600B27: push    ecx
0x600B28: mov     ecx, ebx
0x600B2A: call    sub_6AC3E0
0x600B2F: push    0
0x600B31: mov     ecx, edi
0x600B33: call    sub_6B7190
0x600B38: mov     ecx, edi; this
0x600B3A: call    sub_6B73E0
0x600B3F: push    edi
0x600B40: call    FormHeapFree
0x600B45: add     esp, 4
0x600B48: jmp     short loc_600B5D
0x600B4A: mov     edx, [esi]
0x600B4C: mov     eax, [esp+140h+var_118]
0x600B50: mov     edx, [edx+308h]
0x600B56: push    1
0x600B58: push    1
0x600B5A: push    eax
0x600B5B: call    edx
0x600B5D: push    1; newDeadState
0x600B5F: mov     ecx, esi; this
0x600B61: call    Actor_HandleDeathSTate????
0x600B66: cmp     esi, ds:0B333C4h
0x600B6C: mov     eax, ds:0B33398h
0x600B71: mov     ebx, [eax+24h]
0x600B74: jnz     short loc_600B91
0x600B76: test    ebx, ebx
0x600B78: jz      short loc_600B91
0x600B7A: push    0
0x600B7C: push    offset a_DataMusicSp_0; ".\\Data\\Music\\Special\\death.mp3"
0x600B81: push    8
0x600B83: mov     ecx, ebx
0x600B85: call    SoundManager_OpenMusicFile
0x600B8A: mov     ecx, ebx
0x600B8C: call    SoundManager_PlayMusic
0x600B91: mov     ecx, [esi+58h]
0x600B94: test    ecx, ecx
0x600B96: jz      short loc_600BB7
0x600B98: mov     edx, [ecx]
0x600B9A: mov     eax, [edx+0E8h]
0x600BA0: push    esi
0x600BA1: call    eax
0x600BA3: test    eax, eax
0x600BA5: jz      short loc_600BB7
0x600BA7: mov     edx, [eax]
0x600BA9: push    0
0x600BAB: mov     ecx, eax
0x600BAD: mov     eax, [edx+9Ch]
0x600BB3: push    1
0x600BB5: call    eax
0x600BB7: mov     ecx, ds:0B333C4h; this
0x600BBD: cmp     esi, ecx
0x600BBF: jnz     short loc_600BD1
0x600BC1: cmp     byte ptr [ecx+588h], 0
0x600BC8: jnz     short loc_600BD1
0x600BCA: push    0; a1
0x600BCC: call    TogglePOV
0x600BD1: mov     ebx, [esi+58h]
0x600BD4: test    ebx, ebx
0x600BD6: jz      short loc_600C07
0x600BD8: mov     edx, [ebx]
0x600BDA: mov     eax, [edx+8]
0x600BDD: mov     ecx, ebx
0x600BDF: call    eax
0x600BE1: test    eax, eax
0x600BE3: jnz     short loc_600C07
0x600BE5: mov     al, [ebx+16Ah]
0x600BEB: test    al, al
0x600BED: mov     byte ptr [esp+140h+var_128], al
0x600BF1: jz      short loc_600C07
0x600BF3: mov     ecx, dword ptr [esp+140h+var_128]
0x600BF7: push    ecx
0x600BF8: push    esi
0x600BF9: call    sub_693210
0x600BFE: add     esp, 8
0x600C01: mov     [ebx+16Ah], al
0x600C07: mov     ecx, [esi+58h]
0x600C0A: test    ecx, ecx
0x600C0C: jz      short loc_600C66
0x600C0E: mov     edx, [ecx]
0x600C10: mov     eax, [edx+20h]
0x600C13: call    eax
0x600C15: mov     ebx, [esi+58h]
0x600C18: mov     edi, [ebx]
0x600C1A: mov     ecx, offset TimeGlobals
0x600C1F: add     edi, 4F4h
0x600C25: call    TimeGlobals_GetGameDaysPassed
0x600C2A: test    eax, eax
0x600C2C: mov     dword ptr [esp+140h+var_128], eax
0x600C30: fild    dword ptr [esp+140h+var_128]
0x600C34: jge     short loc_600C3C
0x600C36: fadd    dword ptr ds:0A2FC78h
0x600C3C: fmul    qword ptr ds:0A2F920h
0x600C42: mov     ecx, offset TimeGlobals
0x600C47: fstp    [esp+140h+var_128]
0x600C4B: call    TimeGlobals_GetGameHour
0x600C50: fadd    [esp+140h+var_128]
0x600C54: mov     edx, [edi]
0x600C56: push    ecx
0x600C57: mov     ecx, ebx
0x600C59: fstp    dword ptr [esp+144h+var_128]
0x600C5D: fld     dword ptr [esp+144h+var_128]
0x600C61: fstp    [esp+144h+duration]
0x600C64: call    edx
0x600C66: mov     eax, [esi]
0x600C68: mov     edx, [eax+170h]
0x600C6E: mov     ecx, esi
0x600C70: xor     edi, edi
0x600C72: call    edx
0x600C74: mov     ebx, eax
0x600C76: test    ebx, ebx
0x600C78: jz      short loc_600C8C
0x600C7A: mov     eax, [esi]
0x600C7C: mov     edx, [eax+190h]
0x600C82: mov     ecx, esi
0x600C84: call    edx
0x600C86: test    al, al
0x600C88: jz      short loc_600C8C
0x600C8A: mov     edi, ebx
0x600C8C: mov     ecx, ds:0B333A0h
0x600C92: push    1
0x600C94: push    edi
0x600C95: call    sub_440FA0
0x600C9A: mov     eax, [esi]
0x600C9C: mov     edx, [eax+334h]
0x600CA2: push    1
0x600CA4: mov     ecx, esi
0x600CA6: call    edx
0x600CA8: test    al, al
0x600CAA: jz      short loc_600CBA
0x600CAC: mov     eax, [esi]
0x600CAE: mov     edx, [eax+340h]
0x600CB4: push    0
0x600CB6: mov     ecx, esi
0x600CB8: call    edx
0x600CBA: mov     eax, [esi]
0x600CBC: mov     edx, [eax+354h]
0x600CC2: mov     ecx, esi
0x600CC4: call    edx
0x600CC6: test    al, al
0x600CC8: jz      short loc_600CD2
0x600CCA: lea     ecx, [esi+44h]; this
0x600CCD: call    sub_4246F0
0x600CD2: mov     ebx, [esi+3Ch]
0x600CD5: mov     ecx, esi; this
0x600CD7: call    MobileObject_GetCharProxy
0x600CDC: test    eax, eax
0x600CDE: jz      short loc_600D07
0x600CE0: mov     ecx, esi; this
0x600CE2: call    MobileObject_GetCharProxy
0x600CE7: test    eax, eax
0x600CE9: jz      short loc_600D07
0x600CEB: mov     eax, [eax+8]
0x600CEE: test    eax, eax
0x600CF0: jz      short loc_600D07
0x600CF2: mov     ecx, eax
0x600CF4: call    sub_8AC0A0
0x600CF9: push    eax
0x600CFA: lea     eax, [esp+144h+var_128]
0x600CFE: push    eax
0x600CFF: call    sub_43F3E0
0x600D04: add     esp, 8
0x600D07: cmp     esi, ds:0B333C4h
0x600D0D: mov     ecx, esi
0x600D0F: jnz     short loc_600D1A
0x600D11: push    1
0x600D13: call    sub_65AC20
0x600D18: jmp     short loc_600D24
0x600D1A: mov     edx, [esi]
0x600D1C: mov     eax, [edx+1C8h]
0x600D22: call    eax
0x600D24: mov     ecx, [esi+58h]
0x600D27: test    ecx, ecx
0x600D29: jz      loc_600EEE
0x600D2F: mov     edx, [ecx]
0x600D31: mov     eax, [edx+8]
0x600D34: call    eax
0x600D36: test    eax, eax
0x600D38: jnz     loc_600EEE
0x600D3E: mov     ecx, [esi+58h]
0x600D41: fld     dword ptr ds:0B36C80h
0x600D47: mov     edx, [ecx]
0x600D49: mov     eax, [edx+364h]
0x600D4F: push    ecx
0x600D50: fstp    [esp+144h+duration]
0x600D53: call    eax
0x600D55: mov     ecx, [esi+58h]
0x600D58: mov     edx, [ecx]
0x600D5A: mov     eax, [edx+2E4h]
0x600D60: call    eax
0x600D62: test    eax, eax
0x600D64: jz      loc_600E12
0x600D6A: mov     ecx, [esi+58h]
0x600D6D: mov     edx, [ecx]
0x600D6F: mov     eax, [edx+2E4h]
0x600D75: call    eax
0x600D77: cmp     eax, 6
0x600D7A: jz      loc_600E12
0x600D80: mov     edx, [esi]
0x600D82: mov     eax, [edx+1A0h]
0x600D88: mov     ecx, esi
0x600D8A: call    eax
0x600D8C: test    al, al
0x600D8E: jz      loc_600E89
0x600D94: push    0
0x600D96: push    ebx
0x600D97: call    sub_8A5580
0x600D9C: mov     edx, [esi]
0x600D9E: mov     eax, [edx+1E0h]
0x600DA4: add     esp, 8
0x600DA7: mov     ecx, esi
0x600DA9: call    eax
0x600DAB: push    ecx
0x600DAC: lea     ecx, [esp+144h+var_104]
0x600DB0: fstp    [esp+144h+duration]; float
0x600DB3: call    NiMatrix33_InitRotationTransform
0x600DB8: fldz
0x600DBA: fst     dword ptr [esp+140h+var_128]
0x600DBE: lea     ecx, [esp+140h+var_128]
0x600DC2: fld     dword ptr ds:0A31E2Ch
0x600DC8: push    ecx
0x600DC9: fstp    dword ptr [esp+144h+var_128+4]
0x600DCD: lea     edx, [esp+144h+var_110]
0x600DD1: push    edx
0x600DD2: lea     ecx, [esp+148h+var_104]
0x600DD6: fstp    [esp+148h+var_120]
0x600DDA: call    sub_7101F0
0x600DDF: mov     ecx, [eax]
0x600DE1: mov     dword ptr [esp+140h+var_128], ecx
0x600DE5: mov     edx, [eax+4]
0x600DE8: mov     dword ptr [esp+140h+var_128+4], edx
0x600DEC: mov     eax, [eax+8]
0x600DEF: lea     ecx, [esp+140h+var_128]
0x600DF3: push    ecx
0x600DF4: lea     edx, [esp+144h+var_E0]
0x600DF8: push    edx
0x600DF9: mov     [esp+148h+var_120], eax
0x600DFD: call    sub_4529E0
0x600E02: lea     eax, [esp+148h+var_E0]
0x600E06: push    eax
0x600E07: push    ebx
0x600E08: call    sub_536660
0x600E0D: add     esp, 10h
0x600E10: jmp     short loc_600E89
0x600E12: mov     edx, [esi]
0x600E14: mov     eax, [edx+1E0h]
0x600E1A: mov     ecx, esi
0x600E1C: call    eax
0x600E1E: push    ecx
0x600E1F: lea     ecx, [esp+144h+var_104]
0x600E23: fstp    [esp+144h+duration]; float
0x600E26: call    NiMatrix33_InitRotationTransform
0x600E2B: fldz
0x600E2D: fst     dword ptr [esp+140h+var_128]
0x600E31: lea     ecx, [esp+140h+var_128]
0x600E35: fld1
0x600E37: push    ecx
0x600E38: fstp    dword ptr [esp+144h+var_128+4]
0x600E3C: lea     edx, [esp+144h+var_110]
0x600E40: push    edx
0x600E41: lea     ecx, [esp+148h+var_104]
0x600E45: fstp    [esp+148h+var_120]
0x600E49: call    sub_7101F0
0x600E4E: mov     ecx, [eax]
0x600E50: push    0; a4
0x600E52: mov     dword ptr [esp+144h+var_128], ecx
0x600E56: mov     edx, [eax+4]
0x600E59: push    1; a3
0x600E5B: mov     dword ptr [esp+148h+var_128+4], edx
0x600E5F: mov     eax, [eax+8]
0x600E62: push    6; a2
0x600E64: push    ebx; a1
0x600E65: mov     [esp+150h+var_120], eax
0x600E69: call    sub_88D070
0x600E6E: fldz
0x600E70: add     esp, 10h
0x600E73: push    0; int
0x600E75: push    ecx
0x600E76: fstp    [esp+148h+var_14C+4]; float
0x600E79: push    1; int
0x600E7B: lea     ecx, [esp+14Ch+var_128]
0x600E7F: push    ecx; int
0x600E80: push    ebx; int
0x600E81: call    sub_8AB440
0x600E86: add     esp, 14h
0x600E89: mov     edx, ds:0B3B914h
0x600E8F: cmp     edx, ds:0B148E4h
0x600E95: jle     short loc_600EA7
0x600E97: mov     eax, [esi]
0x600E99: mov     edx, [eax+278h]
0x600E9F: mov     ecx, esi
0x600EA1: call    edx
0x600EA3: test    al, al
0x600EA5: jnz     short loc_600F03
0x600EA7: mov     ecx, [esi+58h]
0x600EAA: test    ecx, ecx
0x600EAC: jz      short loc_600F03
0x600EAE: mov     eax, [ecx]
0x600EB0: mov     edx, [eax+3D0h]
0x600EB6: call    edx
0x600EB8: test    eax, eax
0x600EBA: jnz     short loc_600F03
0x600EBC: push    eax; Seed
0x600EBD: call    GetRandomLargeInteger?
0x600EC2: cdq
0x600EC3: mov     ecx, 64h ; 'd'
0x600EC8: idiv    ecx
0x600ECA: add     esp, 4
0x600ECD: cmp     edx, ds:0B378B0h
0x600ED3: jle     short loc_600EE5
0x600ED5: mov     edx, [esi]
0x600ED7: mov     eax, [edx+278h]
0x600EDD: mov     ecx, esi
0x600EDF: call    eax
0x600EE1: test    al, al
0x600EE3: jnz     short loc_600F03
0x600EE5: mov     ecx, esi
0x600EE7: call    sub_5F5D10
0x600EEC: jmp     short loc_600F03
0x600EEE: mov     ecx, esi
0x600EF0: call    sub_5E9E70
0x600EF5: mov     ecx, esi
0x600EF7: call    RunScripts
0x600EFC: mov     byte ptr [esi+0C0h], 1
0x600F03: cmp     dword ptr [esi+58h], 0
0x600F07: jz      short loc_600F4F
0x600F09: mov     ecx, esi; int
0x600F0B: call    sub_5EAE70
0x600F10: mov     ecx, [esi+58h]
0x600F13: mov     ecx, [ecx+8]
0x600F16: test    ecx, ecx
0x600F18: jz      short loc_600F36
0x600F1A: call    sub_5660A0
0x600F1F: test    al, al
0x600F21: jz      short loc_600F36
0x600F23: mov     edx, [esi+58h]
0x600F26: mov     ecx, [edx+8]
0x600F29: test    ecx, ecx
0x600F2B: jz      short loc_600F36
0x600F2D: mov     eax, [ecx]
0x600F2F: mov     edx, [eax+10h]
0x600F32: push    1
0x600F34: call    edx
0x600F36: mov     ecx, [esi+58h]
0x600F39: mov     eax, [ecx]
0x600F3B: mov     edx, [eax+178h]
0x600F41: push    0
0x600F43: call    edx
0x600F45: mov     eax, [esi+58h]
0x600F48: mov     dword ptr [eax+8], 0
0x600F4F: cmp     byte ptr ds:0B3B908h, 0
0x600F56: jz      short loc_600F6D
0x600F58: mov     ecx, esi; this
0x600F5A: call    TESObjectREFR_GetName
0x600F5F: push    eax
0x600F60: push    offset a_20sIsDead; "%.20s is dead!"
0x600F65: call    Interface_ConsolePrint
0x600F6A: add     esp, 8
0x600F6D: cmp     byte ptr ds:0B148C4h, 0
0x600F74: jz      loc_60108B
0x600F7A: cmp     [esp+140h+var_118], 0
0x600F7F: jz      loc_60103C
0x600F85: mov     ecx, [esp+140h+var_118]
0x600F89: mov     edx, [ecx+0Ch]
0x600F8C: mov     eax, [ecx]
0x600F8E: mov     dword ptr [esp+140h+var_128], edx
0x600F92: mov     edx, [eax+170h]
0x600F98: xor     edi, edi
0x600F9A: call    edx
0x600F9C: mov     ebx, eax
0x600F9E: test    ebx, ebx
0x600FA0: jz      short loc_600FB6
0x600FA2: mov     ecx, [esp+140h+var_118]
0x600FA6: mov     eax, [ecx]
0x600FA8: mov     edx, [eax+190h]
0x600FAE: call    edx
0x600FB0: test    al, al
0x600FB2: jz      short loc_600FB6
0x600FB4: mov     edi, ebx
0x600FB6: mov     edi, [edi+0A4h]
0x600FBC: test    edi, edi
0x600FBE: mov     [esp+140h+var_118], edi
0x600FC2: jnz     short loc_600FCC
0x600FC4: mov     [esp+140h+var_118], offset EmptyString
0x600FCC: mov     eax, [esi+0Ch]
0x600FCF: mov     edx, [esi]
0x600FD1: mov     [esp+140h+var_114], eax
0x600FD5: mov     eax, [edx+170h]
0x600FDB: mov     ecx, esi
0x600FDD: xor     ebx, ebx
0x600FDF: call    eax
0x600FE1: mov     edi, eax
0x600FE3: test    edi, edi
0x600FE5: jz      short loc_600FF9
0x600FE7: mov     edx, [esi]
0x600FE9: mov     eax, [edx+190h]
0x600FEF: mov     ecx, esi
0x600FF1: call    eax
0x600FF3: test    al, al
0x600FF5: jz      short loc_600FF9
0x600FF7: mov     ebx, edi
0x600FF9: mov     eax, [ebx+0A4h]
0x600FFF: test    eax, eax
0x601001: jnz     short loc_601008
0x601003: mov     eax, offset EmptyString
0x601008: mov     ecx, dword ptr [esp+140h+var_128]
0x60100C: mov     edx, [esp+140h+var_118]
0x601010: push    ecx
0x601011: mov     ecx, [esp+144h+var_114]
0x601015: push    edx
0x601016: push    ecx
0x601017: push    eax; ArgList
0x601018: push    offset aS08xWasKilledB; "'%s' (%08X) was killed by '%s' (%08X)."
0x60101D: call    PrintToLog???
0x601022: add     esp, 14h
0x601025: pop     edi
0x601026: pop     esi
0x601027: pop     ebx
0x601028: mov     ecx, [esp+134h+var_4]
0x60102F: xor     ecx, esp
0x601031: call    @__security_check_cookie@4; __security_check_cookie(x)
0x601036: mov     esp, ebp
0x601038: pop     ebp
0x601039: retn    8
0x60103C: mov     edx, [esi+0Ch]
0x60103F: mov     eax, [esi]
0x601041: mov     dword ptr [esp+140h+var_128], edx
0x601045: mov     edx, [eax+170h]
0x60104B: mov     ecx, esi
0x60104D: xor     ebx, ebx
0x60104F: call    edx
0x601051: mov     edi, eax
0x601053: test    edi, edi
0x601055: jz      short loc_601069
0x601057: mov     eax, [esi]
0x601059: mov     edx, [eax+190h]
0x60105F: mov     ecx, esi
0x601061: call    edx
0x601063: test    al, al
0x601065: jz      short loc_601069
0x601067: mov     ebx, edi
0x601069: mov     ebx, [ebx+0A4h]
0x60106F: test    ebx, ebx
0x601071: jnz     short loc_601078
0x601073: mov     ebx, offset EmptyString
0x601078: mov     eax, dword ptr [esp+140h+var_128]
0x60107C: push    eax
0x60107D: push    ebx; ArgList
0x60107E: push    offset aS08xHasDiedWit; "'%s' (%08X) has died with no attacker."
0x601083: call    PrintToLog???
0x601088: add     esp, 0Ch
0x60108B: mov     ecx, [esp+140h+var_4]
0x601092: pop     edi
0x601093: pop     esi
0x601094: pop     ebx
0x601095: xor     ecx, esp
0x601097: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60109C: mov     esp, ebp
0x60109E: pop     ebp
0x60109F: retn    8
