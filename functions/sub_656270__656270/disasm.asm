0x656270: sub     esp, 30h
0x656273: push    ebx
0x656274: push    ebp
0x656275: push    esi
0x656276: push    edi
0x656277: mov     ebp, ecx
0x656279: call    sub_651DD0
0x65627E: cmp     dword ptr [ebp+0E4h], 0
0x656285: jz      loc_6563FC
0x65628B: mov     eax, [ebp+0]
0x65628E: mov     edi, [esp+40h+arg_4]
0x656292: mov     edx, [eax+118h]
0x656298: push    edi
0x656299: mov     ecx, ebp
0x65629B: call    edx
0x65629D: mov     esi, eax
0x65629F: mov     eax, [ebp+0]
0x6562A2: mov     edx, [eax+124h]
0x6562A8: push    edi
0x6562A9: mov     ecx, ebp
0x6562AB: call    edx
0x6562AD: cmp     byte ptr [ebp+0F4h], 0
0x6562B4: mov     ebx, eax
0x6562B6: mov     [esp+40h+arg_4], ebx
0x6562BA: jz      short loc_6562CC
0x6562BC: mov     eax, [ebp+0]
0x6562BF: mov     edx, [eax+11Ch]
0x6562C5: push    edi
0x6562C6: mov     ecx, ebp
0x6562C8: call    edx
0x6562CA: mov     esi, eax
0x6562CC: test    esi, esi
0x6562CE: jz      loc_6563FC
0x6562D4: test    ebx, ebx
0x6562D6: jz      loc_65643D
0x6562DC: cmp     byte ptr [esp+40h+arg_0], 0
0x6562E1: push    0
0x6562E3: mov     ecx, ebx
0x6562E5: jnz     short loc_6562E9
0x6562E7: mov     ecx, esi
0x6562E9: call    sub_405790
0x6562EE: cmp     byte ptr [ebp+0F4h], 0
0x6562F5: mov     ebx, eax
0x6562F7: jz      short loc_656308
0x6562F9: test    edi, edi
0x6562FB: jz      short loc_656308
0x6562FD: mov     ecx, edi
0x6562FF: call    sub_478180
0x656304: cmp     ebx, eax
0x656306: jz      short loc_656334
0x656308: test    ebx, ebx
0x65630A: jz      short loc_656334
0x65630C: cmp     byte ptr [esp+40h+arg_0], 0
0x656311: push    1
0x656313: push    ebx
0x656314: jz      short loc_656324
0x656316: mov     eax, [esi]
0x656318: mov     edx, [eax+84h]
0x65631E: mov     ecx, esi
0x656320: call    edx
0x656322: jmp     short loc_656352
0x656324: mov     ecx, [esp+48h+arg_4]
0x656328: mov     eax, [ecx]
0x65632A: mov     edx, [eax+84h]
0x656330: call    edx
0x656332: jmp     short loc_656352
0x656334: cmp     byte ptr [esp+40h+arg_0], 0
0x656339: mov     ecx, [esp+40h+arg_4]
0x65633D: push    0
0x65633F: jz      short loc_656343
0x656341: mov     ecx, esi
0x656343: call    sub_405790
0x656348: mov     ebx, eax
0x65634A: test    ebx, ebx
0x65634C: jz      loc_6563FC
0x656352: mov     eax, ds:0B3F9A8h
0x656357: mov     edx, ds:0B3F9B0h
0x65635D: mov     ecx, 9
0x656362: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x656367: lea     edi, [esp+40h+var_24]
0x65636B: rep movsd
0x65636D: mov     ecx, ds:0B3F9ACh
0x656373: mov     dword ptr [esp+40h+var_30], eax
0x656377: mov     eax, [ebp+0E4h]
0x65637D: mov     [esp+40h+var_2C], ecx
0x656381: mov     ecx, [eax+8]
0x656384: movsx   eax, byte ptr [ecx+90h]
0x65638B: sub     eax, 4
0x65638E: mov     [esp+40h+var_28], edx
0x656392: jz      short loc_6563BF
0x656394: sub     eax, 1
0x656397: jnz     short loc_6563D9
0x656399: cmp     byte ptr [esp+40h+arg_0], 0
0x65639E: jnz     short loc_6563D9
0x6563A0: fld     dword ptr ds:0A72D4Ch
0x6563A6: push    ecx
0x6563A7: lea     ecx, [esp+44h+var_24]
0x6563AB: fstp    [esp+44h+var_44]; float
0x6563AE: call    NiMatrix33_InitRotationTransposedTransform???
0x6563B3: fld     dword ptr ds:0A72D48h
0x6563B9: fstp    [esp+40h+var_2C]
0x6563BD: jmp     short loc_6563D9
0x6563BF: cmp     byte ptr [esp+40h+arg_0], 0
0x6563C4: jnz     short loc_6563D9
0x6563C6: fld     dword ptr ds:0A449C0h
0x6563CC: push    ecx
0x6563CD: lea     ecx, [esp+44h+var_24]
0x6563D1: fstp    [esp+44h+var_44]; float
0x6563D4: call    NiMatrix33_InitRotationTransposedTransform???
0x6563D9: mov     edx, dword ptr [esp+40h+var_30]
0x6563DD: mov     eax, [esp+40h+var_2C]
0x6563E1: lea     edi, [ebx+30h]
0x6563E4: mov     ecx, 9
0x6563E9: lea     esi, [esp+40h+var_24]
0x6563ED: rep movsd
0x6563EF: mov     ecx, [esp+40h+var_28]
0x6563F3: mov     [ebx+54h], edx
0x6563F6: mov     [ebx+58h], eax
0x6563F9: mov     [ebx+5Ch], ecx
0x6563FC: mov     esi, [esp+40h+arg_C]
0x656400: mov     ecx, esi
0x656402: call    sub_5E32D0
0x656407: test    al, al
0x656409: jz      loc_6564A1
0x65640F: mov     edi, [esp+40h+arg_8]
0x656413: test    edi, edi
0x656415: jz      loc_6564A1
0x65641B: push    40Ch
0x656420: call    Menu_GetOpenMenuTile
0x656425: add     esp, 4
0x656428: test    eax, eax
0x65642A: jnz     short loc_6564A1
0x65642C: cmp     byte ptr [esp+40h+arg_0], al
0x656430: mov     ecx, edi
0x656432: jz      short loc_65649C
0x656434: push    eax
0x656435: push    esi
0x656436: call    sub_476410
0x65643B: jmp     short loc_6564A1
0x65643D: cmp     byte ptr [esp+40h+arg_0], 0
0x656442: jnz     short loc_6563FC
0x656444: cmp     dword ptr [ebp+0E4h], 0
0x65644B: jz      short loc_6563FC
0x65644D: mov     edx, [esi]
0x65644F: mov     edx, [edx+8Ch]
0x656455: push    0
0x656457: lea     eax, [esp+44h+arg_4]
0x65645B: push    eax
0x65645C: mov     ecx, esi
0x65645E: call    edx
0x656460: lea     ecx, [esp+40h+arg_4]; this
0x656464: call    sub_7016A0
0x656469: mov     ecx, ds:0B33B00h
0x65646F: call    sub_45A500
0x656474: test    al, al
0x656476: jnz     short loc_6563FC
0x656478: mov     eax, [ebp+0E4h]
0x65647E: mov     ecx, [eax+8]
0x656481: mov     esi, [esp+40h+arg_C]
0x656485: push    0
0x656487: push    0
0x656489: push    0
0x65648B: push    0
0x65648D: push    1
0x65648F: push    ecx
0x656490: mov     ecx, esi
0x656492: call    Actor_UnequipItem
0x656497: jmp     loc_656400
0x65649C: call    sub_471990
0x6564A1: mov     edx, [esp+40h+arg_0]
0x6564A5: push    edx
0x6564A6: mov     ecx, esi
0x6564A8: call    sub_5EF9B0
0x6564AD: pop     edi
0x6564AE: pop     esi
0x6564AF: pop     ebp
0x6564B0: pop     ebx
0x6564B1: add     esp, 30h
0x6564B4: retn    10h
