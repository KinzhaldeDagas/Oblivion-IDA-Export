0x78B0E0: push    ebp
0x78B0E1: mov     ebp, esp
0x78B0E3: push    0FFFFFFFFh
0x78B0E5: push    offset SEH_78B0E0
0x78B0EA: mov     eax, large fs:0
0x78B0F0: push    eax
0x78B0F1: sub     esp, 40h
0x78B0F4: push    ebx
0x78B0F5: push    esi
0x78B0F6: push    edi
0x78B0F7: mov     eax, ds:0B30AACh
0x78B0FC: xor     eax, ebp
0x78B0FE: push    eax
0x78B0FF: lea     eax, [ebp+var_C]
0x78B102: mov     large fs:0, eax
0x78B108: mov     [ebp+var_10], esp
0x78B10B: mov     ecx, [ecx]
0x78B10D: cmp     byte ptr [ecx+21h], 0
0x78B111: mov     [ebp+var_4], 0
0x78B118: jz      short loc_78B177
0x78B11A: fldz
0x78B11C: fld     [ebp+arg_0]
0x78B11F: fcom    st(1)
0x78B121: fnstsw  ax
0x78B123: fstp    st(1)
0x78B125: test    ah, 41h
0x78B128: jnz     short loc_78B150
0x78B12A: fld     [ebp+arg_4]
0x78B12D: sub     esp, 8
0x78B130: fstp    [esp+64h+var_60]; float
0x78B134: fstp    [esp+64h+var_64]; float
0x78B137: call    sub_7A2420
0x78B13C: mov     ecx, [ebp+var_C]
0x78B13F: mov     large fs:0, ecx
0x78B146: pop     ecx
0x78B147: pop     edi
0x78B148: pop     esi
0x78B149: pop     ebx
0x78B14A: mov     esp, ebp
0x78B14C: pop     ebp
0x78B14D: retn    8
0x78B150: push    3Ch ; '<'; MaxCount
0x78B152: fstp    st
0x78B154: push    offset aSettreesizeIsO; "SetTreeSize() is only valid for size va"...
0x78B159: mov     ecx, offset dword_B2B614
0x78B15E: call    sub_414500
0x78B163: mov     ecx, [ebp+var_C]
0x78B166: mov     large fs:0, ecx
0x78B16D: pop     ecx
0x78B16E: pop     edi
0x78B16F: pop     esi
0x78B170: pop     ebx
0x78B171: mov     esp, ebp
0x78B173: pop     ebp
0x78B174: retn    8
0x78B177: push    47h ; 'G'
0x78B179: push    offset aSettreesizeHas; "SetTreeSize() has no effect after Delet"...
0x78B17E: jmp     short loc_78B159
0x78B180: mov     ecx, [ebp+var_14]
0x78B183: mov     eax, [ecx]
0x78B185: mov     edx, [eax+4]
0x78B188: call    edx
0x78B18A: push    eax
0x78B18B: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B190: push    offset aSFailedS; "%s - failed [%s]"
0x78B195: lea     esi, [ebp+var_30]
0x78B198: call    sub_7A54A0
0x78B19D: add     esp, 0Ch
0x78B1A0: cmp     dword ptr [eax+18h], 10h
0x78B1A4: mov     byte ptr [ebp+var_4], 2
0x78B1A8: jb      short loc_78B1AF
0x78B1AA: mov     eax, [eax+4]
0x78B1AD: jmp     short loc_78B1B2
0x78B1AF: add     eax, 4
0x78B1B2: push    eax; Src
0x78B1B3: call    sub_7895E0
0x78B1B8: add     esp, 4
0x78B1BB: lea     ecx, [ebp+var_30]
0x78B1BE: call    sub_79AB00
0x78B1C3: mov     eax, offset loc_78B1C9
0x78B1C8: retn
0x78B1C9: mov     ecx, [ebp+var_C]
0x78B1CC: mov     large fs:0, ecx
0x78B1D3: pop     ecx
0x78B1D4: pop     edi
0x78B1D5: pop     esi
0x78B1D6: pop     ebx
0x78B1D7: mov     esp, ebp
0x78B1D9: pop     ebp
0x78B1DA: retn    8
0x78B1DD: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B1E2: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B1E7: lea     esi, [ebp+var_4C]
0x78B1EA: call    sub_7A54A0
0x78B1EF: add     esp, 8
0x78B1F2: cmp     dword ptr [eax+18h], 10h
0x78B1F6: mov     byte ptr [ebp+var_4], 3
0x78B1FA: jb      short loc_78B201
0x78B1FC: mov     eax, [eax+4]
0x78B1FF: jmp     short loc_78B204
0x78B201: add     eax, 4
0x78B204: push    eax; Src
0x78B205: call    sub_7895E0
0x78B20A: add     esp, 4
0x78B20D: lea     ecx, [ebp+var_4C]
0x78B210: call    sub_79AB00
0x78B215: mov     eax, offset loc_78B163
0x78B21A: retn
