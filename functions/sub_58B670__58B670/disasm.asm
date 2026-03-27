0x58B670: push    ecx
0x58B671: push    ebp
0x58B672: mov     ebp, [ecx+34h]
0x58B675: test    ebp, ebp
0x58B677: jz      loc_58B7EB
0x58B67D: push    ebx
0x58B67E: push    esi
0x58B67F: push    edi
0x58B680: mov     ebx, [ebp+8]
0x58B683: lea     eax, [ebp+8]
0x58B686: mov     eax, [ebx+18h]
0x58B689: test    eax, eax
0x58B68B: mov     ebp, [ebp+0]
0x58B68E: jz      loc_58B7B7
0x58B694: mov     edx, [eax+8]
0x58B697: lea     ecx, [eax+8]
0x58B69A: movzx   ecx, word ptr [edx+18h]
0x58B69E: cmp     cx, 0FC8h
0x58B6A3: mov     eax, [eax]
0x58B6A5: jz      short loc_58B6B6
0x58B6A7: ja      loc_58B7B7
0x58B6AD: test    eax, eax
0x58B6AF: jnz     short loc_58B694
0x58B6B1: jmp     loc_58B7B7
0x58B6B6: fld     dword ptr [edx+4]
0x58B6B9: fstp    [esp+14h+var_4]
0x58B6BD: fld     dword ptr ds:0A379B4h
0x58B6C3: fcomp   [esp+14h+var_4]
0x58B6C7: fnstsw  ax
0x58B6C9: test    ah, 44h
0x58B6CC: jp      loc_58B7B7
0x58B6D2: mov     eax, [ebx+24h]
0x58B6D5: test    eax, eax
0x58B6D7: jz      loc_58B7B7
0x58B6DD: lea     esi, [eax+0ACh]
0x58B6E3: mov     ecx, esi
0x58B6E5: xor     edi, edi
0x58B6E7: call    sub_4784A0
0x58B6EC: cmp     [esi+0Ah], di
0x58B6F0: jbe     short loc_58B71F
0x58B6F2: mov     edx, [esi+4]
0x58B6F5: jmp     short loc_58B700
0x58B6F7: align 10h
0x58B700: movzx   eax, word ptr [esi+0Ah]
0x58B704: movzx   ecx, ax
0x58B707: cmp     dword ptr [edx+ecx*4-4], 0
0x58B70C: setnz   cl
0x58B70F: test    cl, cl
0x58B711: jnz     short loc_58B71F
0x58B713: add     eax, 0FFFFFFFFh
0x58B716: test    ax, ax
0x58B719: mov     [esi+0Ah], ax
0x58B71D: ja      short loc_58B700
0x58B71F: mov     eax, [ebx+24h]
0x58B722: cmp     word ptr [eax+0B8h], 0
0x58B72A: jbe     loc_58B7B7
0x58B730: movzx   edx, word ptr [eax+0B6h]
0x58B737: cmp     edx, edi
0x58B739: jbe     short loc_58B7A2
0x58B73B: mov     eax, [eax+0B0h]
0x58B741: mov     esi, [eax+edi*4]
0x58B744: test    esi, esi
0x58B746: jz      short loc_58B7A2
0x58B748: mov     edx, [esi]
0x58B74A: mov     eax, [edx+4]
0x58B74D: mov     ecx, esi
0x58B74F: call    eax
0x58B751: test    eax, eax
0x58B753: jz      short loc_58B767
0x58B755: cmp     eax, offset unk_B352A4
0x58B75A: jz      loc_58B7F0
0x58B760: mov     eax, [eax+4]
0x58B763: test    eax, eax
0x58B765: jnz     short loc_58B755
0x58B767: xor     al, al
0x58B769: neg     al
0x58B76B: sbb     eax, eax
0x58B76D: and     eax, esi
0x58B76F: mov     esi, eax
0x58B771: jz      short loc_58B7A2
0x58B773: fld     [esp+14h+arg_C]
0x58B777: call    Double_To_SInt32
0x58B77C: fld     [esp+14h+arg_8]
0x58B780: push    eax
0x58B781: call    Double_To_SInt32
0x58B786: fld     [esp+18h+arg_4]
0x58B78A: push    eax
0x58B78B: call    Double_To_SInt32
0x58B790: fld     [esp+1Ch+arg_0]
0x58B794: push    eax
0x58B795: call    Double_To_SInt32
0x58B79A: push    eax
0x58B79B: mov     ecx, esi
0x58B79D: call    sub_4A17F0
0x58B7A2: mov     eax, [ebx+24h]
0x58B7A5: movzx   ecx, word ptr [eax+0B8h]
0x58B7AC: add     edi, 1
0x58B7AF: cmp     edi, ecx
0x58B7B1: jb      loc_58B730
0x58B7B7: fld     [esp+14h+arg_C]
0x58B7BB: sub     esp, 10h
0x58B7BE: fstp    [esp+24h+var_18]; float
0x58B7C2: mov     ecx, ebx
0x58B7C4: fld     [esp+24h+arg_8]
0x58B7C8: fstp    [esp+24h+var_1C]; float
0x58B7CC: fld     [esp+24h+arg_4]
0x58B7D0: fstp    [esp+24h+var_20]; float
0x58B7D4: fld     [esp+24h+arg_0]
0x58B7D8: fstp    [esp+24h+var_24]; float
0x58B7DB: call    sub_58B670
0x58B7E0: test    ebp, ebp
0x58B7E2: jnz     loc_58B680
0x58B7E8: pop     edi
0x58B7E9: pop     esi
0x58B7EA: pop     ebx
0x58B7EB: pop     ebp
0x58B7EC: pop     ecx
0x58B7ED: retn    10h
0x58B7F0: mov     al, 1
0x58B7F2: jmp     loc_58B769
