0x45C020: push    0FFFFFFFFh
0x45C022: push    offset SEH_45C020
0x45C027: mov     eax, large fs:0
0x45C02D: push    eax
0x45C02E: sub     esp, 14h
0x45C031: push    ebx
0x45C032: push    ebp
0x45C033: push    esi
0x45C034: push    edi
0x45C035: mov     eax, ds:0B30AACh
0x45C03A: xor     eax, esp
0x45C03C: push    eax
0x45C03D: lea     eax, [esp+34h+var_C]
0x45C041: mov     large fs:0, eax
0x45C047: mov     ebx, ecx
0x45C049: mov     [esp+34h+var_20], ebx
0x45C04D: mov     edi, [esp+34h+arg_0]
0x45C051: push    0; int
0x45C053: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45C058: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C05D: push    0; int
0x45C05F: push    edi; void *
0x45C060: call    OblivionDynamicCast
0x45C065: push    0; int
0x45C067: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x45C06C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C071: push    0; int
0x45C073: push    edi; void *
0x45C074: mov     esi, eax
0x45C076: call    OblivionDynamicCast
0x45C07B: mov     ebp, eax
0x45C07D: add     esp, 28h
0x45C080: test    ebp, ebp
0x45C082: mov     [esp+34h+var_1C], ebp
0x45C086: jz      short loc_45C0D6
0x45C088: cmp     dword ptr [ebp+58h], 0
0x45C08C: jnz     short loc_45C0D6
0x45C08E: push    90h; Size
0x45C093: call    FormHeapAlloc
0x45C098: add     esp, 4
0x45C09B: mov     [esp+34h+arg_0], eax
0x45C09F: test    eax, eax
0x45C0A1: mov     [esp+34h+var_4], 0
0x45C0A9: jz      short loc_45C0B4
0x45C0AB: mov     ecx, eax; this
0x45C0AD: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x45C0B2: jmp     short loc_45C0B6
0x45C0B4: xor     eax, eax
0x45C0B6: mov     [ebp+58h], eax
0x45C0B9: mov     eax, [ebp+0]
0x45C0BC: mov     edx, [eax+1C4h]
0x45C0C2: mov     ecx, ebp
0x45C0C4: mov     [esp+34h+var_4], 0FFFFFFFFh
0x45C0CC: call    edx
0x45C0CE: test    al, al
0x45C0D0: jz      loc_45C260
0x45C0D6: or      dword ptr [ebx+18h], 8
0x45C0DA: test    esi, esi
0x45C0DC: jz      loc_45C1EB
0x45C0E2: mov     ecx, esi; this
0x45C0E4: call    TESObjectREFR_GetContainer
0x45C0E9: test    eax, eax
0x45C0EB: jz      short loc_45C0FB
0x45C0ED: mov     eax, [esi]
0x45C0EF: mov     edx, [eax+184h]
0x45C0F5: push    0
0x45C0F7: mov     ecx, esi
0x45C0F9: call    edx
0x45C0FB: mov     ecx, esi; this
0x45C0FD: call    TESObjectREFR_GetParentCell
0x45C102: mov     ecx, esi; this
0x45C104: mov     edi, eax
0x45C106: call    TESObjectREFR_IsPersistent?
0x45C10B: test    al, al
0x45C10D: jz      loc_45C276
0x45C113: cmp     esi, ds:0B333C4h
0x45C119: jz      loc_45C276
0x45C11F: test    edi, edi
0x45C121: jz      short loc_45C132
0x45C123: mov     ecx, edi; this
0x45C125: call    TESForm_GetQuestItem
0x45C12A: test    al, al
0x45C12C: jz      loc_45C276
0x45C132: mov     eax, [esi]
0x45C134: mov     edx, [eax+190h]
0x45C13A: mov     ecx, esi
0x45C13C: call    edx
0x45C13E: test    al, al
0x45C140: jz      short loc_45C162
0x45C142: mov     ecx, esi
0x45C144: call    sub_5E1F60
0x45C149: mov     ecx, esi
0x45C14B: mov     edi, eax
0x45C14D: call    sub_5E1F40
0x45C152: test    edi, edi
0x45C154: mov     ebx, eax
0x45C156: jz      short loc_45C164
0x45C158: push    esi; Concurrency::details::SchedulerBase *
0x45C159: mov     ecx, edi
0x45C15B: call    sub_4D35D0
0x45C160: jmp     short loc_45C1CC
0x45C162: xor     ebx, ebx
0x45C164: mov     eax, [esi]
0x45C166: mov     edx, [eax+174h]
0x45C16C: mov     ecx, esi
0x45C16E: call    edx
0x45C170: mov     ecx, [eax]
0x45C172: mov     edx, [eax+4]
0x45C175: mov     eax, [eax+8]
0x45C178: mov     [esp+34h+var_18], ecx
0x45C17C: mov     [esp+34h+var_14], edx
0x45C180: mov     [esp+34h+var_10], eax
0x45C184: fld     [esp+34h+var_18]
0x45C188: fistp   [esp+34h+arg_0]
0x45C18C: mov     edi, [esp+34h+arg_0]
0x45C190: sar     edi, 0Ch
0x45C193: fld     [esp+34h+var_14]
0x45C197: fistp   [esp+34h+arg_0]
0x45C19B: mov     ebp, [esp+34h+arg_0]
0x45C19F: sar     ebp, 0Ch
0x45C1A2: test    ebx, ebx
0x45C1A4: jnz     short loc_45C1B3
0x45C1A6: mov     ecx, esi; this
0x45C1A8: call    TESObjectREFR_GetWorldSpace
0x45C1AD: mov     ebx, eax
0x45C1AF: test    ebx, ebx
0x45C1B1: jz      short loc_45C1C8
0x45C1B3: push    ebp; signed int
0x45C1B4: push    edi; signed int
0x45C1B5: mov     ecx, ebx; this
0x45C1B7: call    TESWorldSpace__GetCellAtCellCoord
0x45C1BC: test    eax, eax
0x45C1BE: jz      short loc_45C1C8
0x45C1C0: push    esi; Concurrency::details::SchedulerBase *
0x45C1C1: mov     ecx, eax
0x45C1C3: call    sub_4D35D0
0x45C1C8: mov     ebp, [esp+34h+var_1C]
0x45C1CC: mov     ebx, [esp+34h+var_20]
0x45C1D0: test    byte ptr [esp+34h+arg_4], 10h
0x45C1D5: jz      short loc_45C1EB
0x45C1D7: cmp     dword ptr [esi+3Ch], 0
0x45C1DB: jz      short loc_45C1EB
0x45C1DD: fld     dword ptr [esi+38h]
0x45C1E0: push    ecx
0x45C1E1: mov     ecx, esi
0x45C1E3: fstp    [esp+38h+var_38]; float
0x45C1E6: call    sub_4DB520
0x45C1EB: test    ebp, ebp
0x45C1ED: jz      short loc_45C25A
0x45C1EF: push    0; int
0x45C1F1: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45C1F6: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x45C1FB: push    0; int
0x45C1FD: push    ebp; void *
0x45C1FE: call    OblivionDynamicCast
0x45C203: mov     esi, eax
0x45C205: add     esp, 14h
0x45C208: test    esi, esi
0x45C20A: jz      short loc_45C25A
0x45C20C: mov     ecx, esi; this
0x45C20E: call    TESObjectREFR_GetHealth
0x45C213: fcomp   dword ptr ds:0A2FAA8h
0x45C219: fnstsw  ax
0x45C21B: test    ah, 41h
0x45C21E: jnz     short loc_45C25A
0x45C220: push    0; newDeadState
0x45C222: mov     ecx, esi; this
0x45C224: call    Actor_HandleDeathSTate????
0x45C229: cmp     dword ptr [esi+3Ch], 0
0x45C22D: jz      short loc_45C236
0x45C22F: mov     ecx, esi
0x45C231: call    sub_5F87F0
0x45C236: cmp     [esp+34h+arg_8], 0
0x45C23B: jnz     short loc_45C25A
0x45C23D: mov     eax, [esi+8]
0x45C240: mov     ecx, eax
0x45C242: shr     ecx, 0Bh
0x45C245: test    cl, 1
0x45C248: jnz     short loc_45C25A
0x45C24A: shr     eax, 5
0x45C24D: test    al, 1
0x45C24F: jnz     short loc_45C25A
0x45C251: push    esi
0x45C252: lea     ecx, [ebx+38h]
0x45C255: call    BSSimpleList_PushFront
0x45C25A: and     dword ptr [ebx+18h], 0FFFFFFF7h
0x45C25E: mov     al, 1
0x45C260: mov     ecx, dword ptr [esp+34h+var_C]
0x45C264: mov     large fs:0, ecx
0x45C26B: pop     ecx
0x45C26C: pop     edi
0x45C26D: pop     esi
0x45C26E: pop     ebp
0x45C26F: pop     ebx
0x45C270: add     esp, 20h
0x45C273: retn    0Ch
0x45C276: mov     eax, [esi+8]
0x45C279: mov     ecx, eax
0x45C27B: shr     ecx, 0Bh
0x45C27E: test    cl, 1
0x45C281: jnz     loc_45C309
0x45C287: shr     eax, 5
0x45C28A: test    al, 1
0x45C28C: jnz     short loc_45C309
0x45C28E: cmp     dword ptr [esi+3Ch], 0
0x45C292: jnz     loc_45C1D0
0x45C298: push    0; a2
0x45C29A: mov     ecx, esi; this
0x45C29C: call    TESObjectREFR_GetParentCell
0x45C2A1: mov     ecx, ds:0B333A0h
0x45C2A7: push    eax; a1
0x45C2A8: call    TESObjectCELL_IsProcessLevel?LowHigh
0x45C2AD: test    al, al
0x45C2AF: jz      loc_45C1D0
0x45C2B5: mov     ecx, ds:0B33A1Ch
0x45C2BB: push    esi
0x45C2BC: call    sub_4354F0
0x45C2C1: test    al, al
0x45C2C3: jnz     loc_45C1D0
0x45C2C9: cmp     [esp+34h+arg_8], al
0x45C2CD: jnz     short loc_45C2D3
0x45C2CF: or      dword ptr [ebx+18h], 2
0x45C2D3: push    0
0x45C2D5: mov     ecx, esi; this
0x45C2D7: call    TESObjectREFR_GetParentCell
0x45C2DC: mov     ecx, ds:0B333A0h
0x45C2E2: push    eax
0x45C2E3: call    sub_440C80
0x45C2E8: mov     ecx, ds:0B33A1Ch
0x45C2EE: push    eax
0x45C2EF: push    esi
0x45C2F0: call    sub_438060
0x45C2F5: cmp     [esp+34h+arg_8], 0
0x45C2FA: jnz     loc_45C1D0
0x45C300: and     dword ptr [ebx+18h], 0FFFFFFFDh
0x45C304: jmp     loc_45C1D0
0x45C309: mov     edx, [esi]
0x45C30B: mov     eax, [edx+150h]
0x45C311: push    0
0x45C313: mov     ecx, esi
0x45C315: call    eax
0x45C317: jmp     loc_45C1D0
