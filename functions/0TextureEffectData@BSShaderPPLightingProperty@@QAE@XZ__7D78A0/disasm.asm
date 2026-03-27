0x7D78A0: push    0FFFFFFFFh
0x7D78A2: push    offset ??0TextureEffectData@BSShaderPPLightingProperty@@QAE@XZ_SEH
0x7D78A7: mov     eax, large fs:0
0x7D78AD: push    eax
0x7D78AE: push    ecx
0x7D78AF: push    ebp
0x7D78B0: push    esi
0x7D78B1: push    edi
0x7D78B2: mov     eax, ds:0B30AACh
0x7D78B7: xor     eax, esp
0x7D78B9: push    eax
0x7D78BA: lea     eax, [esp+20h+var_C]
0x7D78BE: mov     large fs:0, eax
0x7D78C4: mov     esi, ecx
0x7D78C6: mov     [esp+20h+var_10], esi
0x7D78CA: xor     ebp, ebp
0x7D78CC: push    offset NiRefObject_objcount; lpAddend
0x7D78D1: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D78D7: mov     [esi+4], ebp
0x7D78DA: call    dword ptr ds:0A28078h
0x7D78E0: mov     dword ptr [esi], offset ??_7TextureEffectData@BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::TextureEffectData::`vftable'
0x7D78E6: mov     [esp+20h+var_4], ebp
0x7D78EA: mov     [esi+8], ebp
0x7D78ED: fldz
0x7D78EF: fst     dword ptr [esi+0Ch]
0x7D78F2: mov     byte ptr [esp+20h+var_4], 1
0x7D78F7: fst     dword ptr [esi+10h]
0x7D78FA: fst     dword ptr [esi+14h]
0x7D78FD: fst     dword ptr [esi+18h]
0x7D7900: fst     dword ptr [esi+1Ch]
0x7D7903: fst     dword ptr [esi+20h]
0x7D7906: fst     dword ptr [esi+24h]
0x7D7909: fst     dword ptr [esi+28h]
0x7D790C: fst     dword ptr [esi+2Ch]
0x7D790F: fst     dword ptr [esi+30h]
0x7D7912: fst     dword ptr [esi+34h]
0x7D7915: fst     dword ptr [esi+38h]
0x7D7918: fst     dword ptr [esi+3Ch]
0x7D791B: fst     dword ptr [esi+40h]
0x7D791E: fst     dword ptr [esi+44h]
0x7D7921: fst     dword ptr [esi+48h]
0x7D7924: mov     edi, [esi+8]
0x7D7927: cmp     edi, ebp
0x7D7929: jz      short loc_7D794E
0x7D792B: lea     eax, [edi+4]
0x7D792E: fstp    st
0x7D7930: push    eax; lpAddend
0x7D7931: call    dword ptr ds:0A2807Ch
0x7D7937: test    eax, eax
0x7D7939: jnz     short loc_7D7949
0x7D793B: cmp     edi, ebp
0x7D793D: jz      short loc_7D7949
0x7D793F: mov     edx, [edi]
0x7D7941: mov     eax, [edx]
0x7D7943: push    1
0x7D7945: mov     ecx, edi
0x7D7947: call    eax
0x7D7949: fldz
0x7D794B: mov     [esi+8], ebp
0x7D794E: fst     dword ptr [esi+0Ch]
0x7D7951: mov     eax, esi
0x7D7953: fst     dword ptr [esi+10h]
0x7D7956: fst     dword ptr [esi+14h]
0x7D7959: fst     dword ptr [esi+18h]
0x7D795C: fst     dword ptr [esi+1Ch]
0x7D795F: fst     dword ptr [esi+20h]
0x7D7962: fst     dword ptr [esi+24h]
0x7D7965: fst     dword ptr [esi+28h]
0x7D7968: fst     dword ptr [esi+2Ch]
0x7D796B: fst     dword ptr [esi+30h]
0x7D796E: fst     dword ptr [esi+34h]
0x7D7971: fst     dword ptr [esi+38h]
0x7D7974: fst     dword ptr [esi+3Ch]
0x7D7977: fst     dword ptr [esi+40h]
0x7D797A: fst     dword ptr [esi+44h]
0x7D797D: fst     dword ptr [esi+48h]
0x7D7980: mov     dword ptr [esi+5Ch], 2
0x7D7987: fst     dword ptr [esi+4Ch]
0x7D798A: mov     dword ptr [esi+60h], 1
0x7D7991: fst     dword ptr [esi+50h]
0x7D7994: mov     dword ptr [esi+64h], 1
0x7D799B: fst     dword ptr [esi+54h]
0x7D799E: mov     dword ptr [esi+68h], 3
0x7D79A5: fstp    dword ptr [esi+58h]
0x7D79A8: mov     ecx, dword ptr [esp+20h+var_C]
0x7D79AC: mov     large fs:0, ecx
0x7D79B3: pop     ecx
0x7D79B4: pop     edi
0x7D79B5: pop     esi
0x7D79B6: pop     ebp
0x7D79B7: add     esp, 10h
0x7D79BA: retn
