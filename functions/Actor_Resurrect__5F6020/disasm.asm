0x5F6020: push    0FFFFFFFFh
0x5F6022: push    offset SEH_5F6020
0x5F6027: mov     eax, large fs:0
0x5F602D: push    eax
0x5F602E: push    esi
0x5F602F: push    edi
0x5F6030: mov     eax, ds:0B30AACh
0x5F6035: xor     eax, esp
0x5F6037: push    eax
0x5F6038: lea     eax, [esp+18h+var_C]
0x5F603C: mov     large fs:0, eax
0x5F6042: mov     esi, ecx
0x5F6044: mov     eax, [esi]
0x5F6046: mov     edx, [eax+8Ch]
0x5F604C: push    0
0x5F604E: call    edx
0x5F6050: lea     ecx, [esi+44h]
0x5F6053: call    sub_4212E0
0x5F6058: cmp     [esp+18h+useAnimBoh], 0
0x5F605D: mov     byte ptr [esi+0FCh], 0
0x5F6064: jz      loc_5F6179
0x5F606A: mov     eax, [esi]
0x5F606C: mov     edx, [eax+154h]
0x5F6072: mov     ecx, esi
0x5F6074: call    edx
0x5F6076: test    eax, eax
0x5F6078: jz      loc_5F6179
0x5F607E: mov     ecx, esi; this
0x5F6080: call    TESObjectREFR_GetParentCell
0x5F6085: test    eax, eax
0x5F6087: jz      loc_5F6179
0x5F608D: push    1; a2
0x5F608F: mov     ecx, esi; this
0x5F6091: call    TESObjectREFR_GetParentCell
0x5F6096: mov     ecx, ds:0B333A0h
0x5F609C: push    eax; a1
0x5F609D: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F60A2: test    al, al
0x5F60A4: jz      loc_5F6179
0x5F60AA: push    0; newDeadState
0x5F60AC: mov     ecx, esi; this
0x5F60AE: call    Actor_HandleDeathSTate????
0x5F60B3: mov     eax, [esi]
0x5F60B5: mov     edx, [eax+288h]
0x5F60BB: push    8
0x5F60BD: mov     ecx, esi
0x5F60BF: call    edx
0x5F60C1: fstp    [esp+18h+a1]
0x5F60C5: push    8
0x5F60C7: mov     ecx, esi
0x5F60C9: call    Actor_GetBaseCalcAVi
0x5F60CE: mov     dword ptr [esp+18h+useAnimBoh], eax
0x5F60D2: fild    dword ptr [esp+18h+useAnimBoh]
0x5F60D6: mov     eax, [esi]
0x5F60D8: mov     edx, [eax+2A4h]
0x5F60DE: fsub    [esp+18h+a1]
0x5F60E2: push    0
0x5F60E4: push    ecx
0x5F60E5: mov     ecx, esi
0x5F60E7: fstp    dword ptr [esp+20h+useAnimBoh]
0x5F60EB: fld     dword ptr [esp+20h+useAnimBoh]
0x5F60EF: fstp    [esp+20h+var_20]
0x5F60F2: push    8
0x5F60F4: call    edx
0x5F60F6: mov     eax, [esi]
0x5F60F8: mov     edx, [eax+174h]
0x5F60FE: mov     ecx, esi
0x5F6100: call    edx
0x5F6102: push    eax; a2
0x5F6103: mov     ecx, esi; this
0x5F6105: call    MobileObject_GetCharProxy
0x5F610A: mov     ecx, eax; this
0x5F610C: call    sub_452A10
0x5F6111: push    ecx
0x5F6112: mov     eax, esp
0x5F6114: mov     dword ptr [eax], 0
0x5F611A: mov     ecx, [esi+58h]
0x5F611D: mov     eax, [ecx]
0x5F611F: mov     edx, [eax+190h]
0x5F6125: mov     dword ptr [esp+1Ch+useAnimBoh], esp
0x5F6129: call    edx
0x5F612B: mov     eax, [esi]
0x5F612D: mov     edx, [eax+148h]
0x5F6133: mov     ecx, esi
0x5F6135: call    edx
0x5F6137: mov     ecx, [esi+58h]
0x5F613A: test    ecx, ecx
0x5F613C: jz      short loc_5F614A
0x5F613E: mov     eax, [ecx]
0x5F6140: mov     edx, [eax+2E8h]
0x5F6146: push    3
0x5F6148: call    edx
0x5F614A: mov     eax, [esi]
0x5F614C: mov     edx, [eax+164h]
0x5F6152: mov     ecx, esi
0x5F6154: call    edx
0x5F6156: test    eax, eax
0x5F6158: jz      def_5F628C; jumptable 005F628C default case
0x5F615E: mov     ecx, eax
0x5F6160: call    sub_4728C0
0x5F6165: mov     ecx, [esp+18h+var_C]
0x5F6169: mov     large fs:0, ecx
0x5F6170: pop     ecx
0x5F6171: pop     edi
0x5F6172: pop     esi
0x5F6173: add     esp, 0Ch
0x5F6176: retn    0Ch
0x5F6179: lea     ecx, [esi+88h]
0x5F617F: call    AVCollection_ClearArrayAndList
0x5F6184: push    0; newDeadState
0x5F6186: mov     ecx, esi; this
0x5F6188: call    Actor_HandleDeathSTate????
0x5F618D: mov     byte ptr [esi+0C0h], 0
0x5F6194: cmp     esi, ds:0B333C4h
0x5F619A: jz      short loc_5F61F8
0x5F619C: mov     ecx, [esi+58h]
0x5F619F: test    ecx, ecx
0x5F61A1: jz      short loc_5F61B6
0x5F61A3: mov     eax, [ecx]
0x5F61A5: mov     edx, [eax+8]
0x5F61A8: call    edx
0x5F61AA: push    eax
0x5F61AB: push    esi
0x5F61AC: mov     ecx, offset ActorProcessManager_ptr
0x5F61B1: call    sub_674550
0x5F61B6: mov     ecx, [esi+58h]
0x5F61B9: test    ecx, ecx
0x5F61BB: jz      short loc_5F61C5
0x5F61BD: mov     eax, [ecx]
0x5F61BF: mov     edx, [eax]
0x5F61C1: push    1
0x5F61C3: call    edx
0x5F61C5: push    90h; Size
0x5F61CA: call    FormHeapAlloc
0x5F61CF: add     esp, 4
0x5F61D2: mov     dword ptr [esp+18h+useAnimBoh], eax
0x5F61D6: test    eax, eax
0x5F61D8: mov     [esp+18h+var_4], 0
0x5F61E0: jz      short loc_5F61EB
0x5F61E2: mov     ecx, eax; this
0x5F61E4: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x5F61E9: jmp     short loc_5F61ED
0x5F61EB: xor     eax, eax
0x5F61ED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5F61F5: mov     [esi+58h], eax
0x5F61F8: cmp     byte ptr [esp+18h+a1], 0
0x5F61FD: jz      short loc_5F620D
0x5F61FF: mov     eax, [esi]
0x5F6201: mov     edx, [eax+184h]
0x5F6207: push    0
0x5F6209: mov     ecx, esi
0x5F620B: call    edx
0x5F620D: cmp     esi, ds:0B333C4h
0x5F6213: jz      def_5F628C; jumptable 005F628C default case
0x5F6219: mov     ecx, esi; this
0x5F621B: call    TESObjectREFR_GetParentCell
0x5F6220: mov     edi, eax
0x5F6222: test    edi, edi
0x5F6224: jz      short loc_5F6280
0x5F6226: mov     ecx, ds:0B333A0h
0x5F622C: push    0; a2
0x5F622E: push    edi; a1
0x5F622F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F6234: test    al, al
0x5F6236: jz      short loc_5F6280
0x5F6238: cmp     [esp+18h+a2], 0
0x5F623D: jz      short loc_5F6280
0x5F623F: mov     ecx, ds:0B333A0h
0x5F6245: push    0
0x5F6247: push    edi
0x5F6248: call    sub_440C80
0x5F624D: mov     ecx, ds:0B33A1Ch
0x5F6253: push    eax
0x5F6254: push    esi
0x5F6255: call    sub_438060
0x5F625A: cmp     byte ptr [edi+26h], 6
0x5F625E: mov     eax, [esi]
0x5F6260: mov     ecx, esi
0x5F6262: jnz     short loc_5F62B7
0x5F6264: mov     edx, [eax+1A4h]
0x5F626A: call    edx
0x5F626C: mov     ecx, [esp+18h+var_C]
0x5F6270: mov     large fs:0, ecx
0x5F6277: pop     ecx
0x5F6278: pop     edi
0x5F6279: pop     esi
0x5F627A: add     esp, 0Ch
0x5F627D: retn    0Ch
0x5F6280: mov     ecx, esi; this
0x5F6282: call    MobileObject_GetProcessLevel
0x5F6287: cmp     eax, 3; switch 4 cases
0x5F628A: ja      short def_5F628C; jumptable 005F628C default case
0x5F628C: jmp     ds:jpt_5F628C[eax*4]; switch jump
0x5F6293: mov     eax, [esi]; jumptable 005F628C case 0
0x5F6295: mov     edx, [eax+1A4h]
0x5F629B: mov     ecx, esi
0x5F629D: call    edx
0x5F629F: mov     ecx, [esp+18h+var_C]
0x5F62A3: mov     large fs:0, ecx
0x5F62AA: pop     ecx
0x5F62AB: pop     edi
0x5F62AC: pop     esi
0x5F62AD: add     esp, 0Ch
0x5F62B0: retn    0Ch
0x5F62B3: mov     eax, [esi]; jumptable 005F628C case 1
0x5F62B5: mov     ecx, esi
0x5F62B7: mov     edx, [eax+1B0h]
0x5F62BD: call    edx
0x5F62BF: mov     ecx, [esp+18h+var_C]
0x5F62C3: mov     large fs:0, ecx
0x5F62CA: pop     ecx
0x5F62CB: pop     edi
0x5F62CC: pop     esi
0x5F62CD: add     esp, 0Ch
0x5F62D0: retn    0Ch
0x5F62D3: mov     eax, [esi]; jumptable 005F628C case 2
0x5F62D5: mov     edx, [eax+1ACh]
0x5F62DB: mov     ecx, esi
0x5F62DD: call    edx
0x5F62DF: mov     ecx, [esp+18h+var_C]
0x5F62E3: mov     large fs:0, ecx
0x5F62EA: pop     ecx
0x5F62EB: pop     edi
0x5F62EC: pop     esi
0x5F62ED: add     esp, 0Ch
0x5F62F0: retn    0Ch
0x5F62F3: push    0; jumptable 005F628C case 3
0x5F62F5: push    0
0x5F62F7: push    0
0x5F62F9: push    3
0x5F62FB: push    esi
0x5F62FC: mov     ecx, offset ActorProcessManager_ptr
0x5F6301: call    sub_673A90
0x5F6306: mov     ecx, [esp+18h+var_C]; jumptable 005F628C default case
0x5F630A: mov     large fs:0, ecx
0x5F6311: pop     ecx
0x5F6312: pop     edi
0x5F6313: pop     esi
0x5F6314: add     esp, 0Ch
0x5F6317: retn    0Ch
