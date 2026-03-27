0x601790: sub     esp, 20h
0x601793: push    ebx
0x601794: push    esi
0x601795: mov     esi, ecx
0x601797: mov     eax, [esi]
0x601799: mov     edx, [eax+174h]
0x60179F: push    edi
0x6017A0: call    edx
0x6017A2: mov     ecx, ds:0B333C4h
0x6017A8: mov     edi, eax
0x6017AA: mov     eax, [ecx]
0x6017AC: mov     edx, [eax+174h]
0x6017B2: call    edx
0x6017B4: fld     dword ptr [eax+4]
0x6017B7: fsub    dword ptr [edi+4]
0x6017BA: fstp    [esp+2Ch+var_14]
0x6017BE: fld     dword ptr [eax+8]
0x6017C1: fsub    dword ptr [edi+8]
0x6017C4: fstp    [esp+2Ch+var_18]
0x6017C8: fld     dword ptr [eax]
0x6017CA: lea     eax, [esp+2Ch+var_C]
0x6017CE: fsub    dword ptr [edi]
0x6017D0: push    eax
0x6017D1: fstp    [esp+30h+var_C]
0x6017D5: fld     [esp+30h+var_14]
0x6017D9: fstp    [esp+30h+var_8]
0x6017DD: fld     [esp+30h+var_18]
0x6017E1: fstp    [esp+30h+var_4]
0x6017E5: call    sub_683CB0
0x6017EA: mov     edx, [esi]
0x6017EC: fstp    [esp+30h+var_18]
0x6017F0: mov     eax, [edx+164h]
0x6017F6: add     esp, 4
0x6017F9: mov     ecx, esi
0x6017FB: call    eax
0x6017FD: mov     ecx, [esi+58h]
0x601800: mov     ebx, eax
0x601802: mov     eax, [ecx+8]
0x601805: test    eax, eax
0x601807: mov     [esp+2Ch+var_14], ebx
0x60180B: mov     [esp+2Ch+var_1C], 0
0x601813: jz      short loc_60181F
0x601815: cmp     byte ptr [eax+20h], 12h
0x601819: jnz     short loc_60181F
0x60181B: mov     [esp+2Ch+var_1C], eax
0x60181F: test    ebx, ebx
0x601821: mov     [esp+2Ch+var_1D], 0
0x601826: jz      loc_601B6E
0x60182C: mov     edx, [esi]
0x60182E: mov     eax, [edx+1E0h]
0x601834: mov     ecx, esi
0x601836: call    eax
0x601838: fsub    [esp+2Ch+var_18]
0x60183C: fstp    [esp+2Ch+var_10]
0x601840: fld     [esp+2Ch+var_10]
0x601844: fabs
0x601846: fstp    [esp+2Ch+var_10]
0x60184A: fld     [esp+2Ch+var_10]
0x60184E: fcomp   dword ptr ds:0A2FAA8h
0x601854: fnstsw  ax
0x601856: test    ah, 41h
0x601859: jnz     short loc_601880
0x60185B: mov     edx, [esi]
0x60185D: mov     eax, [edx+18Ch]
0x601863: mov     ecx, esi
0x601865: call    eax
0x601867: test    eax, eax
0x601869: jnz     short loc_601880
0x60186B: fld     [esp+2Ch+var_18]
0x60186F: push    1; char
0x601871: push    ecx
0x601872: fstp    [esp+34h+var_34]; float
0x601875: push    esi; Concurrency::details::SchedulerBase *
0x601876: call    sub_685530
0x60187B: add     esp, 0Ch
0x60187E: jmp     short loc_60189C
0x601880: cmp     dword ptr [esi+58h], 0
0x601884: jz      short loc_601897
0x601886: mov     ecx, [esi+58h]
0x601889: mov     edx, [ecx]
0x60188B: mov     eax, [edx+2C4h]
0x601891: push    0
0x601893: push    30h ; '0'
0x601895: call    eax
0x601897: mov     [esp+2Ch+var_1D], 1
0x60189C: mov     eax, [esp+2Ch+arg_4]
0x6018A0: test    eax, eax
0x6018A2: mov     [esp+2Ch+var_1E], 0
0x6018A7: jz      short loc_60191D
0x6018A9: cmp     dword ptr [esi+58h], 0
0x6018AD: jz      loc_601930
0x6018B3: movzx   ecx, word ptr [eax+4]
0x6018B7: cmp     cx, 0FFFFh
0x6018BC: jnz     short loc_6018D0
0x6018BE: mov     ecx, [eax]
0x6018C0: lea     edi, [ecx+1]
0x6018C3: mov     dl, [ecx]
0x6018C5: add     ecx, 1
0x6018C8: test    dl, dl
0x6018CA: jnz     short loc_6018C3
0x6018CC: sub     ecx, edi
0x6018CE: jmp     short loc_6018D3
0x6018D0: movzx   ecx, cx
0x6018D3: mov     edx, [eax+0Ch]
0x6018D6: mov     edi, [eax+8]
0x6018D9: mov     eax, [eax+10h]
0x6018DC: push    1
0x6018DE: push    0
0x6018E0: push    1
0x6018E2: push    1
0x6018E4: push    ecx
0x6018E5: push    edx
0x6018E6: push    edi
0x6018E7: lea     ecx, [esp+48h+arg_4]
0x6018EB: push    ecx
0x6018EC: push    eax
0x6018ED: mov     ecx, esi
0x6018EF: call    Actor__InitDialogue
0x6018F4: fstp    [esp+2Ch+arg_4]
0x6018F8: mov     ecx, [esi+58h]
0x6018FB: fld     [esp+2Ch+arg_4]
0x6018FF: mov     edx, [ecx]
0x601901: mov     eax, [edx+20Ch]
0x601907: push    ecx
0x601908: fstp    [esp+30h+var_30]
0x60190B: call    eax
0x60190D: push    0
0x60190F: push    1
0x601911: mov     ecx, ebx
0x601913: mov     [esp+34h+var_1E], 1
0x601918: call    sub_475440
0x60191D: cmp     dword ptr [esi+58h], 0
0x601921: jz      short loc_601930
0x601923: mov     ecx, [esi+58h]
0x601926: mov     edx, [ecx]
0x601928: mov     eax, [edx+184h]
0x60192E: call    eax
0x601930: fld1
0x601932: sub     esp, 8
0x601935: fst     [esp+34h+var_30]; int
0x601939: mov     ecx, esi
0x60193B: fstp    [esp+34h+var_34]; float
0x60193E: call    Actor_ProcessAction
0x601943: fld     dword ptr ds:0A30634h
0x601949: sub     esp, 8
0x60194C: fstp    [esp+34h+var_30]; float
0x601950: fld     dword ptr ds:0B33E9Ch
0x601956: mov     ecx, ebx; this
0x601958: fstp    [esp+34h+var_34]; float
0x60195B: push    esi; int
0x60195C: call    sub_476D10
0x601961: mov     ecx, [esi+58h]
0x601964: test    ecx, ecx
0x601966: jz      loc_601AE2
0x60196C: mov     edx, [ecx]
0x60196E: mov     eax, [edx+33Ch]
0x601974: push    0
0x601976: call    eax
0x601978: cmp     dword ptr [esi+58h], 0
0x60197C: mov     ebx, eax
0x60197E: jz      short loc_601992
0x601980: mov     ecx, [esi+58h]
0x601983: mov     edx, [ecx]
0x601985: mov     eax, [edx+0E8h]
0x60198B: push    esi
0x60198C: call    eax
0x60198E: mov     edi, eax
0x601990: jmp     short loc_601994
0x601992: xor     edi, edi
0x601994: test    ebx, ebx
0x601996: push    ebp
0x601997: jz      loc_601A45
0x60199D: mov     ecx, ebx
0x60199F: call    sub_6B7260
0x6019A4: test    al, al
0x6019A6: jz      loc_601A45
0x6019AC: test    edi, edi
0x6019AE: jz      loc_601AE1
0x6019B4: cmp     dword ptr [esi+70h], 7
0x6019B8: jnz     loc_601AE1
0x6019BE: push    40Ah
0x6019C3: call    Menu_GetOpenMenuTile
0x6019C8: add     esp, 4
0x6019CB: mov     ecx, esi
0x6019CD: mov     ebx, eax
0x6019CF: call    sub_5E12B0
0x6019D4: mov     edi, eax
0x6019D6: test    edi, edi
0x6019D8: jz      loc_601AE1
0x6019DE: cmp     byte ptr ds:0B1206Ch, 0
0x6019E5: jz      loc_601A9C
0x6019EB: mov     ecx, [esi+58h]
0x6019EE: test    ecx, ecx
0x6019F0: jz      short loc_601A08
0x6019F2: test    ebx, ebx
0x6019F4: jnz     short loc_601A08
0x6019F6: mov     edx, [ecx]
0x6019F8: mov     eax, [edx+1DCh]
0x6019FE: call    eax
0x601A00: test    eax, eax
0x601A02: jnz     loc_601AE1
0x601A08: call    InterfaceManager__IsOpenedMenuDialogue
0x601A0D: test    al, al
0x601A0F: jz      loc_601AE1
0x601A15: mov     ebx, [edi]
0x601A17: mov     ebp, [esi+58h]
0x601A1A: mov     ecx, esi; this
0x601A1C: call    Actor__IsTalking
0x601A21: mov     edx, [ebp+0]
0x601A24: mov     edx, [edx+1D8h]
0x601A2A: mov     ecx, ebp
0x601A2C: push    eax
0x601A2D: mov     eax, ds:0B333C4h
0x601A32: push    eax
0x601A33: push    esi
0x601A34: call    edx
0x601A36: mov     eax, [ebx+0D0h]
0x601A3C: push    ecx
0x601A3D: fstp    [esp+38h+var_38]
0x601A40: jmp     loc_601ADD
0x601A45: push    40Ah
0x601A4A: call    Menu_GetOpenMenuTile
0x601A4F: mov     ebp, eax
0x601A51: mov     eax, [esp+34h+var_1C]
0x601A55: add     esp, 4
0x601A58: test    eax, eax
0x601A5A: jz      short loc_601A75
0x601A5C: cmp     dword ptr [eax+48h], 0
0x601A60: jz      short loc_601A75
0x601A62: test    ebx, ebx
0x601A64: jnz     short loc_601A75
0x601A66: mov     ecx, [esp+30h+var_14]
0x601A6A: push    ebx
0x601A6B: push    1
0x601A6D: mov     [eax+48h], ebx
0x601A70: call    sub_475440
0x601A75: test    edi, edi
0x601A77: jz      short loc_601AE1
0x601A79: mov     eax, [esi+70h]
0x601A7C: cmp     eax, 7
0x601A7F: jnz     short loc_601AB7
0x601A81: cmp     byte ptr ds:0B1206Ch, 0
0x601A88: jz      short loc_601A9C
0x601A8A: mov     ecx, [esi+58h]
0x601A8D: test    ecx, ecx
0x601A8F: jz      loc_601A08
0x601A95: test    ebp, ebp
0x601A97: jmp     loc_6019F4
0x601A9C: mov     edx, [edi]
0x601A9E: fldz
0x601AA0: mov     eax, [edx+78h]
0x601AA3: push    0
0x601AA5: push    0
0x601AA7: push    0
0x601AA9: push    0
0x601AAB: push    1
0x601AAD: push    ecx
0x601AAE: mov     ecx, edi
0x601AB0: fstp    [esp+48h+var_48]
0x601AB3: call    eax
0x601AB5: jmp     short loc_601AE1
0x601AB7: sub     eax, 1
0x601ABA: jz      short loc_601ACC
0x601ABC: sub     eax, 4
0x601ABF: jnz     short loc_601AE1
0x601AC1: fld     dword ptr [esi+74h]
0x601AC4: push    ecx
0x601AC5: fstp    [esp+34h+var_34]
0x601AC8: push    0Ch
0x601ACA: jmp     short loc_601AD5
0x601ACC: fld     dword ptr [esi+74h]
0x601ACF: push    ecx
0x601AD0: fstp    [esp+34h+var_34]
0x601AD3: push    8
0x601AD5: mov     edx, [edi]
0x601AD7: mov     eax, [edx+0C8h]
0x601ADD: mov     ecx, edi
0x601ADF: call    eax
0x601AE1: pop     ebp
0x601AE2: mov     ecx, ds:0B33398h
0x601AE8: mov     ecx, [ecx+24h]
0x601AEB: push    1
0x601AED: push    1
0x601AEF: call    sub_6AE860
0x601AF4: fld     [esp+2Ch+arg_0]
0x601AF8: mov     edx, [esi]
0x601AFA: mov     eax, [edx+228h]
0x601B00: push    ecx
0x601B01: mov     ecx, esi
0x601B03: fstp    [esp+30h+var_30]
0x601B06: call    eax
0x601B08: cmp     [esp+2Ch+var_1E], 0
0x601B0D: jz      short loc_601B1A
0x601B0F: mov     eax, [esp+2Ch+var_1C]
0x601B13: test    eax, eax
0x601B15: jz      short loc_601B1A
0x601B17: mov     [eax+48h], esi
0x601B1A: mov     ecx, [esi+58h]
0x601B1D: mov     edx, [ecx]
0x601B1F: mov     eax, [edx+184h]
0x601B25: call    eax
0x601B27: cmp     [esp+2Ch+var_1D], 0
0x601B2C: jz      short loc_601B50
0x601B2E: test    eax, eax
0x601B30: jz      short loc_601B50
0x601B32: cmp     byte ptr [eax+20h], 12h
0x601B36: jnz     short loc_601B50
0x601B38: mov     ecx, [esp+2Ch+var_14]
0x601B3C: call    sub_472EA0
0x601B41: test    al, al
0x601B43: jz      short loc_601B50
0x601B45: mov     ecx, [esi+58h]
0x601B48: mov     edx, [ecx]
0x601B4A: mov     eax, [edx+48h]
0x601B4D: push    esi
0x601B4E: call    eax
0x601B50: mov     ecx, esi; this
0x601B52: call    TESObjectREFR_GetParentCell
0x601B57: test    eax, eax
0x601B59: jz      short loc_601B62
0x601B5B: mov     ecx, eax
0x601B5D: call    sub_4CB6C0
0x601B62: mov     edx, [esi]
0x601B64: mov     eax, [edx+0FCh]
0x601B6A: mov     ecx, esi
0x601B6C: call    eax
0x601B6E: pop     edi
0x601B6F: pop     esi
0x601B70: pop     ebx
0x601B71: add     esp, 20h
0x601B74: retn    8
