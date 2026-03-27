0x569020: sub     esp, 13Ch
0x569026: mov     eax, ds:0B30AACh
0x56902B: xor     eax, esp
0x56902D: mov     [esp+13Ch+var_4], eax
0x569034: push    ebx
0x569035: push    ebp
0x569036: mov     ebp, [esp+144h+arg_0]
0x56903D: test    ebp, ebp
0x56903F: push    esi
0x569040: mov     esi, ecx
0x569042: push    edi
0x569043: mov     [esp+14Ch+var_134], esi
0x569047: mov     [esp+14Ch+var_138], 0
0x56904F: jz      short loc_56905C
0x569051: mov     ecx, ebp
0x569053: call    sub_5E0380
0x569058: mov     [esp+14Ch+var_138], eax
0x56905C: cmp     dword ptr [esi+4], 0
0x569060: jnz     short loc_569070
0x569062: cmp     dword ptr [esi], 0
0x569065: jz      loc_5691F8
0x56906B: jmp     short loc_569070
0x56906D: align 10h
0x569070: mov     eax, [esp+14Ch+var_134]
0x569074: mov     edi, [eax]
0x569076: test    edi, edi
0x569078: jz      loc_5691F8
0x56907E: mov     ecx, edi
0x569080: call    sub_5660E0
0x569085: test    al, al
0x569087: jnz     short loc_569094
0x569089: mov     ecx, edi
0x56908B: call    sub_565DF0
0x569090: test    al, al
0x569092: jz      short loc_5690B4
0x569094: mov     ecx, edi
0x569096: call    sub_565DF0
0x56909B: test    al, al
0x56909D: jz      loc_5691E5
0x5690A3: push    edi
0x5690A4: lea     ecx, [ebp+44h]
0x5690A7: call    sub_4200C0
0x5690AC: test    al, al
0x5690AE: jnz     loc_5691E5
0x5690B4: mov     ecx, [edi+1Ch]
0x5690B7: shr     ecx, 2
0x5690BA: test    cl, 1
0x5690BD: jz      short loc_5690D5
0x5690BF: cmp     [esp+14Ch+var_138], edi
0x5690C3: jnz     short loc_5690D5
0x5690C5: push    ebp
0x5690C6: mov     ecx, edi
0x5690C8: call    sub_567280
0x5690CD: test    al, al
0x5690CF: jnz     loc_5691E5
0x5690D5: lea     esi, [edi+2Ch]
0x5690D8: test    esi, esi
0x5690DA: jz      loc_5691E5
0x5690E0: movsx   edx, byte ptr [esi+3]
0x5690E4: add     edx, [esi+4]
0x5690E7: mov     [esp+14Ch+var_13B], 0
0x5690EC: cmp     edx, 18h
0x5690EF: mov     [esp+14Ch+var_13A], 0
0x5690F4: mov     [esp+14Ch+var_139], 0
0x5690F9: jle     short loc_56914C
0x5690FB: push    1
0x5690FD: mov     ecx, edi
0x5690FF: call    sub_567C00
0x569104: mov     ecx, offset TimeGlobals
0x569109: mov     [esp+14Ch+var_13B], al
0x56910D: call    TimeGlobals_GetGameDay
0x569112: movsx   eax, al
0x569115: sub     eax, 1
0x569118: jns     short loc_56911F
0x56911A: mov     eax, 1Eh
0x56911F: movsx   ecx, byte ptr [esi+2]
0x569123: cmp     ecx, eax
0x569125: jnz     short loc_56912C
0x569127: mov     [esp+14Ch+var_13A], 1
0x56912C: mov     ecx, offset TimeGlobals
0x569131: call    TimeGlobals_GetGameMonth
0x569136: sub     eax, 1
0x569139: jns     short loc_569140
0x56913B: mov     eax, 0Ch
0x569140: movsx   edx, byte ptr [esi]
0x569143: cmp     edx, eax
0x569145: jnz     short loc_56914C
0x569147: mov     [esp+14Ch+var_139], 1
0x56914C: mov     al, [esi]
0x56914E: cmp     al, 0FFh
0x569150: jz      short loc_56916A
0x569152: mov     ecx, offset TimeGlobals
0x569157: movsx   ebx, al
0x56915A: call    TimeGlobals_GetGameMonth
0x56915F: cmp     ebx, eax
0x569161: jz      short loc_56916A
0x569163: cmp     [esp+14Ch+var_139], 0
0x569168: jz      short loc_5691E5
0x56916A: mov     bl, [esi+2]
0x56916D: test    bl, bl
0x56916F: jz      short loc_569186
0x569171: mov     ecx, offset TimeGlobals
0x569176: call    TimeGlobals_GetGameDay
0x56917B: cmp     bl, al
0x56917D: jz      short loc_569186
0x56917F: cmp     [esp+14Ch+var_13A], 0
0x569184: jz      short loc_5691E5
0x569186: cmp     byte ptr [esi+1], 0FFh
0x56918A: jz      short loc_56919F
0x56918C: push    0
0x56918E: mov     ecx, edi
0x569190: call    sub_567C00
0x569195: test    al, al
0x569197: jnz     short loc_56919F
0x569199: cmp     [esp+14Ch+var_13B], al
0x56919D: jz      short loc_5691E5
0x56919F: mov     bl, [esi+3]
0x5691A2: cmp     bl, 0FFh
0x5691A5: jz      short loc_5691C9
0x5691A7: mov     esi, [esi+4]
0x5691AA: mov     ecx, offset TimeGlobals
0x5691AF: call    TimeGlobals_GetGameHour
0x5691B4: push    ecx
0x5691B5: movsx   eax, bl
0x5691B8: fstp    [esp+150h+var_150]; float
0x5691BB: push    esi; int
0x5691BC: push    eax; int
0x5691BD: call    sub_568EB0
0x5691C2: add     esp, 0Ch
0x5691C5: test    al, al
0x5691C7: jz      short loc_5691E5
0x5691C9: mov     ecx, [edi+28h]
0x5691CC: xor     eax, eax
0x5691CE: test    ecx, ecx
0x5691D0: jz      short loc_5691D7
0x5691D2: call    sub_569E60
0x5691D7: push    eax
0x5691D8: push    ebp
0x5691D9: lea     ecx, [edi+34h]
0x5691DC: call    sub_56A950
0x5691E1: test    al, al
0x5691E3: jnz     short loc_569217
0x5691E5: mov     ecx, [esp+14Ch+var_134]
0x5691E9: mov     eax, [ecx+4]
0x5691EC: test    eax, eax
0x5691EE: mov     [esp+14Ch+var_134], eax
0x5691F2: jnz     loc_569070
0x5691F8: mov     eax, [esp+14Ch+var_138]
0x5691FC: mov     ecx, [esp+14Ch+var_4]
0x569203: pop     edi
0x569204: pop     esi
0x569205: pop     ebp
0x569206: pop     ebx
0x569207: xor     ecx, esp
0x569209: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56920E: add     esp, 13Ch
0x569214: retn    4
0x569217: call    sub_579440
0x56921C: cmp     eax, ebp
0x56921E: jnz     short loc_56925D
0x569220: mov     edx, [edi]
0x569222: mov     eax, [edx+0D4h]
0x569228: mov     ecx, edi
0x56922A: call    eax
0x56922C: movsx   ecx, byte ptr [edi+20h]
0x569230: mov     ecx, ds:0B12988h[ecx*4]
0x569237: push    eax
0x569238: push    ecx
0x569239: mov     ecx, ebp; this
0x56923B: call    TESObjectREFR_GetName
0x569240: push    eax
0x569241: lea     edx, [esp+158h+Format]
0x569245: push    offset aSPickedPackage; "%s Picked Package %s (%s)"
0x56924A: push    edx
0x56924B: call    __sprintf
0x569250: lea     eax, [esp+160h+Format]
0x569254: push    eax; Format
0x569255: call    Interface_ConsolePrint
0x56925A: add     esp, 18h
0x56925D: cmp     dword ptr [edi+18h], 0FFFFFFFFh
0x569261: jnz     short loc_56926A
0x569263: mov     ecx, edi
0x569265: call    sub_5672A0
0x56926A: mov     esi, [esp+14Ch+var_138]
0x56926E: test    esi, esi
0x569270: jz      short loc_5692BF
0x569272: cmp     esi, edi
0x569274: jz      short loc_5692D5
0x569276: cmp     byte ptr [esi+20h], 1
0x56927A: jnz     short loc_5692AD
0x56927C: mov     ecx, [ebp+58h]
0x56927F: mov     edx, [ecx]
0x569281: mov     eax, [edx+0CCh]
0x569287: push    0; int
0x569289: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x56928E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x569293: push    0; int
0x569295: call    eax
0x569297: push    eax; void *
0x569298: call    OblivionDynamicCast
0x56929D: add     esp, 14h
0x5692A0: test    eax, eax
0x5692A2: jz      short loc_5692AD
0x5692A4: push    ebp
0x5692A5: lea     ecx, [eax+44h]
0x5692A8: call    sub_424D00
0x5692AD: push    800h
0x5692B2: lea     ecx, [ebp+44h]
0x5692B5: push    ecx
0x5692B6: push    esi
0x5692B7: call    Script_AddEventToExtraScript
0x5692BC: add     esp, 0Ch
0x5692BF: cmp     edi, esi
0x5692C1: jz      short loc_5692D5
0x5692C3: push    200h
0x5692C8: add     ebp, 44h ; 'D'
0x5692CB: push    ebp
0x5692CC: push    edi
0x5692CD: call    Script_AddEventToExtraScript
0x5692D2: add     esp, 0Ch
0x5692D5: mov     eax, edi
0x5692D7: jmp     loc_5691FC
