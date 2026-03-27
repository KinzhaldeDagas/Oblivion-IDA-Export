0x901920: push    ebp
0x901921: mov     ebp, esp
0x901923: and     esp, 0FFFFFFF0h
0x901926: sub     esp, 98h
0x90192C: mov     eax, [ebp+arg_8]
0x90192F: movaps  xmm0, xmmword ptr ds:0A965C0h
0x901936: movaps  xmm1, xmmword ptr [eax+10h]
0x90193A: push    esi
0x90193B: push    edi
0x90193C: mov     esi, eax
0x90193E: add     eax, 10h
0x901941: mov     ecx, 0Ch
0x901946: lea     edi, [esp+0A0h+var_30]
0x90194A: rep movsd
0x90194C: mov     ecx, eax
0x90194E: mov     esi, [ecx]
0x901950: mov     [esp+0A0h+var_80], esi
0x901954: mov     esi, [ecx+4]
0x901957: mov     [esp+0A0h+var_7C], esi
0x90195B: mov     esi, [ecx+8]
0x90195E: mov     ecx, [ecx+0Ch]
0x901961: mov     [esp+0A0h+var_74], ecx
0x901965: mov     ecx, [ebp+arg_C]
0x901968: mov     [esp+0A0h+var_70], ecx
0x90196C: mov     ecx, [ebp+arg_10]
0x90196F: test    ecx, ecx
0x901971: mov     edx, offset off_A9B4E8
0x901976: xorps   xmm1, xmm0
0x901979: movaps  [esp+0A0h+var_20], xmm1
0x901981: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x901989: mov     [esp+0A0h+var_90], edx
0x90198D: mov     [esp+0A0h+var_78], esi
0x901991: jz      short loc_9019E5
0x901993: mov     [esp+0A0h+var_60], edx
0x901997: mov     edx, [eax]
0x901999: mov     [esp+0A0h+var_50], edx
0x90199D: mov     edx, [eax+4]
0x9019A0: mov     [esp+0A0h+var_4C], edx
0x9019A4: mov     edx, [eax+8]
0x9019A7: mov     eax, [eax+0Ch]
0x9019AA: mov     [esp+0A0h+var_40], ecx
0x9019AE: mov     [esp+0A0h+var_48], edx
0x9019B2: lea     ecx, [esp+0A0h+var_60]
0x9019B6: push    ecx
0x9019B7: mov     ecx, [ebp+arg_0]
0x9019BA: lea     edx, [esp+0A4h+var_90]
0x9019BE: push    edx
0x9019BF: mov     edx, [ebp+arg_4]
0x9019C2: mov     [esp+0A8h+var_44], eax
0x9019C6: lea     eax, [esp+0A8h+var_30]
0x9019CA: push    eax
0x9019CB: push    ecx
0x9019CC: push    edx
0x9019CD: mov     [esp+0B4h+var_5C], 7F7FFFFFh
0x9019D5: call    sub_900CA0
0x9019DA: add     esp, 14h
0x9019DD: pop     edi
0x9019DE: pop     esi
0x9019DF: mov     esp, ebp
0x9019E1: pop     ebp
0x9019E2: retn    14h
0x9019E5: mov     edx, [ebp+arg_0]
0x9019E8: push    0
0x9019EA: lea     eax, [esp+0A4h+var_90]
0x9019EE: push    eax
0x9019EF: mov     eax, [ebp+arg_4]
0x9019F2: lea     ecx, [esp+0A8h+var_30]
0x9019F6: push    ecx
0x9019F7: push    edx
0x9019F8: push    eax
0x9019F9: call    sub_900CA0
0x9019FE: add     esp, 14h
0x901A01: pop     edi
0x901A02: pop     esi
0x901A03: mov     esp, ebp
0x901A05: pop     ebp
0x901A06: retn    14h
