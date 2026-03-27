0x88DFD0: push    ebp
0x88DFD1: mov     ebp, esp
0x88DFD3: and     esp, 0FFFFFFF0h
0x88DFD6: push    0FFFFFFFFh
0x88DFD8: push    offset SEH_88DFD0
0x88DFDD: mov     eax, large fs:0
0x88DFE3: push    eax
0x88DFE4: sub     esp, 48h
0x88DFE7: mov     eax, ds:0B30AACh
0x88DFEC: xor     eax, esp
0x88DFEE: mov     [esp+54h+var_14], eax
0x88DFF2: push    ebx
0x88DFF3: push    esi
0x88DFF4: push    edi
0x88DFF5: mov     eax, ds:0B30AACh
0x88DFFA: xor     eax, esp
0x88DFFC: push    eax
0x88DFFD: lea     eax, [esp+64h+var_C]
0x88E001: mov     large fs:0, eax
0x88E007: mov     eax, [ebp+arg_10]
0x88E00A: mov     edx, [ebp+arg_8]
0x88E00D: mov     ebx, [ebp+arg_0]
0x88E010: push    eax
0x88E011: mov     esi, ecx
0x88E013: mov     ecx, [ebp+arg_C]
0x88E016: push    ecx
0x88E017: push    edx
0x88E018: lea     eax, [esp+70h+var_30]
0x88E01C: push    eax
0x88E01D: mov     ecx, esi
0x88E01F: call    sub_88D5E0
0x88E024: mov     ecx, [esi+0B0h]
0x88E02A: mov     edx, [ecx]
0x88E02C: mov     edx, [edx+94h]
0x88E032: lea     eax, [esp+64h+var_30]
0x88E036: push    eax
0x88E037: call    edx
0x88E039: mov     eax, [esi+8]
0x88E03C: mov     eax, [eax+74h]
0x88E03F: mov     esi, [esi+0B0h]
0x88E045: test    esi, esi
0x88E047: mov     edi, [eax]
0x88E049: mov     [esp+64h+var_4C], eax
0x88E04D: jz      short loc_88E05F
0x88E04F: mov     esi, [esi+8]
0x88E052: test    esi, esi
0x88E054: jz      short loc_88E05F
0x88E056: add     esi, 14h
0x88E059: mov     [esp+64h+var_50], esi
0x88E05D: jmp     short loc_88E067
0x88E05F: mov     [esp+64h+var_50], 0
0x88E067: mov     ecx, [esp+64h+var_50]
0x88E06B: mov     ecx, [ecx]
0x88E06D: mov     edx, [ecx]
0x88E06F: mov     eax, [edx+8]
0x88E072: call    eax
0x88E074: mov     ecx, [ebx]
0x88E076: test    ecx, ecx
0x88E078: mov     esi, eax
0x88E07A: jz      short loc_88E0CE
0x88E07C: mov     edx, [ecx]
0x88E07E: mov     eax, [edx+8]
0x88E081: call    eax
0x88E083: shl     esi, 5
0x88E086: add     esi, eax
0x88E088: movzx   eax, byte ptr [esi+edi+190h]
0x88E090: lea     ecx, [eax+eax*4]
0x88E093: mov     edi, [edi+ecx*4+994h]
0x88E09A: mov     [esp+64h+var_48], offset ??_7hkFirstCdBodyPairCollector@@6B@; const hkFirstCdBodyPairCollector::`vftable'
0x88E0A2: mov     [esp+64h+var_44], 0
0x88E0A7: mov     eax, [esp+64h+var_4C]
0x88E0AB: mov     ecx, [esp+64h+var_50]
0x88E0AF: lea     edx, [esp+64h+var_48]
0x88E0B3: push    edx
0x88E0B4: push    eax
0x88E0B5: push    ebx
0x88E0B6: push    ecx
0x88E0B7: mov     [esp+74h+var_4], 0
0x88E0BF: call    edi
0x88E0C1: add     esp, 10h
0x88E0C4: cmp     [esp+64h+var_44], 0
0x88E0C9: setnz   al
0x88E0CC: jmp     short loc_88E0D0
0x88E0CE: xor     al, al
0x88E0D0: mov     ecx, dword ptr [esp+64h+var_C]
0x88E0D4: mov     large fs:0, ecx
0x88E0DB: pop     ecx
0x88E0DC: pop     edi
0x88E0DD: pop     esi
0x88E0DE: pop     ebx
0x88E0DF: mov     ecx, [esp+54h+var_14]
0x88E0E3: xor     ecx, esp
0x88E0E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88E0EA: mov     esp, ebp
0x88E0EC: pop     ebp
0x88E0ED: retn    14h
