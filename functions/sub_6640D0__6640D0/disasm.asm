0x6640D0: sub     esp, 1F8h
0x6640D6: mov     eax, ds:0B30AACh
0x6640DB: xor     eax, esp
0x6640DD: mov     [esp+1F8h+var_4], eax
0x6640E4: push    ebx
0x6640E5: push    edi
0x6640E6: mov     edi, ecx
0x6640E8: mov     ecx, ds:0B333C4h
0x6640EE: push    0
0x6640F0: xor     bl, bl
0x6640F2: call    PlayerCharacter_IsPlayerInCombat
0x6640F7: test    al, al
0x6640F9: jz      short loc_664141
0x6640FB: mov     eax, ds:0B38B38h
0x664100: push    eax
0x664101: lea     ecx, [esp+204h+string]
0x664105: push    ecx
0x664106: call    __sprintf
0x66410B: fld     dword ptr ds:0A30634h
0x664111: add     esp, 4
0x664114: fstp    [esp+204h+duration]; duration
0x664117: push    1; unk2
0x664119: lea     edx, [esp+208h+string]
0x66411D: push    0; unk1
0x66411F: push    edx; string
0x664120: call    GameUI_QueueMessage
0x664125: add     esp, 10h
0x664128: pop     edi
0x664129: xor     al, al
0x66412B: pop     ebx
0x66412C: mov     ecx, [esp+1F8h+var_4]
0x664133: xor     ecx, esp
0x664135: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66413A: add     esp, 1F8h
0x664140: retn
0x664141: mov     eax, ds:0B333C4h
0x664146: push    esi
0x664147: push    0
0x664149: push    0Fh
0x66414B: push    eax
0x66414C: mov     ecx, offset ActorProcessManager_ptr
0x664151: call    sub_6758E0
0x664156: mov     esi, eax
0x664158: test    esi, esi
0x66415A: jz      short loc_6641BF
0x66415C: cmp     dword ptr [esi+4], 0
0x664160: jnz     short loc_664167
0x664162: cmp     dword ptr [esi], 0
0x664165: jz      short loc_6641BF
0x664167: mov     ecx, ds:0B38B60h
0x66416D: push    ecx
0x66416E: lea     edx, [esp+208h+string]
0x664172: push    edx
0x664173: call    __sprintf
0x664178: fld     dword ptr ds:0A30634h
0x66417E: add     esp, 4
0x664181: fstp    [esp+208h+var_208]; duration
0x664184: push    1; unk2
0x664186: lea     eax, [esp+20Ch+string]
0x66418A: push    0; unk1
0x66418C: push    eax; string
0x66418D: call    GameUI_QueueMessage
0x664192: add     esp, 10h
0x664195: mov     ecx, esi
0x664197: call    BSSimpleList_Clear
0x66419C: push    esi
0x66419D: call    FormHeapFree
0x6641A2: add     esp, 4
0x6641A5: pop     esi
0x6641A6: pop     edi
0x6641A7: xor     al, al
0x6641A9: pop     ebx
0x6641AA: mov     ecx, [esp+1F8h+var_4]
0x6641B1: xor     ecx, esp
0x6641B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6641B8: add     esp, 1F8h
0x6641BE: retn
0x6641BF: mov     edx, [edi+68h]
0x6641C2: mov     eax, [edx+8]
0x6641C5: lea     ecx, [edi+68h]
0x6641C8: call    eax
0x6641CA: cmp     dword ptr [edi+58h], 0
0x6641CE: jz      short loc_6641F8
0x6641D0: test    eax, eax
0x6641D2: jz      short loc_6641F8
0x6641D4: mov     esi, [eax+4]
0x6641D7: test    esi, esi
0x6641D9: jnz     short loc_6641DF
0x6641DB: cmp     [eax], esi
0x6641DD: jz      short loc_6641F8
0x6641DF: mov     eax, [eax]
0x6641E1: test    eax, eax
0x6641E3: jz      short loc_6641F2
0x6641E5: mov     edx, [eax]
0x6641E7: mov     ecx, eax
0x6641E9: mov     eax, [edx+28h]
0x6641EC: call    eax
0x6641EE: test    al, al
0x6641F0: jnz     short loc_664209
0x6641F2: test    esi, esi
0x6641F4: mov     eax, esi
0x6641F6: jnz     short loc_6641D4
0x6641F8: cmp     byte ptr [edi+5A9h], 0
0x6641FF: jnz     short loc_66423C
0x664201: mov     ecx, ds:0B38B48h
0x664207: jmp     short loc_66420F
0x664209: mov     ecx, ds:0B38B58h
0x66420F: push    ecx
0x664210: lea     edx, [esp+208h+string]
0x664214: push    edx
0x664215: call    __sprintf
0x66421A: fld     dword ptr ds:0A30634h
0x664220: add     esp, 4
0x664223: fstp    [esp+208h+var_208]; duration
0x664226: push    1; unk2
0x664228: lea     eax, [esp+20Ch+string]
0x66422C: push    0; unk1
0x66422E: push    eax; string
0x66422F: call    GameUI_QueueMessage
0x664234: add     esp, 10h
0x664237: jmp     loc_6641A5
0x66423C: mov     ecx, ds:0B333C4h
0x664242: mov     edx, [ecx]
0x664244: mov     eax, [edx+25Ch]
0x66424A: call    eax
0x66424C: test    al, al
0x66424E: jnz     loc_6641A5
0x664254: mov     ecx, ds:0B333C4h
0x66425A: mov     edx, [ecx]
0x66425C: mov     eax, [edx+1A0h]
0x664262: call    eax
0x664264: test    al, al
0x664266: jnz     loc_6641A5
0x66426C: mov     ecx, ds:0B333C4h
0x664272: mov     edx, [ecx]
0x664274: mov     eax, [edx+284h]
0x66427A: push    0Ah
0x66427C: call    eax
0x66427E: cmp     eax, 1
0x664281: jl      loc_6641A5
0x664287: mov     ecx, ds:0B333C4h
0x66428D: mov     edx, [ecx]
0x66428F: mov     eax, [edx+284h]
0x664295: push    8
0x664297: call    eax
0x664299: cmp     eax, 1
0x66429C: jl      loc_6641A5
0x6642A2: mov     ecx, edi; this
0x6642A4: call    TESObjectREFR_GetParentCell
0x6642A9: test    eax, eax
0x6642AB: mov     ecx, edi; this
0x6642AD: jz      short loc_6642BD
0x6642AF: call    TESObjectREFR_GetParentCell
0x6642B4: mov     ecx, eax
0x6642B6: call    sub_4CA6C0
0x6642BB: jmp     short loc_6642CD
0x6642BD: call    TESObjectREFR_GetWorldSpace
0x6642C2: test    eax, eax
0x6642C4: jz      short loc_6642D6
0x6642C6: mov     ecx, eax
0x6642C8: call    sub_4EF140
0x6642CD: test    al, al
0x6642CF: setz    bl
0x6642D2: test    bl, bl
0x6642D4: jnz     short loc_664304
0x6642D6: mov     ecx, ds:0B38B40h
0x6642DC: push    ecx
0x6642DD: lea     edx, [esp+208h+string]
0x6642E1: push    edx
0x6642E2: call    __sprintf
0x6642E7: fld     dword ptr ds:0A30634h
0x6642ED: add     esp, 4
0x6642F0: fstp    [esp+208h+var_208]; duration
0x6642F3: push    1; unk2
0x6642F5: lea     eax, [esp+20Ch+string]
0x6642F9: push    0; unk1
0x6642FB: push    eax; string
0x6642FC: call    GameUI_QueueMessage
0x664301: add     esp, 10h
0x664304: mov     ecx, [esp+204h+var_4]
0x66430B: pop     esi
0x66430C: pop     edi
0x66430D: mov     al, bl
0x66430F: pop     ebx
0x664310: xor     ecx, esp
0x664312: call    @__security_check_cookie@4; __security_check_cookie(x)
0x664317: add     esp, 1F8h
0x66431D: retn
