0x4D9100: sub     esp, 214h
0x4D9106: mov     eax, ds:0B30AACh
0x4D910B: xor     eax, esp
0x4D910D: mov     [esp+214h+var_4], eax
0x4D9114: mov     eax, [esp+214h+arg_4]
0x4D911B: fldz
0x4D911D: push    ebp
0x4D911E: fstp    [esp+218h+var_214]
0x4D9122: push    esi
0x4D9123: push    0
0x4D9125: push    0
0x4D9127: push    0
0x4D9129: mov     ebp, ecx
0x4D912B: mov     ecx, [esp+228h+arg_0]
0x4D9132: push    eax
0x4D9133: call    TESTopic__CreateDialogueInfo
0x4D9138: mov     esi, eax
0x4D913A: test    esi, esi
0x4D913C: jz      loc_4D92FB
0x4D9142: mov     eax, ds:0B33398h
0x4D9147: push    ebx
0x4D9148: mov     ebx, [esi+0Ch]
0x4D914B: test    ebx, ebx
0x4D914D: push    edi
0x4D914E: mov     edi, [eax+24h]
0x4D9151: jz      short loc_4D9162
0x4D9153: push    ebp
0x4D9154: mov     ecx, ebx
0x4D9156: call    sub_531470
0x4D915B: mov     ecx, ebx; int
0x4D915D: call    sub_5308D0
0x4D9162: test    edi, edi
0x4D9164: jz      loc_4D92DC
0x4D916A: mov     ecx, esi
0x4D916C: call    sub_6B7BA0
0x4D9171: mov     ecx, esi
0x4D9173: call    sub_6B7C20
0x4D9178: mov     ebx, eax
0x4D917A: test    ebx, ebx
0x4D917C: jz      loc_4D92DC
0x4D9182: mov     ecx, [ebx+10h]
0x4D9185: push    ecx
0x4D9186: lea     edx, [esp+228h+var_204]
0x4D918A: push    edx
0x4D918B: call    BSStringT_Static_StrCpy
0x4D9190: add     esp, 8
0x4D9193: cmp     [esp+224h+arg_8], 0
0x4D919B: jnz     short loc_4D91CD
0x4D919D: mov     eax, [ebp+0]
0x4D91A0: mov     edx, [eax+154h]
0x4D91A6: mov     ecx, ebp
0x4D91A8: call    edx
0x4D91AA: test    eax, eax
0x4D91AC: jz      short loc_4D91CD
0x4D91AE: cmp     [esp+224h+arg_C], 0
0x4D91B6: fldz
0x4D91B8: push    ecx
0x4D91B9: fstp    [esp+228h+duration]
0x4D91BC: push    0
0x4D91BE: jz      short loc_4D91C4
0x4D91C0: push    2
0x4D91C2: jmp     short loc_4D91EA
0x4D91C4: push    6
0x4D91C6: lea     ecx, [esp+230h+var_204]
0x4D91CA: push    ecx
0x4D91CB: jmp     short loc_4D91EF
0x4D91CD: cmp     [esp+224h+arg_C], 0
0x4D91D5: fldz
0x4D91D7: push    ecx
0x4D91D8: fstp    [esp+228h+duration]
0x4D91DB: push    0
0x4D91DD: jz      short loc_4D91E8
0x4D91DF: push    1
0x4D91E1: lea     edx, [esp+230h+var_204]
0x4D91E5: push    edx
0x4D91E6: jmp     short loc_4D91EF
0x4D91E8: push    5
0x4D91EA: lea     eax, [esp+230h+var_204]
0x4D91EE: push    eax
0x4D91EF: mov     ecx, edi
0x4D91F1: call    sub_6AE370
0x4D91F6: mov     esi, eax
0x4D91F8: test    esi, esi
0x4D91FA: jz      loc_4D92BB
0x4D9200: cmp     [esp+224h+arg_8], 0
0x4D9208: jnz     loc_4D9296
0x4D920E: mov     edx, [ebp+0]
0x4D9211: mov     eax, [edx+154h]
0x4D9217: mov     ecx, ebp
0x4D9219: call    eax
0x4D921B: test    eax, eax
0x4D921D: jz      short loc_4D9296
0x4D921F: mov     edx, [ebp+0]
0x4D9222: mov     eax, [edx+154h]
0x4D9228: mov     ecx, ebp
0x4D922A: call    eax
0x4D922C: mov     ecx, [eax+88h]
0x4D9232: mov     edx, [eax+8Ch]
0x4D9238: mov     eax, [eax+90h]
0x4D923E: sub     esp, 0Ch
0x4D9241: mov     [esp+230h+var_208], eax
0x4D9245: fld     [esp+230h+var_208]
0x4D9249: fstp    [esp+230h+duration]; float
0x4D924D: mov     [esp+230h+var_20C], edx
0x4D9251: fld     [esp+230h+var_20C]
0x4D9255: mov     [esp+230h+var_210], ecx
0x4D9259: fstp    [esp+230h+var_22C]; float
0x4D925D: mov     ecx, esi
0x4D925F: fld     [esp+230h+var_210]
0x4D9263: fstp    [esp+230h+var_230]; float
0x4D9266: call    sub_6B7360
0x4D926B: fld     dword ptr ds:0B161D0h
0x4D9271: mov     ecx, [esi]
0x4D9273: sub     esp, 8
0x4D9276: fstp    [esp+22Ch+duration]; float
0x4D927A: fld     dword ptr ds:0B161C8h
0x4D9280: fstp    [esp+22Ch+var_22C]; float
0x4D9283: push    ecx; int
0x4D9284: mov     ecx, edi
0x4D9286: call    sub_6ACC50
0x4D928B: mov     edx, [esi]
0x4D928D: push    ebp
0x4D928E: push    edx
0x4D928F: mov     ecx, edi
0x4D9291: call    sub_6AC3E0
0x4D9296: mov     ecx, esi
0x4D9298: call    sub_6B7340
0x4D929D: movzx   eax, ax
0x4D92A0: mov     [esp+224h+var_214], eax
0x4D92A4: push    0
0x4D92A6: mov     ecx, esi
0x4D92A8: fild    [esp+228h+var_214]
0x4D92AC: fdiv    qword ptr ds:0A2FC70h
0x4D92B2: fstp    [esp+228h+var_214]
0x4D92B6: call    sub_6B7190
0x4D92BB: cmp     byte ptr ds:0B13208h, 0
0x4D92C2: jz      short loc_4D92DC
0x4D92C4: fld     dword ptr ds:0A30634h
0x4D92CA: push    ecx
0x4D92CB: mov     ecx, [ebx]
0x4D92CD: fstp    [esp+228h+duration]; duration
0x4D92D0: push    0; unk2
0x4D92D2: push    esi; unk1
0x4D92D3: push    ecx; string
0x4D92D4: call    GameUI_QueueMessage
0x4D92D9: add     esp, 10h
0x4D92DC: fld     [esp+224h+var_214]
0x4D92E0: pop     edi
0x4D92E1: pop     ebx
0x4D92E2: mov     ecx, [esp+21Ch+var_4]
0x4D92E9: pop     esi
0x4D92EA: pop     ebp
0x4D92EB: xor     ecx, esp
0x4D92ED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D92F2: add     esp, 214h
0x4D92F8: retn    14h
0x4D92FB: fld     [esp+21Ch+var_214]
0x4D92FF: jmp     short loc_4D92E2
