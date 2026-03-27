0x8FC090: push    ebp
0x8FC091: mov     ebp, esp
0x8FC093: and     esp, 0FFFFFFF0h
0x8FC096: sub     esp, 18h
0x8FC099: mov     edx, [ebp+arg_8]
0x8FC09C: push    esi
0x8FC09D: push    edi
0x8FC09E: mov     edi, [ebp+arg_C]
0x8FC0A1: mov     eax, [edi+3034h]
0x8FC0A7: mov     esi, [edi]
0x8FC0A9: push    edi
0x8FC0AA: push    edx
0x8FC0AB: mov     edx, [ebp+arg_4]
0x8FC0AE: mov     [esp+28h+var_14], eax
0x8FC0B2: mov     eax, [ebp+arg_0]
0x8FC0B5: push    eax
0x8FC0B6: push    edx
0x8FC0B7: call    sub_8FB790
0x8FC0BC: cmp     esi, [edi]
0x8FC0BE: jnb     short loc_8FC101
0x8FC0C0: lea     eax, [esp+20h+var_10]
0x8FC0C4: push    eax
0x8FC0C5: mov     ecx, esi
0x8FC0C7: call    sub_8F7000
0x8FC0CC: movaps  xmm0, xmmword ptr [eax]
0x8FC0CF: movaps  xmm1, xmmword ptr [esi+10h]
0x8FC0D3: movaps  xmm2, xmm0
0x8FC0D6: shufps  xmm2, xmm0, 0
0x8FC0DA: movaps  xmm0, xmmword ptr [esi]
0x8FC0DD: mulps   xmm2, xmm1
0x8FC0E0: addps   xmm0, xmm2
0x8FC0E3: movaps  xmmword ptr [esi], xmm0
0x8FC0E6: movaps  xmm1, xmmword ptr [esi+10h]
0x8FC0EA: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FC0F1: xorps   xmm1, xmm0
0x8FC0F4: movaps  xmmword ptr [esi+10h], xmm1
0x8FC0F8: mov     eax, [edi]
0x8FC0FA: add     esi, 30h ; '0'
0x8FC0FD: cmp     esi, eax
0x8FC0FF: jb      short loc_8FC0C0
0x8FC101: fld     dword ptr [edi+3034h]
0x8FC107: fld     [esp+20h+var_14]
0x8FC10B: fucompp
0x8FC10D: fnstsw  ax
0x8FC10F: test    ah, 44h
0x8FC112: jnp     short loc_8FC126
0x8FC114: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FC11B: movaps  xmm1, xmmword ptr [edi+20h]
0x8FC11F: xorps   xmm1, xmm0
0x8FC122: movaps  xmmword ptr [edi+20h], xmm1
0x8FC126: pop     edi
0x8FC127: pop     esi
0x8FC128: mov     esp, ebp
0x8FC12A: pop     ebp
0x8FC12B: retn    10h
