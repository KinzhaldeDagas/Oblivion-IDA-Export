0x562E20: push    0FFFFFFFFh
0x562E22: push    offset SEH_562E20
0x562E27: mov     eax, large fs:0
0x562E2D: push    eax
0x562E2E: sub     esp, 164h
0x562E34: push    ebp
0x562E35: push    esi
0x562E36: push    edi
0x562E37: mov     eax, ds:0B30AACh
0x562E3C: xor     eax, esp
0x562E3E: push    eax
0x562E3F: lea     eax, [esp+180h+var_C]
0x562E46: mov     large fs:0, eax
0x562E4C: mov     esi, [esp+180h+arg_0]
0x562E53: mov     edi, ecx
0x562E55: lea     ecx, [esp+180h+var_138]
0x562E59: call    sub_7879A0
0x562E5E: fldz
0x562E60: cmp     dword ptr [edi+0Ch], 0
0x562E64: fst     [esp+180h+var_168]
0x562E68: fst     [esp+180h+var_164]
0x562E6C: mov     [esp+180h+var_4], 0
0x562E77: fst     [esp+180h+var_160]
0x562E7B: fst     [esp+180h+var_15C]
0x562E7F: fld     dword ptr ds:0A30634h
0x562E85: fstp    [esp+180h+var_158]
0x562E89: fstp    [esp+180h+var_154]
0x562E8D: jz      loc_563065
0x562E93: cmp     dword ptr [edi+8], 2
0x562E97: jz      loc_563065
0x562E9D: test    esi, esi
0x562E9F: jz      loc_563065
0x562EA5: lea     eax, [esp+180h+var_150]
0x562EA9: push    eax
0x562EAA: lea     ecx, [esp+184h+var_144]
0x562EAE: push    ecx
0x562EAF: call    sub_78B690
0x562EB4: lea     edx, [esp+188h+var_15C]
0x562EB8: push    edx
0x562EB9: lea     eax, [esp+18Ch+var_168]
0x562EBD: push    eax
0x562EBE: call    sub_78D140
0x562EC3: fldz
0x562EC5: mov     ecx, [edi+0Ch]
0x562EC8: fstp    [esp+190h+var_184]; float
0x562ECC: add     esp, 0Ch
0x562ECF: call    sub_78C110
0x562ED4: push    0
0x562ED6: lea     ecx, [esp+184h+a2]
0x562EDA: push    ecx
0x562EDB: mov     ecx, esi
0x562EDD: call    sub_4BA3C0
0x562EE2: mov     eax, [esp+180h+a2]
0x562EE6: mov     dx, [eax+2Eh]
0x562EEA: and     dx, 0FFFh
0x562EEF: or      dx, 4000h
0x562EF4: mov     [eax+2Eh], dx
0x562EF8: mov     eax, [esp+180h+a2]
0x562EFC: mov     byte ptr [eax+30h], 11h
0x562F00: mov     ecx, [esp+180h+a2]
0x562F04: push    0C0h ; 'À'; Size
0x562F09: mov     byte ptr [esp+184h+var_4], 1
0x562F11: mov     byte ptr [ecx+31h], 1Fh
0x562F15: call    FormHeapAlloc
0x562F1A: add     esp, 4
0x562F1D: mov     [esp+180h+var_16C], eax
0x562F21: test    eax, eax
0x562F23: mov     byte ptr [esp+180h+var_4], 2
0x562F2B: jz      short loc_562F3B
0x562F2D: mov     edx, [esp+180h+a2]
0x562F31: push    edx; a2
0x562F32: mov     ecx, eax; this
0x562F34: call    NiTriShape_NiTriShape
0x562F39: jmp     short loc_562F3D
0x562F3B: xor     eax, eax
0x562F3D: lea     esi, [edi+1Ch]
0x562F40: push    eax; a2
0x562F41: mov     ecx, esi; this
0x562F43: mov     byte ptr [esp+184h+var_4], 1
0x562F4B: call    NiSmartPointer_Set??
0x562F50: mov     ecx, [esi]
0x562F52: push    offset aStbb; "STBB"
0x562F57: call    NiObjectNET_SetName
0x562F5C: call    sub_561030
0x562F61: mov     ebp, eax
0x562F63: test    ebp, ebp
0x562F65: mov     [esp+180h+var_16C], ebp
0x562F69: jz      short loc_562F75
0x562F6B: lea     eax, [ebp+4]
0x562F6E: push    eax; lpAddend
0x562F6F: call    dword ptr ds:0A28078h
0x562F75: test    ebp, ebp
0x562F77: mov     byte ptr [esp+180h+var_4], 3
0x562F7F: jz      short loc_562F89
0x562F81: mov     ecx, [esi]; this
0x562F83: push    ebp; a2
0x562F84: call    sub_405680
0x562F89: mov     edi, [edi+3Ch]
0x562F8C: test    edi, edi
0x562F8E: jz      short loc_562F98
0x562F90: mov     ecx, [esi]; this
0x562F92: push    edi; a2
0x562F93: call    sub_405680
0x562F98: mov     eax, [esi]
0x562F9A: push    1
0x562F9C: push    1
0x562F9E: push    1
0x562FA0: push    eax
0x562FA1: call    sub_7B8940
0x562FA6: mov     ecx, [esi]
0x562FA8: add     esp, 10h
0x562FAB: push    4
0x562FAD: call    NiNode_GetNiPropertyByID
0x562FB2: test    eax, eax
0x562FB4: jz      short loc_562FC4
0x562FB6: or      dword ptr [eax+1Ch], offset loc_402000
0x562FBD: mov     dword ptr [eax+24h], 0
0x562FC4: mov     eax, [esi]
0x562FC6: mov     eax, [eax+0BCh]
0x562FCC: push    eax
0x562FCD: push    offset unk_B44F90
0x562FD2: call    NiRTTI_Cast
0x562FD7: add     esp, 8
0x562FDA: test    eax, eax
0x562FDC: jz      short loc_563004
0x562FDE: mov     eax, [eax+7Ch]
0x562FE1: mov     ecx, ds:0B3F928h
0x562FE7: mov     esi, [esi]
0x562FE9: mov     edx, [ecx]
0x562FEB: push    eax
0x562FEC: mov     eax, [edx+0B0h]
0x562FF2: push    0
0x562FF4: push    0
0x562FF6: push    esi
0x562FF7: call    eax
0x562FF9: mov     ecx, ds:0B3F928h; this
0x562FFF: call    sub_769030
0x563004: lea     ecx, [esp+180h+var_150]
0x563008: push    ecx
0x563009: lea     edx, [esp+184h+var_144]
0x56300D: push    edx
0x56300E: call    sub_78D140
0x563013: mov     edi, ds:0A2807Ch
0x563019: add     esp, 8
0x56301C: test    ebp, ebp
0x56301E: mov     byte ptr [esp+180h+var_4], 1
0x563026: jz      short loc_56303D
0x563028: lea     eax, [ebp+4]
0x56302B: push    eax; lpAddend
0x56302C: call    edi ; InterlockedDecrement
0x56302E: test    eax, eax
0x563030: jnz     short loc_56303D
0x563032: mov     edx, [ebp+0]
0x563035: mov     eax, [edx]
0x563037: push    1
0x563039: mov     ecx, ebp
0x56303B: call    eax
0x56303D: mov     esi, [esp+180h+a2]
0x563041: test    esi, esi
0x563043: mov     byte ptr [esp+180h+var_4], 0
0x56304B: jz      short loc_563065
0x56304D: lea     ecx, [esi+4]
0x563050: push    ecx; lpAddend
0x563051: call    edi ; InterlockedDecrement
0x563053: test    eax, eax
0x563055: jnz     short loc_563065
0x563057: test    esi, esi
0x563059: jz      short loc_563065
0x56305B: mov     edx, [esi]
0x56305D: mov     eax, [edx]
0x56305F: push    1
0x563061: mov     ecx, esi
0x563063: call    eax
0x563065: lea     ecx, [esp+180h+var_138]
0x563069: mov     [esp+180h+var_4], 0FFFFFFFFh
0x563074: call    sub_787B20
0x563079: mov     ecx, dword ptr [esp+180h+var_C]
0x563080: mov     large fs:0, ecx
0x563087: pop     ecx
0x563088: pop     edi
0x563089: pop     esi
0x56308A: pop     ebp
0x56308B: add     esp, 170h
0x563091: retn    4
