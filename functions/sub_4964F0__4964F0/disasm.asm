0x4964F0: push    0FFFFFFFFh
0x4964F2: push    offset SEH_4964F0
0x4964F7: mov     eax, large fs:0
0x4964FD: push    eax
0x4964FE: sub     esp, 2D4h
0x496504: mov     eax, ds:0B30AACh
0x496509: xor     eax, esp
0x49650B: mov     [esp+2E0h+var_10], eax
0x496512: push    ebx
0x496513: push    ebp
0x496514: push    esi
0x496515: push    edi
0x496516: mov     eax, ds:0B30AACh
0x49651B: xor     eax, esp
0x49651D: push    eax
0x49651E: lea     eax, [esp+2F4h+var_C]
0x496525: mov     large fs:0, eax
0x49652B: mov     ebp, [esp+2F4h+arg_4]
0x496532: mov     eax, [esp+2F4h+arg_0]
0x496539: mov     esi, [ebp+8]
0x49653C: mov     [esp+2F4h+lParam], eax
0x496540: mov     eax, [ebp+0]
0x496543: mov     edx, [eax+4]
0x496546: mov     [esp+2F4h+var_2E0], ecx
0x49654A: mov     ecx, ebp
0x49654C: mov     dword ptr [esp+2F4h+var_2DC+4], ebp
0x496550: mov     [esp+2F4h+var_2CC], 0FFFF0002h
0x496558: mov     [esp+2F4h+var_2C8], 27h ; '''
0x496560: mov     [esp+2F4h+var_2A4], ebp
0x496564: call    edx
0x496566: fld     dword ptr [ebp+5Ch]
0x496569: mov     eax, [eax]
0x49656B: sub     esp, 18h
0x49656E: fstp    [esp+30Ch+var_2FC]
0x496572: fld     dword ptr [ebp+58h]
0x496575: fstp    [esp+30Ch+var_304]
0x496579: fld     dword ptr [ebp+54h]
0x49657C: fstp    [esp+30Ch+var_30C]
0x49657F: push    esi
0x496580: push    eax
0x496581: lea     eax, [esp+314h+var_218]
0x496588: push    offset aSS_0f_0f_0f; "%s \"%s\" (%.0f,%.0f,%.0f)"
0x49658D: push    eax
0x49658E: call    __sprintf
0x496593: fld     dword ptr [ebp+60h]
0x496596: fstp    dword ptr [esp+31Ch+var_2DC]
0x49659A: add     esp, 28h
0x49659D: fld1
0x49659F: fcomp   dword ptr [esp+2F4h+var_2DC]
0x4965A3: fnstsw  ax
0x4965A5: test    ah, 44h
0x4965A8: jnp     short loc_49660F
0x4965AA: fld     dword ptr [ebp+60h]
0x4965AD: sub     esp, 8
0x4965B0: fstp    dword ptr [esp+2FCh+var_2DC]
0x4965B4: lea     ecx, [esp+2FCh+var_114]
0x4965BB: fld     dword ptr [esp+2FCh+var_2DC]
0x4965BF: fstp    [esp+2FCh+var_2FC]
0x4965C2: push    offset aScale_1f; " Scale %.1f"
0x4965C7: push    ecx
0x4965C8: call    __sprintf
0x4965CD: lea     eax, [esp+304h+var_114]
0x4965D4: add     esp, 10h
0x4965D7: mov     edx, eax
0x4965D9: lea     esp, [esp+0]
0x4965E0: mov     cl, [eax]
0x4965E2: add     eax, 1
0x4965E5: test    cl, cl
0x4965E7: jnz     short loc_4965E0
0x4965E9: lea     edi, [esp+2F4h+var_218]
0x4965F0: sub     eax, edx
0x4965F2: add     edi, 0FFFFFFFFh
0x4965F5: mov     cl, [edi+1]
0x4965F8: add     edi, 1
0x4965FB: test    cl, cl
0x4965FD: jnz     short loc_4965F5
0x4965FF: mov     ecx, eax
0x496601: shr     ecx, 2
0x496604: mov     esi, edx
0x496606: rep movsd
0x496608: mov     ecx, eax
0x49660A: and     ecx, 3
0x49660D: rep movsb
0x49660F: test    byte ptr [ebp+18h], 1
0x496613: jz      short loc_49663B
0x496615: lea     eax, [esp+2F4h+var_218]
0x49661C: add     eax, 0FFFFFFFFh
0x49661F: nop
0x496620: mov     cl, [eax+1]
0x496623: add     eax, 1
0x496626: test    cl, cl
0x496628: jnz     short loc_496620
0x49662A: mov     edx, ds:0A3DC8Ch
0x496630: mov     ecx, ds:0A3DC90h
0x496636: mov     [eax], edx
0x496638: mov     [eax+4], ecx
0x49663B: mov     eax, [ebp+0]
0x49663E: lea     edx, [esp+2F4h+var_218]
0x496645: mov     [esp+2F4h+var_2B8], edx
0x496649: mov     edx, [eax+8]
0x49664C: mov     ecx, ebp
0x49664E: call    edx
0x496650: test    eax, eax
0x496652: jz      short loc_49665B
0x496654: mov     eax, 3
0x496659: jmp     short loc_4966A7
0x49665B: mov     eax, [ebp+0]
0x49665E: mov     edx, [eax+4]
0x496661: mov     ecx, ebp
0x496663: call    edx
0x496665: test    eax, eax
0x496667: jz      short loc_496682
0x496669: lea     esp, [esp+0]
0x496670: cmp     eax, offset dword_B3FACC
0x496675: jz      loc_496768
0x49667B: mov     eax, [eax+4]
0x49667E: test    eax, eax
0x496680: jnz     short loc_496670
0x496682: mov     eax, [ebp+0]
0x496685: mov     edx, [eax+4]
0x496688: mov     ecx, ebp
0x49668A: call    edx
0x49668C: test    eax, eax
0x49668E: jz      short loc_4966A2
0x496690: cmp     eax, offset dword_B3FD14
0x496695: jz      loc_496772
0x49669B: mov     eax, [eax+4]
0x49669E: test    eax, eax
0x4966A0: jnz     short loc_496690
0x4966A2: mov     eax, 4
0x4966A7: mov     edi, [esp+2F4h+var_2E0]
0x4966AB: mov     ecx, [edi+0Ch]
0x4966AE: mov     ebx, ds:0A28290h
0x4966B4: mov     [esp+2F4h+var_2B0], eax
0x4966B8: mov     [esp+2F4h+var_2AC], eax
0x4966BC: lea     eax, [esp+2F4h+lParam]
0x4966C0: push    eax; lParam
0x4966C1: push    0; wParam
0x4966C3: push    1100h; Msg
0x4966C8: push    ecx; hWnd
0x4966C9: call    ebx ; SendMessageA
0x4966CB: lea     edx, [esp+2F4h+lParam]
0x4966CF: push    edx; lParam
0x4966D0: push    0; wParam
0x4966D2: mov     [esp+2FCh+lParam], eax
0x4966D6: mov     dword ptr [esp+2FCh+var_2DC], eax
0x4966DA: mov     eax, [edi+0Ch]
0x4966DD: mov     ecx, 5
0x4966E2: push    1100h; Msg
0x4966E7: push    eax; hWnd
0x4966E8: mov     [esp+304h+var_2A4], 0
0x4966F0: mov     [esp+304h+var_2B8], offset aAttributes; "Attributes"
0x4966F8: mov     [esp+304h+var_2B0], ecx
0x4966FC: mov     [esp+304h+var_2AC], ecx
0x496700: call    ebx ; SendMessageA
0x496702: push    10h; Size
0x496704: mov     [esp+2F8h+lParam], eax
0x496708: call    FormHeapAlloc
0x49670D: mov     esi, eax
0x49670F: add     esp, 4
0x496712: mov     [esp+2F4h+var_2D4], esi
0x496716: test    esi, esi
0x496718: mov     [esp+2F4h+var_4], 0
0x496723: jz      short loc_49677C
0x496725: xor     ecx, ecx
0x496727: mov     edi, 80h ; '€'
0x49672C: mov     eax, edi
0x49672E: mov     edx, 4
0x496733: mul     edx
0x496735: mov     [esi+0Ah], cx
0x496739: mov     [esi+0Ch], cx
0x49673D: seto    cl
0x496740: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x496746: mov     [esi+8], di
0x49674A: mov     [esi+0Eh], di
0x49674E: neg     ecx
0x496750: or      ecx, eax
0x496752: push    ecx; Size
0x496753: call    FormHeapAlloc
0x496758: mov     ebp, dword ptr [esp+2F8h+var_2DC+4]
0x49675C: mov     edi, [esp+2F8h+var_2E0]
0x496760: add     esp, 4
0x496763: mov     [esi+4], eax
0x496766: jmp     short loc_49677E
0x496768: mov     eax, 1
0x49676D: jmp     loc_4966A7
0x496772: mov     eax, 2
0x496777: jmp     loc_4966A7
0x49677C: xor     esi, esi
0x49677E: mov     eax, [ebp+0]
0x496781: mov     edx, [eax+30h]
0x496784: push    esi
0x496785: mov     ecx, ebp
0x496787: mov     [esp+2F8h+var_4], 0FFFFFFFFh
0x496792: call    edx
0x496794: xor     ebp, ebp
0x496796: cmp     [esi+0Ah], bp
0x49679A: jbe     short loc_4967D4
0x49679C: lea     esp, [esp+0]
0x4967A0: mov     eax, [esi+4]
0x4967A3: mov     ecx, [eax+ebp*4]
0x4967A6: lea     edx, [esp+2F4h+lParam]
0x4967AA: push    edx; lParam
0x4967AB: mov     eax, 6
0x4967B0: push    0; wParam
0x4967B2: mov     [esp+2FCh+var_2B0], eax
0x4967B6: mov     [esp+2FCh+var_2AC], eax
0x4967BA: mov     eax, [edi+0Ch]
0x4967BD: push    1100h; Msg
0x4967C2: push    eax; hWnd
0x4967C3: mov     [esp+304h+var_2B8], ecx
0x4967C7: call    ebx ; SendMessageA
0x4967C9: movzx   ecx, word ptr [esi+0Ah]
0x4967CD: add     ebp, 1
0x4967D0: cmp     ebp, ecx
0x4967D2: jb      short loc_4967A0
0x4967D4: xor     eax, eax
0x4967D6: cmp     [esi+0Ah], ax
0x4967DA: jbe     short loc_4967F6
0x4967DC: lea     esp, [esp+0]
0x4967E0: mov     ecx, [esi+4]
0x4967E3: movzx   edx, ax
0x4967E6: add     eax, 1
0x4967E9: mov     dword ptr [ecx+edx*4], 0
0x4967F0: cmp     ax, [esi+0Ah]
0x4967F4: jb      short loc_4967E0
0x4967F6: mov     edx, dword ptr [esp+2F4h+var_2DC+4]
0x4967FA: xor     eax, eax
0x4967FC: mov     [esi+0Ah], ax
0x496800: mov     [esi+0Ch], ax
0x496804: mov     ebp, [edx+0Ch]
0x496807: cmp     ebp, eax
0x496809: jz      loc_496A16
0x49680F: mov     edx, [esp+2F4h+var_2E0]
0x496813: mov     eax, 5
0x496818: lea     ecx, [esp+2F4h+lParam]
0x49681C: push    ecx; lParam
0x49681D: mov     [esp+2F8h+var_2B0], eax
0x496821: mov     [esp+2F8h+var_2AC], eax
0x496825: mov     eax, dword ptr [esp+2F8h+var_2DC]
0x496829: push    0; wParam
0x49682B: mov     [esp+2FCh+lParam], eax
0x49682F: mov     eax, [edx+0Ch]
0x496832: push    1100h; Msg
0x496837: push    eax; hWnd
0x496838: mov     [esp+304h+var_2B8], offset aControllers; "Controllers"
0x496840: call    ebx ; SendMessageA
0x496842: mov     [esp+2F4h+var_29C], eax
0x496846: mov     edx, [ebp+0]
0x496849: mov     eax, [edx+4]
0x49684C: mov     ecx, ebp
0x49684E: call    eax
0x496850: mov     ecx, [eax]
0x496852: push    3Fh ; '?'; Count
0x496854: push    ecx; Source
0x496855: lea     edx, [esp+2FCh+Dest]
0x496859: push    edx; Dest
0x49685A: call    _strncpy
0x49685F: mov     ecx, [esp+300h+var_29C]
0x496863: add     esp, 0Ch
0x496866: lea     eax, [esp+2F4h+Dest]
0x49686A: mov     [esp+2F4h+var_2B8], eax
0x49686E: mov     eax, 6
0x496873: lea     edx, [esp+2F4h+lParam]
0x496877: push    edx; lParam
0x496878: mov     [esp+2F8h+var_2B0], eax
0x49687C: mov     [esp+2F8h+var_2AC], eax
0x496880: mov     eax, [esp+2F8h+var_2E0]
0x496884: push    0; wParam
0x496886: mov     [esp+2FCh+lParam], ecx
0x49688A: mov     ecx, [eax+0Ch]
0x49688D: push    1100h; Msg
0x496892: push    ecx; hWnd
0x496893: mov     [esp+304h+var_259], 0
0x49689B: call    ebx ; SendMessageA
0x49689D: mov     [esp+2F4h+lParam], eax
0x4968A1: mov     edx, [ebp+0]
0x4968A4: mov     eax, [edx+30h]
0x4968A7: push    esi
0x4968A8: mov     ecx, ebp
0x4968AA: call    eax
0x4968AC: xor     edi, edi
0x4968AE: cmp     [esi+0Ah], di
0x4968B2: jbe     short loc_4968EC
0x4968B4: mov     ecx, [esi+4]
0x4968B7: mov     edx, [ecx+edi*4]
0x4968BA: mov     ecx, [esp+2F4h+var_2E0]
0x4968BE: mov     eax, 6
0x4968C3: mov     [esp+2F4h+var_2B0], eax
0x4968C7: mov     [esp+2F4h+var_2AC], eax
0x4968CB: lea     eax, [esp+2F4h+lParam]
0x4968CF: push    eax; lParam
0x4968D0: push    0; wParam
0x4968D2: mov     [esp+2FCh+var_2B8], edx
0x4968D6: mov     edx, [ecx+0Ch]
0x4968D9: push    1100h; Msg
0x4968DE: push    edx; hWnd
0x4968DF: call    ebx ; SendMessageA
0x4968E1: movzx   eax, word ptr [esi+0Ah]
0x4968E5: add     edi, 1
0x4968E8: cmp     edi, eax
0x4968EA: jb      short loc_4968B4
0x4968EC: xor     edi, edi
0x4968EE: xor     eax, eax
0x4968F0: cmp     [esi+0Ah], di
0x4968F4: jbe     short loc_496908
0x4968F6: mov     edx, [esi+4]
0x4968F9: movzx   ecx, ax
0x4968FC: add     eax, 1
0x4968FF: mov     [edx+ecx*4], edi
0x496902: cmp     ax, [esi+0Ah]
0x496906: jb      short loc_4968F6
0x496908: mov     [esi+0Ah], di
0x49690C: mov     [esi+0Ch], di
0x496910: mov     eax, [ebp+0]
0x496913: mov     edx, [eax+4]
0x496916: mov     ecx, ebp
0x496918: call    edx
0x49691A: cmp     eax, edi
0x49691C: jz      short loc_49692E
0x49691E: mov     edi, edi
0x496920: cmp     eax, offset stru_B3CAC0
0x496925: jz      short loc_4969A0
0x496927: mov     eax, [eax+4]
0x49692A: cmp     eax, edi
0x49692C: jnz     short loc_496920
0x49692E: xor     al, al
0x496930: neg     al
0x496932: sbb     eax, eax
0x496934: and     eax, ebp
0x496936: mov     [esp+2F4h+var_2D4], eax
0x49693A: jz      loc_4969C8
0x496940: mov     eax, ds:0B3CC30h
0x496945: cmp     eax, edi
0x496947: jnz     short loc_4969A9
0x496949: mov     eax, dword ptr [esp+2F4h+var_2DC+4]
0x49694D: push    eax
0x49694E: call    sub_4DC270
0x496953: mov     edi, eax
0x496955: add     esp, 4
0x496958: test    edi, edi
0x49695A: jz      short loc_4969A4
0x49695C: mov     edx, [edi]
0x49695E: mov     eax, [edx+190h]
0x496964: mov     ecx, edi
0x496966: call    eax
0x496968: test    al, al
0x49696A: jz      short loc_4969A4
0x49696C: mov     edx, [edi]
0x49696E: mov     eax, [edx+380h]
0x496974: mov     ecx, edi
0x496976: call    eax
0x496978: test    eax, eax
0x49697A: jz      short loc_4969A4
0x49697C: mov     edx, [edi]
0x49697E: mov     eax, [edx+380h]
0x496984: mov     ecx, edi
0x496986: call    eax
0x496988: mov     edx, [eax]
0x49698A: mov     ecx, eax
0x49698C: mov     eax, [edx+164h]
0x496992: call    eax
0x496994: test    eax, eax
0x496996: jz      short loc_4969A4
0x496998: mov     eax, [eax+98h]
0x49699E: jmp     short loc_4969A9
0x4969A0: mov     al, 1
0x4969A2: jmp     short loc_496930
0x4969A4: mov     eax, ds:0B3CC30h
0x4969A9: mov     ecx, [esp+2F4h+lParam]
0x4969AD: mov     ds:0B3CC34h, eax
0x4969B2: mov     eax, [esp+2F4h+var_2D4]
0x4969B6: push    eax
0x4969B7: push    ecx
0x4969B8: mov     ecx, [esp+2FCh+var_2E0]
0x4969BC: mov     ds:0B3CC30h, eax
0x4969C1: call    sub_495AF0
0x4969C6: jmp     short loc_496A0B
0x4969C8: mov     edx, [ebp+0]
0x4969CB: mov     eax, [edx+4]
0x4969CE: mov     ecx, ebp
0x4969D0: call    eax
0x4969D2: cmp     eax, edi
0x4969D4: jz      short loc_4969F2
0x4969D6: jmp     short loc_4969E0
0x4969D8: align 10h
0x4969E0: cmp     eax, offset dword_B3CD7C
0x4969E5: jz      loc_496BF9
0x4969EB: mov     eax, [eax+4]
0x4969EE: cmp     eax, edi
0x4969F0: jnz     short loc_4969E0
0x4969F2: xor     al, al
0x4969F4: neg     al
0x4969F6: sbb     eax, eax
0x4969F8: and     eax, ebp
0x4969FA: jz      short loc_496A0B
0x4969FC: mov     ecx, [esp+2F4h+lParam]
0x496A00: push    eax
0x496A01: push    ecx
0x496A02: mov     ecx, [esp+2FCh+var_2E0]
0x496A06: call    sub_495C10
0x496A0B: mov     ebp, [ebp+34h]
0x496A0E: test    ebp, ebp
0x496A10: jnz     loc_496846
0x496A16: mov     edi, dword ptr [esp+2F4h+var_2DC+4]
0x496A1A: mov     edx, dword ptr [esp+2F4h+var_2DC]
0x496A1E: mov     ecx, [esp+2F4h+var_2E0]
0x496A22: push    edi
0x496A23: push    edx
0x496A24: call    sub_495840
0x496A29: cmp     dword ptr [edi+0A4h], 0
0x496A30: jz      loc_496B64
0x496A36: mov     edx, [esp+2F4h+var_2E0]
0x496A3A: mov     eax, 5
0x496A3F: lea     ecx, [esp+2F4h+lParam]
0x496A43: push    ecx; lParam
0x496A44: mov     [esp+2F8h+var_2B0], eax
0x496A48: mov     [esp+2F8h+var_2AC], eax
0x496A4C: mov     eax, dword ptr [esp+2F8h+var_2DC]
0x496A50: push    0; wParam
0x496A52: mov     [esp+2FCh+lParam], eax
0x496A56: mov     eax, [edx+0Ch]
0x496A59: push    1100h; Msg
0x496A5E: push    eax; hWnd
0x496A5F: mov     [esp+304h+var_2B8], offset aProperties; "Properties"
0x496A67: call    ebx ; SendMessageA
0x496A69: mov     ecx, edi
0x496A6B: mov     ebp, [ecx+9Ch]
0x496A71: test    ebp, ebp
0x496A73: mov     [esp+2F4h+var_2D4], eax
0x496A77: jz      loc_496B64
0x496A7D: lea     ecx, [ecx+0]
0x496A80: mov     edi, [ebp+8]
0x496A83: mov     edx, [edi]
0x496A85: lea     eax, [ebp+8]
0x496A88: mov     eax, [edx+4]
0x496A8B: mov     ebp, [ebp+0]
0x496A8E: mov     ecx, edi
0x496A90: call    eax
0x496A92: mov     ecx, [eax]
0x496A94: push    3Fh ; '?'; Count
0x496A96: push    ecx; Source
0x496A97: lea     edx, [esp+2FCh+var_258]
0x496A9E: push    edx; Dest
0x496A9F: call    _strncpy
0x496AA4: mov     ecx, [esp+300h+var_2D4]
0x496AA8: add     esp, 0Ch
0x496AAB: lea     eax, [esp+2F4h+var_258]
0x496AB2: mov     [esp+2F4h+var_2B8], eax
0x496AB6: mov     eax, 6
0x496ABB: lea     edx, [esp+2F4h+lParam]
0x496ABF: push    edx; lParam
0x496AC0: mov     [esp+2F8h+var_2B0], eax
0x496AC4: mov     [esp+2F8h+var_2AC], eax
0x496AC8: mov     eax, [esp+2F8h+var_2E0]
0x496ACC: push    0; wParam
0x496ACE: mov     [esp+2FCh+lParam], ecx
0x496AD2: mov     ecx, [eax+0Ch]
0x496AD5: push    1100h; Msg
0x496ADA: push    ecx; hWnd
0x496ADB: mov     [esp+304h+var_219], 0
0x496AE3: call    ebx ; SendMessageA
0x496AE5: mov     [esp+2F4h+lParam], eax
0x496AE9: mov     edx, [edi]
0x496AEB: mov     eax, [edx+30h]
0x496AEE: push    esi
0x496AEF: mov     ecx, edi
0x496AF1: call    eax
0x496AF3: xor     edi, edi
0x496AF5: cmp     [esi+0Ah], di
0x496AF9: jbe     short loc_496B38
0x496AFB: jmp     short loc_496B00
0x496AFD: align 10h
0x496B00: mov     ecx, [esi+4]
0x496B03: mov     edx, [ecx+edi*4]
0x496B06: mov     ecx, [esp+2F4h+var_2E0]
0x496B0A: mov     eax, 6
0x496B0F: mov     [esp+2F4h+var_2B0], eax
0x496B13: mov     [esp+2F4h+var_2AC], eax
0x496B17: lea     eax, [esp+2F4h+lParam]
0x496B1B: push    eax; lParam
0x496B1C: push    0; wParam
0x496B1E: mov     [esp+2FCh+var_2B8], edx
0x496B22: mov     edx, [ecx+0Ch]
0x496B25: push    1100h; Msg
0x496B2A: push    edx; hWnd
0x496B2B: call    ebx ; SendMessageA
0x496B2D: movzx   eax, word ptr [esi+0Ah]
0x496B31: add     edi, 1
0x496B34: cmp     edi, eax
0x496B36: jb      short loc_496B00
0x496B38: xor     ecx, ecx
0x496B3A: xor     eax, eax
0x496B3C: cmp     [esi+0Ah], cx
0x496B40: jbe     short loc_496B54
0x496B42: mov     edi, [esi+4]
0x496B45: movzx   edx, ax
0x496B48: add     eax, 1
0x496B4B: mov     [edi+edx*4], ecx
0x496B4E: cmp     ax, [esi+0Ah]
0x496B52: jb      short loc_496B42
0x496B54: cmp     ebp, ecx
0x496B56: mov     [esi+0Ah], cx
0x496B5A: mov     [esi+0Ch], cx
0x496B5E: jnz     loc_496A80
0x496B64: mov     edi, dword ptr [esp+2F4h+var_2DC+4]
0x496B68: mov     eax, [edi+0A8h]
0x496B6E: test    eax, eax
0x496B70: mov     ebx, dword ptr [esp+2F4h+var_2DC]
0x496B74: mov     ebp, [esp+2F4h+var_2E0]
0x496B78: jz      short loc_496B83
0x496B7A: push    eax
0x496B7B: push    ebx
0x496B7C: mov     ecx, ebp
0x496B7E: call    sub_4962A0
0x496B83: mov     eax, [esi]
0x496B85: mov     edx, [eax]
0x496B87: push    1
0x496B89: mov     ecx, esi
0x496B8B: call    edx
0x496B8D: mov     eax, [edi]
0x496B8F: mov     edx, [eax+8]
0x496B92: mov     ecx, edi
0x496B94: call    edx
0x496B96: test    eax, eax
0x496B98: jz      short loc_496BCF
0x496B9A: movzx   eax, word ptr [edi+0B6h]
0x496BA1: xor     esi, esi
0x496BA3: test    eax, eax
0x496BA5: jbe     short loc_496BCF
0x496BA7: cmp     eax, esi
0x496BA9: jbe     short loc_496BC1
0x496BAB: mov     eax, [edi+0B0h]
0x496BB1: mov     eax, [eax+esi*4]
0x496BB4: test    eax, eax
0x496BB6: jz      short loc_496BC1
0x496BB8: push    eax
0x496BB9: push    ebx
0x496BBA: mov     ecx, ebp
0x496BBC: call    sub_4964F0
0x496BC1: movzx   eax, word ptr [edi+0B6h]
0x496BC8: add     esi, 1
0x496BCB: cmp     eax, esi
0x496BCD: ja      short loc_496BAB
0x496BCF: mov     ecx, dword ptr [esp+2F4h+var_C]
0x496BD6: mov     large fs:0, ecx
0x496BDD: pop     ecx
0x496BDE: pop     edi
0x496BDF: pop     esi
0x496BE0: pop     ebp
0x496BE1: pop     ebx
0x496BE2: mov     ecx, [esp+2E0h+var_10]
0x496BE9: xor     ecx, esp
0x496BEB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x496BF0: add     esp, 2E0h
0x496BF6: retn    8
0x496BF9: mov     al, 1
0x496BFB: jmp     loc_4969F4
