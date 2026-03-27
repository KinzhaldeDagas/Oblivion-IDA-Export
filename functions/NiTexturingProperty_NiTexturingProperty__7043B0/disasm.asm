0x7043B0: push    0FFFFFFFFh
0x7043B2: push    offset SEH_7043B0
0x7043B7: mov     eax, large fs:0
0x7043BD: push    eax
0x7043BE: push    ecx
0x7043BF: push    ebp
0x7043C0: push    esi
0x7043C1: push    edi
0x7043C2: mov     eax, ds:0B30AACh
0x7043C7: xor     eax, esp
0x7043C9: push    eax
0x7043CA: lea     eax, [esp+20h+var_C]
0x7043CE: mov     large fs:0, eax
0x7043D4: mov     edi, ecx
0x7043D6: mov     [esp+20h+var_10], edi
0x7043DA: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7043DF: xor     ebp, ebp
0x7043E1: mov     dword ptr [edi], offset ??_7NiTexturingProperty@@6B@; const NiTexturingProperty::`vftable'
0x7043E7: mov     [edi+18h], bp
0x7043EB: lea     esi, [edi+1Ch]
0x7043EE: xor     ecx, ecx
0x7043F0: mov     eax, 7
0x7043F5: mov     [esi+8], ax
0x7043F9: mov     edx, 4
0x7043FE: mul     edx
0x704400: seto    cl
0x704403: mov     [esp+20h+var_4], ebp
0x704407: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::Map *>::`vftable'
0x70440D: mov     word ptr [esi+0Eh], 1
0x704413: mov     [esi+0Ah], bp
0x704417: mov     [esi+0Ch], bp
0x70441B: neg     ecx
0x70441D: or      ecx, eax
0x70441F: push    ecx; Size
0x704420: call    FormHeapAlloc
0x704425: mov     [esi+4], eax
0x704428: add     esp, 4
0x70442B: lea     eax, [esp+20h+var_10]
0x70442F: push    eax
0x704430: push    ebp
0x704431: mov     ecx, esi
0x704433: mov     [edi+2Ch], ebp
0x704436: mov     [esp+28h+var_10], ebp
0x70443A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70443F: lea     ecx, [esp+20h+var_10]
0x704443: push    ecx
0x704444: push    1
0x704446: mov     ecx, esi
0x704448: mov     [esp+28h+var_10], ebp
0x70444C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704451: lea     edx, [esp+20h+var_10]
0x704455: push    edx
0x704456: push    2
0x704458: mov     ecx, esi
0x70445A: mov     [esp+28h+var_10], ebp
0x70445E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704463: lea     eax, [esp+20h+var_10]
0x704467: push    eax
0x704468: push    3
0x70446A: mov     ecx, esi
0x70446C: mov     [esp+28h+var_10], ebp
0x704470: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704475: lea     ecx, [esp+20h+var_10]
0x704479: push    ecx
0x70447A: push    4
0x70447C: mov     ecx, esi
0x70447E: mov     [esp+28h+var_10], ebp
0x704482: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704487: lea     edx, [esp+20h+var_10]
0x70448B: push    edx
0x70448C: push    5
0x70448E: mov     ecx, esi
0x704490: mov     [esp+28h+var_10], ebp
0x704494: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704499: lea     eax, [esp+20h+var_10]
0x70449D: push    eax
0x70449E: push    6
0x7044A0: mov     ecx, esi
0x7044A2: mov     [esp+28h+var_10], ebp
0x7044A6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7044AB: movzx   ecx, word ptr [edi+26h]
0x7044AF: and     word ptr [edi+18h], 0F00Fh
0x7044B5: movzx   esi, word ptr [edi+18h]
0x7044B9: mov     eax, 1
0x7044BE: cmp     ecx, eax
0x7044C0: jbe     short loc_7044D6
0x7044C2: mov     edx, [edi+20h]
0x7044C5: add     edx, 4
0x7044C8: cmp     [edx], ebp
0x7044CA: jnz     short loc_704505
0x7044CC: add     eax, 1
0x7044CF: add     edx, 4
0x7044D2: cmp     eax, ecx
0x7044D4: jb      short loc_7044C8
0x7044D6: and     esi, 0FFFEh
0x7044DC: mov     cx, si
0x7044DF: and     cx, 0FFF5h
0x7044E4: or      cx, 4
0x7044E8: mov     [edi+18h], si
0x7044EC: mov     [edi+18h], cx
0x7044F0: mov     eax, edi
0x7044F2: mov     ecx, [esp+20h+var_C]
0x7044F6: mov     large fs:0, ecx
0x7044FD: pop     ecx
0x7044FE: pop     edi
0x7044FF: pop     esi
0x704500: pop     ebp
0x704501: add     esp, 10h
0x704504: retn
0x704505: or      esi, 1
0x704508: jmp     short loc_7044DC
