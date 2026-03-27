0x7693E0: sub     esp, 4Ch
0x7693E3: push    ebx
0x7693E4: mov     ebx, ecx
0x7693E6: cmp     byte ptr [ebx+6F0h], 0
0x7693ED: jnz     loc_7694DF
0x7693F3: push    ebp
0x7693F4: mov     ebp, [esp+54h+a5]
0x7693F8: mov     ecx, [ebp+0B4h]
0x7693FE: mov     eax, [ecx]
0x769400: mov     edx, [eax+50h]
0x769403: mov     [esp+54h+var_48], ecx
0x769407: call    edx
0x769409: test    ax, ax
0x76940C: jz      loc_7694DE
0x769412: mov     eax, [ebp+0B8h]
0x769418: mov     edx, [ebp+24h]
0x76941B: push    esi
0x76941C: push    edi
0x76941D: lea     esi, [ebp+64h]
0x769420: mov     ecx, 0Dh
0x769425: lea     edi, [esp+5Ch+var_34]
0x769429: rep movsd
0x76942B: mov     ecx, [ebp+20h]
0x76942E: mov     [esp+5Ch+var_44], ecx
0x769432: mov     ecx, [ebp+2Ch]
0x769435: mov     [esp+5Ch+var_4C], eax
0x769439: mov     eax, [ebp+28h]
0x76943C: push    0
0x76943E: mov     [esp+60h+var_38], ecx
0x769442: push    ebp
0x769443: mov     ecx, ebx
0x769445: mov     [esp+64h+var_40], edx
0x769449: mov     [esp+64h+var_3C], eax
0x76944D: call    sub_768890
0x769452: mov     esi, [esp+5Ch+var_48]
0x769456: mov     dx, [esi+2Eh]
0x76945A: mov     edi, [esp+5Ch+var_4C]
0x76945E: and     dx, 0F000h
0x769463: cmp     dx, 8000h
0x769468: mov     byte ptr [esp+5Ch+a5], al
0x76946C: jz      short loc_76948A
0x76946E: test    edi, edi
0x769470: jz      short loc_769476
0x769472: test    al, al
0x769474: jz      short loc_76948A
0x769476: mov     eax, [esp+5Ch+a5]
0x76947A: mov     ecx, [ebx+8A4h]
0x769480: push    0
0x769482: push    0
0x769484: push    eax
0x769485: push    edi
0x769486: push    esi
0x769487: push    ecx
0x769488: jmp     short loc_76949C
0x76948A: mov     edx, [esp+5Ch+a5]
0x76948E: mov     eax, [ebx+8A8h]
0x769494: push    0; int
0x769496: push    0; int
0x769498: push    edx; char
0x769499: push    edi; NiSkinInstance *
0x76949A: push    esi; NiGeometryData *
0x76949B: push    eax; NiGeometryGroup *
0x76949C: mov     ecx, [ebx+8A0h]
0x7694A2: call    NiGeometryGroup__AddGeometryDataToGroup
0x7694A7: cmp     byte ptr [esp+5Ch+a5], 0
0x7694AC: lea     ecx, [esp+5Ch+var_44]
0x7694B0: lea     edx, [esp+5Ch+var_34]
0x7694B4: jz      short loc_7694CC
0x7694B6: push    ecx
0x7694B7: push    edx
0x7694B8: push    edi
0x7694B9: push    esi
0x7694BA: push    ebp
0x7694BB: mov     ecx, ebx
0x7694BD: call    sub_767520
0x7694C2: pop     edi
0x7694C3: pop     esi
0x7694C4: pop     ebp
0x7694C5: pop     ebx
0x7694C6: add     esp, 4Ch
0x7694C9: retn    4
0x7694CC: mov     eax, [esi+38h]
0x7694CF: push    eax
0x7694D0: push    ecx
0x7694D1: push    edx
0x7694D2: push    edi
0x7694D3: push    esi
0x7694D4: push    ebp
0x7694D5: mov     ecx, ebx
0x7694D7: call    sub_7672F0
0x7694DC: pop     edi
0x7694DD: pop     esi
0x7694DE: pop     ebp
0x7694DF: pop     ebx
0x7694E0: add     esp, 4Ch
0x7694E3: retn    4
