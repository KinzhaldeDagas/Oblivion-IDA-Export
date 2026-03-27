0x9010E0: push    ebp
0x9010E1: mov     ebp, esp
0x9010E3: and     esp, 0FFFFFFF0h
0x9010E6: sub     esp, 98h
0x9010EC: mov     eax, [ebp+arg_8]
0x9010EF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9010F6: movaps  xmm1, xmmword ptr [eax+10h]
0x9010FA: push    esi
0x9010FB: push    edi
0x9010FC: mov     esi, eax
0x9010FE: add     eax, 10h
0x901101: mov     ecx, 0Ch
0x901106: lea     edi, [esp+0A0h+var_30]
0x90110A: rep movsd
0x90110C: mov     ecx, eax
0x90110E: mov     esi, [ecx]
0x901110: mov     [esp+0A0h+var_80], esi
0x901114: mov     esi, [ecx+4]
0x901117: mov     [esp+0A0h+var_7C], esi
0x90111B: mov     esi, [ecx+8]
0x90111E: mov     ecx, [ecx+0Ch]
0x901121: mov     [esp+0A0h+var_74], ecx
0x901125: mov     ecx, [ebp+arg_C]
0x901128: mov     [esp+0A0h+var_70], ecx
0x90112C: mov     ecx, [ebp+arg_10]
0x90112F: test    ecx, ecx
0x901131: mov     edx, offset off_A9B4E8
0x901136: xorps   xmm1, xmm0
0x901139: movaps  [esp+0A0h+var_20], xmm1
0x901141: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x901149: mov     [esp+0A0h+var_90], edx
0x90114D: mov     [esp+0A0h+var_78], esi
0x901151: jz      short loc_9011A3
0x901153: mov     [esp+0A0h+var_60], edx
0x901157: mov     edx, [eax]
0x901159: mov     [esp+0A0h+var_50], edx
0x90115D: mov     edx, [eax+4]
0x901160: mov     [esp+0A0h+var_4C], edx
0x901164: mov     edx, [eax+8]
0x901167: mov     eax, [eax+0Ch]
0x90116A: mov     [esp+0A0h+var_40], ecx
0x90116E: mov     [esp+0A0h+var_48], edx
0x901172: lea     ecx, [esp+0A0h+var_60]
0x901176: push    ecx
0x901177: mov     ecx, [ebp+arg_0]
0x90117A: lea     edx, [esp+0A4h+var_90]
0x90117E: push    edx
0x90117F: mov     edx, [ebp+arg_4]
0x901182: mov     [esp+0A8h+var_44], eax
0x901186: lea     eax, [esp+0A8h+var_30]
0x90118A: push    eax
0x90118B: push    ecx
0x90118C: push    edx
0x90118D: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x901195: call    sub_900CA0
0x90119A: add     esp, 14h
0x90119D: pop     edi
0x90119E: pop     esi
0x90119F: mov     esp, ebp
0x9011A1: pop     ebp
0x9011A2: retn
0x9011A3: mov     edx, [ebp+arg_0]
0x9011A6: push    0
0x9011A8: lea     eax, [esp+0A4h+var_90]
0x9011AC: push    eax
0x9011AD: mov     eax, [ebp+arg_4]
0x9011B0: lea     ecx, [esp+0A8h+var_30]
0x9011B4: push    ecx
0x9011B5: push    edx
0x9011B6: push    eax
0x9011B7: call    sub_900CA0
0x9011BC: add     esp, 14h
0x9011BF: pop     edi
0x9011C0: pop     esi
0x9011C1: mov     esp, ebp
0x9011C3: pop     ebp
0x9011C4: retn
