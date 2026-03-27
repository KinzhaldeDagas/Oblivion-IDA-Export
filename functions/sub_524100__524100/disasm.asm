0x524100: push    0FFFFFFFFh
0x524102: push    offset SEH_524100
0x524107: mov     eax, large fs:0
0x52410D: push    eax
0x52410E: sub     esp, 118h
0x524114: mov     eax, ds:0B30AACh
0x524119: xor     eax, esp
0x52411B: mov     [esp+124h+var_10], eax
0x524122: push    ebx
0x524123: push    ebp
0x524124: push    esi
0x524125: push    edi
0x524126: mov     eax, ds:0B30AACh
0x52412B: xor     eax, esp
0x52412D: push    eax
0x52412E: lea     eax, [esp+138h+var_C]
0x524135: mov     large fs:0, eax
0x52413B: mov     esi, [esp+138h+arg_0]
0x524142: mov     edi, ecx
0x524144: mov     [esp+138h+var_120], 0
0x52414C: mov     eax, [edi]
0x52414E: mov     edx, [eax+128h]
0x524154: push    45h ; 'E'
0x524156: mov     [esp+13Ch+var_118], esi
0x52415A: call    edx
0x52415C: test    eax, eax
0x52415E: jz      short loc_52416B
0x524160: mov     dword ptr [esi], 0
0x524166: jmp     loc_524245
0x52416B: push    0; a2
0x52416D: mov     ecx, edi; this
0x52416F: call    TESForm_GetOverrideFile
0x524174: mov     ebx, eax
0x524176: test    ebx, ebx
0x524178: jz      loc_52423F
0x52417E: mov     ecx, ebx
0x524180: call    TESFile_GetIsMaster
0x524185: test    al, al
0x524187: jz      loc_52423F
0x52418D: mov     ebp, [esp+138h+arg_4]
0x524194: cmp     ebp, 2
0x524197: jle     short loc_5241AB
0x524199: call    sub_523D80
0x52419E: push    eax
0x52419F: mov     ecx, esi
0x5241A1: call    sub_405070
0x5241A6: jmp     loc_524245
0x5241AB: jnz     short loc_5241B9
0x5241AD: mov     ecx, edi
0x5241AF: call    TESActorBase_IsFemale
0x5241B4: cmp     eax, 1
0x5241B7: jmp     short loc_5241C7
0x5241B9: cmp     ebp, 1
0x5241BC: jnz     short loc_5241C9
0x5241BE: mov     ecx, edi
0x5241C0: call    TESActorBase_IsFemale
0x5241C5: test    eax, eax
0x5241C7: jnz     short loc_524199
0x5241C9: mov     edi, [edi+0Ch]
0x5241CC: push    ebp
0x5241CD: push    edi
0x5241CE: add     ebx, 1Ch
0x5241D1: push    ebx
0x5241D2: lea     eax, [esp+144h+ArgList]
0x5241D6: push    offset aDataTexturesFa; "data\\Textures\\Faces\\%s\\%08X_%i.dds"
0x5241DB: push    eax
0x5241DC: call    __sprintf
0x5241E1: add     esp, 14h
0x5241E4: mov     edi, 1
0x5241E9: push    edi; char
0x5241EA: push    edi; char
0x5241EB: lea     ecx, [esp+140h+ArgList]
0x5241EF: push    ecx; ArgList
0x5241F0: mov     ecx, ds:0B333A0h
0x5241F6: lea     edx, [esp+144h+var_11C]
0x5241FA: push    edx; int
0x5241FB: call    sub_442890
0x524200: mov     eax, [eax]
0x524202: push    eax
0x524203: lea     ecx, [esp+13Ch+var_124]
0x524207: call    sub_405070
0x52420C: lea     ecx, [esp+138h+var_11C]; this
0x524210: mov     [esp+138h+var_4], edi
0x524217: call    sub_7016A0
0x52421C: lea     eax, [esp+138h+var_124]
0x524220: push    eax
0x524221: mov     ecx, esi
0x524223: call    sub_4A19F0
0x524228: lea     ecx, [esp+138h+var_124]; this
0x52422C: mov     [esp+138h+var_120], edi
0x524230: mov     byte ptr [esp+138h+var_4], 0
0x524238: call    sub_7016A0
0x52423D: jmp     short loc_524245
0x52423F: mov     dword ptr [esi], 0
0x524245: mov     eax, esi
0x524247: mov     ecx, [esp+138h+var_C]
0x52424E: mov     large fs:0, ecx
0x524255: pop     ecx
0x524256: pop     edi
0x524257: pop     esi
0x524258: pop     ebp
0x524259: pop     ebx
0x52425A: mov     ecx, [esp+124h+var_10]
0x524261: xor     ecx, esp
0x524263: call    @__security_check_cookie@4; __security_check_cookie(x)
0x524268: add     esp, 124h
0x52426E: retn    8
