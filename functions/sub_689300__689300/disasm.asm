0x689300: push    0FFFFFFFFh
0x689302: push    offset SEH_689300
0x689307: mov     eax, large fs:0
0x68930D: push    eax
0x68930E: sub     esp, 238h
0x689314: mov     eax, ds:0B30AACh
0x689319: xor     eax, esp
0x68931B: mov     [esp+244h+var_10], eax
0x689322: push    ebx
0x689323: push    ebp
0x689324: push    esi
0x689325: push    edi
0x689326: mov     eax, ds:0B30AACh
0x68932B: xor     eax, esp
0x68932D: push    eax
0x68932E: lea     eax, [esp+258h+var_C]
0x689335: mov     large fs:0, eax
0x68933B: mov     esi, [esp+258h+arg_0]
0x689342: mov     ebp, [esp+258h+arg_4]
0x689349: mov     edi, ecx
0x68934B: call    sub_684EC0
0x689350: mov     ecx, esi; this
0x689352: call    TESObjectREFR_GetParentCell
0x689357: test    eax, eax
0x689359: jz      loc_6895A2
0x68935F: mov     ecx, ds:0B333C4h; this
0x689365: call    PlayerCharacter__IsSleeping?
0x68936A: test    al, al
0x68936C: jz      short loc_689384
0x68936E: mov     eax, [esp+258h+arg_8]
0x689375: push    eax
0x689376: push    ebp
0x689377: push    esi
0x689378: mov     ecx, edi
0x68937A: call    sub_68B440
0x68937F: jmp     loc_6895A2
0x689384: mov     edx, [esi]
0x689386: mov     eax, [edx+174h]
0x68938C: push    ebp
0x68938D: mov     ecx, esi
0x68938F: call    eax
0x689391: push    eax
0x689392: push    esi
0x689393: call    sub_689230
0x689398: add     esp, 0Ch
0x68939B: test    al, al
0x68939D: jz      loc_68942D
0x6893A3: cmp     ds:0B333B4h, esi
0x6893A9: jnz     short loc_6893ED
0x6893AB: push    1
0x6893AD: call    GetGlobalScriptStateObj??
0x6893B2: add     esp, 4
0x6893B5: cmp     byte ptr [eax+31h], 0
0x6893B9: jg      short loc_6893C4
0x6893BB: cmp     byte ptr ds:0B3B908h, 0
0x6893C2: jz      short loc_6893ED
0x6893C4: mov     edx, [esi]
0x6893C6: mov     eax, [edx+0D4h]
0x6893CC: mov     ecx, esi
0x6893CE: call    eax
0x6893D0: push    eax
0x6893D1: lea     ecx, [esp+25Ch+Format]
0x6893D5: push    offset aActorSBuilding; "Actor '%s' building straight path."
0x6893DA: push    ecx
0x6893DB: call    __sprintf
0x6893E0: lea     edx, [esp+264h+Format]
0x6893E4: push    edx; Format
0x6893E5: call    Interface_ConsolePrint
0x6893EA: add     esp, 10h
0x6893ED: lea     ebx, [edi+14h]
0x6893F0: mov     ecx, ebx
0x6893F2: call    sub_68C6E0
0x6893F7: mov     eax, [esi]
0x6893F9: mov     edx, [eax+174h]
0x6893FF: mov     ecx, esi
0x689401: call    edx
0x689403: push    eax
0x689404: mov     ecx, ebx
0x689406: call    sub_68BED0
0x68940B: push    ebp
0x68940C: mov     ecx, ebx
0x68940E: call    sub_68BED0
0x689413: cmp     byte ptr ds:0B3C08Ah, 0
0x68941A: jz      loc_68959B
0x689420: push    esi
0x689421: mov     ecx, edi
0x689423: call    sub_685EA0
0x689428: jmp     loc_68959B
0x68942D: cmp     ds:0B333B4h, esi
0x689433: jnz     short loc_68947D
0x689435: push    1
0x689437: call    GetGlobalScriptStateObj??
0x68943C: add     esp, 4
0x68943F: cmp     byte ptr [eax+31h], 0
0x689443: jg      short loc_68944E
0x689445: cmp     byte ptr ds:0B3B908h, 0
0x68944C: jz      short loc_68947D
0x68944E: mov     eax, [esi]
0x689450: mov     edx, [eax+0D4h]
0x689456: mov     ecx, esi
0x689458: call    edx
0x68945A: push    eax
0x68945B: lea     eax, [esp+25Ch+var_114]
0x689462: push    offset aActorSBuildi_0; "Actor '%s' building full high level pat"...
0x689467: push    eax
0x689468: call    __sprintf
0x68946D: lea     ecx, [esp+264h+var_114]
0x689474: push    ecx; Format
0x689475: call    Interface_ConsolePrint
0x68947A: add     esp, 10h
0x68947D: lea     ecx, [esp+258h+var_244]
0x689481: call    sub_67D760
0x689486: mov     eax, [esp+258h+arg_8]
0x68948D: mov     dl, [edi+10h]
0x689490: push    eax; float
0x689491: push    esi; int
0x689492: push    ebp; int
0x689493: lea     ecx, [esi+2Ch]
0x689496: push    ecx; int
0x689497: lea     ecx, [esp+268h+var_244]
0x68949B: mov     [esp+268h+var_4], 0
0x6894A6: mov     [esp+268h+var_22C], dl
0x6894AA: call    sub_67EB60
0x6894AF: push    esi
0x6894B0: lea     ebp, [edi+14h]
0x6894B3: push    ebp
0x6894B4: lea     ecx, [esp+260h+var_244]
0x6894B8: mov     bl, al
0x6894BA: call    sub_67E3D0
0x6894BF: test    bl, bl
0x6894C1: jnz     short loc_6894E1
0x6894C3: mov     ecx, esi
0x6894C5: call    sub_5E34B0
0x6894CA: test    al, al
0x6894CC: jnz     short loc_6894E1
0x6894CE: mov     ecx, ebp
0x6894D0: call    TESHealthForm_GetHealth
0x6894D5: push    eax
0x6894D6: mov     ecx, ebp
0x6894D8: call    sub_68C170
0x6894DD: or      byte ptr [edi+2Ch], 80h
0x6894E1: push    esi
0x6894E2: mov     ecx, edi
0x6894E4: call    sub_686300
0x6894E9: push    esi
0x6894EA: mov     ecx, edi
0x6894EC: call    sub_684000
0x6894F1: mov     ecx, ebp
0x6894F3: call    sub_42B410
0x6894F8: mov     ebx, eax
0x6894FA: test    ebx, ebx
0x6894FC: jz      short loc_689576
0x6894FE: mov     ecx, ebx
0x689500: call    sub_68CAE0
0x689505: test    al, al
0x689507: jnz     short loc_689540
0x689509: mov     ecx, ebx
0x68950B: call    sub_68CAB0
0x689510: test    al, al
0x689512: jz      short loc_68952A
0x689514: mov     ecx, esi; this
0x689516: call    Actor_CanSwim
0x68951B: test    al, al
0x68951D: jz      short loc_689540
0x68951F: mov     ecx, esi; this
0x689521: call    sub_5E3400
0x689526: test    al, al
0x689528: jz      short loc_689540
0x68952A: mov     ecx, ebx
0x68952C: call    sub_68CAB0
0x689531: test    al, al
0x689533: jnz     short loc_689576
0x689535: mov     ecx, esi
0x689537: call    sub_5E1E90
0x68953C: test    al, al
0x68953E: jz      short loc_689576
0x689540: mov     ecx, edi
0x689542: call    sub_684EC0
0x689547: mov     edx, [edi]
0x689549: mov     eax, [edx+30h]
0x68954C: push    1
0x68954E: mov     ecx, edi
0x689550: call    eax
0x689552: mov     edx, [esi]
0x689554: mov     eax, [edx+180h]
0x68955A: push    1
0x68955C: mov     ecx, esi
0x68955E: call    eax
0x689560: lea     ecx, [esp+258h+var_244]; void *
0x689564: mov     [esp+258h+var_4], 0FFFFFFFFh
0x68956F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x689574: jmp     short loc_6895A2
0x689576: cmp     byte ptr ds:0B3C08Ah, 0
0x68957D: jz      short loc_689587
0x68957F: push    esi
0x689580: mov     ecx, edi
0x689582: call    sub_685EA0
0x689587: lea     ecx, [esp+258h+var_244]; void *
0x68958B: mov     [esp+258h+var_4], 0FFFFFFFFh
0x689596: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68959B: mov     ecx, edi
0x68959D: call    sub_6847B0
0x6895A2: mov     ecx, [esp+258h+var_C]
0x6895A9: mov     large fs:0, ecx
0x6895B0: pop     ecx
0x6895B1: pop     edi
0x6895B2: pop     esi
0x6895B3: pop     ebp
0x6895B4: pop     ebx
0x6895B5: mov     ecx, [esp+244h+var_10]
0x6895BC: xor     ecx, esp
0x6895BE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6895C3: add     esp, 244h
0x6895C9: retn    0Ch
