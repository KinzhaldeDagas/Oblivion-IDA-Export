0x93B000: push    ebp
0x93B001: mov     ebp, esp
0x93B003: and     esp, 0FFFFFFF0h
0x93B006: sub     esp, 34h
0x93B009: push    ebx
0x93B00A: push    esi
0x93B00B: push    edi
0x93B00C: mov     edx, [ebp+arg_4]
0x93B00F: movaps  xmm3, xmmword ptr [edx]
0x93B012: movaps  xmm7, xmmword ptr [edx+10h]
0x93B016: movaps  xmm2, xmmword ptr [edx+20h]
0x93B01A: mov     eax, [ebp+arg_0]
0x93B01D: movaps  xmm4, xmmword ptr [eax]
0x93B020: movaps  xmm0, xmm2
0x93B023: subps   xmm0, xmm7
0x93B026: movaps  xmm1, xmm3
0x93B029: subps   xmm1, xmm2
0x93B02C: movaps  xmm5, xmm1
0x93B02F: shufps  xmm5, xmm1, 0C9h ; 'É'
0x93B033: movaps  xmm2, xmm7
0x93B036: subps   xmm2, xmm3
0x93B039: movaps  xmm3, xmm1
0x93B03C: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93B040: movaps  xmm1, xmm0
0x93B043: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93B047: movaps  [esp+40h+var_30], xmm1
0x93B04C: mulps   xmm1, xmm3
0x93B04F: movaps  xmm6, xmm0
0x93B052: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x93B056: movaps  xmm0, xmm6
0x93B059: mulps   xmm0, xmm5
0x93B05C: movaps  [esp+40h+var_20], xmm3
0x93B061: movaps  xmm3, xmm1
0x93B064: subps   xmm3, xmm0
0x93B067: movaps  xmm0, xmm4
0x93B06A: subps   xmm0, xmm7
0x93B06D: movaps  xmm7, xmmword ptr [edx+20h]
0x93B071: movaps  xmm1, xmm4
0x93B074: subps   xmm1, xmm7
0x93B077: movaps  xmm7, xmmword ptr [edx]
0x93B07A: subps   xmm4, xmm7
0x93B07D: movaps  [esp+40h+var_10], xmm4
0x93B082: movaps  xmm7, xmm0
0x93B085: movaps  xmm4, xmm0
0x93B088: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93B08C: mulps   xmm4, [esp+40h+var_30]
0x93B091: shufps  xmm7, xmm0, 0C9h ; 'É'
0x93B095: mulps   xmm7, xmm6
0x93B098: movaps  xmm0, xmm7
0x93B09B: subps   xmm0, xmm4
0x93B09E: movaps  xmm4, xmm1
0x93B0A1: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x93B0A5: mulps   xmm4, xmm5
0x93B0A8: movaps  xmm5, xmm1
0x93B0AB: shufps  xmm5, xmm1, 0C9h ; 'É'
0x93B0AF: mulps   xmm5, [esp+40h+var_20]
0x93B0B4: movaps  xmm1, xmm5
0x93B0B7: subps   xmm1, xmm4
0x93B0BA: movaps  xmm4, xmm1
0x93B0BD: movaps  xmm1, xmm2
0x93B0C0: shufps  xmm1, xmm2, 0C9h ; 'É'
0x93B0C4: movaps  xmm5, xmm1
0x93B0C7: movaps  xmm1, [esp+40h+var_10]
0x93B0CC: movaps  xmm6, xmm1
0x93B0CF: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x93B0D3: mulps   xmm6, xmm5
0x93B0D6: movaps  xmm5, xmm2
0x93B0D9: shufps  xmm5, xmm2, 0D2h ; 'Ò'
0x93B0DD: movaps  xmm2, xmm1
0x93B0E0: shufps  xmm2, xmm1, 0C9h ; 'É'
0x93B0E4: mulps   xmm2, xmm5
0x93B0E7: movaps  xmm1, xmm2
0x93B0EA: subps   xmm1, xmm6
0x93B0ED: mulps   xmm1, xmm3
0x93B0F0: mulps   xmm0, xmm3
0x93B0F3: movaps  xmm2, xmm0
0x93B0F6: mulps   xmm4, xmm3
0x93B0F9: movaps  xmm6, xmm1
0x93B0FC: movaps  xmm5, xmm1
0x93B0FF: shufps  xmm6, xmm1, 0EEh ; 'î'
0x93B103: shufps  xmm0, xmm4, 0EEh ; 'î'
0x93B107: shufps  xmm5, xmm1, 44h ; 'D'
0x93B10B: shufps  xmm0, xmm6, 88h ; 'ˆ'
0x93B10F: shufps  xmm2, xmm4, 44h ; 'D'
0x93B113: movaps  xmm1, xmm0
0x93B116: mov     eax, [ebp+arg_8]
0x93B119: movaps  xmm0, xmm2
0x93B11C: shufps  xmm0, xmm5, 0DDh ; 'Ý'
0x93B120: shufps  xmm2, xmm5, 88h ; 'ˆ'
0x93B124: addps   xmm2, xmm0
0x93B127: movaps  xmm0, xmm2
0x93B12A: addps   xmm0, xmm1
0x93B12D: movmskps esi, xmm0
0x93B130: and     esi, 7
0x93B133: test    eax, eax
0x93B135: movaps  xmmword ptr [ecx+160h], xmm0
0x93B13C: jz      loc_93B214
0x93B142: cmp     esi, 7
0x93B145: movaps  xmmword ptr [ecx+120h], xmm3
0x93B14C: jnz     loc_93B214
0x93B152: movaps  xmm0, xmmword ptr [ecx+0A0h]
0x93B159: movaps  xmm1, xmmword ptr [ecx+20h]
0x93B15D: subps   xmm1, xmm0
0x93B160: movaps  xmm0, xmm3
0x93B163: mulps   xmm0, xmm1
0x93B166: movaps  xmm1, xmm0
0x93B169: shufps  xmm1, xmm0, 55h ; 'U'
0x93B16D: movaps  xmm2, xmm0
0x93B170: addss   xmm1, xmm0
0x93B174: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93B178: addss   xmm2, xmm1
0x93B17C: movmskps eax, xmm2
0x93B17F: test    al, 1
0x93B181: jz      loc_93B214
0x93B187: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93B18E: xorps   xmm3, xmm0
0x93B191: movaps  xmmword ptr [ecx+120h], xmm3
0x93B198: movaps  xmm0, xmmword ptr [edx+10h]
0x93B19C: mov     eax, edx
0x93B19E: mov     edi, [eax]
0x93B1A0: mov     dword ptr [esp+40h+var_30], edi
0x93B1A4: mov     edi, [eax+4]
0x93B1A7: mov     dword ptr [esp+40h+var_30+4], edi
0x93B1AB: mov     edi, [eax+8]
0x93B1AE: mov     eax, [eax+0Ch]
0x93B1B1: movaps  xmmword ptr [edx], xmm0
0x93B1B4: mov     dword ptr [esp+40h+var_30+8], edi
0x93B1B8: mov     dword ptr [esp+40h+var_30+0Ch], eax
0x93B1BC: movaps  xmm0, [esp+40h+var_30]
0x93B1C1: movaps  xmmword ptr [edx+10h], xmm0
0x93B1C5: movaps  xmm0, xmmword ptr [edx+50h]
0x93B1C9: lea     eax, [edx+40h]
0x93B1CC: mov     edi, eax
0x93B1CE: mov     ebx, [edi]
0x93B1D0: mov     dword ptr [esp+40h+var_30], ebx
0x93B1D4: mov     ebx, [edi+4]
0x93B1D7: mov     dword ptr [esp+40h+var_30+4], ebx
0x93B1DB: mov     ebx, [edi+8]
0x93B1DE: mov     edi, [edi+0Ch]
0x93B1E1: movaps  xmmword ptr [eax], xmm0
0x93B1E4: mov     dword ptr [esp+40h+var_30+8], ebx
0x93B1E8: mov     dword ptr [esp+40h+var_30+0Ch], edi
0x93B1EC: movaps  xmm0, [esp+40h+var_30]
0x93B1F1: movaps  xmmword ptr [edx+50h], xmm0
0x93B1F5: fld     dword ptr [ecx+160h]
0x93B1FB: mov     edx, [ecx+164h]
0x93B201: mov     [ecx+160h], edx
0x93B207: fstp    dword ptr [ecx+164h]
0x93B20D: mov     dword ptr [ecx+14h], 1
0x93B214: pop     edi
0x93B215: mov     eax, esi
0x93B217: pop     esi
0x93B218: pop     ebx
0x93B219: mov     esp, ebp
0x93B21B: pop     ebp
0x93B21C: retn    0Ch
