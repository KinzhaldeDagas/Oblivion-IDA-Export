0x704800: push    0FFFFFFFFh
0x704802: push    offset SEH_704800
0x704807: mov     eax, large fs:0
0x70480D: push    eax
0x70480E: push    ecx
0x70480F: push    ebx
0x704810: push    ebp
0x704811: push    esi
0x704812: push    edi
0x704813: mov     eax, ds:0B30AACh
0x704818: xor     eax, esp
0x70481A: push    eax
0x70481B: lea     eax, [esp+24h+var_C]
0x70481F: mov     large fs:0, eax
0x704825: mov     edi, ecx
0x704827: mov     [esp+24h+var_10], edi
0x70482B: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x704830: xor     ebx, ebx
0x704832: mov     dword ptr [edi], offset ??_7NiTexturingProperty@@6B@; const NiTexturingProperty::`vftable'
0x704838: mov     [edi+18h], bx
0x70483C: lea     esi, [edi+1Ch]
0x70483F: xor     ecx, ecx
0x704841: mov     eax, 7
0x704846: mov     [esi+8], ax
0x70484A: mov     edx, 4
0x70484F: mul     edx
0x704851: seto    cl
0x704854: mov     [esp+24h+var_4], ebx
0x704858: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::Map *>::`vftable'
0x70485E: mov     word ptr [esi+0Eh], 1
0x704864: mov     [esi+0Ah], bx
0x704868: mov     [esi+0Ch], bx
0x70486C: neg     ecx
0x70486E: or      ecx, eax
0x704870: push    ecx; Size
0x704871: call    FormHeapAlloc
0x704876: mov     [esi+4], eax
0x704879: mov     eax, [esp+28h+a1]
0x70487D: push    offset dword_B256D0; a2
0x704882: push    eax; a1
0x704883: mov     byte ptr [esp+30h+var_4], 1
0x704888: mov     [edi+2Ch], ebx
0x70488B: call    NiSourceTexture__LoadTexturePixelData
0x704890: push    10h; Size
0x704892: mov     [esp+34h+a1], eax
0x704896: call    FormHeapAlloc
0x70489B: mov     ebp, eax
0x70489D: add     esp, 10h
0x7048A0: cmp     ebp, ebx
0x7048A2: jz      short loc_7048DB
0x7048A4: mov     eax, [esp+24h+a1]
0x7048A8: cmp     eax, ebx
0x7048AA: mov     dword ptr [ebp+0], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x7048B1: mov     [ebp+4], bx
0x7048B5: mov     [ebp+8], eax
0x7048B8: jz      short loc_7048C4
0x7048BA: add     eax, 4
0x7048BD: push    eax; lpAddend
0x7048BE: call    dword ptr ds:0A28078h
0x7048C4: mov     cx, [ebp+4]
0x7048C8: and     cx, 0F100h
0x7048CD: or      cx, 3100h
0x7048D2: mov     [ebp+0Ch], ebx
0x7048D5: mov     [ebp+4], cx
0x7048D9: jmp     short loc_7048DD
0x7048DB: xor     ebp, ebp
0x7048DD: cmp     [esi+8], bx
0x7048E1: mov     [esp+24h+a1], ebp
0x7048E5: ja      short loc_7048F3
0x7048E7: movzx   edx, word ptr [esi+0Eh]
0x7048EB: push    edx
0x7048EC: mov     ecx, esi
0x7048EE: call    NiTArray_SetSize
0x7048F3: lea     eax, [esp+24h+a1]
0x7048F7: push    eax
0x7048F8: push    ebx
0x7048F9: mov     ecx, esi
0x7048FB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704900: cmp     word ptr [esi+8], 1
0x704905: mov     [esp+24h+a1], ebx
0x704909: ja      short loc_70491A
0x70490B: movzx   ecx, word ptr [esi+0Eh]
0x70490F: add     ecx, 1
0x704912: push    ecx
0x704913: mov     ecx, esi
0x704915: call    NiTArray_SetSize
0x70491A: lea     edx, [esp+24h+a1]
0x70491E: push    edx
0x70491F: push    1
0x704921: mov     ecx, esi
0x704923: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704928: cmp     word ptr [esi+8], 2
0x70492D: mov     [esp+24h+a1], ebx
0x704931: ja      short loc_704942
0x704933: movzx   eax, word ptr [esi+0Eh]
0x704937: add     eax, 2
0x70493A: push    eax
0x70493B: mov     ecx, esi
0x70493D: call    NiTArray_SetSize
0x704942: lea     ecx, [esp+24h+a1]
0x704946: push    ecx
0x704947: push    2
0x704949: mov     ecx, esi
0x70494B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704950: cmp     word ptr [esi+8], 3
0x704955: mov     [esp+24h+a1], ebx
0x704959: ja      short loc_70496A
0x70495B: movzx   edx, word ptr [esi+0Eh]
0x70495F: add     edx, 3
0x704962: push    edx
0x704963: mov     ecx, esi
0x704965: call    NiTArray_SetSize
0x70496A: lea     eax, [esp+24h+a1]
0x70496E: push    eax
0x70496F: push    3
0x704971: mov     ecx, esi
0x704973: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704978: cmp     word ptr [esi+8], 4
0x70497D: mov     [esp+24h+a1], ebx
0x704981: ja      short loc_704992
0x704983: movzx   ecx, word ptr [esi+0Eh]
0x704987: add     ecx, 4
0x70498A: push    ecx
0x70498B: mov     ecx, esi
0x70498D: call    NiTArray_SetSize
0x704992: lea     edx, [esp+24h+a1]
0x704996: push    edx
0x704997: push    4
0x704999: mov     ecx, esi
0x70499B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7049A0: cmp     word ptr [esi+8], 5
0x7049A5: mov     [esp+24h+a1], ebx
0x7049A9: ja      short loc_7049BA
0x7049AB: movzx   eax, word ptr [esi+0Eh]
0x7049AF: add     eax, 5
0x7049B2: push    eax
0x7049B3: mov     ecx, esi
0x7049B5: call    NiTArray_SetSize
0x7049BA: lea     ecx, [esp+24h+a1]
0x7049BE: push    ecx
0x7049BF: push    5
0x7049C1: mov     ecx, esi
0x7049C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7049C8: cmp     word ptr [esi+8], 6
0x7049CD: mov     [esp+24h+a1], ebx
0x7049D1: ja      short loc_7049E2
0x7049D3: movzx   edx, word ptr [esi+0Eh]
0x7049D7: add     edx, 6
0x7049DA: push    edx
0x7049DB: mov     ecx, esi
0x7049DD: call    NiTArray_SetSize
0x7049E2: lea     eax, [esp+24h+a1]
0x7049E6: push    eax
0x7049E7: push    6
0x7049E9: mov     ecx, esi
0x7049EB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7049F0: movzx   edx, word ptr [edi+26h]
0x7049F4: and     word ptr [edi+18h], 0F00Fh
0x7049FA: movzx   esi, word ptr [edi+18h]
0x7049FE: mov     eax, 1
0x704A03: cmp     edx, eax
0x704A05: jbe     short loc_704A1E
0x704A07: mov     ecx, [edi+20h]
0x704A0A: add     ecx, 4
0x704A0D: lea     ecx, [ecx+0]
0x704A10: cmp     [ecx], ebx
0x704A12: jnz     short loc_704A50
0x704A14: add     eax, 1
0x704A17: add     ecx, 4
0x704A1A: cmp     eax, edx
0x704A1C: jb      short loc_704A10
0x704A1E: and     esi, 0FFFEh
0x704A24: mov     cx, si
0x704A27: and     cx, 0FFF5h
0x704A2C: or      cx, 4
0x704A30: mov     [edi+18h], si
0x704A34: mov     [edi+18h], cx
0x704A38: mov     eax, edi
0x704A3A: mov     ecx, [esp+24h+var_C]
0x704A3E: mov     large fs:0, ecx
0x704A45: pop     ecx
0x704A46: pop     edi
0x704A47: pop     esi
0x704A48: pop     ebp
0x704A49: pop     ebx
0x704A4A: add     esp, 10h
0x704A4D: retn    4
0x704A50: or      esi, 1
0x704A53: jmp     short loc_704A24
