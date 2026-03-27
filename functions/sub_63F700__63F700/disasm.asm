0x63F700: sub     esp, 8
0x63F703: cmp     byte ptr ds:0B07090h, 0
0x63F70A: push    esi
0x63F70B: mov     esi, ecx
0x63F70D: jz      loc_63F943
0x63F713: mov     eax, ds:0B333A0h
0x63F718: mov     eax, [eax+34h]
0x63F71B: test    eax, eax
0x63F71D: jz      short loc_63F72E
0x63F71F: movzx   ecx, byte ptr [eax+24h]
0x63F723: shr     ecx, 1
0x63F725: test    cl, 1
0x63F728: jz      loc_63F943
0x63F72E: push    ebp
0x63F72F: push    edi
0x63F730: mov     edi, [esp+14h+arg_0]
0x63F734: mov     ecx, edi; this
0x63F736: call    TESObjectREFR_GetParentCell
0x63F73B: mov     ecx, eax
0x63F73D: call    TESObjectCELL_GetWaterHeight
0x63F742: fstp    [esp+14h+var_8]
0x63F746: mov     edx, [edi]
0x63F748: mov     eax, [edx+174h]
0x63F74E: mov     ecx, edi
0x63F750: call    eax
0x63F752: fld     dword ptr [eax+8]
0x63F755: fcomp   [esp+14h+var_8]
0x63F759: fnstsw  ax
0x63F75B: test    ah, 5
0x63F75E: jp      loc_63F8DF
0x63F764: fld1
0x63F766: push    ecx
0x63F767: mov     ecx, edi; this
0x63F769: fstp    [esp+18h+var_18]; float
0x63F76C: call    TESObjectREFR_GetParentCell
0x63F771: push    eax; int
0x63F772: lea     ecx, [edi+2Ch]
0x63F775: push    ecx; int
0x63F776: mov     ecx, edi
0x63F778: call    Actor_IsUnderwater??
0x63F77D: test    al, al
0x63F77F: jnz     loc_63F8DF
0x63F785: mov     edx, ds:0B333A0h
0x63F78B: mov     ebp, [edx+54h]
0x63F78E: test    ebp, ebp
0x63F790: jz      loc_63F85A
0x63F796: cmp     dword ptr [esi+288h], 0
0x63F79D: jnz     loc_63F85A
0x63F7A3: cmp     ds:0B45DBAh, al
0x63F7A9: jnz     loc_63F85A
0x63F7AF: mov     eax, [edi]
0x63F7B1: mov     edx, [eax+380h]
0x63F7B7: mov     ecx, edi
0x63F7B9: call    edx
0x63F7BB: test    eax, eax
0x63F7BD: jnz     loc_63F85A
0x63F7C3: mov     eax, [edi]
0x63F7C5: mov     edx, [eax+198h]
0x63F7CB: push    0
0x63F7CD: mov     ecx, edi
0x63F7CF: call    edx
0x63F7D1: test    al, al
0x63F7D3: jnz     loc_63F85A
0x63F7D9: mov     ecx, edi; this
0x63F7DB: call    TESObjectREFR_GetParentCell
0x63F7E0: mov     ecx, eax
0x63F7E2: call    TESObjectCELL_GetWaterHeight
0x63F7E7: fcomp   dword ptr ds:0A2FAA8h
0x63F7ED: fnstsw  ax
0x63F7EF: test    ah, 44h
0x63F7F2: jnp     short loc_63F7FF
0x63F7F4: mov     eax, ds:0B333A0h
0x63F7F9: cmp     dword ptr [eax+34h], 0
0x63F7FD: jz      short loc_63F85A
0x63F7FF: cmp     edi, ds:0B333C4h
0x63F805: jz      short loc_63F80D
0x63F807: cmp     dword ptr [ebp+3Ch], 8
0x63F80B: jg      short loc_63F85A
0x63F80D: push    24h ; '$'; Size
0x63F80F: call    FormHeapAlloc
0x63F814: add     esp, 4
0x63F817: test    eax, eax
0x63F819: jz      short loc_63F824
0x63F81B: mov     ecx, eax
0x63F81D: call    sub_634860
0x63F822: jmp     short loc_63F826
0x63F824: xor     eax, eax
0x63F826: push    eax
0x63F827: mov     ecx, ebp
0x63F829: mov     [esi+288h], eax
0x63F82F: call    DisplacementMapConstructor????
0x63F834: mov     ecx, [esi+288h]
0x63F83A: mov     [ecx], edi
0x63F83C: mov     edx, [esi+288h]
0x63F842: push    edx
0x63F843: mov     ecx, ebp
0x63F845: call    sub_634890
0x63F84A: mov     eax, [esi+288h]
0x63F850: push    1; float
0x63F852: push    eax; int
0x63F853: mov     ecx, ebp
0x63F855: call    WaterGeometryPAss
0x63F85A: mov     eax, [esi+288h]
0x63F860: test    eax, eax
0x63F862: jz      short loc_63F869
0x63F864: fldz
0x63F866: fstp    dword ptr [eax+14h]
0x63F869: cmp     dword ptr [esi+288h], 0
0x63F870: jz      loc_63F941
0x63F876: mov     edx, [edi]
0x63F878: mov     eax, [edx+380h]
0x63F87E: mov     ecx, edi
0x63F880: call    eax
0x63F882: test    eax, eax
0x63F884: jnz     short loc_63F8C2
0x63F886: mov     edx, [edi]
0x63F888: push    eax
0x63F889: mov     eax, [edx+198h]
0x63F88F: mov     ecx, edi
0x63F891: call    eax
0x63F893: test    al, al
0x63F895: jnz     short loc_63F8C2
0x63F897: mov     ecx, edi; this
0x63F899: call    TESObjectREFR_GetParentCell
0x63F89E: mov     ecx, eax
0x63F8A0: call    TESObjectCELL_GetWaterHeight
0x63F8A5: fcomp   dword ptr ds:0A2FAA8h
0x63F8AB: fnstsw  ax
0x63F8AD: test    ah, 44h
0x63F8B0: jnp     loc_63F941
0x63F8B6: mov     ecx, ds:0B333A0h
0x63F8BC: cmp     dword ptr [ecx+34h], 0
0x63F8C0: jnz     short loc_63F941
0x63F8C2: mov     edx, [esi+288h]
0x63F8C8: pop     edi
0x63F8C9: mov     byte ptr [edx+10h], 1
0x63F8CD: pop     ebp
0x63F8CE: mov     dword ptr [esi+288h], 0
0x63F8D8: pop     esi
0x63F8D9: add     esp, 8
0x63F8DC: retn    4
0x63F8DF: mov     ecx, [esi+288h]
0x63F8E5: test    ecx, ecx
0x63F8E7: jz      short loc_63F941
0x63F8E9: fld     dword ptr ds:0A31C80h
0x63F8EF: fcomp   dword ptr [ecx+14h]
0x63F8F2: fnstsw  ax
0x63F8F4: test    ah, 41h
0x63F8F7: jnz     short loc_63F90F
0x63F8F9: push    1
0x63F8FB: push    1
0x63F8FD: mov     ebp, ecx
0x63F8FF: call    GetTimer
0x63F904: fadd    dword ptr [ebp+14h]
0x63F907: add     esp, 8
0x63F90A: fstp    dword ptr [ebp+14h]
0x63F90D: jmp     short loc_63F91D
0x63F90F: mov     byte ptr [ecx+10h], 1
0x63F913: mov     dword ptr [esi+288h], 0
0x63F91D: mov     eax, [edi]
0x63F91F: mov     edx, [eax+380h]
0x63F925: mov     ecx, edi
0x63F927: call    edx
0x63F929: test    eax, eax
0x63F92B: jz      short loc_63F941
0x63F92D: mov     eax, [esi+288h]
0x63F933: mov     byte ptr [eax+10h], 1
0x63F937: mov     dword ptr [esi+288h], 0
0x63F941: pop     edi
0x63F942: pop     ebp
0x63F943: pop     esi
0x63F944: add     esp, 8
0x63F947: retn    4
