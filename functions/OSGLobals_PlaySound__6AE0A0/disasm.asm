0x6AE0A0: push    0FFFFFFFFh
0x6AE0A2: push    offset OSGLobals_PlaySound_SEH
0x6AE0A7: mov     eax, large fs:0
0x6AE0AD: push    eax
0x6AE0AE: sub     esp, 118h
0x6AE0B4: mov     eax, ds:0B30AACh
0x6AE0B9: xor     eax, esp
0x6AE0BB: mov     [esp+124h+var_10], eax
0x6AE0C2: push    ebx
0x6AE0C3: push    ebp
0x6AE0C4: push    esi
0x6AE0C5: push    edi
0x6AE0C6: mov     eax, ds:0B30AACh
0x6AE0CB: xor     eax, esp
0x6AE0CD: push    eax
0x6AE0CE: lea     eax, [esp+138h+var_C]
0x6AE0D5: mov     large fs:0, eax
0x6AE0DB: cmp     byte ptr ds:0B16178h, 0
0x6AE0E2: mov     ebx, ecx
0x6AE0E4: jnz     short loc_6AE115
0x6AE0E6: push    4; Size
0x6AE0E8: call    FormHeapAlloc
0x6AE0ED: add     esp, 4
0x6AE0F0: mov     [esp+138h+var_124], eax
0x6AE0F4: test    eax, eax
0x6AE0F6: mov     [esp+138h+var_4], 0
0x6AE101: jz      loc_6AE343
0x6AE107: push    0
0x6AE109: mov     ecx, eax
0x6AE10B: call    unknown_libname_1
0x6AE110: jmp     loc_6AE345
0x6AE115: mov     edi, [esp+138h+arg_0]
0x6AE11C: mov     ecx, [ebx+300h]
0x6AE122: lea     eax, [esp+138h+var_124]
0x6AE126: push    eax
0x6AE127: push    edi
0x6AE128: mov     [esp+140h+var_124], 0
0x6AE130: call    NiTMap_GetAt
0x6AE135: mov     esi, [esp+138h+var_124]
0x6AE139: test    esi, esi
0x6AE13B: mov     [esp+138h+var_124], esi
0x6AE13F: jz      short loc_6AE17C
0x6AE141: cmp     [esp+138h+arg_8], 0
0x6AE149: jnz     short loc_6AE17C
0x6AE14B: push    4; Size
0x6AE14D: call    FormHeapAlloc
0x6AE152: add     esp, 4
0x6AE155: mov     [esp+138h+var_124], eax
0x6AE159: mov     [esp+138h+var_4], 2
0x6AE164: test    eax, eax
0x6AE166: jz      loc_6AE343
0x6AE16C: mov     esi, [esi+0Ch]
0x6AE16F: push    esi
0x6AE170: mov     ecx, eax
0x6AE172: call    unknown_libname_1
0x6AE177: jmp     loc_6AE345
0x6AE17C: mov     ecx, ds:0B33A98h
0x6AE182: push    edi
0x6AE183: call    sub_4473F0
0x6AE188: mov     ebp, eax
0x6AE18A: test    ebp, ebp
0x6AE18C: jz      loc_6AE343
0x6AE192: movzx   eax, word ptr [ebp+2Ch]
0x6AE196: cmp     ax, 0FFFFh
0x6AE19A: jnz     short loc_6AE1AF
0x6AE19C: mov     eax, [ebp+28h]
0x6AE19F: lea     edx, [eax+1]
0x6AE1A2: mov     cl, [eax]
0x6AE1A4: add     eax, 1
0x6AE1A7: test    cl, cl
0x6AE1A9: jnz     short loc_6AE1A2
0x6AE1AB: sub     eax, edx
0x6AE1AD: jmp     short loc_6AE1B2
0x6AE1AF: movzx   eax, ax
0x6AE1B2: test    eax, eax
0x6AE1B4: jz      loc_6AE343
0x6AE1BA: mov     eax, [ebp+3Ch]
0x6AE1BD: test    al, 10h
0x6AE1BF: mov     ecx, [ebp+38h]
0x6AE1C2: mov     edx, [ebp+40h]
0x6AE1C5: mov     [esp+138h+var_120], ecx
0x6AE1C9: mov     [esp+138h+var_118], edx
0x6AE1CD: jz      short loc_6AE1D7
0x6AE1CF: or      [esp+138h+arg_4], 10h
0x6AE1D7: mov     eax, ds:0A7712Ch
0x6AE1DC: mov     ecx, ds:0A77130h
0x6AE1E2: mov     edx, ds:0A77134h
0x6AE1E8: mov     [esp+138h+var_114], eax
0x6AE1EC: mov     [esp+138h+var_110], ecx
0x6AE1F0: mov     [esp+138h+var_10C], edx
0x6AE1F4: mov     eax, [ebp+28h]
0x6AE1F7: test    eax, eax
0x6AE1F9: jnz     short loc_6AE200
0x6AE1FB: mov     eax, offset EmptyString
0x6AE200: mov     edx, eax
0x6AE202: mov     cl, [eax]
0x6AE204: add     eax, 1
0x6AE207: test    cl, cl
0x6AE209: jnz     short loc_6AE202
0x6AE20B: lea     edi, [esp+138h+var_114]
0x6AE20F: sub     eax, edx
0x6AE211: add     edi, 0FFFFFFFFh
0x6AE214: mov     cl, [edi+1]
0x6AE217: add     edi, 1
0x6AE21A: test    cl, cl
0x6AE21C: jnz     short loc_6AE214
0x6AE21E: mov     ecx, eax
0x6AE220: shr     ecx, 2
0x6AE223: mov     esi, edx
0x6AE225: rep movsd
0x6AE227: mov     ecx, eax
0x6AE229: and     ecx, 3
0x6AE22C: cmp     [esp+138h+arg_8], 0
0x6AE234: rep movsb
0x6AE236: jz      short loc_6AE249
0x6AE238: mov     eax, [ebx+0B4h]
0x6AE23E: lea     ecx, [eax+1]
0x6AE241: mov     [ebx+0B4h], ecx
0x6AE247: jmp     short loc_6AE250
0x6AE249: mov     eax, [esp+138h+arg_0]
0x6AE250: mov     edx, [esp+138h+arg_4]
0x6AE257: push    eax
0x6AE258: push    edx
0x6AE259: lea     eax, [esp+140h+var_114]
0x6AE25D: push    eax
0x6AE25E: lea     ecx, [esp+144h+var_124]
0x6AE262: push    ecx
0x6AE263: mov     ecx, ebx
0x6AE265: call    sub_6AC610
0x6AE26A: test    eax, eax
0x6AE26C: jnz     loc_6AE343
0x6AE272: mov     edx, [ebp+0]
0x6AE275: mov     eax, [edx+0D4h]
0x6AE27B: mov     ecx, ebp
0x6AE27D: call    eax
0x6AE27F: mov     esi, [esp+138h+var_124]
0x6AE283: push    eax
0x6AE284: mov     ecx, esi
0x6AE286: call    sub_6B6770
0x6AE28B: mov     eax, [esi+0Ch]
0x6AE28E: push    eax; ArgList
0x6AE28F: push    esi; int
0x6AE290: mov     ecx, ebx
0x6AE292: call    sub_6ACCA0
0x6AE297: movzx   ecx, byte ptr [ebp+43h]
0x6AE29B: mov     [esp+138h+var_124], ecx
0x6AE29F: fild    [esp+138h+var_124]
0x6AE2A3: fld     qword ptr ds:0A771C8h
0x6AE2A9: fmul    st(1), st
0x6AE2AB: fxch    st(1)
0x6AE2AD: fstp    [esp+138h+var_124]
0x6AE2B1: fld     [esp+138h+var_124]
0x6AE2B5: fstp    dword ptr [esi+2Ch]
0x6AE2B8: movzx   edx, byte ptr [ebp+42h]
0x6AE2BC: mov     [esp+138h+var_124], edx
0x6AE2C0: fild    [esp+138h+var_124]
0x6AE2C4: fmulp   st(1), st
0x6AE2C6: fstp    [esp+138h+var_124]
0x6AE2CA: fld     [esp+138h+var_124]
0x6AE2CE: fstp    dword ptr [esi+30h]
0x6AE2D1: mov     al, [ebp+39h]
0x6AE2D4: test    al, al
0x6AE2D6: jz      short loc_6AE30C
0x6AE2D8: mov     cl, [ebp+38h]
0x6AE2DB: test    cl, cl
0x6AE2DD: jz      short loc_6AE30C
0x6AE2DF: movzx   eax, al
0x6AE2E2: imul    eax, 64h ; 'd'
0x6AE2E5: mov     [esp+138h+var_124], eax
0x6AE2E9: movzx   eax, cl
0x6AE2EC: fild    [esp+138h+var_124]
0x6AE2F0: sub     esp, 8
0x6AE2F3: lea     ecx, [eax+eax*4]
0x6AE2F6: mov     [esp+140h+var_124], ecx
0x6AE2FA: fstp    [esp+140h+var_13C]; float
0x6AE2FE: mov     ecx, esi
0x6AE300: fild    [esp+140h+var_124]
0x6AE304: fstp    [esp+140h+var_140]; float
0x6AE307: call    sub_6B6C60
0x6AE30C: movzx   eax, word ptr [ebp+40h]
0x6AE310: push    eax
0x6AE311: mov     ecx, esi
0x6AE313: call    sub_6A90A0
0x6AE318: push    ecx
0x6AE319: fld1
0x6AE31B: mov     ecx, esi
0x6AE31D: fstp    [esp+13Ch+var_13C]; float
0x6AE320: call    sub_6B6F20
0x6AE325: push    4; Size
0x6AE327: call    FormHeapAlloc
0x6AE32C: add     esp, 4
0x6AE32F: mov     [esp+138h+var_124], eax
0x6AE333: mov     [esp+138h+var_4], 1
0x6AE33E: jmp     loc_6AE164
0x6AE343: xor     eax, eax
0x6AE345: mov     ecx, [esp+138h+var_C]
0x6AE34C: mov     large fs:0, ecx
0x6AE353: pop     ecx
0x6AE354: pop     edi
0x6AE355: pop     esi
0x6AE356: pop     ebp
0x6AE357: pop     ebx
0x6AE358: mov     ecx, [esp+124h+var_10]
0x6AE35F: xor     ecx, esp
0x6AE361: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6AE366: add     esp, 124h
0x6AE36C: retn    0Ch
