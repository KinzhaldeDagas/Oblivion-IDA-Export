0x4D0040: sub     esp, 108h
0x4D0046: mov     eax, ds:0B30AACh
0x4D004B: xor     eax, esp
0x4D004D: mov     [esp+108h+var_4], eax
0x4D0054: push    ebp
0x4D0055: mov     ebp, [esp+10Ch+arg_0]
0x4D005C: push    esi
0x4D005D: mov     esi, ecx
0x4D005F: test    byte ptr [esi+24h], 1
0x4D0063: jnz     short loc_4D00D8
0x4D0065: push    ebp
0x4D0066: call    sub_4CFF80
0x4D006B: test    byte ptr [esi+24h], 1
0x4D006F: jnz     short loc_4D0084
0x4D0071: mov     ecx, [esi+50h]
0x4D0074: test    ecx, ecx
0x4D0076: jz      short loc_4D0084
0x4D0078: mov     eax, [ecx]
0x4D007A: mov     edx, [eax+0D4h]
0x4D0080: call    edx
0x4D0082: jmp     short loc_4D0089
0x4D0084: mov     eax, offset aNone_0; "NONE"
0x4D0089: mov     dl, [esi+24h]
0x4D008C: and     dl, 1
0x4D008F: push    edi
0x4D0090: jnz     short loc_4D009E
0x4D0092: mov     ecx, [esi+3Ch]
0x4D0095: test    ecx, ecx
0x4D0097: jz      short loc_4D009E
0x4D0099: mov     edi, [ecx+4]
0x4D009C: jmp     short loc_4D00A0
0x4D009E: xor     edi, edi
0x4D00A0: test    dl, dl
0x4D00A2: jnz     short loc_4D00AF
0x4D00A4: mov     esi, [esi+3Ch]
0x4D00A7: test    esi, esi
0x4D00A9: jz      short loc_4D00AF
0x4D00AB: mov     ecx, [esi]
0x4D00AD: jmp     short loc_4D00B1
0x4D00AF: xor     ecx, ecx
0x4D00B1: push    edi
0x4D00B2: push    ecx
0x4D00B3: push    eax; Format
0x4D00B4: push    offset aS_02i_02i_dds; "%s.%02i.%02i.dds"
0x4D00B9: lea     eax, [esp+124h+Dest]
0x4D00BD: push    104h; Count
0x4D00C2: push    eax; Dest
0x4D00C3: call    __snprintf
0x4D00C8: add     esp, 18h
0x4D00CB: lea     ecx, [esp+114h+Dest]
0x4D00CF: push    ecx
0x4D00D0: mov     ecx, ebp
0x4D00D2: call    BSStringT_Append
0x4D00D7: pop     edi
0x4D00D8: mov     ecx, [esp+110h+var_4]
0x4D00DF: pop     esi
0x4D00E0: pop     ebp
0x4D00E1: xor     ecx, esp
0x4D00E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D00E8: add     esp, 108h
0x4D00EE: retn    4
