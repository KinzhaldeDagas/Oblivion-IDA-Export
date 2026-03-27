0x90A170: push    ebp
0x90A171: mov     ebp, esp
0x90A173: and     esp, 0FFFFFFF0h
0x90A176: sub     esp, 98h
0x90A17C: mov     eax, [ebp+arg_8]
0x90A17F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x90A186: movaps  xmm1, xmmword ptr [eax+10h]
0x90A18A: push    esi
0x90A18B: push    edi
0x90A18C: mov     esi, eax
0x90A18E: add     eax, 10h
0x90A191: mov     ecx, 0Ch
0x90A196: lea     edi, [esp+0A0h+var_30]
0x90A19A: rep movsd
0x90A19C: mov     ecx, eax
0x90A19E: mov     esi, [ecx]
0x90A1A0: mov     [esp+0A0h+var_80], esi
0x90A1A4: mov     esi, [ecx+4]
0x90A1A7: mov     [esp+0A0h+var_7C], esi
0x90A1AB: mov     esi, [ecx+8]
0x90A1AE: mov     ecx, [ecx+0Ch]
0x90A1B1: mov     [esp+0A0h+var_74], ecx
0x90A1B5: mov     ecx, [ebp+arg_C]
0x90A1B8: mov     [esp+0A0h+var_70], ecx
0x90A1BC: mov     ecx, [ebp+arg_10]
0x90A1BF: test    ecx, ecx
0x90A1C1: mov     edx, offset off_A9B4E8
0x90A1C6: xorps   xmm1, xmm0
0x90A1C9: movaps  [esp+0A0h+var_20], xmm1
0x90A1D1: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x90A1D9: mov     [esp+0A0h+var_90], edx
0x90A1DD: mov     [esp+0A0h+var_78], esi
0x90A1E1: jz      short loc_90A233
0x90A1E3: mov     [esp+0A0h+var_60], edx
0x90A1E7: mov     edx, [eax]
0x90A1E9: mov     [esp+0A0h+var_50], edx
0x90A1ED: mov     edx, [eax+4]
0x90A1F0: mov     [esp+0A0h+var_4C], edx
0x90A1F4: mov     edx, [eax+8]
0x90A1F7: mov     eax, [eax+0Ch]
0x90A1FA: mov     [esp+0A0h+var_40], ecx
0x90A1FE: mov     [esp+0A0h+var_48], edx
0x90A202: lea     ecx, [esp+0A0h+var_60]
0x90A206: push    ecx
0x90A207: mov     ecx, [ebp+arg_0]
0x90A20A: lea     edx, [esp+0A4h+var_90]
0x90A20E: push    edx
0x90A20F: mov     edx, [ebp+arg_4]
0x90A212: mov     [esp+0A8h+var_44], eax
0x90A216: lea     eax, [esp+0A8h+var_30]
0x90A21A: push    eax
0x90A21B: push    ecx
0x90A21C: push    edx
0x90A21D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x90A225: call    sub_909C40
0x90A22A: add     esp, 14h
0x90A22D: pop     edi
0x90A22E: pop     esi
0x90A22F: mov     esp, ebp
0x90A231: pop     ebp
0x90A232: retn
0x90A233: mov     edx, [ebp+arg_0]
0x90A236: push    0
0x90A238: lea     eax, [esp+0A4h+var_90]
0x90A23C: push    eax
0x90A23D: mov     eax, [ebp+arg_4]
0x90A240: lea     ecx, [esp+0A8h+var_30]
0x90A244: push    ecx
0x90A245: push    edx
0x90A246: push    eax
0x90A247: call    sub_909C40
0x90A24C: add     esp, 14h
0x90A24F: pop     edi
0x90A250: pop     esi
0x90A251: mov     esp, ebp
0x90A253: pop     ebp
0x90A254: retn
