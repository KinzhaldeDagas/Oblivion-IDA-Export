0x631700: sub     esp, 18h
0x631703: push    ebx
0x631704: push    esi
0x631705: mov     esi, ecx
0x631707: mov     eax, [esi]
0x631709: mov     edx, [eax+184h]
0x63170F: call    edx
0x631711: mov     ebx, eax
0x631713: test    ebx, ebx
0x631715: jnz     short loc_631721
0x631717: pop     esi
0x631718: xor     al, al
0x63171A: pop     ebx
0x63171B: add     esp, 18h
0x63171E: retn    8
0x631721: cmp     byte ptr [esi+0D0h], 0
0x631728: push    edi
0x631729: mov     edi, [esp+24h+arg_0]
0x63172D: jnz     short loc_63173C
0x63172F: mov     eax, [esi]
0x631731: mov     edx, [eax+194h]
0x631737: push    edi
0x631738: mov     ecx, esi
0x63173A: call    edx
0x63173C: cmp     dword ptr [esi+2Ch], 0
0x631740: jnz     short loc_63174F
0x631742: mov     eax, [esi]
0x631744: mov     edx, [eax+558h]
0x63174A: push    edi
0x63174B: mov     ecx, esi
0x63174D: call    edx
0x63174F: mov     ecx, [esi+2Ch]
0x631752: test    ecx, ecx
0x631754: push    ebp
0x631755: push    1
0x631757: jz      loc_631B28
0x63175D: mov     eax, [ecx]
0x63175F: mov     edx, [eax+198h]
0x631765: call    edx
0x631767: test    al, al
0x631769: jz      short loc_6317A9
0x63176B: cmp     dword ptr [esi+44h], 0
0x63176F: jnz     short loc_6317A9
0x631771: mov     eax, [esi+2Ch]
0x631774: push    1
0x631776: push    eax
0x631777: mov     ecx, ebx
0x631779: call    sub_566870
0x63177E: mov     ecx, [ebx+1Ch]
0x631781: shr     ecx, 0Ch
0x631784: test    cl, 1
0x631787: jnz     loc_631B35
0x63178D: mov     edx, [edi]
0x63178F: mov     eax, [esi+2Ch]
0x631792: mov     edx, [edx+2F8h]
0x631798: push    eax
0x631799: mov     ecx, edi
0x63179B: call    edx
0x63179D: pop     ebp
0x63179E: pop     edi
0x63179F: pop     esi
0x6317A0: xor     al, al
0x6317A2: pop     ebx
0x6317A3: add     esp, 18h
0x6317A6: retn    8
0x6317A9: mov     edx, [esi+2Ch]
0x6317AC: mov     ecx, [edx+8]
0x6317AF: mov     eax, ecx
0x6317B1: shr     eax, 5
0x6317B4: and     al, 1
0x6317B6: jnz     loc_631B18
0x6317BC: shr     ecx, 0Bh
0x6317BF: test    cl, 1
0x6317C2: jnz     loc_631B18
0x6317C8: cmp     byte ptr [ebx+20h], 9
0x6317CC: jnz     short loc_63182E
0x6317CE: push    edi
0x6317CF: lea     eax, [esp+2Ch+var_C]
0x6317D3: push    eax
0x6317D4: mov     ecx, ebx
0x6317D6: call    sub_566B30
0x6317DB: mov     ecx, [esi+2Ch]
0x6317DE: push    eax
0x6317DF: call    sub_4D7E30
0x6317E4: call    Double_To_SInt32
0x6317E9: mov     [esp+28h+arg_0], eax
0x6317ED: fild    [esp+28h+arg_0]
0x6317F1: mov     ecx, ebx
0x6317F3: fstp    [esp+28h+var_18]
0x6317F7: call    sub_566DB0
0x6317FC: test    eax, eax
0x6317FE: mov     [esp+28h+arg_0], eax
0x631802: fild    [esp+28h+arg_0]
0x631806: jge     short loc_63180E
0x631808: fadd    dword ptr ds:0A2FC78h
0x63180E: fadd    qword ptr ds:0A3DDE0h
0x631814: fcomp   [esp+28h+var_18]
0x631818: fnstsw  ax
0x63181A: test    ah, 5
0x63181D: jp      short loc_63182E
0x63181F: mov     edx, [esi]
0x631821: mov     eax, [edx+188h]
0x631827: push    0FFFFFFFFh
0x631829: push    edi
0x63182A: mov     ecx, esi
0x63182C: call    eax
0x63182E: mov     ecx, [esi+2Ch]; this
0x631831: call    GetTeleportExtraData
0x631836: test    eax, eax
0x631838: jz      short loc_631878
0x63183A: mov     edx, [edi]
0x63183C: mov     eax, [edx+174h]
0x631842: mov     ecx, edi
0x631844: call    eax
0x631846: push    eax
0x631847: lea     ecx, [esp+2Ch+var_18]
0x63184B: push    ecx
0x63184C: mov     ecx, [esi+2Ch]
0x63184F: call    sub_4D76F0
0x631854: mov     ecx, eax
0x631856: call    sub_4121A0
0x63185B: lea     ecx, [esp+28h+var_18]
0x63185F: call    sub_404C90
0x631864: fild    dword ptr ds:0B36B28h
0x63186A: fcompp
0x63186C: fnstsw  ax
0x63186E: test    ah, 1
0x631871: jnz     short loc_631888
0x631873: jmp     loc_63198E
0x631878: push    edi
0x631879: mov     ecx, ebx
0x63187B: call    sub_5687D0
0x631880: test    al, al
0x631882: jnz     loc_63198E
0x631888: mov     ecx, esi
0x63188A: call    sub_64ADA0
0x63188F: test    al, al
0x631891: jnz     loc_631B35
0x631897: mov     edx, [esi]
0x631899: mov     eax, [edx+36Ch]
0x63189F: mov     ecx, esi
0x6318A1: call    eax
0x6318A3: test    eax, eax
0x6318A5: jz      short loc_6318B4
0x6318A7: mov     edx, [esi]
0x6318A9: mov     eax, [edx+1B0h]
0x6318AF: push    edi
0x6318B0: mov     ecx, esi
0x6318B2: call    eax
0x6318B4: mov     ecx, [esi+2Ch]; this
0x6318B7: call    GetTeleportExtraData
0x6318BC: test    eax, eax
0x6318BE: mov     ecx, [esi+2Ch]
0x6318C1: jnz     short loc_6318CF
0x6318C3: mov     edx, [ecx]
0x6318C5: mov     eax, [edx+174h]
0x6318CB: call    eax
0x6318CD: jmp     short loc_6318D4
0x6318CF: call    sub_4D76F0
0x6318D4: mov     ecx, [eax]
0x6318D6: mov     ebp, [esi]
0x6318D8: mov     [esp+20h+var_10], ecx
0x6318DC: mov     edx, [eax+4]
0x6318DF: mov     [esp+20h+var_C], edx
0x6318E3: mov     eax, [eax+8]
0x6318E6: push    2
0x6318E8: push    edi
0x6318E9: mov     ecx, ebx
0x6318EB: mov     [esp+28h+var_8], eax
0x6318EF: call    sub_5677B0
0x6318F4: mov     ecx, [esi+2Ch]; this
0x6318F7: sub     esp, 8
0x6318FA: fstp    dword ptr [esp+28h+var_24]
0x6318FE: fld     [esp+28h+arg_C]
0x631902: fstp    [esp+28h+var_28]
0x631905: call    TESObjectREFR_GetWorldSpace
0x63190A: mov     ecx, [esi+2Ch]; this
0x63190D: push    eax
0x63190E: call    TESObjectREFR_GetParentCell
0x631913: mov     edx, [ebp+418h]
0x631919: push    eax
0x63191A: lea     ecx, [esp+30h+var_10]
0x63191E: push    ecx
0x63191F: push    edi
0x631920: mov     ecx, esi
0x631922: call    edx
0x631924: mov     ecx, edi; this
0x631926: call    Actor__GetProcessLevel
0x63192B: test    eax, eax
0x63192D: jnz     loc_631B35
0x631933: mov     ecx, [esi+2Ch]; this
0x631936: call    GetTeleportExtraData
0x63193B: test    eax, eax
0x63193D: jz      short loc_63197E
0x63193F: mov     eax, [edi]
0x631941: mov     edx, [eax+174h]
0x631947: mov     ecx, edi
0x631949: call    edx
0x63194B: mov     ecx, [esi+2Ch]
0x63194E: push    eax
0x63194F: lea     eax, [esp+2Ch+var_C]
0x631953: push    eax
0x631954: call    sub_4D76F0
0x631959: mov     ecx, eax
0x63195B: call    sub_4121A0
0x631960: lea     ecx, [esp+28h+var_C]
0x631964: call    sub_404C90
0x631969: fild    dword ptr ds:0B36B28h
0x63196F: fcompp
0x631971: fnstsw  ax
0x631973: test    ah, 1
0x631976: jnz     loc_631B35
0x63197C: jmp     short loc_63198E
0x63197E: push    edi
0x63197F: mov     ecx, ebx
0x631981: call    sub_5687D0
0x631986: test    al, al
0x631988: jz      loc_631B35
0x63198E: mov     ecx, esi
0x631990: call    sub_64ADA0
0x631995: test    al, al
0x631997: jz      short loc_6319A8
0x631999: mov     ecx, [ebx+1Ch]
0x63199C: shr     ecx, 2
0x63199F: test    cl, 1
0x6319A2: jnz     loc_631B35
0x6319A8: mov     ecx, [esi+2Ch]
0x6319AB: mov     edx, [ecx]
0x6319AD: mov     eax, [edx+190h]
0x6319B3: call    eax
0x6319B5: test    al, al
0x6319B7: jnz     loc_631A55
0x6319BD: mov     edx, [esi]
0x6319BF: mov     eax, [edx+394h]
0x6319C5: push    1
0x6319C7: mov     ecx, esi
0x6319C9: call    eax
0x6319CB: mov     eax, [esi+44h]
0x6319CE: xor     ebp, ebp
0x6319D0: cmp     eax, ebp
0x6319D2: jz      short loc_631A2D
0x6319D4: mov     ecx, [eax+10h]
0x6319D7: mov     edx, [eax+4]
0x6319DA: push    ecx
0x6319DB: mov     ecx, [esi+2Ch]
0x6319DE: push    edx
0x6319DF: push    1
0x6319E1: push    edi
0x6319E2: call    ActivateRef
0x6319E7: mov     eax, [esi+44h]
0x6319EA: add     dword ptr [esi+38h], 0FFFFFFFFh
0x6319EE: cmp     eax, ebp
0x6319F0: jz      short loc_6319FB
0x6319F2: push    eax
0x6319F3: call    FormHeapFree
0x6319F8: add     esp, 4
0x6319FB: cmp     dword ptr [esi+38h], 1
0x6319FF: mov     [esi+44h], ebp
0x631A02: mov     [esi+2Ch], ebp
0x631A05: jge     short loc_631A49
0x631A07: cmp     dword ptr [ebx+18h], 1Ah
0x631A0B: jnz     short loc_631A3A
0x631A0D: cmp     [ebx+30h], ebp
0x631A10: jnz     short loc_631A3A
0x631A12: mov     eax, [esi]
0x631A14: mov     edx, [eax+188h]
0x631A1A: push    2
0x631A1C: push    edi
0x631A1D: mov     ecx, esi
0x631A1F: call    edx
0x631A21: pop     ebp
0x631A22: pop     edi
0x631A23: pop     esi
0x631A24: mov     al, 1
0x631A26: pop     ebx
0x631A27: add     esp, 18h
0x631A2A: retn    8
0x631A2D: mov     ecx, [esi+2Ch]
0x631A30: push    1
0x631A32: push    ebp
0x631A33: push    ebp
0x631A34: push    edi
0x631A35: call    ActivateRef
0x631A3A: mov     eax, [esi]
0x631A3C: mov     edx, [eax+188h]
0x631A42: push    1
0x631A44: push    edi
0x631A45: mov     ecx, esi
0x631A47: call    edx
0x631A49: pop     ebp
0x631A4A: pop     edi
0x631A4B: pop     esi
0x631A4C: mov     al, 1
0x631A4E: pop     ebx
0x631A4F: add     esp, 18h
0x631A52: retn    8
0x631A55: mov     ecx, ds:0B333C4h; this
0x631A5B: cmp     [esi+2Ch], ecx
0x631A5E: jnz     short loc_631A92
0x631A60: call    PlayerCharacter__IsSleeping?
0x631A65: test    al, al
0x631A67: mov     ecx, ds:0B333C4h
0x631A6D: jz      short loc_631A92
0x631A6F: cmp     byte ptr [ecx+12Ch], 0
0x631A76: jnz     short loc_631A92
0x631A78: mov     eax, ecx
0x631A7A: mov     dword ptr [ecx+590h], 0
0x631A84: mov     byte ptr [eax+594h], 1
0x631A8B: push    0FFFFFFFEh
0x631A8D: jmp     loc_631B28
0x631A92: xor     ebx, ebx
0x631A94: cmp     [esi+44h], ebx
0x631A97: jz      short loc_631B0F
0x631A99: mov     ecx, [esi+2Ch]
0x631A9C: mov     eax, [ecx]
0x631A9E: mov     edx, [eax+198h]
0x631AA4: push    ebx
0x631AA5: call    edx
0x631AA7: test    al, al
0x631AA9: jnz     short loc_631AD6
0x631AAB: mov     eax, [esi+44h]
0x631AAE: cmp     [eax+8], ebx
0x631AB1: jg      short loc_631AD6
0x631AB3: cmp     [eax+0Ch], ebx
0x631AB6: jle     short loc_631B06
0x631AB8: mov     ecx, [esi+2Ch]
0x631ABB: mov     eax, [esi]
0x631ABD: mov     edx, [eax+228h]
0x631AC3: push    1
0x631AC5: push    ebx
0x631AC6: push    ebx
0x631AC7: push    1
0x631AC9: push    ebx
0x631ACA: push    1
0x631ACC: push    ebx
0x631ACD: push    ebx
0x631ACE: push    ecx
0x631ACF: push    edi
0x631AD0: mov     ecx, esi
0x631AD2: call    edx
0x631AD4: jmp     short loc_631B06
0x631AD6: mov     eax, [esi+44h]
0x631AD9: mov     ecx, [eax+10h]
0x631ADC: mov     edx, [eax+4]
0x631ADF: push    ecx
0x631AE0: mov     ecx, [esi+2Ch]
0x631AE3: push    edx
0x631AE4: push    1
0x631AE6: push    edi
0x631AE7: call    ActivateRef
0x631AEC: mov     eax, [esi+44h]
0x631AEF: add     dword ptr [esi+38h], 0FFFFFFFFh
0x631AF3: cmp     eax, ebx
0x631AF5: jz      short loc_631B00
0x631AF7: push    eax
0x631AF8: call    FormHeapFree
0x631AFD: add     esp, 4
0x631B00: mov     [esi+44h], ebx
0x631B03: mov     [esi+2Ch], ebx
0x631B06: cmp     [esi+38h], ebx
0x631B09: jg      short loc_631B35
0x631B0B: push    2
0x631B0D: jmp     short loc_631B28
0x631B0F: cmp     [esi+2Ch], ecx
0x631B12: jz      short loc_631B35
0x631B14: push    2
0x631B16: jmp     short loc_631B28
0x631B18: test    al, al
0x631B1A: jz      short loc_631B26
0x631B1C: push    1
0x631B1E: push    edx
0x631B1F: mov     ecx, ebx
0x631B21: call    sub_566870
0x631B26: push    1
0x631B28: mov     eax, [esi]
0x631B2A: mov     edx, [eax+188h]
0x631B30: push    edi
0x631B31: mov     ecx, esi
0x631B33: call    edx
0x631B35: pop     ebp
0x631B36: pop     edi
0x631B37: pop     esi
0x631B38: xor     al, al
0x631B3A: pop     ebx
0x631B3B: add     esp, 18h
0x631B3E: retn    8
