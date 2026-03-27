0x8C48A0: push    ebp
0x8C48A1: mov     ebp, esp
0x8C48A3: and     esp, 0FFFFFFF0h
0x8C48A6: push    0FFFFFFFFh
0x8C48A8: push    offset ??0hkPackedNiTriStripsShape@@QAE@XZ_SEH
0x8C48AD: mov     eax, large fs:0
0x8C48B3: push    eax
0x8C48B4: sub     esp, 8
0x8C48B7: push    ebx
0x8C48B8: push    esi
0x8C48B9: push    edi
0x8C48BA: mov     eax, ds:0B30AACh
0x8C48BF: xor     eax, esp
0x8C48C1: push    eax
0x8C48C2: lea     eax, [esp+24h+var_C]
0x8C48C6: mov     large fs:0, eax
0x8C48CC: mov     esi, ecx
0x8C48CE: mov     [esp+24h+var_14], esi
0x8C48D2: call    sub_9156C0
0x8C48D7: xor     eax, eax
0x8C48D9: mov     dword ptr [esi], offset ??_7hkPackedNiTriStripsShape@@6B@; const hkPackedNiTriStripsShape::`vftable'
0x8C48DF: mov     [esp+24h+var_4], eax
0x8C48E3: mov     [esi+10h], eax
0x8C48E6: mov     ebx, [ebp+arg_0]
0x8C48E9: mov     edi, eax
0x8C48EB: cmp     edi, [ebx+4]
0x8C48EE: mov     byte ptr [esp+24h+var_4], 1
0x8C48F3: jz      short loc_8C4929
0x8C48F5: cmp     edi, eax
0x8C48F7: jz      short loc_8C4915
0x8C48F9: lea     eax, [edi+4]
0x8C48FC: push    eax; lpAddend
0x8C48FD: call    dword ptr ds:0A2807Ch
0x8C4903: test    eax, eax
0x8C4905: jnz     short loc_8C4915
0x8C4907: test    edi, edi
0x8C4909: jz      short loc_8C4915
0x8C490B: mov     edx, [edi]
0x8C490D: mov     eax, [edx]
0x8C490F: push    1
0x8C4911: mov     ecx, edi
0x8C4913: call    eax
0x8C4915: mov     eax, [ebx+4]
0x8C4918: test    eax, eax
0x8C491A: mov     [esi+10h], eax
0x8C491D: jz      short loc_8C4929
0x8C491F: add     eax, 4
0x8C4922: push    eax; lpAddend
0x8C4923: call    dword ptr ds:0A28078h
0x8C4929: fld     dword ptr [ebx+8]
0x8C492C: mov     eax, esi
0x8C492E: fstp    dword ptr [esi+30h]
0x8C4931: movaps  xmm0, xmmword ptr [ebx+10h]
0x8C4935: movaps  xmmword ptr [esi+20h], xmm0
0x8C4939: mov     ecx, dword ptr [esp+24h+var_C]
0x8C493D: mov     large fs:0, ecx
0x8C4944: pop     ecx
0x8C4945: pop     edi
0x8C4946: pop     esi
0x8C4947: pop     ebx
0x8C4948: mov     esp, ebp
0x8C494A: pop     ebp
0x8C494B: retn    4
