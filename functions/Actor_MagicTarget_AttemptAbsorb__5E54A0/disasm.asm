0x5E54A0: push    ecx
0x5E54A1: push    esi
0x5E54A2: push    edi
0x5E54A3: push    0; Seed
0x5E54A5: mov     esi, ecx
0x5E54A7: call    GetRandomLargeInteger?
0x5E54AC: cdq
0x5E54AD: mov     ecx, 64h ; 'd'
0x5E54B2: idiv    ecx
0x5E54B4: add     esi, 0FFFFFF98h
0x5E54B7: add     esp, 4
0x5E54BA: push    34h ; '4'
0x5E54BC: mov     ecx, esi
0x5E54BE: mov     edi, edx
0x5E54C0: mov     edx, [esi]
0x5E54C2: mov     eax, [edx+284h]
0x5E54C8: call    eax
0x5E54CA: cmp     [esp+0Ch+arg_C], 0
0x5E54CF: mov     [esp+0Ch+var_4], eax
0x5E54D3: jz      short loc_5E54E4
0x5E54D5: fild    [esp+0Ch+var_4]
0x5E54D9: fmul    dword ptr ds:0B38290h
0x5E54DF: call    Double_To_SInt32
0x5E54E4: cmp     edi, eax
0x5E54E6: jge     short Actor_MagicTarget_AttemptAbsorb___Return_0
0x5E54E8: mov     ecx, dword ptr [esp+0Ch+arg_8]
0x5E54EC: mov     ecx, [ecx+0Ch]
0x5E54EF: mov     edi, [esi]
0x5E54F1: push    0
0x5E54F3: push    0
0x5E54F5: call    EffectItem_MagickaCostForCaster
0x5E54FA: mov     edx, [edi+2A4h]
0x5E5500: push    ecx
0x5E5501: fstp    [esp+14h+var_14]
0x5E5504: push    9
0x5E5506: mov     ecx, esi
0x5E5508: call    edx
0x5E550A: pop     edi
0x5E550B: mov     al, 1
0x5E550D: pop     esi
0x5E550E: pop     ecx
0x5E550F: retn    10h
