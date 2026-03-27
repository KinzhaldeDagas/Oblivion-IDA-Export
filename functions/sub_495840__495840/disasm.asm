0x495840: push    0FFFFFFFFh
0x495842: push    offset SEH_495840
0x495847: mov     eax, large fs:0
0x49584D: push    eax
0x49584E: sub     esp, 88h
0x495854: mov     eax, ds:0B30AACh
0x495859: xor     eax, esp
0x49585B: mov     [esp+94h+var_10], eax
0x495862: push    ebx
0x495863: push    ebp
0x495864: push    esi
0x495865: push    edi
0x495866: mov     eax, ds:0B30AACh
0x49586B: xor     eax, esp
0x49586D: push    eax
0x49586E: lea     eax, [esp+0A8h+var_C]
0x495875: mov     large fs:0, eax
0x49587B: mov     edi, [esp+0A8h+arg_4]
0x495882: test    edi, edi
0x495884: mov     eax, [esp+0A8h+arg_0]
0x49588B: mov     [esp+0A8h+var_90], ecx
0x49588F: mov     [esp+0A8h+var_94], eax
0x495893: jz      loc_495AC5
0x495899: mov     edx, [edi]
0x49589B: mov     eax, [edx+4]
0x49589E: mov     ecx, edi
0x4958A0: call    eax
0x4958A2: test    eax, eax
0x4958A4: jz      short loc_4958B4
0x4958A6: cmp     eax, offset dword_B40864
0x4958AB: jz      short loc_495924
0x4958AD: mov     eax, [eax+4]
0x4958B0: test    eax, eax
0x4958B2: jnz     short loc_4958A6
0x4958B4: xor     al, al
0x4958B6: neg     al
0x4958B8: sbb     eax, eax
0x4958BA: and     eax, edi
0x4958BC: mov     ebx, eax
0x4958BE: mov     [esp+0A8h+var_8C], ebx
0x4958C2: jz      loc_495AC5
0x4958C8: push    10h; Size
0x4958CA: call    FormHeapAlloc
0x4958CF: mov     esi, eax
0x4958D1: add     esp, 4
0x4958D4: mov     [esp+0A8h+var_88], esi
0x4958D8: test    esi, esi
0x4958DA: mov     [esp+0A8h+var_4], 0
0x4958E5: jz      short loc_495928
0x4958E7: xor     eax, eax
0x4958E9: mov     ebp, 80h ; '€'
0x4958EE: mov     [esi+0Ah], ax
0x4958F2: mov     [esi+0Ch], ax
0x4958F6: xor     ecx, ecx
0x4958F8: mov     eax, ebp
0x4958FA: mov     edx, 4
0x4958FF: mul     edx
0x495901: seto    cl
0x495904: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x49590A: mov     [esi+8], bp
0x49590E: mov     [esi+0Eh], bp
0x495912: neg     ecx
0x495914: or      ecx, eax
0x495916: push    ecx; Size
0x495917: call    FormHeapAlloc
0x49591C: add     esp, 4
0x49591F: mov     [esi+4], eax
0x495922: jmp     short loc_49592A
0x495924: mov     al, 1
0x495926: jmp     short loc_4958B6
0x495928: xor     esi, esi
0x49592A: mov     edx, [esp+0A8h+var_90]
0x49592E: mov     ebp, ds:0A28290h
0x495934: mov     eax, 5
0x495939: lea     ecx, [esp+0A8h+lParam]
0x49593D: push    ecx; lParam
0x49593E: mov     [esp+0ACh+var_64], eax
0x495942: mov     [esp+0ACh+var_60], eax
0x495946: mov     eax, [esp+0ACh+var_94]
0x49594A: push    0; wParam
0x49594C: mov     [esp+0B0h+lParam], eax
0x495950: mov     eax, [edx+0Ch]
0x495953: push    1100h; Msg
0x495958: push    eax; hWnd
0x495959: mov     [esp+0B8h+var_4], 0FFFFFFFFh
0x495964: mov     [esp+0B8h+var_80], 0FFFF0002h
0x49596C: mov     [esp+0B8h+var_7C], 27h ; '''
0x495974: mov     [esp+0B8h+var_58], edi
0x495978: mov     [esp+0B8h+var_6C], offset aModifiers; "Modifiers"
0x495980: call    ebp ; SendMessageA
0x495982: mov     [esp+0A8h+var_88], eax
0x495986: mov     eax, [ebx+0D0h]
0x49598C: xor     ecx, ecx
0x49598E: test    eax, eax
0x495990: mov     [esp+0A8h+var_94], ecx
0x495994: jbe     loc_495AB7
0x49599A: cmp     ecx, eax
0x49599C: jnb     loc_495A9E
0x4959A2: mov     eax, [ebx+0C8h]
0x4959A8: xor     ecx, ecx
0x4959AA: test    eax, eax
0x4959AC: jz      loc_495A9E
0x4959B2: mov     edi, [eax+8]
0x4959B5: lea     edx, [eax+8]
0x4959B8: mov     eax, [eax]
0x4959BA: mov     edx, ecx
0x4959BC: add     ecx, 1
0x4959BF: cmp     edx, [esp+0A8h+var_94]
0x4959C3: jz      short loc_4959CE
0x4959C5: test    eax, eax
0x4959C7: jnz     short loc_4959B2
0x4959C9: jmp     loc_495A9E
0x4959CE: xor     ebx, ebx
0x4959D0: cmp     edi, ebx
0x4959D2: jz      loc_495A9A
0x4959D8: mov     eax, [edi]
0x4959DA: mov     edx, [eax+4]
0x4959DD: mov     ecx, edi
0x4959DF: call    edx
0x4959E1: mov     eax, [eax]
0x4959E3: push    3Fh ; '?'; Count
0x4959E5: push    eax; Source
0x4959E6: lea     ecx, [esp+0B0h+Dest]
0x4959EA: push    ecx; Dest
0x4959EB: call    _strncpy
0x4959F0: mov     eax, [esp+0B4h+var_88]
0x4959F4: add     esp, 0Ch
0x4959F7: lea     ecx, [esp+0A8h+lParam]
0x4959FB: push    ecx; lParam
0x4959FC: lea     edx, [esp+0ACh+Dest]
0x495A00: mov     [esp+0ACh+var_6C], edx
0x495A04: mov     edx, [esp+0ACh+var_90]
0x495A08: push    ebx; wParam
0x495A09: mov     [esp+0B0h+lParam], eax
0x495A0D: mov     eax, [edx+0Ch]
0x495A10: push    1100h; Msg
0x495A15: push    eax; hWnd
0x495A16: mov     [esp+0B8h+var_11], bl
0x495A1D: mov     [esp+0B8h+var_64], ebx
0x495A21: mov     [esp+0B8h+var_60], ebx
0x495A25: call    ebp ; SendMessageA
0x495A27: mov     [esp+0A8h+lParam], eax
0x495A2B: mov     edx, [edi]
0x495A2D: mov     eax, [edx+30h]
0x495A30: push    esi
0x495A31: mov     ecx, edi
0x495A33: call    eax
0x495A35: xor     edi, edi
0x495A37: cmp     [esi+0Ah], bx
0x495A3B: jbe     short loc_495A77
0x495A3D: mov     ebx, 6
0x495A42: mov     ecx, [esi+4]
0x495A45: mov     edx, [ecx+edi*4]
0x495A48: mov     ecx, [esp+0A8h+var_90]
0x495A4C: lea     eax, [esp+0A8h+lParam]
0x495A50: push    eax; lParam
0x495A51: push    0; wParam
0x495A53: mov     [esp+0B0h+var_6C], edx
0x495A57: mov     edx, [ecx+0Ch]
0x495A5A: push    1100h; Msg
0x495A5F: push    edx; hWnd
0x495A60: mov     [esp+0B8h+var_64], ebx
0x495A64: mov     [esp+0B8h+var_60], ebx
0x495A68: call    ebp ; SendMessageA
0x495A6A: movzx   eax, word ptr [esi+0Ah]
0x495A6E: add     edi, 1
0x495A71: cmp     edi, eax
0x495A73: jb      short loc_495A42
0x495A75: xor     ebx, ebx
0x495A77: xor     eax, eax
0x495A79: cmp     [esi+0Ah], bx
0x495A7D: jbe     short loc_495A92
0x495A7F: nop
0x495A80: mov     edx, [esi+4]
0x495A83: movzx   ecx, ax
0x495A86: add     eax, 1
0x495A89: mov     [edx+ecx*4], ebx
0x495A8C: cmp     ax, [esi+0Ah]
0x495A90: jb      short loc_495A80
0x495A92: mov     [esi+0Ah], bx
0x495A96: mov     [esi+0Ch], bx
0x495A9A: mov     ebx, [esp+0A8h+var_8C]
0x495A9E: mov     ecx, [esp+0A8h+var_94]
0x495AA2: mov     eax, [ebx+0D0h]
0x495AA8: add     ecx, 1
0x495AAB: cmp     ecx, eax
0x495AAD: mov     [esp+0A8h+var_94], ecx
0x495AB1: jb      loc_4959A2
0x495AB7: test    esi, esi
0x495AB9: jz      short loc_495AC5
0x495ABB: mov     eax, [esi]
0x495ABD: mov     edx, [eax]
0x495ABF: push    1
0x495AC1: mov     ecx, esi
0x495AC3: call    edx
0x495AC5: mov     ecx, [esp+0A8h+var_C]
0x495ACC: mov     large fs:0, ecx
0x495AD3: pop     ecx
0x495AD4: pop     edi
0x495AD5: pop     esi
0x495AD6: pop     ebp
0x495AD7: pop     ebx
0x495AD8: mov     ecx, [esp+94h+var_10]
0x495ADF: xor     ecx, esp
0x495AE1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x495AE6: add     esp, 94h
0x495AEC: retn    8
