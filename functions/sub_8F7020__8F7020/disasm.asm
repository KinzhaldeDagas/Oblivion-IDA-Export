0x8F7020: push    ebp
0x8F7021: mov     ebp, esp
0x8F7023: and     esp, 0FFFFFFF0h
0x8F7026: sub     esp, 98h
0x8F702C: mov     eax, [ebp+arg_8]
0x8F702F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F7036: movaps  xmm1, xmmword ptr [eax+10h]
0x8F703A: push    esi
0x8F703B: push    edi
0x8F703C: mov     esi, eax
0x8F703E: add     eax, 10h
0x8F7041: mov     ecx, 0Ch
0x8F7046: lea     edi, [esp+0A0h+var_30]
0x8F704A: rep movsd
0x8F704C: mov     ecx, eax
0x8F704E: mov     esi, [ecx]
0x8F7050: mov     [esp+0A0h+var_80], esi
0x8F7054: mov     esi, [ecx+4]
0x8F7057: mov     [esp+0A0h+var_7C], esi
0x8F705B: mov     esi, [ecx+8]
0x8F705E: mov     ecx, [ecx+0Ch]
0x8F7061: mov     [esp+0A0h+var_74], ecx
0x8F7065: mov     ecx, [ebp+arg_C]
0x8F7068: mov     [esp+0A0h+var_70], ecx
0x8F706C: mov     ecx, [ebp+arg_10]
0x8F706F: test    ecx, ecx
0x8F7071: mov     edx, offset off_A9B4E8
0x8F7076: xorps   xmm1, xmm0
0x8F7079: movaps  [esp+0A0h+var_20], xmm1
0x8F7081: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x8F7089: mov     [esp+0A0h+var_90], edx
0x8F708D: mov     [esp+0A0h+var_78], esi
0x8F7091: jz      short loc_8F70E5
0x8F7093: mov     [esp+0A0h+var_60], edx
0x8F7097: mov     edx, [eax]
0x8F7099: mov     [esp+0A0h+var_50], edx
0x8F709D: mov     edx, [eax+4]
0x8F70A0: mov     [esp+0A0h+var_4C], edx
0x8F70A4: mov     edx, [eax+8]
0x8F70A7: mov     eax, [eax+0Ch]
0x8F70AA: mov     [esp+0A0h+var_40], ecx
0x8F70AE: mov     [esp+0A0h+var_48], edx
0x8F70B2: lea     ecx, [esp+0A0h+var_60]
0x8F70B6: push    ecx
0x8F70B7: mov     ecx, [ebp+arg_0]
0x8F70BA: lea     edx, [esp+0A4h+var_90]
0x8F70BE: push    edx
0x8F70BF: mov     edx, [ebp+arg_4]
0x8F70C2: mov     [esp+0A8h+var_44], eax
0x8F70C6: lea     eax, [esp+0A8h+var_30]
0x8F70CA: push    eax
0x8F70CB: push    ecx
0x8F70CC: push    edx
0x8F70CD: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x8F70D5: call    sub_908A40
0x8F70DA: add     esp, 14h
0x8F70DD: pop     edi
0x8F70DE: pop     esi
0x8F70DF: mov     esp, ebp
0x8F70E1: pop     ebp
0x8F70E2: retn    14h
0x8F70E5: mov     edx, [ebp+arg_0]
0x8F70E8: push    0
0x8F70EA: lea     eax, [esp+0A4h+var_90]
0x8F70EE: push    eax
0x8F70EF: mov     eax, [ebp+arg_4]
0x8F70F2: lea     ecx, [esp+0A8h+var_30]
0x8F70F6: push    ecx
0x8F70F7: push    edx
0x8F70F8: push    eax
0x8F70F9: call    sub_908A40
0x8F70FE: add     esp, 14h
0x8F7101: pop     edi
0x8F7102: pop     esi
0x8F7103: mov     esp, ebp
0x8F7105: pop     ebp
0x8F7106: retn    14h
