0x6231E0: sub     esp, 14h
0x6231E3: push    esi
0x6231E4: mov     esi, ecx
0x6231E6: cmp     dword ptr [esi+6Ch], 0Ch
0x6231EA: jnz     loc_62346C
0x6231F0: cmp     dword ptr [esi+11Ch], 0
0x6231F7: jnz     short loc_623221
0x6231F9: call    sub_6160B0
0x6231FE: mov     eax, [esi+70h]
0x623201: cmp     eax, 2
0x623204: jz      short loc_62320B
0x623206: cmp     eax, 4
0x623209: jnz     short loc_623216
0x62320B: mov     ecx, esi
0x62320D: pop     esi
0x62320E: add     esp, 14h
0x623211: jmp     sub_61FE90
0x623216: mov     ecx, esi
0x623218: pop     esi
0x623219: add     esp, 14h
0x62321C: jmp     sub_61FEF0
0x623221: fld     dword ptr [esi+44h]
0x623224: push    ebp
0x623225: fsub    dword ptr [esi+0ECh]
0x62322B: push    edi
0x62322C: fld     dword ptr [esi+0F0h]
0x623232: mov     edi, [esi+3Ch]
0x623235: mov     ebp, [edi+58h]
0x623238: fcompp
0x62323A: fnstsw  ax
0x62323C: test    ah, 5
0x62323F: jp      short loc_623268
0x623241: mov     eax, [ebp+0]
0x623244: mov     edx, [eax+2C0h]
0x62324A: mov     ecx, ebp
0x62324C: call    edx
0x62324E: test    ax, 100h
0x623252: jz      short loc_623268
0x623254: mov     eax, [ebp+0]
0x623257: mov     edx, [eax+2C4h]
0x62325D: push    1
0x62325F: push    201h
0x623264: mov     ecx, ebp
0x623266: call    edx
0x623268: mov     ecx, edi
0x62326A: call    sub_5E05B0
0x62326F: test    al, al
0x623271: jnz     short loc_6232D4
0x623273: mov     eax, [esi+3Ch]
0x623276: mov     ecx, [eax+58h]
0x623279: mov     edx, [ecx]
0x62327B: mov     eax, [edx+2C4h]
0x623281: push    1
0x623283: push    101h
0x623288: call    eax
0x62328A: mov     ecx, [esi+3Ch]
0x62328D: push    3
0x62328F: call    sub_5E5850
0x623294: fld     dword ptr ds:0A3D65Ch
0x62329A: fcom    st(1)
0x62329C: fnstsw  ax
0x62329E: fstp    st(1)
0x6232A0: test    ah, 5
0x6232A3: jp      short loc_6232B1
0x6232A5: mov     ecx, [esi+3Ch]
0x6232A8: fstp    st
0x6232AA: push    3
0x6232AC: call    sub_5E5850
0x6232B1: fstp    [esp+20h+var_10]
0x6232B5: fld     dword ptr [esi+44h]
0x6232B8: fstp    dword ptr [esi+0ECh]
0x6232BE: fld     [esp+20h+var_10]
0x6232C2: fstp    dword ptr [esi+0F0h]
0x6232C8: fld     dword ptr ds:0A30634h
0x6232CE: fstp    dword ptr [esi+0F4h]
0x6232D4: fld     dword ptr ds:0A30634h
0x6232DA: push    ebx
0x6232DB: mov     ebx, [ebp+0]
0x6232DE: push    ecx
0x6232DF: mov     ecx, edi; this
0x6232E1: fstp    [esp+28h+var_28]
0x6232E4: call    TESObjectREFR_GetWorldSpace
0x6232E9: push    eax
0x6232EA: mov     ecx, edi; this
0x6232EC: call    TESObjectREFR_GetParentCell
0x6232F1: mov     ecx, [esi+11Ch]
0x6232F7: mov     edx, [ebx+414h]
0x6232FD: push    eax
0x6232FE: push    ecx
0x6232FF: push    edi
0x623300: mov     ecx, ebp
0x623302: call    edx
0x623304: mov     eax, [ebp+0]
0x623307: mov     edx, [eax+40Ch]
0x62330D: mov     ecx, ebp
0x62330F: mov     [esp+24h+var_11], 0
0x623314: call    edx
0x623316: test    eax, eax
0x623318: jz      short loc_623339
0x62331A: mov     eax, [ebp+0]
0x62331D: mov     edx, [eax+40Ch]
0x623323: mov     ecx, ebp
0x623325: call    edx
0x623327: mov     edx, [eax]
0x623329: mov     ecx, eax
0x62332B: mov     eax, [edx+2Ch]
0x62332E: call    eax
0x623330: test    al, al
0x623332: jz      short loc_623339
0x623334: mov     [esp+24h+var_11], 1
0x623339: mov     ebp, [edi+58h]
0x62333C: mov     edx, [ebp+0]
0x62333F: mov     eax, [edx+184h]
0x623345: mov     ecx, ebp
0x623347: or      ebx, 0FFFFFFFFh
0x62334A: call    eax
0x62334C: test    eax, eax
0x62334E: jz      short loc_623354
0x623350: movsx   ebx, byte ptr [eax+20h]
0x623354: mov     edx, [edi]
0x623356: mov     eax, [edx+330h]
0x62335C: mov     ecx, edi
0x62335E: call    eax
0x623360: cmp     ebx, 0Ch
0x623363: mov     esi, eax
0x623365: pop     ebx
0x623366: jz      short loc_62338D
0x623368: mov     edx, [ebp+0]
0x62336B: mov     eax, [edx+0C8h]
0x623371: mov     ecx, ebp
0x623373: call    eax
0x623375: test    al, al
0x623377: jnz     loc_62346A
0x62337D: push    9
0x62337F: mov     ecx, esi
0x623381: call    sub_612DA0
0x623386: pop     edi
0x623387: pop     ebp
0x623388: pop     esi
0x623389: add     esp, 14h
0x62338C: retn
0x62338D: mov     edx, [edi]
0x62338F: mov     eax, [edx+174h]
0x623395: mov     ebp, [esi+11Ch]
0x62339B: mov     ecx, edi
0x62339D: call    eax
0x62339F: fld     dword ptr [eax]
0x6233A1: cmp     [esp+20h+var_11], 0
0x6233A6: fsub    dword ptr [ebp+0]
0x6233A9: fstp    [esp+20h+var_C]
0x6233AD: fld     dword ptr [eax+4]
0x6233B0: fsub    dword ptr [ebp+4]
0x6233B3: fstp    [esp+20h+var_8]
0x6233B7: fld     dword ptr [eax+8]
0x6233BA: fsub    dword ptr [ebp+8]
0x6233BD: fstp    [esp+20h+var_4]
0x6233C1: jnz     loc_623450
0x6233C7: lea     ecx, [esp+20h+var_C]
0x6233CB: call    sub_404C90
0x6233D0: fcomp   dword ptr ds:0A427E4h
0x6233D6: fnstsw  ax
0x6233D8: test    ah, 41h
0x6233DB: jnp     short loc_623450
0x6233DD: mov     ecx, [esi+70h]
0x6233E0: push    ecx
0x6233E1: call    sub_612690
0x6233E6: add     esp, 4
0x6233E9: test    al, al
0x6233EB: jz      short loc_62340A
0x6233ED: mov     ecx, esi
0x6233EF: call    loc_622820
0x6233F4: test    al, al
0x6233F6: jz      short loc_62340A
0x6233F8: push    9
0x6233FA: mov     ecx, esi
0x6233FC: call    sub_612DA0
0x623401: push    0
0x623403: mov     ecx, esi
0x623405: call    sub_619920
0x62340A: mov     ecx, edi
0x62340C: call    Actor_IsBlocking
0x623411: test    al, al
0x623413: jz      short loc_62341E
0x623415: push    0; float
0x623417: mov     ecx, edi
0x623419: call    sub_5F4AE0
0x62341E: mov     ecx, esi
0x623420: call    sub_614290
0x623425: test    al, al
0x623427: jz      short loc_62346A
0x623429: mov     edx, [esi+1A8h]
0x62342F: cmp     edx, ds:0B372F0h
0x623435: jl      short loc_62346A
0x623437: push    9
0x623439: mov     ecx, esi
0x62343B: call    sub_612DA0
0x623440: push    0
0x623442: mov     ecx, esi
0x623444: call    sub_619920
0x623449: pop     edi
0x62344A: pop     ebp
0x62344B: pop     esi
0x62344C: add     esp, 14h
0x62344F: retn
0x623450: push    9
0x623452: mov     ecx, esi
0x623454: call    sub_612DA0
0x623459: mov     ecx, esi
0x62345B: call    sub_61C6E0
0x623460: mov     dword ptr [esi+11Ch], 0
0x62346A: pop     edi
0x62346B: pop     ebp
0x62346C: pop     esi
0x62346D: add     esp, 14h
0x623470: retn
