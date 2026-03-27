0x5971E0: sub     esp, 108h
0x5971E6: mov     eax, ds:0B30AACh
0x5971EB: xor     eax, esp
0x5971ED: mov     [esp+108h+var_4], eax
0x5971F4: mov     eax, [esp+108h+arg_4]
0x5971FB: push    ebx
0x5971FC: push    ebp; a3
0x5971FD: mov     ebp, [esp+110h+arg_0]
0x597204: push    esi; a3
0x597205: mov     ebx, ecx
0x597207: mov     ecx, [ebx+28h]
0x59720A: push    0
0x59720C: push    offset aClass_template; "class_template"
0x597211: push    ecx
0x597212: mov     ecx, ebx
0x597214: mov     [esp+120h+var_108], eax
0x597218: call    Menu_CreateTileFromTemplate
0x59721D: mov     esi, eax
0x59721F: test    esi, esi
0x597221: jz      loc_59731A
0x597227: push    edi; a3
0x597228: mov     edi, ebp
0x59722A: lea     eax, [esp+118h+var_104]
0x59722E: xor     edx, edx
0x597230: sub     edi, eax
0x597232: lea     eax, [esp+edx+118h+var_104]
0x597236: mov     cl, [edi+eax]
0x597239: cmp     cl, 20h ; ' '
0x59723C: mov     [eax], cl
0x59723E: jnz     short loc_597243
0x597240: mov     byte ptr [eax], 5Fh ; '_'
0x597243: cmp     byte ptr [eax], 0
0x597246: jz      short loc_597253
0x597248: add     edx, 1
0x59724B: cmp     edx, 100h
0x597251: jl      short loc_597232
0x597253: push    0; a3
0x597255: lea     ecx, [esp+11Ch+var_104]
0x597259: push    ecx; a2
0x59725A: lea     ecx, [esi+8]; this
0x59725D: mov     [esp+120h+var_5], 0
0x597265: call    BSStringT_Set
0x59726A: fild    [esp+118h+arg_8]
0x597271: push    ecx
0x597272: mov     ecx, esi; this
0x597274: fstp    [esp+11Ch+a2]; a3
0x597277: push    0FAAh; a2
0x59727C: call    Tile_SetFloat
0x597281: push    ebp
0x597282: push    0FAFh
0x597287: mov     ecx, esi
0x597289: call    Tile_SetString
0x59728E: mov     edi, [esp+118h+var_108]
0x597292: cmp     edi, [ebx+40h]
0x597295: jnz     short loc_59729A
0x597297: mov     [ebx+34h], esi
0x59729A: cmp     [esp+118h+arg_C], 0
0x5972A2: push    ecx
0x5972A3: mov     ecx, esi; this
0x5972A5: jz      short loc_5972F4
0x5972A7: fild    [esp+11Ch+arg_C]
0x5972AE: fstp    [esp+11Ch+a2]; a3
0x5972B1: push    0FF0h; a2
0x5972B6: call    Tile_SetFloat
0x5972BB: fld     dword ptr ds:0A379B4h
0x5972C1: push    ecx
0x5972C2: fstp    [esp+11Ch+a2]; a3
0x5972C5: push    0FB0h; a2
0x5972CA: mov     ecx, esi; this
0x5972CC: call    Tile_SetFloat
0x5972D1: test    edi, edi
0x5972D3: jz      short loc_597315
0x5972D5: mov     eax, [edi+30h]
0x5972D8: test    eax, eax
0x5972DA: jnz     short loc_5972E1
0x5972DC: mov     eax, offset EmptyString
0x5972E1: mov     ecx, [ebx+4]
0x5972E4: push    eax
0x5972E5: push    0FC3h
0x5972EA: call    Tile_SetString
0x5972EF: mov     eax, esi
0x5972F1: pop     edi
0x5972F2: jmp     short loc_59731C
0x5972F4: fld1
0x5972F6: fstp    [esp+11Ch+a2]; a3
0x5972F9: push    0FB0h; a2
0x5972FE: call    Tile_SetFloat
0x597303: fld1
0x597305: push    ecx
0x597306: fstp    [esp+11Ch+a2]; a3
0x597309: push    0FF0h; a2
0x59730E: mov     ecx, esi; this
0x597310: call    Tile_SetFloat
0x597315: mov     eax, esi
0x597317: pop     edi
0x597318: jmp     short loc_59731C
0x59731A: xor     eax, eax
0x59731C: mov     ecx, [esp+114h+var_4]
0x597323: pop     esi
0x597324: pop     ebp
0x597325: pop     ebx
0x597326: xor     ecx, esp
0x597328: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59732D: add     esp, 108h
0x597333: retn    10h
