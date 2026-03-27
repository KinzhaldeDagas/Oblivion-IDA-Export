0x8F6490: push    ebp
0x8F6491: mov     ebp, esp
0x8F6493: and     esp, 0FFFFFFF0h
0x8F6496: sub     esp, 98h
0x8F649C: mov     eax, [ebp+arg_8]
0x8F649F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F64A6: movaps  xmm1, xmmword ptr [eax+10h]
0x8F64AA: push    esi
0x8F64AB: push    edi
0x8F64AC: mov     esi, eax
0x8F64AE: add     eax, 10h
0x8F64B1: mov     ecx, 0Ch
0x8F64B6: lea     edi, [esp+0A0h+var_30]
0x8F64BA: rep movsd
0x8F64BC: mov     ecx, eax
0x8F64BE: mov     esi, [ecx]
0x8F64C0: mov     [esp+0A0h+var_80], esi
0x8F64C4: mov     esi, [ecx+4]
0x8F64C7: mov     [esp+0A0h+var_7C], esi
0x8F64CB: mov     esi, [ecx+8]
0x8F64CE: mov     ecx, [ecx+0Ch]
0x8F64D1: mov     [esp+0A0h+var_74], ecx
0x8F64D5: mov     ecx, [ebp+arg_C]
0x8F64D8: mov     [esp+0A0h+var_70], ecx
0x8F64DC: mov     ecx, [ebp+arg_10]
0x8F64DF: test    ecx, ecx
0x8F64E1: mov     edx, offset off_A9B4E8
0x8F64E6: xorps   xmm1, xmm0
0x8F64E9: movaps  [esp+0A0h+var_20], xmm1
0x8F64F1: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x8F64F9: mov     [esp+0A0h+var_90], edx
0x8F64FD: mov     [esp+0A0h+var_78], esi
0x8F6501: jz      short loc_8F6553
0x8F6503: mov     [esp+0A0h+var_60], edx
0x8F6507: mov     edx, [eax]
0x8F6509: mov     [esp+0A0h+var_50], edx
0x8F650D: mov     edx, [eax+4]
0x8F6510: mov     [esp+0A0h+var_4C], edx
0x8F6514: mov     edx, [eax+8]
0x8F6517: mov     eax, [eax+0Ch]
0x8F651A: mov     [esp+0A0h+var_40], ecx
0x8F651E: mov     [esp+0A0h+var_48], edx
0x8F6522: lea     ecx, [esp+0A0h+var_60]
0x8F6526: push    ecx
0x8F6527: mov     ecx, [ebp+arg_0]
0x8F652A: lea     edx, [esp+0A4h+var_90]
0x8F652E: push    edx
0x8F652F: mov     edx, [ebp+arg_4]
0x8F6532: mov     [esp+0A8h+var_44], eax
0x8F6536: lea     eax, [esp+0A8h+var_30]
0x8F653A: push    eax
0x8F653B: push    ecx
0x8F653C: push    edx
0x8F653D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x8F6545: call    sub_908A40
0x8F654A: add     esp, 14h
0x8F654D: pop     edi
0x8F654E: pop     esi
0x8F654F: mov     esp, ebp
0x8F6551: pop     ebp
0x8F6552: retn
0x8F6553: mov     edx, [ebp+arg_0]
0x8F6556: push    0
0x8F6558: lea     eax, [esp+0A4h+var_90]
0x8F655C: push    eax
0x8F655D: mov     eax, [ebp+arg_4]
0x8F6560: lea     ecx, [esp+0A8h+var_30]
0x8F6564: push    ecx
0x8F6565: push    edx
0x8F6566: push    eax
0x8F6567: call    sub_908A40
0x8F656C: add     esp, 14h
0x8F656F: pop     edi
0x8F6570: pop     esi
0x8F6571: mov     esp, ebp
0x8F6573: pop     ebp
0x8F6574: retn
