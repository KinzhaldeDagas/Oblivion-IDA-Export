0x8FDFF0: push    ebp
0x8FDFF1: mov     ebp, esp
0x8FDFF3: and     esp, 0FFFFFFF0h
0x8FDFF6: sub     esp, 194h
0x8FDFFC: mov     ecx, ds:0BA9DE4h
0x8FE002: push    ebx
0x8FE003: mov     ebx, large fs:2Ch
0x8FE00A: mov     eax, [ebx+ecx*4]
0x8FE00D: mov     edx, [eax+1A4h]
0x8FE013: push    esi
0x8FE014: cmp     edx, [eax+1A8h]
0x8FE01A: push    edi
0x8FE01B: jnb     short loc_8FE041
0x8FE01D: mov     esi, eax
0x8FE01F: mov     ecx, [esi+1A4h]
0x8FE025: mov     dword ptr [ecx], offset aTtboxbox; "TtBoxBox"
0x8FE02B: rdtsc
0x8FE02D: mov     [esp+1A0h+var_194], eax
0x8FE031: mov     eax, [esp+1A0h+var_194]
0x8FE035: mov     [ecx+4], eax
0x8FE038: add     ecx, 0Ch
0x8FE03B: mov     [esi+1A4h], ecx
0x8FE041: mov     esi, [ebp+arg_0]
0x8FE044: mov     eax, [esi]
0x8FE046: mov     edx, [eax+0Ch]
0x8FE049: mov     edi, [ebp+arg_4]
0x8FE04C: mov     ecx, [edi]
0x8FE04E: movaps  xmm1, xmmword ptr [eax+10h]
0x8FE052: mov     eax, [ecx+0Ch]
0x8FE055: mov     [esp+1A0h+var_194], edx
0x8FE059: movss   xmm0, [esp+1A0h+var_194]
0x8FE05F: mov     edx, [esi+8]
0x8FE062: shufps  xmm0, xmm0, 0
0x8FE066: addps   xmm1, xmm0
0x8FE069: movaps  [esp+1A0h+var_180], xmm1
0x8FE06E: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FE072: mov     ecx, [edi+8]
0x8FE075: mov     [esp+1A0h+var_194], eax
0x8FE079: movss   xmm0, [esp+1A0h+var_194]
0x8FE07F: push    ecx
0x8FE080: shufps  xmm0, xmm0, 0
0x8FE084: addps   xmm1, xmm0
0x8FE087: push    edx
0x8FE088: lea     ecx, [esp+1A8h+var_170]
0x8FE08C: movaps  [esp+1A8h+var_190], xmm1
0x8FE091: call    sub_8B1FF0
0x8FE096: mov     eax, [ebp+arg_8]
0x8FE099: fld     dword ptr [eax+8]
0x8FE09C: mov     ecx, [esi+8]
0x8FE09F: movaps  xmm0, [esp+1A0h+var_170]
0x8FE0A4: fst     [esp+1A0h+var_80]
0x8FE0AB: mov     edx, [edi+8]
0x8FE0AE: fstp    [esp+1A0h+var_194]
0x8FE0B2: xor     eax, eax
0x8FE0B4: movaps  [esp+1A0h+var_110], xmm0
0x8FE0BC: movaps  xmm0, [esp+1A0h+var_160]
0x8FE0C1: mov     [esp+1A0h+var_11C], ecx
0x8FE0C8: mov     ecx, dword ptr [esp+1A0h+var_180+4]
0x8FE0CC: movaps  [esp+1A0h+var_100], xmm0
0x8FE0D4: movaps  xmm0, [esp+1A0h+var_150]
0x8FE0D9: mov     [esp+1A0h+var_128], eax
0x8FE0DD: mov     [esp+1A0h+var_124], eax
0x8FE0E1: mov     [esp+1A0h+var_120], eax
0x8FE0E8: mov     eax, dword ptr [esp+1A0h+var_180]
0x8FE0EC: movaps  [esp+1A0h+var_F0], xmm0
0x8FE0F4: movaps  xmm0, [esp+1A0h+var_140]
0x8FE0F9: mov     dword ptr [esp+1A0h+var_D0+4], ecx
0x8FE100: mov     ecx, dword ptr [esp+1A0h+var_190]
0x8FE104: mov     [esp+1A0h+var_118], edx
0x8FE10B: mov     edx, dword ptr [esp+1A0h+var_180+8]
0x8FE10F: movaps  [esp+1A0h+var_E0], xmm0
0x8FE117: movss   xmm0, [esp+1A0h+var_194]
0x8FE11D: mov     dword ptr [esp+1A0h+var_D0], eax
0x8FE124: mov     eax, dword ptr [esp+1A0h+var_180+0Ch]
0x8FE128: mov     dword ptr [esp+1A0h+var_C0], ecx
0x8FE12F: mov     ecx, dword ptr [esp+1A0h+var_190+0Ch]
0x8FE133: shufps  xmm0, xmm0, 0
0x8FE137: mov     dword ptr [esp+1A0h+var_C8], edx
0x8FE13E: mov     edx, dword ptr [esp+1A0h+var_190+4]
0x8FE142: mov     dword ptr [esp+1A0h+var_C8+4], eax
0x8FE149: mov     eax, dword ptr [esp+1A0h+var_190+8]
0x8FE14D: movaps  xmm1, xmm0
0x8FE150: addps   xmm1, [esp+1A0h+var_180]
0x8FE155: mov     dword ptr [esp+1A0h+var_B8+4], ecx
0x8FE15C: movaps  [esp+1A0h+var_B0], xmm0
0x8FE164: addps   xmm0, [esp+1A0h+var_190]
0x8FE169: lea     ecx, [esp+1A0h+var_130]
0x8FE16D: mov     [esp+1A0h+var_130], esi
0x8FE171: mov     [esp+1A0h+var_12C], edi
0x8FE175: mov     dword ptr [esp+1A0h+var_C0+4], edx
0x8FE17C: mov     dword ptr [esp+1A0h+var_B8], eax
0x8FE183: mov     [esp+1A0h+var_7C], 3C23D70Ah
0x8FE18E: movaps  [esp+1A0h+var_A0], xmm1
0x8FE196: movaps  [esp+1A0h+var_90], xmm0
0x8FE19E: call    sub_8FDAF0
0x8FE1A3: lea     edx, [esp+1A0h+var_B0]
0x8FE1AA: push    edx
0x8FE1AB: lea     ecx, [esp+1A4h+var_130]
0x8FE1AF: call    sub_9377C0
0x8FE1B4: test    eax, eax
0x8FE1B6: jnz     short loc_8FE1C2
0x8FE1B8: mov     ecx, [ebp+arg_C]
0x8FE1BB: mov     eax, [ecx]
0x8FE1BD: push    edi
0x8FE1BE: push    esi
0x8FE1BF: call    dword ptr [eax+4]
0x8FE1C2: mov     ecx, ds:0BA9DE4h
0x8FE1C8: mov     eax, [ebx+ecx*4]
0x8FE1CB: mov     edx, [eax+1A4h]
0x8FE1D1: cmp     edx, [eax+1A8h]
0x8FE1D7: jnb     short loc_8FE1FD
0x8FE1D9: mov     esi, eax
0x8FE1DB: mov     ecx, [esi+1A4h]
0x8FE1E1: mov     dword ptr [ecx], offset aEt; "Et"
0x8FE1E7: rdtsc
0x8FE1E9: mov     [esp+1A0h+var_194], eax
0x8FE1ED: mov     eax, [esp+1A0h+var_194]
0x8FE1F1: mov     [ecx+4], eax
0x8FE1F4: add     ecx, 0Ch
0x8FE1F7: mov     [esi+1A4h], ecx
0x8FE1FD: pop     edi
0x8FE1FE: pop     esi
0x8FE1FF: pop     ebx
0x8FE200: mov     esp, ebp
0x8FE202: pop     ebp
0x8FE203: retn
