0x78A890: push    ebp
0x78A891: mov     ebp, esp
0x78A893: push    0FFFFFFFFh
0x78A895: push    offset SEH_78A890
0x78A89A: mov     eax, large fs:0
0x78A8A0: push    eax
0x78A8A1: sub     esp, 44h
0x78A8A4: push    ebx
0x78A8A5: push    esi
0x78A8A6: push    edi
0x78A8A7: mov     eax, ds:0B30AACh
0x78A8AC: xor     eax, ebp
0x78A8AE: push    eax
0x78A8AF: lea     eax, [ebp+var_C]
0x78A8B2: mov     large fs:0, eax
0x78A8B8: mov     [ebp+var_10], esp
0x78A8BB: mov     edi, ecx
0x78A8BD: mov     [ebp+var_14], edi
0x78A8C0: mov     eax, [edi]
0x78A8C2: add     eax, 24h ; '$'
0x78A8C5: cmp     dword ptr [eax+18h], 10h
0x78A8C9: mov     [ebp+var_4], 0
0x78A8D0: jb      short loc_78A8D7
0x78A8D2: mov     eax, [eax+4]
0x78A8D5: jmp     short loc_78A8DA
0x78A8D7: add     eax, 4
0x78A8DA: mov     ebx, [ebp+arg_0]
0x78A8DD: mov     [ebx], eax
0x78A8DF: mov     esi, [edi]
0x78A8E1: mov     eax, [esi+98h]
0x78A8E7: add     esi, 94h ; '”'
0x78A8ED: test    eax, eax
0x78A8EF: jz      short loc_78A907
0x78A8F1: mov     ecx, [esi+8]
0x78A8F4: sub     ecx, eax
0x78A8F6: mov     eax, 30C30C31h
0x78A8FB: imul    ecx
0x78A8FD: sar     edx, 4
0x78A900: mov     eax, edx
0x78A902: shr     eax, 1Fh
0x78A905: add     eax, edx
0x78A907: test    eax, eax
0x78A909: mov     [ebx+4], eax
0x78A90C: jbe     loc_78A990
0x78A912: xor     ecx, ecx
0x78A914: mov     edx, 4
0x78A919: mul     edx
0x78A91B: seto    cl
0x78A91E: neg     ecx
0x78A920: or      ecx, eax
0x78A922: push    ecx; Size
0x78A923: call    FormHeapAlloc
0x78A928: add     esp, 4
0x78A92B: mov     [ebx+8], eax
0x78A92E: xor     edi, edi
0x78A930: mov     ecx, esi
0x78A932: call    sub_7876A0
0x78A937: cmp     edi, eax
0x78A939: jnb     short loc_78A999
0x78A93B: mov     eax, [esi+4]
0x78A93E: test    eax, eax
0x78A940: jz      short loc_78A95C
0x78A942: mov     ecx, [esi+8]
0x78A945: sub     ecx, eax
0x78A947: mov     eax, 30C30C31h
0x78A94C: imul    ecx
0x78A94E: sar     edx, 4
0x78A951: mov     eax, edx
0x78A953: shr     eax, 1Fh
0x78A956: add     eax, edx
0x78A958: cmp     edi, eax
0x78A95A: jb      short loc_78A961
0x78A95C: call    __invalid_parameter_noinfo
0x78A961: mov     ecx, [esi+4]
0x78A964: mov     eax, edi
0x78A966: imul    eax, 54h ; 'T'
0x78A969: cmp     dword ptr [eax+ecx+2Ch], 10h
0x78A96E: lea     eax, [eax+ecx+14h]
0x78A972: jb      short loc_78A982
0x78A974: mov     eax, [eax+4]
0x78A977: mov     edx, [ebx+8]
0x78A97A: mov     [edx+edi*4], eax
0x78A97D: add     edi, 1
0x78A980: jmp     short loc_78A930
0x78A982: mov     edx, [ebx+8]
0x78A985: add     eax, 4
0x78A988: mov     [edx+edi*4], eax
0x78A98B: add     edi, 1
0x78A98E: jmp     short loc_78A930
0x78A990: mov     dword ptr [ebx+8], 0
0x78A997: jmp     short loc_78A99C
0x78A999: mov     edi, [ebp+var_14]
0x78A99C: mov     eax, [edi+5Ch]
0x78A99F: mov     edx, [eax+44h]
0x78A9A2: add     eax, 40h ; '@'
0x78A9A5: test    edx, edx
0x78A9A7: jnz     short loc_78A9AD
0x78A9A9: xor     eax, eax
0x78A9AB: jmp     short loc_78A9C3
0x78A9AD: mov     ecx, [eax+8]
0x78A9B0: sub     ecx, edx
0x78A9B2: mov     eax, 2E8BA2E9h
0x78A9B7: imul    ecx
0x78A9B9: sar     edx, 3
0x78A9BC: mov     eax, edx
0x78A9BE: shr     eax, 1Fh
0x78A9C1: add     eax, edx
0x78A9C3: test    eax, eax
0x78A9C5: mov     [ebx+0Ch], eax
0x78A9C8: jbe     loc_78AB01
0x78A9CE: xor     ecx, ecx
0x78A9D0: mov     edx, 4
0x78A9D5: mul     edx
0x78A9D7: seto    cl
0x78A9DA: neg     ecx
0x78A9DC: or      ecx, eax
0x78A9DE: push    ecx; Size
0x78A9DF: call    FormHeapAlloc
0x78A9E4: add     esp, 4
0x78A9E7: mov     [ebx+10h], eax
0x78A9EA: xor     edi, edi
0x78A9EC: lea     esp, [esp+0]
0x78A9F0: cmp     edi, [ebx+0Ch]
0x78A9F3: jnb     loc_78AB0A
0x78A9F9: mov     eax, [ebp+var_14]
0x78A9FC: mov     esi, [eax+5Ch]
0x78A9FF: mov     eax, [esi+44h]
0x78AA02: add     esi, 40h ; '@'
0x78AA05: test    eax, eax
0x78AA07: jz      short loc_78AA23
0x78AA09: mov     ecx, [esi+8]
0x78AA0C: sub     ecx, eax
0x78AA0E: mov     eax, 2E8BA2E9h
0x78AA13: imul    ecx
0x78AA15: sar     edx, 3
0x78AA18: mov     eax, edx
0x78AA1A: shr     eax, 1Fh
0x78AA1D: add     eax, edx
0x78AA1F: cmp     edi, eax
0x78AA21: jb      short loc_78AA28
0x78AA23: call    __invalid_parameter_noinfo
0x78AA28: mov     eax, edi
0x78AA2A: imul    eax, 2Ch ; ','
0x78AA2D: add     eax, [esi+4]
0x78AA30: cmp     dword ptr [eax+18h], 10h
0x78AA34: jb      short loc_78AA44
0x78AA36: mov     eax, [eax+4]
0x78AA39: mov     ecx, [ebx+10h]
0x78AA3C: mov     [ecx+edi*4], eax
0x78AA3F: add     edi, 1
0x78AA42: jmp     short loc_78A9F0
0x78AA44: mov     ecx, [ebx+10h]
0x78AA47: add     eax, 4
0x78AA4A: mov     [ecx+edi*4], eax
0x78AA4D: add     edi, 1
0x78AA50: jmp     short loc_78A9F0
0x78AA52: mov     ecx, [ebp+var_18]
0x78AA55: mov     edx, [ecx]
0x78AA57: mov     eax, [edx+4]
0x78AA5A: call    eax
0x78AA5C: push    eax
0x78AA5D: push    offset aCspeedtreert_0; "CSpeedTreeRT::GetTextures"
0x78AA62: push    offset aSFailedS; "%s - failed [%s]"
0x78AA67: lea     esi, [ebp+var_34]
0x78AA6A: call    sub_7A54A0
0x78AA6F: add     esp, 0Ch
0x78AA72: cmp     dword ptr [eax+18h], 10h
0x78AA76: mov     byte ptr [ebp+var_4], 2
0x78AA7A: jb      short loc_78AA81
0x78AA7C: mov     eax, [eax+4]
0x78AA7F: jmp     short loc_78AA84
0x78AA81: add     eax, 4
0x78AA84: push    eax; Src
0x78AA85: call    sub_7895E0
0x78AA8A: add     esp, 4
0x78AA8D: lea     ecx, [ebp+var_34]
0x78AA90: call    sub_79AB00
0x78AA95: mov     eax, offset loc_78AA9B
0x78AA9A: retn
0x78AA9B: mov     ecx, [ebp+var_C]
0x78AA9E: mov     large fs:0, ecx
0x78AAA5: pop     ecx
0x78AAA6: pop     edi
0x78AAA7: pop     esi
0x78AAA8: pop     ebx
0x78AAA9: mov     esp, ebp
0x78AAAB: pop     ebp
0x78AAAC: retn    4
0x78AAAF: push    offset aCspeedtreert_0; "CSpeedTreeRT::GetTextures"
0x78AAB4: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78AAB9: lea     esi, [ebp+var_50]
0x78AABC: call    sub_7A54A0
0x78AAC1: add     esp, 8
0x78AAC4: cmp     dword ptr [eax+18h], 10h
0x78AAC8: mov     byte ptr [ebp+var_4], 3
0x78AACC: jb      short loc_78AAD3
0x78AACE: mov     eax, [eax+4]
0x78AAD1: jmp     short loc_78AAD6
0x78AAD3: add     eax, 4
0x78AAD6: push    eax; Src
0x78AAD7: call    sub_7895E0
0x78AADC: add     esp, 4
0x78AADF: lea     ecx, [ebp+var_50]
0x78AAE2: call    sub_79AB00
0x78AAE7: mov     eax, offset loc_78AAED
0x78AAEC: retn
0x78AAED: mov     ecx, [ebp+var_C]
0x78AAF0: mov     large fs:0, ecx
0x78AAF7: pop     ecx
0x78AAF8: pop     edi
0x78AAF9: pop     esi
0x78AAFA: pop     ebx
0x78AAFB: mov     esp, ebp
0x78AAFD: pop     ebp
0x78AAFE: retn    4
0x78AB01: mov     dword ptr [ebx+10h], 0
0x78AB08: jmp     short loc_78AB0D
0x78AB0A: mov     edi, [ebp+var_14]
0x78AB0D: mov     eax, [edi+50h]
0x78AB10: test    eax, eax
0x78AB12: jz      short loc_78AB25
0x78AB14: cmp     dword ptr [eax+3Ch], 10h
0x78AB18: jb      short loc_78AB1F
0x78AB1A: mov     eax, [eax+28h]
0x78AB1D: jmp     short loc_78AB22
0x78AB1F: add     eax, 28h ; '('
0x78AB22: mov     [ebx+18h], eax
0x78AB25: mov     eax, [edi+4Ch]
0x78AB28: test    eax, eax
0x78AB2A: jz      short loc_78AB3D
0x78AB2C: cmp     dword ptr [eax+30h], 10h
0x78AB30: jb      short loc_78AB37
0x78AB32: mov     eax, [eax+1Ch]
0x78AB35: jmp     short loc_78AB3A
0x78AB37: add     eax, 1Ch
0x78AB3A: mov     [ebx+14h], eax
0x78AB3D: mov     ecx, [ebp+var_C]
0x78AB40: mov     large fs:0, ecx
0x78AB47: pop     ecx
0x78AB48: pop     edi
0x78AB49: pop     esi
0x78AB4A: pop     ebx
0x78AB4B: mov     esp, ebp
0x78AB4D: pop     ebp
0x78AB4E: retn    4
