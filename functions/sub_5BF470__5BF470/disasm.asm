0x5BF470: push    0FFFFFFFFh
0x5BF472: push    offset SEH_5BF7D0
0x5BF477: mov     eax, large fs:0
0x5BF47D: push    eax
0x5BF47E: sub     esp, 10h
0x5BF481: push    ebx
0x5BF482: push    ebp
0x5BF483: push    esi
0x5BF484: push    edi
0x5BF485: mov     eax, ds:0B30AACh
0x5BF48A: xor     eax, esp
0x5BF48C: push    eax; int
0x5BF48D: lea     eax, [esp+30h+var_C]
0x5BF491: mov     large fs:0, eax
0x5BF497: mov     esi, ecx
0x5BF499: call    sub_5BE870
0x5BF49E: xor     ebx, ebx
0x5BF4A0: test    al, al
0x5BF4A2: jz      loc_5BF744
0x5BF4A8: mov     edi, [esi+0D8h]
0x5BF4AE: mov     ecx, offset TimeGlobals
0x5BF4B3: add     edi, 44h ; 'D'
0x5BF4B6: call    TimeGlobals_GetGameMonth
0x5BF4BB: push    eax; int
0x5BF4BC: mov     ecx, offset TimeGlobals
0x5BF4C1: call    TimeGlobals_GetGameDay
0x5BF4C6: mov     ecx, offset TimeGlobals
0x5BF4CB: push    eax; char
0x5BF4CC: call    TimeGlobals_GetGameHour
0x5BF4D1: sub     esp, 8
0x5BF4D4: fstp    [esp+40h+var_3C]; float
0x5BF4D8: mov     ecx, edi
0x5BF4DA: fldz
0x5BF4DC: fstp    [esp+40h+var_40]; float
0x5BF4DF: call    sub_420F20
0x5BF4E4: fld     dword ptr ds:0B38E40h
0x5BF4EA: mov     ecx, [esi+0D8h]
0x5BF4F0: fstp    [esp+30h+var_1C]
0x5BF4F4: fld     dword ptr ds:0B38E48h
0x5BF4FA: mov     eax, [ecx]
0x5BF4FC: mov     edx, [eax+284h]
0x5BF502: fstp    [esp+30h+var_18]
0x5BF506: fld     dword ptr ds:0B38E38h
0x5BF50C: mov     edi, ds:0B38E50h
0x5BF512: fstp    [esp+30h+var_14]
0x5BF516: push    ecx
0x5BF517: fld     dword ptr ds:0B38E88h
0x5BF51D: fstp    [esp+34h+a2]
0x5BF520: push    20h ; ' '
0x5BF522: call    edx
0x5BF524: mov     ecx, ds:0B333C4h
0x5BF52A: push    eax; float
0x5BF52B: mov     eax, [ecx]
0x5BF52D: mov     edx, [eax+284h]
0x5BF533: push    20h ; ' '; int
0x5BF535: call    edx
0x5BF537: fld     [esp+38h+var_1C]
0x5BF53B: push    eax; int
0x5BF53C: push    ecx
0x5BF53D: fstp    [esp+40h+var_40]; float
0x5BF540: push    edi; int
0x5BF541: fld     [esp+44h+var_18]
0x5BF545: push    ecx
0x5BF546: mov     ecx, [esi+0D8h]
0x5BF54C: fstp    [esp+48h+var_48]; float
0x5BF54F: call    Actor_GetLevel
0x5BF554: mov     ecx, ds:0B333C4h
0x5BF55A: movzx   eax, ax
0x5BF55D: push    eax; int
0x5BF55E: call    Actor_GetLevel
0x5BF563: movzx   ecx, ax
0x5BF566: fld     [esp+4Ch+var_14]
0x5BF56A: push    ecx; int
0x5BF56B: push    ecx
0x5BF56C: fstp    [esp+54h+var_54]; float
0x5BF56F: call    sub_547B00
0x5BF574: mov     ecx, ds:0B333C4h
0x5BF57A: add     esp, 24h
0x5BF57D: mov     ebp, eax
0x5BF57F: push    20h ; ' '
0x5BF581: mov     [esp+34h+var_14], ebp
0x5BF585: call    Actor_GetSkillMasteryLevel
0x5BF58A: cmp     eax, 4
0x5BF58D: jnz     short loc_5BF5A0
0x5BF58F: fild    [esp+30h+var_14]
0x5BF593: fmul    qword ptr ds:0A2FAA0h
0x5BF599: call    Double_To_SInt32
0x5BF59E: mov     ebp, eax
0x5BF5A0: mov     edx, [esi+0D8h]
0x5BF5A6: fld     dword ptr ds:0B38E30h
0x5BF5AC: mov     edi, edx
0x5BF5AE: fstp    [esp+30h+var_14]
0x5BF5B2: mov     eax, [edi]
0x5BF5B4: mov     edx, [eax+284h]
0x5BF5BA: push    20h ; ' '
0x5BF5BC: mov     ecx, edi
0x5BF5BE: call    edx
0x5BF5C0: mov     ecx, ds:0B333C4h
0x5BF5C6: push    eax
0x5BF5C7: mov     eax, [ecx]
0x5BF5C9: mov     edx, [eax+284h]
0x5BF5CF: push    20h ; ' '
0x5BF5D1: call    edx
0x5BF5D3: push    eax
0x5BF5D4: mov     eax, [edi]
0x5BF5D6: mov     edx, [eax+284h]
0x5BF5DC: push    24h ; '$'
0x5BF5DE: mov     ecx, edi
0x5BF5E0: call    edx
0x5BF5E2: fld     [esp+30h+var_C]
0x5BF5E6: push    eax; int
0x5BF5E7: mov     eax, [edi]
0x5BF5E9: mov     edx, [eax+224h]
0x5BF5EF: push    ecx
0x5BF5F0: mov     ecx, ds:0B333C4h
0x5BF5F6: fstp    [esp+38h+var_38]; int
0x5BF5F9: push    ecx; float
0x5BF5FA: mov     ecx, edi
0x5BF5FC: call    edx
0x5BF5FE: push    eax; int
0x5BF5FF: call    sub_547B40
0x5BF604: mov     ecx, [esi+0D8h]
0x5BF60A: mov     edx, ds:0B333C4h
0x5BF610: mov     edi, eax
0x5BF612: mov     eax, [ecx]
0x5BF614: mov     eax, [eax+374h]
0x5BF61A: mov     [esp+40h+var_10], edi
0x5BF61E: fild    [esp+40h+var_10]
0x5BF622: add     esp, 10h
0x5BF625: fstp    [esp+30h+a3]; a3
0x5BF628: push    edx
0x5BF629: call    eax
0x5BF62B: add     [esi+0F8h], edi
0x5BF631: mov     [esi+0F4h], edi
0x5BF637: mov     ecx, ds:0B333C4h
0x5BF63D: add     ecx, 44h ; 'D'; this
0x5BF640: call    ExtraDataList_GetContainerChanges
0x5BF645: mov     ecx, ds:0B333C4h
0x5BF64B: push    ebx
0x5BF64C: push    ebp
0x5BF64D: push    ecx
0x5BF64E: mov     ecx, eax
0x5BF650: call    sub_491700
0x5BF655: mov     ecx, ds:0B33A98h
0x5BF65B: push    0Fh
0x5BF65D: call    TESDataHandler_LookupFormByID
0x5BF662: mov     ecx, [esi+0D8h]
0x5BF668: mov     edx, [ecx]
0x5BF66A: push    ebp
0x5BF66B: push    ebx
0x5BF66C: push    eax
0x5BF66D: mov     eax, [edx+114h]
0x5BF673: call    eax
0x5BF675: push    24h ; '$'
0x5BF677: push    3
0x5BF679: call    TESTopic__GEtTopic
0x5BF67E: mov     ecx, ds:0B333C4h
0x5BF684: mov     edx, [esi+0D8h]
0x5BF68A: add     esp, 8
0x5BF68D: push    ebx
0x5BF68E: push    ebx
0x5BF68F: push    ecx
0x5BF690: push    edx
0x5BF691: mov     ecx, eax
0x5BF693: call    TESTopic__CreateDialogueInfo
0x5BF698: mov     edi, eax
0x5BF69A: cmp     edi, ebx
0x5BF69C: jz      loc_5BF733
0x5BF6A2: mov     ecx, edi
0x5BF6A4: call    sub_6B7BA0
0x5BF6A9: mov     ecx, edi
0x5BF6AB: call    sub_6B7C20
0x5BF6B0: mov     ebp, eax
0x5BF6B2: cmp     ebp, ebx
0x5BF6B4: jz      short loc_5BF723
0x5BF6B6: mov     ecx, [esi+0D8h]
0x5BF6BC: call    sub_5E12B0
0x5BF6C1: mov     [eax+1DBh], bl
0x5BF6C7: mov     eax, [esi+0D8h]
0x5BF6CD: mov     dword ptr [eax+70h], 7
0x5BF6D4: fld     dword ptr ds:0B33E9Ch
0x5BF6DA: mov     ecx, [esi+0D8h]
0x5BF6E0: mov     edx, [ecx]
0x5BF6E2: mov     eax, [edx+304h]
0x5BF6E8: push    ebp
0x5BF6E9: push    ecx
0x5BF6EA: fstp    [esp+38h+var_38]
0x5BF6ED: call    eax
0x5BF6EF: cmp     ds:0B13200h, bl
0x5BF6F5: jz      short loc_5BF723
0x5BF6F7: mov     ecx, [esi+0D8h]
0x5BF6FD: fld     dword ptr ds:0A30634h
0x5BF703: mov     ecx, [ecx+58h]
0x5BF706: mov     edx, [ecx]
0x5BF708: mov     eax, [edx+33Ch]
0x5BF70E: mov     ebp, [ebp+0]
0x5BF711: push    ecx
0x5BF712: fstp    [esp+34h+a2]; duration
0x5BF715: push    ebx; unk2
0x5BF716: push    ebx
0x5BF717: call    eax
0x5BF719: push    eax; unk1
0x5BF71A: push    ebp; string
0x5BF71B: call    GameUI_QueueMessage
0x5BF720: add     esp, 10h
0x5BF723: mov     ecx, edi
0x5BF725: call    sub_6B81D0
0x5BF72A: push    edi
0x5BF72B: call    FormHeapFree
0x5BF730: add     esp, 4
0x5BF733: push    1
0x5BF735: call    sub_5BF170
0x5BF73A: push    23h ; '#'; int
0x5BF73C: call    sub_57DE50
0x5BF741: add     esp, 8
0x5BF744: mov     [esp+30h+var_14], ebx
0x5BF748: mov     word ptr [esp+30h+var_10], bx
0x5BF74D: mov     word ptr [esp+30h+var_10+2], bx
0x5BF752: mov     ecx, [esi+0D8h]
0x5BF758: mov     edx, [ecx]
0x5BF75A: mov     eax, ds:0B333C4h
0x5BF75F: mov     edx, [edx+224h]
0x5BF765: push    eax
0x5BF766: mov     [esp+34h+var_4], ebx
0x5BF76A: call    edx
0x5BF76C: push    eax; ArgList
0x5BF76D: lea     eax, [esp+34h+var_14]
0x5BF771: push    offset aI; "%i"
0x5BF776: push    eax; int
0x5BF777: call    BSStringT_Static_Format
0x5BF77C: mov     edi, [esp+3Ch+var_14]
0x5BF780: mov     ecx, [esi+0CCh]
0x5BF786: add     esp, 0Ch
0x5BF789: push    edi
0x5BF78A: push    0FDEh
0x5BF78F: call    Tile_SetString
0x5BF794: call    sub_5BE870
0x5BF799: test    al, al
0x5BF79B: jnz     short loc_5BF7B3
0x5BF79D: mov     ecx, [esi+0B8h]; this
0x5BF7A3: fld1
0x5BF7A5: push    ecx
0x5BF7A6: fstp    [esp+34h+a2]; a3
0x5BF7A9: push    0FAFh; a2
0x5BF7AE: call    Tile_SetFloat
0x5BF7B3: push    edi
0x5BF7B4: call    FormHeapFree
0x5BF7B9: add     esp, 4
0x5BF7BC: mov     ecx, [esp+30h+var_C]
0x5BF7C0: mov     large fs:0, ecx
0x5BF7C7: pop     ecx
0x5BF7C8: pop     edi
0x5BF7C9: pop     esi
0x5BF7CA: pop     ebp
0x5BF7CB: pop     ebx
0x5BF7CC: add     esp, 1Ch
0x5BF7CF: retn
