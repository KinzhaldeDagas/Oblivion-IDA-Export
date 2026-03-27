0x4DB080: sub     esp, 68h
0x4DB083: push    ebx
0x4DB084: mov     ebx, [esp+6Ch+arg_0]
0x4DB088: mov     eax, [ebx+10h]
0x4DB08B: and     word ptr [ebx+0Ch], 0FFBFh
0x4DB091: push    esi
0x4DB092: push    edi
0x4DB093: mov     ecx, ebx
0x4DB095: mov     [esp+74h+arg_0], eax
0x4DB099: call    sub_452A60
0x4DB09E: test    eax, eax
0x4DB0A0: jz      short loc_4DB0CD
0x4DB0A2: mov     ecx, ebx
0x4DB0A4: call    sub_452A60
0x4DB0A9: cmp     dword ptr [eax+8], 0
0x4DB0AD: jz      short loc_4DB0CD
0x4DB0AF: mov     ecx, ebx
0x4DB0B1: call    sub_452A60
0x4DB0B6: mov     esi, [eax+8]
0x4DB0B9: mov     edi, offset aArrow; "Arrow"
0x4DB0BE: mov     ecx, 6
0x4DB0C3: xor     edx, edx
0x4DB0C5: repe cmpsb
0x4DB0C7: jz      loc_4DB250
0x4DB0CD: push    ebp
0x4DB0CE: mov     ebp, [esp+78h+arg_4]
0x4DB0D5: mov     edi, [ebp+10h]
0x4DB0D8: mov     eax, [edi]
0x4DB0DA: mov     edx, [eax+190h]
0x4DB0E0: mov     ecx, edi
0x4DB0E2: call    edx
0x4DB0E4: test    al, al
0x4DB0E6: jz      short loc_4DB11F
0x4DB0E8: mov     ecx, ebx
0x4DB0EA: call    sub_452A60
0x4DB0EF: test    eax, eax
0x4DB0F1: jz      short loc_4DB112
0x4DB0F3: mov     edx, [eax]
0x4DB0F5: mov     ecx, eax
0x4DB0F7: mov     eax, [edx+4]
0x4DB0FA: call    eax
0x4DB0FC: test    eax, eax
0x4DB0FE: jz      short loc_4DB112
0x4DB100: cmp     eax, offset dword_B35288
0x4DB105: jz      loc_4DB24F
0x4DB10B: mov     eax, [eax+4]
0x4DB10E: test    eax, eax
0x4DB110: jnz     short loc_4DB100
0x4DB112: mov     edx, [ebx]
0x4DB114: mov     eax, [edx+70h]
0x4DB117: push    0
0x4DB119: push    1
0x4DB11B: mov     ecx, ebx
0x4DB11D: call    eax
0x4DB11F: mov     eax, [esp+78h+arg_0]
0x4DB123: test    eax, eax
0x4DB125: jz      loc_4DB24F
0x4DB12B: push    eax
0x4DB12C: push    offset dword_BA7D84
0x4DB131: call    NiRTTI_Cast
0x4DB136: mov     esi, eax
0x4DB138: add     esp, 8
0x4DB13B: test    esi, esi
0x4DB13D: jz      loc_4DB24F
0x4DB143: mov     edx, [ebp+14h]
0x4DB146: mov     ecx, ds:0B33B00h
0x4DB14C: mov     eax, edx
0x4DB14E: shr     eax, 1
0x4DB150: not     al
0x4DB152: and     al, 1
0x4DB154: cmp     byte ptr [ecx+7Ch], 2Bh ; '+'
0x4DB158: jnb     short loc_4DB160
0x4DB15A: cmp     ebx, [ebp+0Ch]
0x4DB15D: setnz   al
0x4DB160: test    al, al
0x4DB162: jz      short loc_4DB195
0x4DB164: push    0Ch; Size
0x4DB166: lea     edx, [esp+7Ch+Dst]
0x4DB16A: push    edx; Dst
0x4DB16B: call    SaveLoad_LoadData
0x4DB170: mov     ecx, ds:0B33B00h
0x4DB176: push    10h; Size
0x4DB178: lea     eax, [esp+7Ch+var_44]
0x4DB17C: push    eax; Dst
0x4DB17D: call    SaveLoad_LoadData
0x4DB182: lea     ecx, [esp+78h+Dst]
0x4DB186: push    ecx
0x4DB187: mov     ecx, esi
0x4DB189: call    sub_4D69A0
0x4DB18E: lea     edx, [esp+78h+var_44]
0x4DB192: push    edx
0x4DB193: jmp     short loc_4DB1CA
0x4DB195: and     edx, 0FFFFFFFDh
0x4DB198: mov     [ebp+14h], edx
0x4DB19B: mov     eax, [edi]
0x4DB19D: mov     edx, [eax+174h]
0x4DB1A3: mov     ecx, edi
0x4DB1A5: call    edx
0x4DB1A7: push    eax
0x4DB1A8: mov     ecx, esi
0x4DB1AA: call    sub_4D69A0
0x4DB1AF: lea     eax, [esp+78h+var_24]
0x4DB1B3: push    eax
0x4DB1B4: mov     ecx, edi
0x4DB1B6: call    sub_4D7AF0
0x4DB1BB: push    eax
0x4DB1BC: lea     ecx, [esp+7Ch+var_34]
0x4DB1C0: call    sub_7150F0
0x4DB1C5: lea     ecx, [esp+78h+var_34]
0x4DB1C9: push    ecx
0x4DB1CA: mov     ecx, esi
0x4DB1CC: call    sub_4D6A00
0x4DB1D1: test    byte ptr [ebp+14h], 1
0x4DB1D5: jz      short loc_4DB237
0x4DB1D7: mov     ecx, ds:0B33B00h
0x4DB1DD: push    0Ch; Size
0x4DB1DF: lea     edx, [esp+7Ch+var_5C]
0x4DB1E3: push    edx; Dst
0x4DB1E4: call    SaveLoad_LoadData
0x4DB1E9: mov     ecx, ds:0B33B00h
0x4DB1EF: push    0Ch; Size
0x4DB1F1: lea     eax, [esp+7Ch+var_50]
0x4DB1F5: push    eax; Dst
0x4DB1F6: call    SaveLoad_LoadData
0x4DB1FB: lea     ecx, [esp+78h+var_5C]
0x4DB1FF: push    ecx
0x4DB200: mov     ecx, esi
0x4DB202: call    sub_4D9960
0x4DB207: lea     edx, [esp+78h+var_50]
0x4DB20B: push    edx
0x4DB20C: mov     ecx, esi
0x4DB20E: call    sub_4D99E0
0x4DB213: mov     edi, [esi+8]
0x4DB216: test    edi, edi
0x4DB218: jz      short loc_4DB24F
0x4DB21A: mov     ecx, esi
0x4DB21C: call    sub_89F570
0x4DB221: mov     ecx, edi
0x4DB223: call    sub_8A6410
0x4DB228: mov     ecx, esi
0x4DB22A: call    sub_89F570
0x4DB22F: pop     ebp
0x4DB230: pop     edi
0x4DB231: pop     esi
0x4DB232: pop     ebx
0x4DB233: add     esp, 68h
0x4DB236: retn
0x4DB237: push    offset Vector3_InitValue?
0x4DB23C: mov     ecx, esi
0x4DB23E: call    sub_4D9960
0x4DB243: push    offset Vector3_InitValue?
0x4DB248: mov     ecx, esi
0x4DB24A: call    sub_4D99E0
0x4DB24F: pop     ebp
0x4DB250: pop     edi
0x4DB251: pop     esi
0x4DB252: pop     ebx
0x4DB253: add     esp, 68h
0x4DB256: retn
