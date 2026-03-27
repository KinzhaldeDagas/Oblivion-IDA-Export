0x4B80E0: sub     esp, 2Ch
0x4B80E3: push    edi
0x4B80E4: mov     edi, [esp+30h+arg_0]
0x4B80E8: test    edi, edi
0x4B80EA: jz      loc_4B83A8
0x4B80F0: push    esi
0x4B80F1: mov     esi, [esp+34h+arg_4]
0x4B80F5: test    esi, esi
0x4B80F7: jz      loc_4B83A7
0x4B80FD: cmp     edi, esi
0x4B80FF: jz      loc_4B83A7
0x4B8105: mov     eax, [edi]
0x4B8107: mov     edx, [eax+170h]
0x4B810D: push    ebx
0x4B810E: push    0; int
0x4B8110: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4B8115: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4B811A: push    0; int
0x4B811C: mov     ecx, edi
0x4B811E: call    edx
0x4B8120: push    eax; void *
0x4B8121: call    OblivionDynamicCast
0x4B8126: add     esp, 14h
0x4B8129: push    0; int
0x4B812B: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4B8130: mov     ebx, eax
0x4B8132: mov     eax, [esi]
0x4B8134: mov     edx, [eax+170h]
0x4B813A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4B813F: push    0; int
0x4B8141: mov     ecx, esi
0x4B8143: mov     [esp+48h+var_1C], ebx
0x4B8147: call    edx
0x4B8149: push    eax; void *
0x4B814A: call    OblivionDynamicCast
0x4B814F: add     esp, 14h
0x4B8152: test    ebx, ebx
0x4B8154: mov     [esp+38h+var_28], eax
0x4B8158: jz      loc_4B83A6
0x4B815E: test    eax, eax
0x4B8160: jz      loc_4B83A6
0x4B8166: mov     ecx, edi; this
0x4B8168: call    GetTeleportExtraData
0x4B816D: test    eax, eax
0x4B816F: jnz     loc_4B83A6
0x4B8175: mov     ecx, esi; this
0x4B8177: call    GetTeleportExtraData
0x4B817C: test    eax, eax
0x4B817E: jnz     loc_4B83A6
0x4B8184: push    ebp
0x4B8185: mov     ecx, edi
0x4B8187: call    TESObjectREFR__GetTeleportData
0x4B818C: mov     ecx, esi
0x4B818E: mov     ebp, eax
0x4B8190: call    TESObjectREFR__GetTeleportData
0x4B8195: test    ebp, ebp
0x4B8197: mov     [esp+3Ch+var_20], eax
0x4B819B: jz      loc_4B839C
0x4B81A1: test    eax, eax
0x4B81A3: jz      loc_4B839C
0x4B81A9: mov     ecx, offset fRandomDoorDistance
0x4B81AE: call    GameSetting_GetSafeFloatPointer
0x4B81B3: fld     dword ptr [eax]
0x4B81B5: mov     ecx, offset flt_B35B2C
0x4B81BA: fstp    [esp+3Ch+arg_0]
0x4B81BE: call    GameSetting_GetSafeFloatPointer
0x4B81C3: fld     [esp+3Ch+arg_0]
0x4B81C7: fld     dword ptr [eax]
0x4B81C9: fadd    qword ptr ds:0A309F0h
0x4B81CF: fcomp   st(1)
0x4B81D1: fnstsw  ax
0x4B81D3: test    ah, 5
0x4B81D6: jnp     short loc_4B81EC
0x4B81D8: mov     ecx, offset flt_B35B2C
0x4B81DD: fstp    st
0x4B81DF: call    GameSetting_GetSafeFloatPointer
0x4B81E4: fld     dword ptr [eax]
0x4B81E6: fadd    qword ptr ds:0A309F0h
0x4B81EC: push    esi
0x4B81ED: fstp    [esp+40h+var_2C]
0x4B81F1: mov     ecx, ebp
0x4B81F3: call    TeleportData__SetLinkedDoor
0x4B81F8: mov     ecx, esi; this
0x4B81FA: call    TESObjectREFR__GetRandomTeleportMarkerReference
0x4B81FF: mov     ebx, eax
0x4B8201: test    ebx, ebx
0x4B8203: jz      short loc_4B8222
0x4B8205: mov     eax, [ebx]
0x4B8207: mov     edx, [eax+174h]
0x4B820D: mov     ecx, ebx
0x4B820F: call    edx
0x4B8211: push    eax
0x4B8212: mov     ecx, ebp
0x4B8214: call    TeleportData__SetTeleportPosition
0x4B8219: add     ebx, 20h ; ' '
0x4B821C: push    ebx
0x4B821D: jmp     loc_4B82BD
0x4B8222: fld     dword ptr ds:0A449C0h
0x4B8228: push    ecx
0x4B8229: lea     eax, [esp+40h+var_18]
0x4B822D: fstp    [esp+40h+var_40]; float
0x4B8230: push    eax; int
0x4B8231: mov     ecx, esi
0x4B8233: call    sub_4DD070
0x4B8238: mov     ecx, [esp+3Ch+var_28]
0x4B823C: test    byte ptr [ecx+64h], 2
0x4B8240: push    ecx
0x4B8241: lea     ecx, [esp+40h+var_18]
0x4B8245: jz      short loc_4B824D
0x4B8247: fld     [esp+40h+var_2C]
0x4B824B: jmp     short loc_4B8251
0x4B824D: fld     [esp+40h+arg_0]
0x4B8251: fstp    [esp+40h+var_40]; float
0x4B8254: call    NiPoint3__MutliplyByValue
0x4B8259: mov     edx, [esi]
0x4B825B: mov     eax, [edx+174h]
0x4B8261: mov     ecx, esi
0x4B8263: call    eax
0x4B8265: fld     dword ptr [eax+4]
0x4B8268: fadd    [esp+3Ch+var_18.y]
0x4B826C: lea     ecx, [esp+3Ch+var_C]
0x4B8270: push    ecx
0x4B8271: mov     ecx, ebp
0x4B8273: fstp    [esp+40h+var_28]
0x4B8277: fld     dword ptr [eax+8]
0x4B827A: fadd    [esp+40h+var_18.z]
0x4B827E: fstp    [esp+40h+var_24]
0x4B8282: fld     dword ptr [eax]
0x4B8284: fadd    [esp+40h+var_18.x]
0x4B8288: fstp    [esp+40h+var_C]
0x4B828C: fld     [esp+40h+var_28]
0x4B8290: fstp    [esp+40h+var_8]
0x4B8294: fld     [esp+40h+var_24]
0x4B8298: fstp    [esp+40h+var_4]
0x4B829C: call    TeleportData__SetTeleportPosition
0x4B82A1: fldz
0x4B82A3: lea     edx, [esp+3Ch+var_C]
0x4B82A7: fst     [esp+3Ch+var_C]
0x4B82AB: push    edx
0x4B82AC: fstp    [esp+40h+var_8]
0x4B82B0: fld     dword ptr [esi+28h]
0x4B82B3: fadd    qword ptr ds:0A3D5B8h
0x4B82B9: fstp    [esp+40h+var_4]
0x4B82BD: mov     ecx, ebp
0x4B82BF: call    TeleportData__SetTeleportRotation
0x4B82C4: mov     ebx, [esp+3Ch+var_20]
0x4B82C8: push    edi
0x4B82C9: mov     ecx, ebx
0x4B82CB: call    TeleportData__SetLinkedDoor
0x4B82D0: mov     ecx, edi; this
0x4B82D2: call    TESObjectREFR__GetRandomTeleportMarkerReference
0x4B82D7: mov     esi, eax
0x4B82D9: test    esi, esi
0x4B82DB: jz      short loc_4B82FA
0x4B82DD: mov     eax, [esi]
0x4B82DF: mov     edx, [eax+174h]
0x4B82E5: mov     ecx, esi
0x4B82E7: call    edx
0x4B82E9: push    eax
0x4B82EA: mov     ecx, ebx
0x4B82EC: call    TeleportData__SetTeleportPosition
0x4B82F1: add     esi, 20h ; ' '
0x4B82F4: push    esi
0x4B82F5: jmp     loc_4B8395
0x4B82FA: fld     dword ptr ds:0A449C0h
0x4B8300: push    ecx
0x4B8301: lea     eax, [esp+40h+var_18]
0x4B8305: fstp    [esp+40h+var_40]; float
0x4B8308: push    eax; int
0x4B8309: mov     ecx, edi
0x4B830B: call    sub_4DD070
0x4B8310: mov     ecx, [esp+3Ch+var_1C]
0x4B8314: test    byte ptr [ecx+64h], 2
0x4B8318: push    ecx
0x4B8319: lea     ecx, [esp+40h+var_18]
0x4B831D: jz      short loc_4B8325
0x4B831F: fld     [esp+40h+var_2C]
0x4B8323: jmp     short loc_4B8329
0x4B8325: fld     [esp+40h+arg_0]
0x4B8329: fstp    [esp+40h+var_40]; float
0x4B832C: call    NiPoint3__MutliplyByValue
0x4B8331: mov     edx, [edi]
0x4B8333: mov     eax, [edx+174h]
0x4B8339: mov     ecx, edi
0x4B833B: call    eax
0x4B833D: fld     dword ptr [eax+4]
0x4B8340: fadd    [esp+3Ch+var_18.y]
0x4B8344: lea     ecx, [esp+3Ch+var_C]
0x4B8348: push    ecx
0x4B8349: mov     ecx, ebx
0x4B834B: fstp    [esp+40h+arg_0]
0x4B834F: fld     dword ptr [eax+8]
0x4B8352: fadd    [esp+40h+var_18.z]
0x4B8356: fstp    [esp+40h+var_1C]
0x4B835A: fld     dword ptr [eax]
0x4B835C: fadd    [esp+40h+var_18.x]
0x4B8360: fstp    [esp+40h+var_C]
0x4B8364: fld     [esp+40h+arg_0]
0x4B8368: fstp    [esp+40h+var_8]
0x4B836C: fld     [esp+40h+var_1C]
0x4B8370: fstp    [esp+40h+var_4]
0x4B8374: call    TeleportData__SetTeleportPosition
0x4B8379: fldz
0x4B837B: lea     edx, [esp+3Ch+var_C]
0x4B837F: fst     [esp+3Ch+var_C]
0x4B8383: push    edx
0x4B8384: fstp    [esp+40h+var_8]
0x4B8388: fld     dword ptr [edi+28h]
0x4B838B: fadd    qword ptr ds:0A3D5B8h
0x4B8391: fstp    [esp+40h+var_4]
0x4B8395: mov     ecx, ebx
0x4B8397: call    TeleportData__SetTeleportRotation
0x4B839C: push    edi
0x4B839D: call    TESObjectREFR__AddToLowPathWorld
0x4B83A2: add     esp, 4
0x4B83A5: pop     ebp
0x4B83A6: pop     ebx
0x4B83A7: pop     esi
0x4B83A8: pop     edi
0x4B83A9: add     esp, 2Ch
0x4B83AC: retn
